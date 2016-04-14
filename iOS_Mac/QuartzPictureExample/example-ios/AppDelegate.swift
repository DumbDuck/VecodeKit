
import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate
{
    private var _window : UIWindow!
    
    func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool
    {
        let listViewController = PictureListViewController(style: .Plain)
        let navigationViewController = UINavigationController(rootViewController: listViewController)
        
        _window = UIWindow(frame: UIScreen.mainScreen().bounds)
        _window.rootViewController = navigationViewController
        _window.makeKeyAndVisible()
        
        return true
    }
}

