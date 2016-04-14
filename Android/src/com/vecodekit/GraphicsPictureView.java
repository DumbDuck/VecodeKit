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

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.util.AttributeSet;
import android.view.View;

public class GraphicsPictureView extends View
{
    private GraphicsPicture _picture = null;

    public GraphicsPictureView(Context context, AttributeSet set)
    {
        super(context, set);
        this.setLayerType(LAYER_TYPE_SOFTWARE, null);
    }

    public void setPicture(GraphicsPicture picture)
    {
        _picture = picture;
    }

    public GraphicsPicture getPicture()
    {
        return _picture;
    }

    @Override
    protected void onDraw(Canvas canvas)
    {
        super.onDraw(canvas);

        if (_picture == null)
        {
            return;
        }

        Rect rect = canvas.getClipBounds();
        _picture.drawInRect(rect, canvas, PictureContentMode.ScaleAspectFit);
    }
}
