
#ifndef __VK_PICTURE_RIVER_MAN_H__
#define __VK_PICTURE_RIVER_MAN_H__

#include <CoreGraphics/CoreGraphics.h>

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct
{
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

CG_EXTERN VKQuartzPicture g_picture_river_man;

#endif

