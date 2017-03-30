
import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    fileprivate var _window: UIWindow!

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        let listViewController = PictureListViewController(style: .plain)
        let navigationViewController = UINavigationController(rootViewController: listViewController)

        _window = UIWindow(frame: UIScreen.main.bounds)
        _window.rootViewController = navigationViewController
        _window.makeKeyAndVisible()

        return true
    }
}

