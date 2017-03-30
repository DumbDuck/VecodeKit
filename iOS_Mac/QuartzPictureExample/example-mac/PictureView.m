
#import "PictureView.h"

@implementation PictureView

- (BOOL)isFlipped {
    return true;
}

- (void)setPicture:(VKQuartzPicture)picture {
    _picture = picture;
    [self setNeedsDisplayInRect:self.bounds];
}

- (void)drawRect:(NSRect)dirtyRect {
    CGContextRef context = [NSGraphicsContext currentContext].CGContext;
    VKQuartzPictureDrawInRect(_picture, self.bounds, context, VKPictureContentModeScaleAspectFit);
}

@end
