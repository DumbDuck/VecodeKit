import Foundation
import UIKit

private let kCellID =  "CellId"

class PictureListViewController : UITableViewController
{
    private let _pictures = [
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
        self.tableView.registerClass(UITableViewCell.self, forCellReuseIdentifier: kCellID)
        
        if #available(iOS 9.0, *) {
            self.tableView.cellLayoutMarginsFollowReadableWidth = false
        }
    }
    
    override func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int
    {
        return _pictures.count
    }
    
    override func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell
    {
        let cell = self.tableView.dequeueReusableCellWithIdentifier(kCellID, forIndexPath: indexPath)
        let (title, picture) = _pictures[indexPath.row]
        
        let imageHeight = self.tableView.rowHeight - 10
        cell.textLabel?.text = title
        cell.imageView?.image = picture.transToImage(CGSizeMake(imageHeight, imageHeight))
        cell.accessoryType = .DisclosureIndicator
        
        return cell
    }
    
    override func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath)
    {
        let (title, picture) = _pictures[indexPath.row]
        let aViewController = PictureViewController(picture: picture)
        aViewController.title = title
        self.navigationController?.pushViewController(aViewController, animated: true)
    }
}
