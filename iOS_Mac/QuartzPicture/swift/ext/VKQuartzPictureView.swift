import Foundation

#if os(iOS)

    import UIKit

    open class VKQuartzPictureView: UIView {
        open var picture: VKQuartzPicture? {
            didSet {
                self.setNeedsDisplay()
            }
        }

        open var color: UIColor? {
            didSet {
                self.setNeedsDisplay()
            }
        }

        public init(picture: VKQuartzPicture, scale: CGFloat = 1.0) {
            self.picture = picture

            var rt = picture.bounds
            rt.origin = CGPoint.zero
            rt.size.width *= scale
            rt.size.height *= scale
            super.init(frame: rt)
            self.backgroundColor = UIColor.clear
        }

        open override var frame: CGRect {
            didSet {
                self.setNeedsDisplay()
            }
        }

        public required init?(coder aDecoder: NSCoder) {
            super.init(coder: aDecoder)
        }

        open override func draw(_ rect: CGRect) {
            guard let context = UIGraphicsGetCurrentContext() else { return }
            if let color = color {
                context.setFillColor(color.cgColor)
                context.setStrokeColor(color.cgColor)
            }

            if let picture = picture {
                VKQuartzPictureDrawInRect(picture, self.bounds, context, .scaleAspectFit)
            }
        }
    }

#else

    import AppKit

    public class VKQuartzPictureView: NSView {
        public var picture: VKQuartzPicture? {
            didSet {
                self.setNeedsDisplay(self.bounds)
            }
        }

        public var color: NSColor? {
            didSet {
                self.setNeedsDisplay(self.bounds)
            }
        }

        public init(picture: VKQuartzPicture, scale: CGFloat = 1.0) {
            self.picture = picture

            var rt = picture.bounds
            rt.origin = CGPoint.zero
            rt.size.width *= scale
            rt.size.height *= scale
            super.init(frame: rt)
        }

        public override var isFlipped: Bool {
            get {
                return true
            }
        }

        public required init?(coder aDecoder: NSCoder) {
            super.init(coder: aDecoder)
        }

        public override func draw(_ rect: CGRect) {
            guard let context = NSGraphicsContext.current()?.cgContext else { return }

            if let color = color {
                context.setFillColor(color.cgColor)
                context.setStrokeColor(color.cgColor)
            }

            if let picture = picture {
                VKQuartzPictureDrawInRect(picture, self.bounds, context, .scaleAspectFit)
            }
        }
    }

#endif

