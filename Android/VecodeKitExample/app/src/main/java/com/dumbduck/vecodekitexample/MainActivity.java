package com.dumbduck.vecodekitexample;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;

import com.dumbduck.pictures.*;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity
{
    private List<ListItem> _listItems = new ArrayList<ListItem>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        initList();

        PictureAdapter adapter = new PictureAdapter(this, R.layout.picture_item, _listItems);
        ListView listView = (ListView)findViewById(R.id.list_view);
        listView.setAdapter(adapter);

        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                ListItem item = _listItems.get(position);
                Intent intent = new Intent(MainActivity.this, PreviewActivity.class);
                intent.putExtra("pictureClass", item.getPicture().getClass().getName());
                startActivity(intent);
            }
        });
    }

    private void initList()
    {
        ListItem item;

        item = new ListItem(new PictureTiger(), "tiger");
        _listItems.add(item);

        item = new ListItem(new PictureIcons(), "icons");
        _listItems.add(item);

        item = new ListItem(new PictureWorld(), "world");
        _listItems.add(item);

        item = new ListItem(new PictureAprilFool(), "april fool");
        _listItems.add(item);

        item = new ListItem(new PictureSnowWoman(), "snow woman");
        _listItems.add(item);

        item = new ListItem(new PictureRiverMan(), "river man");
        _listItems.add(item);

        item = new ListItem(new PictureAllTest(), "all test");
        _listItems.add(item);
    }
}
