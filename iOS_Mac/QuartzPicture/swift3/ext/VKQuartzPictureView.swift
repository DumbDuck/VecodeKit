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
    
    open class VKQuartzPictureView : UIView
    {
        open var picture : VKQuartzPicture? {
            didSet {
                self.setNeedsDisplay()
            }
        }
        
        open var color : UIColor? {
            didSet {
                self.setNeedsDisplay()
            }
        }
        
        public init(picture: VKQuartzPicture, scale: CGFloat = 1.0)
        {
            self.picture = picture
            
            var rt = picture.bounds
            rt.origin = CGPoint.zero
            rt.size.width *= scale
            rt.size.height *= scale
            super.init(frame: rt)
            self.backgroundColor = UIColor.clear
        }
        
        open override var frame : CGRect {
            didSet {
                self.setNeedsDisplay()
            }
        }
        
        public required  init?(coder aDecoder: NSCoder)
        {
            super.init(coder: aDecoder)
        }
        
        open override func draw(_ rect: CGRect)
        {
            guard let context = UIGraphicsGetCurrentContext() else { return }
            if let color = color
            {
                context.setFillColor(color.cgColor)
                context.setStrokeColor(color.cgColor)
            }
            
            if let picture = picture
            {
                VKQuartzPictureDrawInRect(picture, self.bounds, context, .scaleAspectFit);
            }
        }
    }
    
#else
    
    import AppKit
    
    public class VKQuartzPictureView : NSView
    {
        public var picture : VKQuartzPicture? {
            didSet {
                self.setNeedsDisplay(self.bounds)
            }
        }
        
        public var color : NSColor? {
            didSet {
                self.setNeedsDisplay(self.bounds)
            }
        }
        
        public init(picture: VKQuartzPicture, scale: CGFloat = 1.0)
        {
            self.picture = picture
            
            var rt = picture.bounds
            rt.origin = CGPoint.zero
            rt.size.width *= scale
            rt.size.height *= scale
            super.init(frame: rt)
        }
        
        public override var isFlipped : Bool {
            get {
                return true
            }
        }
        
        public required init?(coder aDecoder: NSCoder)
        {
            super.init(coder: aDecoder)
        }
        
        public override func draw(_ rect: CGRect)
        {
            guard let context = NSGraphicsContext.current()?.cgContext else { return }
                
            if let color = color
            {
                context.setFillColor(color.cgColor)
                context.setStrokeColor(color.cgColor)
            }
            
            if let picture = picture
            {
                VKQuartzPictureDrawInRect(picture, self.bounds, context, .scaleAspectFit);
            }
        }
    }
    
#endif

