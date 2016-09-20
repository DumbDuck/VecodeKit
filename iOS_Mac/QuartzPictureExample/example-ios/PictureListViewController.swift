import Foundation
import UIKit

private let kCellID =  "CellId"

class PictureListViewController : UITableViewController
{
    fileprivate let _pictures = [
        ("tiger", g_picture_tiger),
        ("icons", g_picture_icons),
        ("snow_woman", g_picture_snow_woman),
        ("river_man", g_picture_river_man),
        ("all_test", g_picture_all_test),
    ]
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.tableView.rowHeight = 100
        self.title = NSLocalizedString("Pictures", comment: "")
        self.tableView.register(UITableViewCell.self, forCellReuseIdentifier: kCellID)
        
        if #available(iOS 9.0, *) {
            self.tableView.cellLayoutMarginsFollowReadableWidth = false
        }
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int
    {
        return _pictures.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell
    {
        let cell = self.tableView.dequeueReusableCell(withIdentifier: kCellID, for: indexPath)
        let (title, picture) = _pictures[(indexPath as NSIndexPath).row]
        
        let imageHeight = self.tableView.rowHeight - 10
        cell.textLabel?.text = title
        cell.imageView?.image = picture.transToImage(CGSize(width: imageHeight, height: imageHeight))
        cell.accessoryType = .disclosureIndicator
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath)
    {
        let (title, picture) = _pictures[(indexPath as NSIndexPath).row]
        let aViewController = PictureViewController(picture: picture)
        aViewController.title = title
        self.navigationController?.pushViewController(aViewController, animated: true)
    }
}
