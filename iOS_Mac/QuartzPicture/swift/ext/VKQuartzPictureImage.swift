import Foundation

#if os(iOS)
    import UIKit

    private func createImageWithSize(_ size: CGSize, drawer: (CGContext) -> Void) -> UIImage {
        UIGraphicsBeginImageContextWithOptions(size, false, UIScreen.main.scale)
        defer {
            UIGraphicsEndImageContext()
        }

        let context = UIGraphicsGetCurrentContext()!
        drawer(context)
        return UIGraphicsGetImageFromCurrentImageContext()!
    }

    public extension VKQuartzPicture {

        func transToImage() -> UIImage {
            return transToImage(self.bounds.size, .scaleAspectFit)
        }

        func transToImage(_ size: CGSize, _ color: UIColor, _ mode: VKPictureContentMode = .scaleAspectFit) -> UIImage {
            return createImageWithSize(size) { context in
                context.setStrokeColor(color.cgColor)
                context.setFillColor(color.cgColor)
                let rect = CGRect(x: 0, y: 0, width: size.width, height: size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }

        func transToImage(_ size: CGSize, _ mode: VKPictureContentMode = .scaleAspectFit) -> UIImage {
            return createImageWithSize(size) { context in
                let rect = CGRect(x: 0, y: 0, width: size.width, height: size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }
    }

#else
    import AppKit

    private func createImageWithSize(_ size: CGSize, drawer: (CGContext) -> Void) -> NSImage {
        let newImage = NSImage(size: size)
        newImage.lockFocusFlipped(true)
        let context = NSGraphicsContext.current()!.cgContext
        drawer(context)
        newImage.unlockFocus()
        return newImage
    }

    public extension VKQuartzPicture {

        func transToImage() -> NSImage {
            return transToImage(self.bounds.size, .scaleAspectFit)
        }

        func transToImage(_ size: CGSize, _ color: NSColor, _ mode: VKPictureContentMode = .scaleAspectFit) -> NSImage {
            return createImageWithSize(size) { context in
                context.setStrokeColor(color.cgColor)
                context.setFillColor(color.cgColor)
                let rect = CGRect(x: 0, y: 0, width: size.width, height: size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }

        func transToImage(_ size: CGSize, _ mode: VKPictureContentMode = .scaleAspectFit) -> NSImage {
            return createImageWithSize(size) { context in
                let rect = CGRect(x: 0, y: 0, width: size.width, height: size.height)
                VKQuartzPictureDrawInRect(self, rect, context, mode)
            }
        }
    }
#endif

