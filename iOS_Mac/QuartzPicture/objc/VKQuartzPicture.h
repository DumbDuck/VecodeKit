#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, VKPictureContentMode) {
    VKPictureContentModeScaleToFill,
    VKPictureContentModeScaleAspectFit,
    VKPictureContentModeScaleAspectFill,
    VKPictureContentModeCenter,
};

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct {
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

CG_EXTERN VKQuartzPicture VKQuartzPictureNull(void);
CG_EXTERN void VKQuartzPictureDrawInRect(VKQuartzPicture picture,
                                         CGRect rect,
                                         _Nonnull CGContextRef context,
                                         VKPictureContentMode contentMode);

