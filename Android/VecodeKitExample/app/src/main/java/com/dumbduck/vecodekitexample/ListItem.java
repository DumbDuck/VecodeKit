package com.dumbduck.vecodekitexample;

import android.graphics.Bitmap;
import com.vecodekit.GraphicsPicture;

public class ListItem
{
    private GraphicsPicture _picture;
    private String _name;
    private Bitmap _bitmap;

    ListItem(GraphicsPicture picture, String name)
    {
        _picture = picture;
        _name = name;
    }

    public GraphicsPicture getPicture()
    {
        return _picture;
    }

    public String getName()
    {
        return _name;
    }

    public void setBitmap(Bitmap bitmap)
    {
        _bitmap = bitmap;
    }

    public Bitmap getBitmap()
    {
        return _bitmap;
    }
}
