
#ifndef __VK_PICTURE_ICONS_H__
#define __VK_PICTURE_ICONS_H__

#include <CoreGraphics/CoreGraphics.h>

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct
{
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

CG_EXTERN VKQuartzPicture g_picture_icons;

#endif

