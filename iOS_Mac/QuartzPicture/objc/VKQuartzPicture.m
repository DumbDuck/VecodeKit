#import "VKQuartzPicture.h"

VKQuartzPicture VKQuartzPictureNull() {
    VKQuartzPicture picture = { CGRectNull, NULL };
    return picture;
}

void VKQuartzPictureDrawInRect(VKQuartzPicture picture, CGRect rect, CGContextRef context, VKPictureContentMode mode) {
    if (picture.drawer == NULL) {
        return;
    }

    if (picture.bounds.size.width < FLT_EPSILON || picture.bounds.size.height < FLT_EPSILON) {
        return;
    }

    CGFloat scaleX = rect.size.width / picture.bounds.size.width;
    CGFloat scaleY = rect.size.height / picture.bounds.size.height;

    switch (mode) {
        case VKPictureContentModeScaleAspectFit:
            scaleX = MIN(scaleX, scaleY);
            scaleY = scaleX;
            break;

        case VKPictureContentModeScaleAspectFill:
            scaleX = MAX(scaleX, scaleY);
            scaleY = scaleX;
            break;

        case VKPictureContentModeScaleToFill:
            // nothing
            break;

        case VKPictureContentModeCenter:
            scaleX = 1.0;
            scaleY = 1.0;
            break;
    }

    CGSize pictureSize = picture.bounds.size;
    pictureSize.width *= scaleX;
    pictureSize.height *= scaleY;

    CGPoint offset;
    offset.x = (rect.size.width - pictureSize.width) * 0.5 + rect.origin.x;
    offset.y = (rect.size.height - pictureSize.height) * 0.5 + rect.origin.y;

    CGContextSaveGState(context);
    CGContextTranslateCTM(context, offset.x, offset.y);
    CGContextScaleCTM(context, scaleX, scaleY);
    CGContextTranslateCTM(context, -picture.bounds.origin.x, -picture.bounds.origin.y);
    picture.drawer(context);
    CGContextRestoreGState(context);
}
