
#import "PictureView.h"
#import <Cocoa/Cocoa.h>

@interface AppMainView : NSView <NSTableViewDataSource, NSTableViewDelegate>
{
}
@property (nonatomic, weak) IBOutlet NSView* scrollView;
@property (nonatomic, weak) IBOutlet PictureView* previewView;
@property (nonatomic, weak) IBOutlet NSTableView* tableView;
@end
