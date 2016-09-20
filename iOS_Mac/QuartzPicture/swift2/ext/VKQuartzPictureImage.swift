/*
The MIT License (MIT)

Copyright (c) 2016 DumbDuck dumbduck@126.com

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

#if os(iOS)
    import UIKit
    
    private func createImageWithSize(size: CGSize, @noescape drawer:(CGContext) -> Void) -> UIImage
    {
        UIGraphicsBeginImageContextWithOptions(size, false, UIScreen.mainScreen().scale);
        defer {
            UIGraphicsEndImageContext();
        }
        
        let context = UIGraphicsGetCurrentContext()!
        drawer(context)
        return UIGraphicsGetImageFromCurrentImageContext()!
    }
    
    public extension VKQuartzPicture
    {
        func transToImage() -> UIImage
        {
            return transToImage(self.bounds.size, .ScaleAspectFit)
        }
        
        func transToImage(size: CGSize, _ color: UIColor, _ mode : VKPictureContentMode = .ScaleAspectFit) -> UIImage
        {
            return createImageWithSize(size) { context in
                CGContextSetStrokeColorWithColor(context, color.CGColor)
                CGContextSetFillColorWithColor(context, color.CGColor)
                let rect = CGRectMake(0, 0, size.width, size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }
        
        func transToImage(size: CGSize, _ mode : VKPictureContentMode = .ScaleAspectFit) -> UIImage
        {
            return createImageWithSize(size) { context in
                let rect = CGRectMake(0, 0, size.width, size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }
    }
#else
    import AppKit
    
    private func createImageWithSize(size: CGSize, @noescape drawer:(CGContext) -> Void) -> NSImage
    {
        let newImage = NSImage(size: size)
        newImage.lockFocusFlipped(true)
        let context = NSGraphicsContext.currentContext()!.CGContext
        drawer(context)
        newImage.unlockFocus()
        return newImage
    }
    
    public extension VKQuartzPicture
    {
        func transToImage() -> NSImage
        {
            return transToImage(self.bounds.size, .ScaleAspectFit)
        }
        
        func transToImage(size: CGSize, _ color: NSColor, _ mode : VKPictureContentMode = .ScaleAspectFit) -> NSImage
        {
            return createImageWithSize(size) { context in
                CGContextSetStrokeColorWithColor(context, color.CGColor)
                CGContextSetFillColorWithColor(context, color.CGColor)
                let rect = CGRectMake(0, 0, size.width, size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }
        
        func transToImage(size: CGSize, _ mode : VKPictureContentMode = .ScaleAspectFit) -> NSImage
        {
            return createImageWithSize(size) { context in
                let rect = CGRectMake(0, 0, size.width, size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }
    }
#endif



