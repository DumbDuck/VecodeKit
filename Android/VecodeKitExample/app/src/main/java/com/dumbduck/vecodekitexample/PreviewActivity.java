package com.dumbduck.vecodekitexample;

import android.app.Activity;
import android.os.Bundle;

import com.vecodekit.GraphicsPicture;
import com.vecodekit.GraphicsPictureView;

public class PreviewActivity extends Activity
{
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_preview);

        GraphicsPictureView pictureView = (GraphicsPictureView)findViewById(R.id.picture_view);
        try
        {
            String clsName = getIntent().getStringExtra("pictureClass");
            Class cls = Class.forName(clsName);
            GraphicsPicture picture = (GraphicsPicture)cls.newInstance();
            pictureView.setPicture(picture);
        }
        catch (Exception e)
        {
        }
    }
}
