
#import "AppMainView.h"
#import "PictureView.h"
#import "VKQuartzPicture.h"
#import "all_test.h"
#import "icons.h"
#import "river_man.h"
#import "snow_woman.h"
#import "tiger.h"
#import "world.h"

////////////////
@implementation AppMainView {
    VKQuartzPicture* _pictures;
    size_t _numOfPictures;
}

- (void)dealloc {
    free(_pictures);
}

- (void)awakeFromNib {
    [super awakeFromNib];
    [self layoutSubviews];

    self.tableView.rowHeight = 100;
    [self.tableView setDataSource:self];
    [self.tableView setDelegate:self];

    VKQuartzPicture pictures[] = {
        g_picture_tiger,      g_picture_icons,     g_picture_world,
        g_picture_snow_woman, g_picture_river_man, g_picture_all_test,
    };

    _numOfPictures = sizeof(pictures) / sizeof(pictures[0]);
    _pictures = malloc(sizeof(pictures));
    memcpy(_pictures, pictures, sizeof(pictures));

    self.previewView.picture = _pictures[0];
}

- (void)layoutSubviews {
    const CGFloat kLeftWidth = 200;
    CGRect rt = self.bounds;
    CGRect leftFrame = rt;
    leftFrame.size.width = kLeftWidth;
    self.scrollView.frame = leftFrame;

    CGRect rightFrame = rt;
    rightFrame.origin.x = kLeftWidth;
    rightFrame.size.width = rt.size.width - kLeftWidth;
    self.previewView.frame = rightFrame;
}

- (void)resizeSubviewsWithOldSize:(NSSize)oldSize {
    [super resizeSubviewsWithOldSize:oldSize];
    [self layoutSubviews];
}

- (NSInteger)numberOfRowsInTableView:(NSTableView*)tableView {
    return _numOfPictures;
}

- (NSView*)tableView:(NSTableView*)tableView
    viewForTableColumn:(nullable NSTableColumn*)tableColumn
                   row:(NSInteger)row {
    assert(row < _numOfPictures);
    PictureView* view = [[PictureView alloc] init];
    view.picture = _pictures[row];
    return view;
}

- (void)tableViewSelectionDidChange:(NSNotification*)notification {
    NSInteger row = self.tableView.selectedRow;
    if (row < _numOfPictures) {
        self.previewView.picture = _pictures[row];
    }
}

@end
