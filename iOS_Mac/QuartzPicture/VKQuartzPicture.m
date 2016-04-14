/*
 The MIT License (MIT)

 Copyright (c) 2016 DumbDuck dumbduck@126.com

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#import "VKQuartzPicture.h"

VKQuartzPicture VKQuartzPictureNull()
{
    VKQuartzPicture picture = { CGRectNull, NULL };
    return picture;
}

void VKQuartzPictureDrawInRect(VKQuartzPicture picture, CGRect rect, CGContextRef context, VKPictureContentMode mode)
{
    if (picture.drawer == NULL)
    {
        return;
    }

    if (picture.bounds.size.width < FLT_EPSILON || picture.bounds.size.height < FLT_EPSILON)
    {
        return;
    }

    CGFloat scaleX = rect.size.width / picture.bounds.size.width;
    CGFloat scaleY = rect.size.height / picture.bounds.size.height;

    switch (mode)
    {
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
