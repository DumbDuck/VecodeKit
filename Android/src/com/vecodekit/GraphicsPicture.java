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

package com.vecodekit;
import android.graphics.*;

public class GraphicsPicture
{
    private RectF _bounds;

    protected GraphicsPicture(RectF bounds)
    {
        _bounds = bounds;
    }
    
    public final void drawInRect(RectF rect, Canvas canvas, int contentMode)
    {
        final float kEpsilon = 0.001f;
        if (_bounds.width() < kEpsilon || _bounds.height() < kEpsilon)
        {
            return;
        }

        float scaleX = rect.width() / _bounds.width();
        float scaleY = rect.height() / _bounds.height();

        switch (contentMode)
        {
            case PictureContentMode.ScaleAspectFit:
                scaleX = Math.min(scaleX, scaleY);
                scaleY = scaleX;
                break;

            case PictureContentMode.AspectFill:
                scaleX = Math.max(scaleX, scaleY);
                scaleY = scaleX;
                break;

            case PictureContentMode.ScaleToFill:
                // nothing
                break;

            case PictureContentMode.Center:
                scaleX = 1.0f;
                scaleY = 1.0f;
                break;

            default:
                break;
        }

        final float pictureWidth = _bounds.width() * scaleX;
        final float pictureHeight = _bounds.height() * scaleY;

        final float offsetX = (rect.width() - pictureWidth) * 0.5f + rect.left;
        final float offsetY = (rect.height() - pictureHeight) * 0.5f + rect.top;

        canvas.save();
        canvas.translate(offsetX, offsetY);
        canvas.scale(scaleX, scaleY);
        canvas.translate(-_bounds.left, -_bounds.top);
        picture_draw_main(canvas);
        canvas.restore();
    }

    public final void drawInRect(Rect rect, Canvas canvas, int contentMode)
    {
        RectF rectF = new RectF(rect.left, rect.top, rect.right, rect.bottom);
        drawInRect(rectF, canvas, contentMode);
    }
    
    public final Bitmap transToBitmap(float width, float height, int contentMode)
    {
        int bitmapWidth = (int)Math.ceil(width);
        int bitmapHeight = (int)Math.ceil(height);

        Bitmap bitmap = Bitmap.createBitmap(bitmapWidth, bitmapHeight, Bitmap.Config.ARGB_8888);
        Canvas canvas = new Canvas(bitmap);
        drawInRect(new RectF(0, 0, (float)bitmapWidth, (float)bitmapHeight), canvas, contentMode);
        return bitmap;
    }

    public final Bitmap transToBitmap(float width, float height)
    {
        return transToBitmap(width, height, PictureContentMode.ScaleAspectFit);
    }

    public final float getWidth()
    {
        return _bounds.width();
    }

    public final float getHeight()
    {
        return _bounds.height();
    }

    //////////////////////
    protected void picture_draw_main(Canvas canvas)
    {
    }

    protected static Matrix createMatrix(float a, float b, float c, float d, float tx, float ty)
    {
        Matrix matrix = new Matrix();
        float values[] = {
                a,    c,    tx,
                b,    d,    ty,
                0.0f, 0.0f, 1.0f
        };
        matrix.setValues(values);
        return matrix;
    }

    protected static int colorApplyColorTransform(int color, float[] transform)
    {
        if (transform == null || transform.length != 8)
        {
            return color;
        }

        int r = Color.red(color);
        int g = Color.green(color);
        int b = Color.blue(color);
        int a = Color.alpha(color);

        r = (int)Math.min(255.0f, transform[0] * (float)r + transform[4] * 255.0f);
        g = (int)Math.min(255.0f, transform[1] * (float)g + transform[5] * 255.0f);
        b = (int)Math.min(255.0f, transform[2] * (float)b + transform[6] * 255.0f);
        a = (int)Math.min(255.0f, transform[3] * (float)a + transform[7] * 255.0f);

        return Color.argb(a, r, g, b);
    }
}
