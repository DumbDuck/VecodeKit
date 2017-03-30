/*
 The MIT License (MIT)

 Copyright (c) 2017 DumbDuck dumbduck@126.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

import Foundation
import CoreGraphics

public enum VKPictureContentMode {
    case center
    case scaleToFill
    case scaleAspectFit
    case scaleAspectFill
}

public struct VKQuartzPicture {
    var bounds: CGRect
    var drawer: ((CGContext) -> Void)?
}

public func VKQuartzPictureNull() -> VKQuartzPicture {
    return VKQuartzPicture(bounds: CGRect.null, drawer: nil)
}

public func VKQuartzPictureDrawInRect(_ picture: VKQuartzPicture, _ rect: CGRect, _ context: CGContext, _ mode: VKPictureContentMode) {
    guard let drawer = picture.drawer else { return }

    if rect.size.width < CGFloat.ulpOfOne || rect.size.height < CGFloat.ulpOfOne {
        return
    }

    var scaleX: CGFloat = rect.size.width / picture.bounds.size.width
    var scaleY: CGFloat = rect.size.height / picture.bounds.size.height

    switch mode {
    case .scaleAspectFit:
        scaleX = min(scaleX, scaleY)
        scaleY = scaleX

    case .scaleAspectFill:
        scaleX = max(scaleX, scaleY)
        scaleY = scaleX

    case .scaleToFill:
        // nothing
        break

    case .center:
        scaleX = 1.0
        scaleY = 1.0
    }

    var pictureSize = picture.bounds.size
    pictureSize.width *= scaleX
    pictureSize.height *= scaleY

    var offset = CGPoint.zero
    offset.x = (rect.size.width - pictureSize.width) * 0.5 + rect.origin.x
    offset.y = (rect.size.height - pictureSize.height) * 0.5 + rect.origin.y

    context.saveGState()
    context.translateBy(x: offset.x, y: offset.y)
    context.scaleBy(x: scaleX, y: scaleY)
    context.translateBy(x: -picture.bounds.origin.x, y: -picture.bounds.origin.y)
    drawer(context)
    context.restoreGState()
}

