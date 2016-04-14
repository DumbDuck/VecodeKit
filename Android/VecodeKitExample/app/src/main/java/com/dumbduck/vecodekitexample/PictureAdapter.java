package com.dumbduck.vecodekitexample;

import android.content.Context;
import android.graphics.Bitmap;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.TextView;

import java.util.List;

public class PictureAdapter extends ArrayAdapter<ListItem>
{
    private int _resourceId;

    public PictureAdapter(Context context, int textViewResourceId,  List<ListItem> objects)
    {
        super(context, textViewResourceId, objects);
        _resourceId = textViewResourceId;
    }

    private static int dip2px(Context context, float value)
    {
        final float scale = context.getResources().getDisplayMetrics().density;
        return (int)(value * scale + 0.5f);
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent)
    {
        View view = convertView;
        if (view == null)
        {
            view = LayoutInflater.from(getContext()).inflate(_resourceId, null);
        }

        ImageView imageView = (ImageView)view.findViewById(R.id.image_view);
        TextView textView = (TextView)view.findViewById(R.id.text_view);

        ListItem listItem = getItem(position);
        Bitmap bitmap = listItem.getBitmap();
        if (bitmap == null)
        {
            final int bitmapWidth = dip2px(getContext(), 100);
            final int bitmapHeight = dip2px(getContext(), 100);
            bitmap = listItem.getPicture().transToBitmap(bitmapWidth, bitmapHeight);
            listItem.setBitmap(bitmap);
        }

        imageView.setImageBitmap(bitmap);
        textView.setText(listItem.getName());
        return view;
    }
}
