import Foundation
import UIKit

private class PictureView : UIView
{
    var picture : VKQuartzPicture?
    
    override var frame : CGRect {
        didSet {
            self.setNeedsDisplay()
        }
    }
    
    override func drawRect(rect: CGRect) {
        guard let context = UIGraphicsGetCurrentContext() else { return }
        guard let picture = picture else { return }
        VKQuartzPictureDrawInRect(picture, self.bounds, context, .ScaleAspectFit)
    }
}

class PictureViewController : UIViewController
{
    private let _pictureView = PictureView()
    
    init(picture: VKQuartzPicture)
    {
        _pictureView.picture = picture
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func loadView() {
        self.view = _pictureView
        _pictureView.backgroundColor = UIColor.whiteColor()
    }
}

