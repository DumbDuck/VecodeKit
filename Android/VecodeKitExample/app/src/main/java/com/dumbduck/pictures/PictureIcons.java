
package com.dumbduck.pictures;

import android.graphics.*;
import com.vecodekit.GraphicsPicture;

public class PictureIcons extends GraphicsPicture
{
    public PictureIcons()
    {
        super(new RectF(0.0f, 0.0f, 550.0f, 400.0f));
    }
    
    private static void def_path_0(Path path)
    {
        path.reset();
        path.moveTo(7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.15f, 19.7f, -9.83477e-08f, 25.15f);
        path.lineTo(-9.83477e-08f, 25.9f);
        path.lineTo(-9.83477e-08f, 25.95f);
        path.lineTo(-9.83477e-08f, 26.8f);
        path.lineTo(0.0499999f, 27.5f);
        path.lineTo(0.0499999f, 28.25f);
        path.quadTo(0.2f, 30.55f, 0.8f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 1.1915e-05f);
        path.lineTo(23.95f, 0.0500119f);
        path.lineTo(21.35f, 0.350012f);
        path.quadTo(19.05f, 0.700012f, 16.9f, 1.50001f);
        path.lineTo(14.35f, 2.60001f);
        path.quadTo(13.5f, 3.05001f, 12.6f, 3.65001f);
        path.lineTo(9.34999f, 6.00001f);
        path.lineTo(7.84999f, 7.30001f);
        path.lineTo(7.59999f, 7.60001f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.close();
    }

    private static void draw_0(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_0(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 121, 216, 212));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_1(Path path)
    {
        path.reset();
        path.moveTo(38.4f, 42.55f);
        path.quadTo(43.2f, 41.6f, 43.2f, 40.2f);
        path.quadTo(43.2f, 38.8f, 38.4f, 37.85f);
        path.quadTo(33.55f, 36.9f, 26.7f, 36.9f);
        path.quadTo(19.85f, 36.9f, 15.05f, 37.85f);
        path.quadTo(10.2f, 38.8f, 10.2f, 40.2f);
        path.quadTo(10.2f, 41.6f, 15.05f, 42.55f);
        path.lineTo(26.7f, 43.5f);
        path.lineTo(38.4f, 42.55f);
        path.close();
    }

    private static void draw_1(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_1(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 61, 194, 193));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_2(Path path)
    {
        path.reset();
        path.moveTo(41.25f, 29.85f);
        path.quadTo(41.25f, 29.05f, 40.55f, 28.3f);
        path.quadTo(39.9f, 27.7f, 39.05f, 27.7f);
        path.lineTo(37.45f, 27.7f);
        path.quadTo(36.55f, 27.7f, 35.9f, 28.3f);
        path.quadTo(35.25f, 29.05f, 35.25f, 29.85f);
        path.lineTo(35.25f, 37.85f);
        path.quadTo(35.25f, 38.75f, 35.9f, 39.35f);
        path.quadTo(36.55f, 40.05f, 37.45f, 40.05f);
        path.lineTo(39.05f, 40.05f);
        path.quadTo(39.9f, 40.05f, 40.55f, 39.35f);
        path.quadTo(41.25f, 38.75f, 41.25f, 37.85f);
        path.lineTo(41.25f, 29.85f);
        path.close();
    }

    private static void draw_2(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_2(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_3(Path path)
    {
        path.reset();
        path.moveTo(15.55f, 27.8f);
        path.lineTo(13.95f, 27.8f);
        path.quadTo(13.05f, 27.8f, 12.4f, 28.4f);
        path.quadTo(11.75f, 29.1f, 11.75f, 29.9f);
        path.lineTo(11.75f, 37.95f);
        path.quadTo(11.75f, 38.8f, 12.4f, 39.45f);
        path.quadTo(13.05f, 40.15f, 13.95f, 40.15f);
        path.lineTo(15.55f, 40.15f);
        path.quadTo(16.4f, 40.15f, 17.05f, 39.45f);
        path.quadTo(17.65f, 38.8f, 17.65f, 37.95f);
        path.lineTo(17.65f, 29.9f);
        path.quadTo(17.65f, 29.1f, 17.05f, 28.4f);
        path.quadTo(16.4f, 27.8f, 15.55f, 27.8f);
        path.close();
    }

    private static void draw_3(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_3(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_4(Path path)
    {
        path.reset();
        path.moveTo(44.8f, 25.9f);
        path.quadTo(44.8f, 22.45f, 41.35f, 22.45f);
        path.lineTo(11.8f, 22.45f);
        path.quadTo(8.4f, 22.45f, 8.4f, 25.9f);
        path.lineTo(8.4f, 34.65f);
        path.lineTo(44.8f, 34.65f);
        path.lineTo(44.8f, 25.9f);
        path.close();
    }

    private static void draw_4(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_4(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 224, 93, 63));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_5(Path path)
    {
        path.reset();
        path.moveTo(34.35f, 13.65f);
        path.quadTo(33.7f, 13.2f, 32.55f, 13.2f);
        path.lineTo(19.7f, 13.2f);
        path.quadTo(17.3f, 13.15f, 16.7f, 15.1f);
        path.lineTo(14.45f, 22.6f);
        path.lineTo(34.35f, 13.65f);
        path.close();
    }

    private static void draw_5(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_5(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 228, 225, 216));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_6(Path path)
    {
        path.reset();
        path.moveTo(14.2f, 13.25f);
        path.lineTo(11.4f, 22.85f);
        path.lineTo(40.8f, 22.9f);
        path.lineTo(38.0f, 13.25f);
        path.quadTo(37.2f, 10.95f, 34.3f, 11.0f);
        path.lineTo(17.95f, 11.0f);
        path.quadTo(14.95f, 10.85f, 14.2f, 13.25f);
        path.close();
        path.moveTo(14.45f, 22.6f);
        path.lineTo(16.7f, 15.1f);
        path.quadTo(17.3f, 13.15f, 19.7f, 13.2f);
        path.lineTo(32.55f, 13.2f);
        path.quadTo(33.7f, 13.2f, 34.35f, 13.65f);
        path.quadTo(35.15f, 14.15f, 35.45f, 15.1f);
        path.lineTo(37.7f, 22.7f);
        path.lineTo(14.45f, 22.6f);
        path.close();
    }

    private static void draw_6(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_6(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 224, 93, 63));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_7(Path path)
    {
        path.reset();
        path.moveTo(34.35f, 13.65f);
        path.lineTo(14.45f, 22.6f);
        path.lineTo(37.7f, 22.7f);
        path.lineTo(35.45f, 15.1f);
        path.quadTo(35.15f, 14.15f, 34.35f, 13.65f);
        path.close();
    }

    private static void draw_7(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_7(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_8(Path path)
    {
        path.reset();
        path.moveTo(14.45f, 31.75f);
        path.quadTo(15.3f, 32.55f, 16.35f, 32.55f);
        path.quadTo(17.45f, 32.55f, 18.25f, 31.75f);
        path.quadTo(19.1f, 30.95f, 19.1f, 29.85f);
        path.quadTo(19.1f, 28.75f, 18.25f, 27.95f);
        path.quadTo(17.45f, 27.15f, 16.35f, 27.15f);
        path.quadTo(15.3f, 27.15f, 14.45f, 27.95f);
        path.quadTo(13.65f, 28.75f, 13.65f, 29.85f);
        path.quadTo(13.65f, 30.95f, 14.45f, 31.75f);
        path.close();
    }

    private static void draw_8(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_8(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_9(Path path)
    {
        path.reset();
        path.moveTo(34.35f, 29.85f);
        path.quadTo(34.35f, 30.95f, 35.25f, 31.75f);
        path.quadTo(36.05f, 32.55f, 37.15f, 32.55f);
        path.quadTo(38.25f, 32.55f, 38.95f, 31.75f);
        path.quadTo(39.85f, 30.95f, 39.85f, 29.85f);
        path.quadTo(39.85f, 28.75f, 38.95f, 27.95f);
        path.quadTo(38.25f, 27.15f, 37.15f, 27.15f);
        path.quadTo(36.05f, 27.15f, 35.25f, 27.95f);
        path.quadTo(34.35f, 28.75f, 34.35f, 29.85f);
        path.close();
    }

    private static void draw_9(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_9(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_10(Path path)
    {
        path.reset();
        path.moveTo(4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.15f, 19.7f, -9.83477e-08f, 25.15f);
        path.lineTo(-9.83477e-08f, 25.9f);
        path.lineTo(-9.83477e-08f, 25.95f);
        path.lineTo(-9.83477e-08f, 26.8f);
        path.lineTo(0.0499999f, 27.5f);
        path.lineTo(0.0499999f, 28.25f);
        path.quadTo(0.2f, 30.55f, 0.8f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 1.1915e-05f);
        path.lineTo(23.95f, 0.0500119f);
        path.lineTo(21.35f, 0.350012f);
        path.quadTo(19.05f, 0.700012f, 16.9f, 1.50001f);
        path.lineTo(14.35f, 2.60001f);
        path.quadTo(13.5f, 3.05001f, 12.6f, 3.65001f);
        path.lineTo(9.34999f, 6.00001f);
        path.lineTo(7.84999f, 7.30001f);
        path.lineTo(7.59999f, 7.60001f);
        path.quadTo(7.49999f, 7.65001f, 7.34999f, 7.80001f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.close();
    }

    private static void draw_10(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_10(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_11(Path path)
    {
        path.reset();
        path.moveTo(38.1f, 45.75f);
        path.quadTo(42.9f, 44.8f, 42.9f, 43.4f);
        path.quadTo(42.9f, 42.05f, 38.1f, 41.1f);
        path.lineTo(26.4f, 40.15f);
        path.quadTo(19.55f, 40.15f, 14.75f, 41.1f);
        path.quadTo(9.9f, 42.05f, 9.9f, 43.4f);
        path.quadTo(9.9f, 44.8f, 14.75f, 45.75f);
        path.lineTo(26.4f, 46.7f);
        path.lineTo(38.1f, 45.75f);
        path.close();
    }

    private static void draw_11(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_11(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 118, 83, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_12(Path path)
    {
        path.reset();
        path.moveTo(20.0f, 33.8f);
        path.quadTo(19.4f, 33.25f, 18.65f, 33.25f);
        path.lineTo(17.35f, 33.25f);
        path.quadTo(16.65f, 33.25f, 16.05f, 33.8f);
        path.quadTo(15.55f, 34.35f, 15.55f, 35.1f);
        path.lineTo(15.55f, 41.8f);
        path.quadTo(15.55f, 42.55f, 16.05f, 43.05f);
        path.quadTo(16.65f, 43.65f, 17.35f, 43.65f);
        path.lineTo(18.65f, 43.65f);
        path.quadTo(19.4f, 43.65f, 20.0f, 43.05f);
        path.quadTo(20.5f, 42.55f, 20.5f, 41.8f);
        path.lineTo(20.5f, 35.1f);
        path.quadTo(20.5f, 34.35f, 20.0f, 33.8f);
        path.close();
    }

    private static void draw_12(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_12(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_13(Path path)
    {
        path.reset();
        path.moveTo(35.9f, 33.25f);
        path.lineTo(34.6f, 33.25f);
        path.quadTo(33.85f, 33.25f, 33.25f, 33.8f);
        path.quadTo(32.75f, 34.35f, 32.75f, 35.1f);
        path.lineTo(32.75f, 41.8f);
        path.quadTo(32.75f, 42.55f, 33.25f, 43.05f);
        path.quadTo(33.85f, 43.65f, 34.6f, 43.65f);
        path.lineTo(35.9f, 43.65f);
        path.quadTo(36.65f, 43.65f, 37.2f, 43.05f);
        path.quadTo(37.7f, 42.55f, 37.7f, 41.8f);
        path.lineTo(37.7f, 35.1f);
        path.quadTo(37.7f, 34.35f, 37.2f, 33.8f);
        path.quadTo(36.65f, 33.25f, 35.9f, 33.25f);
        path.close();
    }

    private static void draw_13(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_13(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_14(Path path)
    {
        path.reset();
        path.moveTo(12.6f, 12.9f);
        path.lineTo(12.6f, 38.25f);
        path.lineTo(40.05f, 38.25f);
        path.lineTo(40.05f, 12.9f);
        path.quadTo(40.05f, 10.8f, 38.0f, 10.8f);
        path.lineTo(14.65f, 10.8f);
        path.quadTo(12.6f, 10.8f, 12.6f, 12.9f);
        path.close();
    }

    private static void draw_14(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_14(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 255, 153, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_15(Path path)
    {
        path.reset();
        path.moveTo(16.4f, 30.8f);
        path.quadTo(15.7f, 31.6f, 15.7f, 32.7f);
        path.quadTo(15.7f, 33.8f, 16.4f, 34.5f);
        path.quadTo(17.2f, 35.3f, 18.3f, 35.3f);
        path.quadTo(19.35f, 35.3f, 20.15f, 34.5f);
        path.quadTo(20.95f, 33.8f, 20.95f, 32.7f);
        path.quadTo(20.95f, 31.6f, 20.15f, 30.8f);
        path.quadTo(19.35f, 30.05f, 18.3f, 30.05f);
        path.quadTo(17.2f, 30.05f, 16.4f, 30.8f);
        path.close();
    }

    private static void draw_15(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_15(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_16(Path path)
    {
        path.reset();
        path.moveTo(34.15f, 30.05f);
        path.quadTo(33.05f, 30.05f, 32.3f, 30.85f);
        path.quadTo(31.5f, 31.65f, 31.5f, 32.75f);
        path.quadTo(31.5f, 33.8f, 32.3f, 34.6f);
        path.quadTo(33.05f, 35.4f, 34.15f, 35.4f);
        path.quadTo(35.25f, 35.4f, 35.95f, 34.6f);
        path.quadTo(36.75f, 33.8f, 36.75f, 32.75f);
        path.quadTo(36.75f, 31.65f, 35.95f, 30.85f);
        path.quadTo(35.25f, 30.05f, 34.15f, 30.05f);
        path.close();
    }

    private static void draw_16(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_16(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_17(Path path)
    {
        path.reset();
        path.moveTo(37.7f, 14.15f);
        path.lineTo(15.1f, 14.15f);
        path.lineTo(15.1f, 27.2f);
        path.lineTo(37.7f, 14.15f);
        path.close();
    }

    private static void draw_17(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_17(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 228, 225, 216));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_18(Path path)
    {
        path.reset();
        path.moveTo(37.7f, 14.15f);
        path.lineTo(15.1f, 27.2f);
        path.lineTo(37.7f, 27.2f);
        path.lineTo(37.7f, 14.15f);
        path.close();
    }

    private static void draw_18(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_18(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_19(Path path)
    {
        path.reset();
        path.moveTo(7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.15f, 19.7f, -9.83477e-08f, 25.15f);
        path.lineTo(-9.83477e-08f, 25.9f);
        path.lineTo(-9.83477e-08f, 25.95f);
        path.lineTo(-9.83477e-08f, 26.8f);
        path.lineTo(0.0499999f, 27.5f);
        path.lineTo(0.0499999f, 28.25f);
        path.quadTo(0.2f, 30.55f, 0.8f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 1.1915e-05f);
        path.lineTo(23.95f, 0.0500119f);
        path.lineTo(21.35f, 0.350012f);
        path.quadTo(19.05f, 0.700012f, 16.9f, 1.50001f);
        path.lineTo(14.35f, 2.60001f);
        path.quadTo(13.5f, 3.05001f, 12.6f, 3.65001f);
        path.lineTo(9.34999f, 6.00001f);
        path.lineTo(7.84999f, 7.30001f);
        path.lineTo(7.59999f, 7.60001f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.close();
    }

    private static void draw_19(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_19(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 279.2f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_20(Path path)
    {
        path.reset();
        path.moveTo(7.95f, 14.75f);
        path.quadTo(7.05f, 17.2f, 8.3f, 21.45f);
        path.lineTo(8.75f, 22.9f);
        path.quadTo(10.65f, 28.6f, 15.4f, 34.75f);
        path.quadTo(20.2f, 40.85f, 25.3f, 44.15f);
        path.lineTo(26.65f, 44.85f);
        path.quadTo(29.7f, 46.55f, 31.95f, 46.7f);
        path.quadTo(34.45f, 47.05f, 36.35f, 45.55f);
        path.lineTo(37.7f, 44.45f);
        path.quadTo(39.55f, 43.05f, 38.75f, 41.5f);
        path.lineTo(38.25f, 40.65f);
        path.lineTo(34.05f, 35.25f);
        path.lineTo(33.95f, 35.1f);
        path.lineTo(33.35f, 34.6f);
        path.quadTo(32.05f, 33.4f, 30.2f, 34.8f);
        path.lineTo(28.75f, 35.95f);
        path.quadTo(27.7f, 36.85f, 27.2f, 37.95f);
        path.lineTo(26.4f, 37.8f);
        path.lineTo(25.55f, 37.6f);
        path.quadTo(21.35f, 36.5f, 18.3f, 32.7f);
        path.quadTo(15.3f, 28.8f, 15.25f, 24.45f);
        path.lineTo(15.15f, 23.35f);
        path.lineTo(15.3f, 22.6f);
        path.quadTo(16.5f, 22.3f, 17.45f, 21.6f);
        path.lineTo(18.9f, 20.45f);
        path.quadTo(20.7f, 19.05f, 19.9f, 17.3f);
        path.lineTo(19.7f, 16.9f);
        path.lineTo(19.4f, 16.65f);
        path.lineTo(15.25f, 11.25f);
        path.lineTo(14.5f, 10.55f);
        path.quadTo(13.2f, 9.35001f, 11.4f, 10.7f);
        path.lineTo(10.0f, 11.8f);
        path.quadTo(8.55f, 12.9f, 7.95f, 14.75f);
        path.close();
    }

    private static void draw_20(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_20(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 279.2f));
        paint.setColor(Color.argb(255, 61, 196, 190));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_21(Path path)
    {
        path.reset();
        path.moveTo(27.95f, 10.0f);
        path.lineTo(27.95f, 13.2f);
        path.lineTo(28.3f, 13.2f);
        path.quadTo(33.7f, 13.2f, 37.7f, 17.05f);
        path.quadTo(41.6f, 21.1f, 41.6f, 26.5f);
        path.lineTo(41.6f, 26.8f);
        path.lineTo(44.95f, 26.8f);
        path.lineTo(44.95f, 26.5f);
        path.quadTo(44.95f, 19.75f, 40.15f, 14.8f);
        path.quadTo(35.0f, 10.0f, 28.3f, 10.0f);
        path.lineTo(27.95f, 10.0f);
        path.close();
        path.moveTo(28.3f, 14.65f);
        path.lineTo(27.95f, 14.65f);
        path.lineTo(27.95f, 17.8f);
        path.lineTo(28.3f, 17.8f);
        path.quadTo(31.8f, 17.8f, 34.45f, 20.35f);
        path.quadTo(37.0f, 23.0f, 37.0f, 26.5f);
        path.lineTo(37.0f, 26.8f);
        path.lineTo(40.15f, 26.8f);
        path.lineTo(40.15f, 26.5f);
        path.quadTo(40.15f, 21.65f, 36.65f, 18.1f);
        path.quadTo(33.1f, 14.65f, 28.3f, 14.65f);
        path.close();
        path.moveTo(31.45f, 23.35f);
        path.quadTo(32.6f, 24.75f, 32.6f, 26.5f);
        path.lineTo(32.6f, 26.8f);
        path.lineTo(35.55f, 26.8f);
        path.lineTo(35.55f, 26.5f);
        path.quadTo(35.55f, 23.5f, 33.5f, 21.3f);
        path.quadTo(31.3f, 19.25f, 28.3f, 19.25f);
        path.lineTo(27.95f, 19.25f);
        path.lineTo(27.95f, 22.2f);
        path.lineTo(28.3f, 22.2f);
        path.quadTo(30.15f, 22.2f, 31.45f, 23.35f);
        path.close();
    }

    private static void draw_21(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_21(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 279.2f));
        paint.setColor(Color.argb(255, 61, 196, 190));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_22(Path path)
    {
        path.reset();
        path.moveTo(14.35f, 2.65f);
        path.quadTo(13.5f, 3.1f, 12.6f, 3.65f);
        path.quadTo(9.9f, 5.25f, 7.6f, 7.6f);
        path.quadTo(3.8147e-07f, 15.25f, 3.8147e-07f, 26.0f);
        path.quadTo(3.8147e-07f, 35.0f, 5.25f, 41.75f);
        path.lineTo(5.85f, 42.5f);
        path.lineTo(7.6f, 44.4f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.7f);
        path.lineTo(24.9f, 52.0f);
        path.lineTo(25.95f, 52.0f);
        path.lineTo(27.45f, 52.0f);
        path.lineTo(30.35f, 51.7f);
        path.lineTo(33.85f, 50.9f);
        path.quadTo(37.2f, 49.8f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.55f);
        path.lineTo(42.6f, 46.0f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.4f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(47.0f, 41.4f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.quadTo(49.75f, 37.25f, 50.8f, 34.05f);
        path.quadTo(51.95f, 30.25f, 51.95f, 26.0f);
        path.quadTo(51.95f, 21.75f, 50.8f, 18.05f);
        path.quadTo(49.75f, 14.85f, 47.85f, 11.9f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.35f, 7.6f);
        path.quadTo(40.2f, 3.45f, 35.1f, 1.55f);
        path.quadTo(32.9f, 0.750003f, 30.55f, 0.400003f);
        path.lineTo(25.95f, 3.16501e-06f);
        path.lineTo(23.95f, 0.100003f);
        path.lineTo(21.35f, 0.400003f);
        path.quadTo(19.05f, 0.750003f, 16.9f, 1.55f);
        path.lineTo(14.35f, 2.65f);
        path.close();
    }

    private static void draw_22(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_22(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 279.1f));
        paint.setColor(Color.argb(255, 234, 147, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_23(Path path)
    {
        path.reset();
        path.moveTo(23.4f, 9.3f);
        path.quadTo(19.55f, 9.85f, 17.2f, 12.05f);
        path.quadTo(14.9f, 14.25f, 14.9f, 17.25f);
        path.quadTo(14.9f, 20.1f, 16.4f, 22.15f);
        path.quadTo(18.1f, 24.25f, 22.1f, 25.7f);
        path.lineTo(25.15f, 26.9f);
        path.quadTo(28.55f, 28.2f, 29.55f, 28.75f);
        path.lineTo(31.0f, 30.45f);
        path.quadTo(31.5f, 31.45f, 31.5f, 32.8f);
        path.quadTo(31.5f, 34.9f, 29.6f, 36.3f);
        path.quadTo(27.7f, 37.7f, 24.6f, 37.7f);
        path.lineTo(20.65f, 37.0f);
        path.quadTo(18.25f, 36.45f, 16.85f, 35.55f);
        path.lineTo(14.95f, 39.5f);
        path.quadTo(15.95f, 40.1f, 18.8f, 40.75f);
        path.lineTo(23.4f, 41.45f);
        path.lineTo(23.4f, 46.2f);
        path.lineTo(27.15f, 46.2f);
        path.lineTo(27.15f, 41.25f);
        path.quadTo(31.75f, 40.65f, 34.3f, 38.5f);
        path.quadTo(36.9f, 36.3f, 36.9f, 33.35f);
        path.quadTo(36.9f, 29.85f, 34.9f, 27.6f);
        path.quadTo(33.0f, 25.35f, 28.9f, 23.75f);
        path.lineTo(26.4f, 22.85f);
        path.lineTo(22.3f, 21.05f);
        path.quadTo(21.35f, 20.3f, 20.8f, 19.35f);
        path.quadTo(20.15f, 18.35f, 20.15f, 17.15f);
        path.quadTo(20.15f, 15.2f, 21.8f, 13.95f);
        path.quadTo(23.35f, 12.7f, 26.05f, 12.7f);
        path.lineTo(30.05f, 13.3f);
        path.quadTo(32.25f, 13.9f, 33.35f, 14.55f);
        path.lineTo(34.9f, 10.8f);
        path.quadTo(32.9f, 9.3f, 27.15f, 9.15f);
        path.lineTo(27.15f, 5.85f);
        path.lineTo(23.4f, 5.85f);
        path.lineTo(23.4f, 9.3f);
        path.close();
    }

    private static void draw_23(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_23(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 279.1f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_24(Path path)
    {
        path.reset();
        path.moveTo(25.95f, 0.0f);
        path.lineTo(21.35f, 0.4f);
        path.quadTo(13.5f, 1.7f, 7.6f, 7.6f);
        path.quadTo(-9.53674e-08f, 15.25f, -9.53674e-08f, 26.0f);
        path.quadTo(-9.53674e-08f, 36.8f, 7.6f, 44.4f);
        path.quadTo(9.2f, 46.0f, 10.95f, 47.3f);
        path.quadTo(17.45f, 52.0f, 25.95f, 52.0f);
        path.quadTo(34.0f, 52.0f, 40.2f, 47.8f);
        path.quadTo(42.4f, 46.35f, 44.35f, 44.4f);
        path.quadTo(46.4f, 42.35f, 47.85f, 40.15f);
        path.quadTo(51.95f, 33.95f, 51.95f, 26.0f);
        path.quadTo(51.95f, 18.1f, 47.85f, 11.9f);
        path.quadTo(46.4f, 9.64999f, 44.35f, 7.59999f);
        path.quadTo(38.45f, 1.69999f, 30.55f, 0.399993f);
        path.lineTo(25.95f, 0.0f);
        path.close();
    }

    private static void draw_24(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_24(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 279.1f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_25(Path path)
    {
        path.reset();
        path.moveTo(11.45f, 17.4f);
        path.quadTo(8.8f, 20.0f, 8.8f, 23.75f);
        path.quadTo(8.8f, 24.85f, 9.1f, 25.8f);
        path.quadTo(9.25f, 26.95f, 9.9f, 28.05f);
        path.quadTo(12.05f, 33.0f, 16.2f, 37.15f);
        path.quadTo(20.8f, 41.85f, 26.5f, 43.95f);
        path.lineTo(26.5f, 44.05f);
        path.lineTo(26.65f, 44.05f);
        path.lineTo(26.65f, 43.95f);
        path.quadTo(32.3f, 41.85f, 36.9f, 37.15f);
        path.quadTo(41.1f, 33.0f, 43.2f, 28.05f);
        path.quadTo(43.8f, 26.95f, 44.0f, 25.8f);
        path.lineTo(44.3f, 23.75f);
        path.quadTo(44.3f, 20.0f, 41.6f, 17.4f);
        path.quadTo(38.95f, 14.7f, 35.25f, 14.7f);
        path.quadTo(31.6f, 14.7f, 28.9f, 17.4f);
        path.quadTo(27.15f, 19.15f, 26.5f, 21.35f);
        path.quadTo(25.9f, 19.15f, 24.2f, 17.4f);
        path.quadTo(21.5f, 14.7f, 17.8f, 14.7f);
        path.quadTo(14.15f, 14.7f, 11.45f, 17.4f);
        path.close();
    }

    private static void draw_25(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_25(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 279.1f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_26(Path path)
    {
        path.reset();
        path.moveTo(40.8f, 26.8f);
        path.lineTo(40.8f, 23.45f);
        path.lineTo(36.4f, 23.45f);
        path.lineTo(36.4f, 19.05f);
        path.lineTo(33.05f, 19.05f);
        path.lineTo(33.05f, 23.45f);
        path.lineTo(28.65f, 23.45f);
        path.lineTo(28.65f, 26.8f);
        path.lineTo(33.05f, 26.8f);
        path.lineTo(33.05f, 31.2f);
        path.lineTo(36.4f, 31.2f);
        path.lineTo(36.4f, 26.8f);
        path.lineTo(40.8f, 26.8f);
        path.close();
    }

    private static void draw_26(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_26(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 279.1f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_27(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_24(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 279.1f));
        paint.setColor(Color.argb(255, 0, 153, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_27(Path path)
    {
        path.reset();
        path.moveTo(25.15f, 18.75f);
        path.lineTo(25.15f, 41.35f);
        path.quadTo(25.15f, 42.25f, 24.45f, 42.95f);
        path.quadTo(23.8f, 43.65f, 22.85f, 43.65f);
        path.quadTo(21.9f, 43.65f, 21.15f, 42.95f);
        path.quadTo(20.5f, 42.25f, 20.5f, 41.35f);
        path.lineTo(20.5f, 39.15f);
        path.lineTo(20.2f, 38.4f);
        path.quadTo(19.9f, 38.1f, 19.4f, 38.1f);
        path.quadTo(18.95f, 38.1f, 18.65f, 38.4f);
        path.quadTo(18.4f, 38.7f, 18.4f, 39.15f);
        path.lineTo(18.4f, 41.45f);
        path.quadTo(18.4f, 43.3f, 19.7f, 44.6f);
        path.quadTo(21.0f, 45.9f, 22.85f, 45.9f);
        path.quadTo(24.65f, 45.9f, 25.95f, 44.6f);
        path.quadTo(27.3f, 43.3f, 27.3f, 41.45f);
        path.lineTo(27.3f, 30.25f);
        path.lineTo(27.2f, 29.7f);
        path.lineTo(27.2f, 18.75f);
        path.lineTo(25.15f, 18.75f);
        path.close();
    }

    private static void draw_28(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_27(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 279.1f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_28(Path path)
    {
        path.reset();
        path.moveTo(40.3f, 17.3f);
        path.quadTo(34.5f, 12.35f, 26.4f, 12.35f);
        path.quadTo(18.3f, 12.35f, 12.55f, 17.3f);
        path.quadTo(8.1f, 21.2f, 7.05f, 26.3f);
        path.quadTo(8.6f, 25.1f, 10.5f, 25.1f);
        path.quadTo(12.55f, 25.1f, 14.2f, 26.5f);
        path.quadTo(15.75f, 25.1f, 17.85f, 25.1f);
        path.quadTo(20.15f, 25.1f, 21.8f, 26.75f);
        path.quadTo(23.8f, 25.1f, 26.4f, 25.1f);
        path.quadTo(29.2f, 25.1f, 31.25f, 26.95f);
        path.quadTo(33.0f, 25.1f, 35.45f, 25.1f);
        path.quadTo(37.5f, 25.1f, 39.1f, 26.5f);
        path.quadTo(40.7f, 25.1f, 42.85f, 25.1f);
        path.quadTo(44.35f, 25.1f, 45.6f, 25.85f);
        path.quadTo(44.5f, 21.05f, 40.3f, 17.3f);
        path.close();
    }

    private static void draw_29(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_28(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 279.1f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_29(Path path)
    {
        path.reset();
        path.moveTo(26.5f, 5.35f);
        path.lineTo(26.5f, 5.2f);
        path.lineTo(24.5f, 18.75f);
        path.lineTo(28.6f, 18.75f);
        path.lineTo(26.5f, 5.35f);
        path.close();
    }

    private static void draw_30(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_29(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 279.1f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_30(Path path)
    {
        path.reset();
        path.moveTo(37.5f, 29.45f);
        path.lineTo(34.35f, 29.45f);
        path.lineTo(34.35f, 33.45f);
        path.lineTo(30.35f, 33.45f);
        path.lineTo(30.35f, 36.5f);
        path.lineTo(34.35f, 36.5f);
        path.lineTo(34.35f, 40.6f);
        path.lineTo(37.5f, 40.6f);
        path.lineTo(37.5f, 36.5f);
        path.lineTo(41.5f, 36.5f);
        path.lineTo(41.5f, 33.45f);
        path.lineTo(37.5f, 33.45f);
        path.lineTo(37.5f, 29.45f);
        path.close();
    }

    private static void draw_31(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_30(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 279.1f));
        paint.setColor(Color.argb(255, 246, 176, 150));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_31(Path path)
    {
        path.reset();
        path.moveTo(4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.15f, 19.7f, -9.83477e-08f, 25.15f);
        path.lineTo(-9.83477e-08f, 25.9f);
        path.lineTo(-9.83477e-08f, 25.95f);
        path.lineTo(-9.83477e-08f, 26.8f);
        path.lineTo(0.0499999f, 27.5f);
        path.lineTo(0.0499999f, 28.25f);
        path.quadTo(0.2f, 30.55f, 0.8f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 1.1915e-05f);
        path.lineTo(23.95f, 0.0500119f);
        path.lineTo(21.35f, 0.350012f);
        path.quadTo(19.05f, 0.700012f, 16.9f, 1.50001f);
        path.lineTo(14.35f, 2.60001f);
        path.quadTo(13.5f, 3.05001f, 12.6f, 3.65001f);
        path.lineTo(9.34999f, 6.00001f);
        path.lineTo(7.84999f, 7.30001f);
        path.lineTo(7.59999f, 7.60001f);
        path.quadTo(7.49999f, 7.65001f, 7.34999f, 7.80001f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.close();
    }

    private static void draw_32(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_31(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 61, 196, 190));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_32(Path path)
    {
        path.reset();
        path.moveTo(23.2f, 26.25f);
        path.lineTo(23.2f, 44.85f);
        path.quadTo(23.2f, 45.55f, 24.65f, 45.55f);
        path.lineTo(27.3f, 45.55f);
        path.quadTo(28.75f, 45.55f, 28.75f, 44.85f);
        path.lineTo(28.75f, 26.25f);
        path.quadTo(28.75f, 25.7f, 27.3f, 25.7f);
        path.lineTo(24.65f, 25.7f);
        path.quadTo(23.2f, 25.7f, 23.2f, 26.25f);
        path.close();
    }

    private static void draw_33(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_32(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 121, 216, 212));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_33(Path path)
    {
        path.reset();
        path.moveTo(36.2f, 5.7f);
        path.lineTo(15.9f, 5.7f);
        path.quadTo(14.45f, 5.7f, 14.45f, 7.15f);
        path.lineTo(14.45f, 35.0f);
        path.quadTo(14.45f, 36.5f, 15.9f, 36.5f);
        path.lineTo(36.2f, 36.5f);
        path.quadTo(37.65f, 36.5f, 37.65f, 35.0f);
        path.lineTo(37.65f, 7.15f);
        path.quadTo(37.65f, 5.7f, 36.2f, 5.7f);
        path.close();
    }

    private static void draw_34(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_33(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_34(Path path)
    {
        path.reset();
        path.moveTo(5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.8f, 47.15f);
        path.lineTo(41.25f, 47.15f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(46.85f, 41.6f);
        path.lineTo(5.14999f, 41.6f);
        path.lineTo(5.25f, 41.75f);
        path.close();
    }

    private static void draw_35(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_34(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 121, 216, 212));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_35(Path path)
    {
        path.reset();
        path.moveTo(22.45f, 40.4f);
        path.quadTo(20.7f, 40.4f, 20.7f, 42.1f);
        path.lineTo(20.7f, 45.8f);
        path.quadTo(20.7f, 47.55f, 22.45f, 47.55f);
        path.lineTo(29.55f, 47.55f);
        path.quadTo(31.25f, 47.55f, 31.25f, 45.8f);
        path.lineTo(31.25f, 42.1f);
        path.quadTo(31.25f, 40.4f, 29.55f, 40.4f);
        path.lineTo(22.45f, 40.4f);
        path.close();
    }

    private static void draw_36(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_35(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_36(Path path)
    {
        path.reset();
        path.moveTo(17.6f, 28.0f);
        path.quadTo(16.8f, 28.8f, 16.8f, 29.9f);
        path.quadTo(16.8f, 31.0f, 17.6f, 31.8f);
        path.quadTo(18.4f, 32.6f, 19.5f, 32.6f);
        path.quadTo(20.55f, 32.6f, 21.35f, 31.8f);
        path.quadTo(22.2f, 31.0f, 22.2f, 29.9f);
        path.quadTo(22.2f, 28.8f, 21.35f, 28.0f);
        path.quadTo(20.55f, 27.2f, 19.5f, 27.2f);
        path.quadTo(18.4f, 27.2f, 17.6f, 28.0f);
        path.close();
    }

    private static void draw_37(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_36(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 121, 216, 212));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_37(Path path)
    {
        path.reset();
        path.moveTo(36.05f, 24.5f);
        path.lineTo(16.05f, 24.5f);
        path.lineTo(15.55f, 24.65f);
        path.lineTo(15.4f, 25.15f);
        path.quadTo(15.4f, 25.45f, 15.55f, 25.6f);
        path.quadTo(15.75f, 25.85f, 16.05f, 25.85f);
        path.lineTo(36.05f, 25.85f);
        path.lineTo(36.5f, 25.6f);
        path.lineTo(36.65f, 25.15f);
        path.lineTo(36.5f, 24.65f);
        path.quadTo(36.35f, 24.5f, 36.05f, 24.5f);
        path.close();
    }

    private static void draw_38(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_37(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 279.2f));
        paint.setColor(Color.argb(255, 121, 216, 212));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_39(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_19(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 176.25f));
        paint.setColor(Color.argb(255, 61, 196, 190));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_38(Path path)
    {
        path.reset();
        path.moveTo(34.2f, 10.15f);
        path.lineTo(13.8f, 10.15f);
        path.quadTo(11.8f, 10.2f, 11.8f, 12.2f);
        path.lineTo(11.8f, 41.25f);
        path.quadTo(11.8f, 43.25f, 13.8f, 43.35f);
        path.lineTo(34.2f, 43.35f);
        path.quadTo(36.2f, 43.25f, 36.2f, 41.25f);
        path.lineTo(36.2f, 12.2f);
        path.quadTo(36.2f, 10.2f, 34.2f, 10.15f);
        path.close();
    }

    private static void draw_40(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_38(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 176.25f));
        paint.setColor(Color.argb(255, 255, 102, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_39(Path path)
    {
        path.reset();
        path.moveTo(34.2f, 10.15f);
        path.quadTo(36.2f, 10.2f, 36.2f, 12.2f);
        path.lineTo(36.2f, 41.25f);
        path.quadTo(36.2f, 43.25f, 34.2f, 43.35f);
        path.lineTo(38.75f, 43.35f);
        path.quadTo(40.85f, 43.35f, 40.85f, 41.25f);
        path.lineTo(40.85f, 12.2f);
        path.quadTo(40.85f, 10.15f, 38.75f, 10.15f);
        path.lineTo(34.2f, 10.15f);
        path.close();
    }

    private static void draw_41(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_39(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 176.25f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_40(Path path)
    {
        path.reset();
        path.moveTo(42.4f, 25.4f);
        path.quadTo(41.75f, 24.75f, 40.95f, 24.75f);
        path.lineTo(33.95f, 24.75f);
        path.quadTo(33.1f, 24.75f, 32.45f, 25.4f);
        path.quadTo(31.9f, 25.95f, 31.9f, 26.85f);
        path.lineTo(31.9f, 27.35f);
        path.quadTo(31.9f, 28.15f, 32.45f, 28.8f);
        path.quadTo(33.1f, 29.4f, 33.95f, 29.4f);
        path.lineTo(40.95f, 29.4f);
        path.quadTo(41.75f, 29.4f, 42.4f, 28.8f);
        path.quadTo(43.0f, 28.15f, 43.0f, 27.35f);
        path.lineTo(43.0f, 26.85f);
        path.quadTo(43.0f, 25.95f, 42.4f, 25.4f);
        path.close();
    }

    private static void draw_42(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_40(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 176.25f));
        paint.setColor(Color.argb(255, 255, 153, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_41(Path path)
    {
        path.reset();
        path.moveTo(32.05f, 27.35f);
        path.quadTo(32.05f, 28.0f, 32.45f, 28.45f);
        path.lineTo(33.65f, 28.9f);
        path.quadTo(34.3f, 28.9f, 34.75f, 28.45f);
        path.quadTo(35.25f, 28.0f, 35.25f, 27.35f);
        path.quadTo(35.25f, 26.7f, 34.75f, 26.2f);
        path.quadTo(34.3f, 25.75f, 33.65f, 25.75f);
        path.quadTo(33.0f, 25.75f, 32.45f, 26.2f);
        path.quadTo(32.05f, 26.7f, 32.05f, 27.35f);
        path.close();
    }

    private static void draw_43(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_41(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 176.25f));
        paint.setColor(Color.argb(255, 255, 102, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_44(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_31(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 176.25f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_42(Path path)
    {
        path.reset();
        path.moveTo(41.5f, 11.0f);
        path.lineTo(35.25f, 17.6f);
        path.lineTo(44.0f, 26.4f);
        path.lineTo(50.35f, 19.75f);
        path.lineTo(49.45f, 18.95f);
        path.lineTo(43.55f, 17.45f);
        path.lineTo(44.5f, 13.95f);
        path.lineTo(41.5f, 11.0f);
        path.close();
        path.moveTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(46.4f, 9.9f);
        path.lineTo(44.5f, 17.0f);
        path.lineTo(50.95f, 18.6f);
        path.lineTo(50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.close();
        path.moveTo(25.6f, 23.95f);
        path.lineTo(19.75f, 31.6f);
        path.lineTo(31.25f, 31.65f);
        path.lineTo(33.0f, 29.35f);
        path.lineTo(25.6f, 23.95f);
        path.close();
    }

    private static void draw_45(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_42(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 176.25f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_43(Path path)
    {
        path.reset();
        path.moveTo(24.3f, 4.45f);
        path.lineTo(22.1f, 3.35f);
        path.lineTo(6.65f, 30.0f);
        path.lineTo(8.8f, 31.25f);
        path.lineTo(8.75f, 31.15f);
        path.lineTo(8.9f, 31.1f);
        path.lineTo(24.3f, 4.45f);
        path.close();
        path.moveTo(51.1f, 33.1f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.6f, 30.5f);
        path.lineTo(40.2f, 33.5f);
        path.lineTo(40.2f, 31.45f);
        path.lineTo(9.2f, 31.45f);
        path.lineTo(9.05f, 31.5f);
        path.lineTo(9.05f, 40.15f);
        path.lineTo(4.1f, 40.15f);
        path.lineTo(5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(6.0f, 42.6f);
        path.lineTo(9.05f, 42.6f);
        path.lineTo(9.05f, 45.75f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.2f, 36.05f);
        path.lineTo(51.1f, 33.1f);
        path.close();
    }

    private static void draw_46(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_43(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 176.25f));
        paint.setColor(Color.argb(255, 228, 225, 216));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_47(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_19(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 176.25f));
        paint.setColor(Color.argb(255, 118, 83, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_44(Path path)
    {
        path.reset();
        path.moveTo(42.75f, 18.3f);
        path.lineTo(38.15f, 18.3f);
        path.lineTo(38.15f, 41.0f);
        path.lineTo(22.3f, 41.0f);
        path.lineTo(22.3f, 45.1f);
        path.lineTo(42.75f, 45.1f);
        path.lineTo(42.75f, 18.3f);
        path.close();
        path.moveTo(36.7f, 12.6f);
        path.lineTo(31.75f, 12.6f);
        path.lineTo(31.75f, 34.5f);
        path.lineTo(16.25f, 34.5f);
        path.lineTo(16.25f, 39.4f);
        path.lineTo(36.7f, 39.4f);
        path.lineTo(36.7f, 12.6f);
        path.close();
        path.moveTo(30.2f, 6.2f);
        path.lineTo(9.75f, 6.2f);
        path.lineTo(9.75f, 33.0f);
        path.lineTo(30.2f, 33.0f);
        path.lineTo(30.2f, 6.2f);
        path.close();
    }

    private static void draw_48(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_44(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 176.25f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_45(Path path)
    {
        path.reset();
        path.moveTo(7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.15f, 19.7f, -9.83477e-08f, 25.15f);
        path.lineTo(-9.83477e-08f, 25.9f);
        path.lineTo(-9.83477e-08f, 25.95f);
        path.lineTo(-9.83477e-08f, 26.8f);
        path.lineTo(0.0499999f, 27.5f);
        path.lineTo(0.0499999f, 28.25f);
        path.quadTo(0.2f, 30.55f, 0.8f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.lineTo(15.95f, 50.05f);
        path.lineTo(18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.lineTo(36.05f, 50.05f);
        path.lineTo(40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80002f);
        path.lineTo(44.35f, 7.60002f);
        path.lineTo(44.05f, 7.30002f);
        path.lineTo(42.6f, 6.00002f);
        path.quadTo(39.1f, 3.05002f, 35.1f, 1.50002f);
        path.quadTo(32.9f, 0.700016f, 30.55f, 0.350016f);
        path.lineTo(25.95f, 1.57297e-05f);
        path.lineTo(23.95f, 0.0500157f);
        path.lineTo(21.35f, 0.350016f);
        path.quadTo(19.05f, 0.700016f, 16.9f, 1.50002f);
        path.lineTo(14.35f, 2.60002f);
        path.quadTo(13.5f, 3.05002f, 12.6f, 3.65002f);
        path.lineTo(9.34999f, 6.00002f);
        path.lineTo(7.84999f, 7.30002f);
        path.lineTo(7.59999f, 7.60002f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.close();
    }

    private static void draw_49(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_45(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 176.25f));
        paint.setColor(Color.argb(255, 61, 196, 190));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_46(Path path)
    {
        path.reset();
        path.moveTo(27.0f, 8.45f);
        path.lineTo(26.25f, 7.15f);
        path.lineTo(25.7f, 8.45f);
        path.lineTo(25.7f, 20.45f);
        path.lineTo(26.8f, 20.45f);
        path.lineTo(27.0f, 8.45f);
        path.close();
    }

    private static void draw_50(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_46(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_47(Path path)
    {
        path.reset();
        path.moveTo(27.0f, 8.45f);
        path.lineTo(26.8f, 20.45f);
        path.lineTo(25.7f, 20.45f);
        path.lineTo(25.7f, 8.45f);
        path.lineTo(17.2f, 24.15f);
        path.quadTo(22.25f, 26.9f, 21.25f, 31.6f);
        path.lineTo(31.3f, 31.6f);
        path.quadTo(30.85f, 26.65f, 35.25f, 24.0f);
        path.lineTo(27.0f, 8.45f);
        path.close();
    }

    private static void draw_51(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_47(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 176.25f));
        paint.setColor(Color.argb(255, 241, 238, 229));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_48(Path path)
    {
        path.reset();
        path.moveTo(21.25f, 31.6f);
        path.quadTo(20.0f, 41.95f, 19.75f, 51.3f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.1f, 51.1f);
        path.quadTo(32.9f, 41.3f, 31.3f, 31.6f);
        path.lineTo(21.25f, 31.6f);
        path.close();
    }

    private static void draw_52(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_48(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 176.25f));
        paint.setColor(Color.argb(255, 234, 147, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_49(Path path)
    {
        path.reset();
        path.moveTo(27.7f, 19.6f);
        path.quadTo(27.15f, 19.1f, 26.25f, 19.1f);
        path.quadTo(25.3f, 19.1f, 24.75f, 19.6f);
        path.quadTo(24.15f, 20.2f, 24.15f, 21.0f);
        path.quadTo(24.15f, 21.9f, 24.75f, 22.4f);
        path.quadTo(25.3f, 23.0f, 26.25f, 23.0f);
        path.quadTo(27.15f, 23.0f, 27.7f, 22.4f);
        path.quadTo(28.3f, 21.9f, 28.3f, 21.0f);
        path.quadTo(28.3f, 20.2f, 27.7f, 19.6f);
        path.close();
    }

    private static void draw_53(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_49(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_50(Path path)
    {
        path.reset();
        path.moveTo(16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35f, 6.0f);
        path.lineTo(7.85f, 7.3f);
        path.lineTo(7.6f, 7.6f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.149999f, 19.7f, -5.75185e-07f, 25.15f);
        path.lineTo(-5.75185e-07f, 25.9f);
        path.lineTo(-5.75185e-07f, 25.95f);
        path.lineTo(-5.75185e-07f, 26.8f);
        path.lineTo(0.0499994f, 27.5f);
        path.lineTo(0.0499994f, 28.25f);
        path.quadTo(0.199999f, 30.55f, 0.799999f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 1.1915e-05f);
        path.lineTo(23.95f, 0.0500119f);
        path.lineTo(21.35f, 0.350012f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.close();
    }

    private static void draw_54(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_50(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_51(Path path)
    {
        path.reset();
        path.moveTo(34.65f, 35.25f);
        path.lineTo(42.05f, 35.25f);
        path.lineTo(42.05f, 19.9f);
        path.quadTo(42.05f, 18.45f, 40.65f, 18.45f);
        path.lineTo(11.6f, 18.45f);
        path.quadTo(10.15f, 18.45f, 10.15f, 19.9f);
        path.lineTo(10.15f, 35.25f);
        path.lineTo(17.75f, 35.25f);
        path.lineTo(17.75f, 29.35f);
        path.lineTo(34.65f, 29.35f);
        path.lineTo(34.65f, 35.25f);
        path.close();
        path.moveTo(40.35f, 23.55f);
        path.lineTo(11.9f, 23.55f);
        path.lineTo(11.9f, 22.45f);
        path.lineTo(40.35f, 22.45f);
        path.lineTo(40.35f, 23.55f);
        path.close();
    }

    private static void draw_55(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_51(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 121, 216, 212));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_52(Path path)
    {
        path.reset();
        path.moveTo(34.65f, 7.65f);
        path.lineTo(17.75f, 7.65f);
        path.lineTo(17.75f, 17.05f);
        path.lineTo(34.65f, 17.05f);
        path.lineTo(34.65f, 7.65f);
        path.close();
        path.moveTo(34.65f, 35.25f);
        path.lineTo(34.65f, 29.35f);
        path.lineTo(17.75f, 29.35f);
        path.lineTo(17.75f, 35.25f);
        path.lineTo(17.75f, 45.15f);
        path.lineTo(34.65f, 45.15f);
        path.lineTo(34.65f, 35.25f);
        path.close();
    }

    private static void draw_56(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_52(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_53(Path path)
    {
        path.reset();
        path.moveTo(40.35f, 23.55f);
        path.lineTo(40.35f, 22.45f);
        path.lineTo(11.9f, 22.45f);
        path.lineTo(11.9f, 23.55f);
        path.lineTo(40.35f, 23.55f);
        path.close();
    }

    private static void draw_57(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_53(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_54(Path path)
    {
        path.reset();
        path.moveTo(32.2f, 31.65f);
        path.lineTo(20.3f, 31.65f);
        path.lineTo(20.3f, 32.1f);
        path.lineTo(32.2f, 32.1f);
        path.lineTo(32.2f, 31.65f);
        path.close();
    }

    private static void draw_58(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_54(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_55(Path path)
    {
        path.reset();
        path.moveTo(32.2f, 34.9f);
        path.lineTo(32.2f, 34.45f);
        path.lineTo(20.3f, 34.45f);
        path.lineTo(20.3f, 34.9f);
        path.lineTo(32.2f, 34.9f);
        path.close();
    }

    private static void draw_59(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_55(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_56(Path path)
    {
        path.reset();
        path.moveTo(20.3f, 37.7f);
        path.lineTo(32.2f, 37.7f);
        path.lineTo(32.2f, 37.2f);
        path.lineTo(20.3f, 37.2f);
        path.lineTo(20.3f, 37.7f);
        path.close();
    }

    private static void draw_60(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_56(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_57(Path path)
    {
        path.reset();
        path.moveTo(20.3f, 40.05f);
        path.lineTo(20.3f, 40.5f);
        path.lineTo(32.2f, 40.5f);
        path.lineTo(32.2f, 40.05f);
        path.lineTo(20.3f, 40.05f);
        path.close();
    }

    private static void draw_61(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_57(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_58(Path path)
    {
        path.reset();
        path.moveTo(32.2f, 42.85f);
        path.lineTo(20.3f, 42.85f);
        path.lineTo(20.3f, 43.25f);
        path.lineTo(32.2f, 43.25f);
        path.lineTo(32.2f, 42.85f);
        path.close();
    }

    private static void draw_62(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_58(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_59(Path path)
    {
        path.reset();
        path.moveTo(50.05f, 15.85f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(46.35f, 9.85f);
        path.lineTo(45.1f, 8.4f);
        path.lineTo(44.6f, 7.8f);
        path.lineTo(44.35f, 7.6f);
        path.lineTo(44.05f, 7.3f);
        path.lineTo(43.7f, 7.0f);
        path.lineTo(42.6f, 6.0f);
        path.quadTo(39.1f, 3.05f, 35.1f, 1.5f);
        path.quadTo(32.9f, 0.7f, 30.55f, 0.35f);
        path.lineTo(25.95f, 4.70877e-07f);
        path.lineTo(23.95f, 0.0500005f);
        path.lineTo(21.35f, 0.35f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35001f, 6.0f);
        path.lineTo(7.85001f, 7.3f);
        path.lineTo(7.60001f, 7.6f);
        path.quadTo(7.50001f, 7.65f, 7.35001f, 7.8f);
        path.quadTo(5.70001f, 9.55f, 4.35001f, 11.45f);
        path.quadTo(3.15001f, 13.2f, 2.35001f, 15.1f);
        path.quadTo(0.150005f, 19.7f, 5.14686e-06f, 25.15f);
        path.lineTo(5.14686e-06f, 25.9f);
        path.lineTo(5.14686e-06f, 25.95f);
        path.lineTo(5.14686e-06f, 26.8f);
        path.lineTo(0.0500051f, 27.5f);
        path.lineTo(0.0500051f, 28.25f);
        path.quadTo(0.200005f, 30.55f, 0.800005f, 32.7f);
        path.quadTo(1.50001f, 35.55f, 2.90001f, 38.1f);
        path.quadTo(3.85001f, 40.0f, 5.25001f, 41.75f);
        path.lineTo(5.45001f, 42.05f);
        path.lineTo(5.85001f, 42.45f);
        path.lineTo(7.60001f, 44.35f);
        path.lineTo(7.65001f, 44.45f);
        path.lineTo(8.40001f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(43.7f, 45.0f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.15f, 43.55f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(47.95f, 40.05f);
        path.lineTo(35.6f, 33.4f);
        path.lineTo(35.6f, 23.15f);
        path.lineTo(50.05f, 15.85f);
        path.close();
    }

    private static void draw_63(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_59(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_60(Path path)
    {
        path.reset();
        path.moveTo(47.95f, 40.05f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.6f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(50.05f, 15.85f);
        path.lineTo(35.6f, 23.15f);
        path.lineTo(35.6f, 33.4f);
        path.lineTo(47.95f, 40.05f);
        path.close();
    }

    private static void draw_64(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_60(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 239, 209, 136));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_61(Path path)
    {
        path.reset();
        path.moveTo(18.4f, 15.75f);
        path.lineTo(25.15f, 15.75f);
        path.lineTo(25.15f, 22.55f);
        path.lineTo(24.95f, 23.0f);
        path.lineTo(24.75f, 23.15f);
        path.lineTo(24.2f, 23.0f);
        path.quadTo(21.8f, 22.55f, 20.05f, 20.8f);
        path.quadTo(18.3f, 19.05f, 17.85f, 16.8f);
        path.lineTo(17.8f, 16.25f);
        path.quadTo(17.8f, 16.05f, 17.95f, 15.9f);
        path.quadTo(18.15f, 15.75f, 18.4f, 15.75f);
        path.close();
        path.moveTo(17.85f, 13.25f);
        path.quadTo(18.3f, 10.95f, 20.05f, 9.2f);
        path.quadTo(21.8f, 7.45f, 24.2f, 7.05f);
        path.lineTo(24.75f, 7.0f);
        path.lineTo(24.95f, 7.05f);
        path.lineTo(25.15f, 7.6f);
        path.lineTo(25.15f, 14.2f);
        path.lineTo(18.4f, 14.2f);
        path.lineTo(17.95f, 14.1f);
        path.lineTo(17.8f, 13.8f);
        path.lineTo(17.85f, 13.25f);
        path.close();
        path.moveTo(18.9f, 8.1f);
        path.quadTo(16.05f, 10.95f, 16.05f, 15.05f);
        path.quadTo(16.05f, 19.1f, 18.9f, 21.9f);
        path.quadTo(21.8f, 24.8f, 25.9f, 24.8f);
        path.quadTo(29.9f, 24.8f, 32.75f, 21.9f);
        path.quadTo(35.7f, 19.1f, 35.7f, 15.05f);
        path.quadTo(35.7f, 10.95f, 32.75f, 8.1f);
        path.quadTo(29.9f, 5.25f, 25.9f, 5.25f);
        path.quadTo(21.8f, 5.25f, 18.9f, 8.1f);
        path.close();
        path.moveTo(27.45f, 7.0f);
        path.quadTo(29.85f, 7.35f, 31.65f, 9.2f);
        path.quadTo(33.4f, 10.95f, 33.95f, 13.25f);
        path.lineTo(34.0f, 13.8f);
        path.lineTo(33.8f, 14.1f);
        path.lineTo(33.4f, 14.2f);
        path.lineTo(26.5f, 14.2f);
        path.lineTo(26.5f, 7.6f);
        path.lineTo(26.7f, 7.05f);
        path.lineTo(27.0f, 6.9f);
        path.lineTo(27.15f, 6.9f);
        path.lineTo(27.45f, 7.0f);
        path.close();
        path.moveTo(33.4f, 15.75f);
        path.lineTo(33.8f, 15.9f);
        path.lineTo(34.0f, 16.25f);
        path.lineTo(33.95f, 16.8f);
        path.quadTo(33.4f, 19.05f, 31.65f, 20.8f);
        path.quadTo(29.85f, 22.6f, 27.6f, 23.05f);
        path.lineTo(27.0f, 23.15f);
        path.lineTo(26.7f, 23.0f);
        path.lineTo(26.5f, 22.55f);
        path.lineTo(26.5f, 15.75f);
        path.lineTo(33.4f, 15.75f);
        path.close();
    }

    private static void draw_65(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_61(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_62(Path path)
    {
        path.reset();
        path.moveTo(21.35f, 8.55f);
        path.quadTo(21.6f, 8.3f, 21.8f, 8.25f);
        path.quadTo(23.8f, 6.85f, 26.25f, 6.85f);
        path.quadTo(28.75f, 6.85f, 30.7f, 8.25f);
        path.lineTo(31.1f, 8.6f);
        path.lineTo(31.25f, 8.9f);
        path.lineTo(31.0f, 9.25f);
        path.lineTo(26.25f, 14.0f);
        path.lineTo(21.5f, 9.25f);
        path.lineTo(21.35f, 8.8f);
        path.lineTo(21.35f, 8.55f);
        path.close();
        path.moveTo(19.6f, 10.3f);
        path.lineTo(20.0f, 10.2f);
        path.lineTo(20.45f, 10.35f);
        path.lineTo(25.15f, 15.1f);
        path.lineTo(20.35f, 19.9f);
        path.lineTo(20.0f, 20.15f);
        path.lineTo(19.7f, 20.0f);
        path.lineTo(19.4f, 19.55f);
        path.quadTo(18.0f, 17.6f, 18.1f, 15.05f);
        path.quadTo(18.1f, 12.55f, 19.35f, 10.7f);
        path.lineTo(19.6f, 10.3f);
        path.close();
        path.moveTo(21.35f, 20.95f);
        path.lineTo(26.2f, 16.1f);
        path.lineTo(31.0f, 20.95f);
        path.lineTo(31.15f, 21.35f);
        path.lineTo(31.1f, 21.75f);
        path.quadTo(30.85f, 21.8f, 30.65f, 22.05f);
        path.quadTo(28.75f, 23.2f, 26.25f, 23.2f);
        path.quadTo(23.7f, 23.25f, 21.75f, 22.05f);
        path.lineTo(21.35f, 21.65f);
        path.lineTo(21.15f, 21.3f);
        path.lineTo(21.35f, 20.95f);
        path.close();
        path.moveTo(19.25f, 8.15f);
        path.quadTo(16.4f, 11.0f, 16.4f, 15.1f);
        path.quadTo(16.4f, 19.2f, 19.25f, 22.05f);
        path.quadTo(22.2f, 24.95f, 26.2f, 24.9f);
        path.quadTo(30.3f, 24.9f, 33.1f, 22.05f);
        path.quadTo(36.05f, 19.1f, 36.05f, 15.05f);
        path.quadTo(36.05f, 11.1f, 33.1f, 8.15f);
        path.quadTo(30.3f, 5.3f, 26.25f, 5.25f);
        path.quadTo(22.2f, 5.25f, 19.25f, 8.15f);
        path.close();
        path.moveTo(33.0f, 10.5f);
        path.quadTo(34.45f, 12.55f, 34.45f, 15.05f);
        path.quadTo(34.45f, 17.5f, 33.1f, 19.55f);
        path.lineTo(32.85f, 20.0f);
        path.lineTo(32.55f, 20.0f);
        path.lineTo(32.1f, 19.85f);
        path.lineTo(27.3f, 15.05f);
        path.lineTo(32.05f, 10.3f);
        path.lineTo(32.4f, 10.05f);
        path.lineTo(32.85f, 10.2f);
        path.lineTo(32.9f, 10.3f);
        path.lineTo(33.0f, 10.5f);
        path.close();
    }

    private static void draw_66(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_62(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_63(Path path)
    {
        path.reset();
        path.moveTo(8.45f, 19.6f);
        path.quadTo(3.55f, 19.6f, 3.55f, 24.5f);
        path.lineTo(3.55f, 31.8f);
        path.quadTo(3.55f, 36.7f, 8.45f, 36.7f);
        path.lineTo(27.6f, 36.7f);
        path.quadTo(32.45f, 36.7f, 32.45f, 31.8f);
        path.lineTo(37.35f, 34.5f);
        path.lineTo(37.35f, 22.1f);
        path.lineTo(32.45f, 24.5f);
        path.quadTo(32.45f, 19.6f, 27.6f, 19.6f);
        path.lineTo(8.45f, 19.6f);
        path.close();
    }

    private static void draw_67(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_63(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 102, 102, 102));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_64(Path path)
    {
        path.reset();
        path.moveTo(26.25f, 13.15f);
        path.lineTo(26.2f, 13.15f);
        path.quadTo(25.4f, 13.15f, 24.8f, 13.7f);
        path.quadTo(24.2f, 14.2f, 24.2f, 15.05f);
        path.lineTo(24.2f, 26.35f);
        path.quadTo(24.2f, 27.15f, 24.8f, 27.65f);
        path.quadTo(25.4f, 28.25f, 26.2f, 28.25f);
        path.lineTo(26.25f, 28.25f);
        path.quadTo(27.05f, 28.25f, 27.65f, 27.65f);
        path.quadTo(28.25f, 27.15f, 28.25f, 26.35f);
        path.lineTo(28.25f, 15.05f);
        path.quadTo(28.25f, 14.2f, 27.65f, 13.7f);
        path.quadTo(27.05f, 13.15f, 26.25f, 13.15f);
        path.close();
    }

    private static void draw_68(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_64(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 102, 102, 102));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_65(Path path)
    {
        path.reset();
        path.moveTo(27.35f, 15.3f);
        path.quadTo(27.35f, 14.8f, 27.0f, 14.45f);
        path.quadTo(26.65f, 14.1f, 26.2f, 14.1f);
        path.quadTo(25.75f, 14.1f, 25.4f, 14.45f);
        path.quadTo(25.0f, 14.8f, 25.0f, 15.3f);
        path.quadTo(25.0f, 15.75f, 25.4f, 16.1f);
        path.quadTo(25.75f, 16.5f, 26.2f, 16.5f);
        path.quadTo(26.65f, 16.5f, 27.0f, 16.1f);
        path.quadTo(27.35f, 15.75f, 27.35f, 15.3f);
        path.close();
    }

    private static void draw_69(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_65(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 176.25f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_66(Path path)
    {
        path.reset();
        path.moveTo(25.95f, 0.0f);
        path.lineTo(23.95f, 0.05f);
        path.lineTo(21.35f, 0.35f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35f, 6.0f);
        path.lineTo(7.85f, 7.3f);
        path.lineTo(7.6f, 7.6f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.150001f, 19.7f, 1.33216e-06f, 25.15f);
        path.lineTo(1.33216e-06f, 25.9f);
        path.lineTo(1.33216e-06f, 25.95f);
        path.lineTo(1.33216e-06f, 26.8f);
        path.lineTo(0.0500013f, 27.5f);
        path.lineTo(0.0500013f, 28.25f);
        path.quadTo(0.200001f, 30.55f, 0.800001f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 0.0f);
        path.close();
    }

    private static void draw_70(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_66(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_67(Path path)
    {
        path.reset();
        path.moveTo(40.3f, 28.4f);
        path.lineTo(40.3f, 10.7f);
        path.lineTo(12.45f, 10.7f);
        path.lineTo(12.45f, 28.4f);
        path.lineTo(40.3f, 28.4f);
        path.close();
        path.moveTo(6.1f, 36.75f);
        path.lineTo(6.1f, 39.75f);
        path.lineTo(46.85f, 39.75f);
        path.lineTo(46.85f, 36.75f);
        path.lineTo(31.8f, 36.75f);
        path.lineTo(20.65f, 36.75f);
        path.lineTo(6.1f, 36.75f);
        path.close();
    }

    private static void draw_71(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_67(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 68, 68, 68));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_68(Path path)
    {
        path.reset();
        path.moveTo(46.85f, 36.75f);
        path.lineTo(40.3f, 28.4f);
        path.lineTo(12.45f, 28.4f);
        path.lineTo(6.1f, 36.75f);
        path.lineTo(20.65f, 36.75f);
        path.lineTo(21.15f, 34.95f);
        path.lineTo(15.75f, 34.95f);
        path.lineTo(10.35f, 34.95f);
        path.lineTo(11.8f, 32.6f);
        path.lineTo(12.75f, 31.15f);
        path.lineTo(13.65f, 29.75f);
        path.lineTo(17.95f, 29.75f);
        path.lineTo(22.3f, 29.75f);
        path.lineTo(26.25f, 29.75f);
        path.lineTo(30.4f, 29.75f);
        path.lineTo(34.65f, 29.75f);
        path.lineTo(38.95f, 29.75f);
        path.lineTo(39.75f, 31.15f);
        path.lineTo(40.8f, 32.6f);
        path.lineTo(42.25f, 34.95f);
        path.lineTo(36.85f, 34.95f);
        path.lineTo(31.45f, 34.95f);
        path.lineTo(31.8f, 36.75f);
        path.lineTo(46.85f, 36.75f);
        path.close();
    }

    private static void draw_72(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_68(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_69(Path path)
    {
        path.reset();
        path.moveTo(36.85f, 34.95f);
        path.lineTo(42.25f, 34.95f);
        path.lineTo(40.8f, 32.6f);
        path.lineTo(35.9f, 32.6f);
        path.lineTo(35.25f, 31.15f);
        path.lineTo(39.75f, 31.15f);
        path.lineTo(38.95f, 29.75f);
        path.lineTo(34.65f, 29.75f);
        path.lineTo(35.25f, 31.15f);
        path.lineTo(30.7f, 31.15f);
        path.lineTo(31.0f, 32.6f);
        path.lineTo(35.9f, 32.6f);
        path.lineTo(36.85f, 34.95f);
        path.close();
        path.moveTo(26.25f, 29.75f);
        path.lineTo(26.25f, 31.15f);
        path.lineTo(30.7f, 31.15f);
        path.lineTo(30.4f, 29.75f);
        path.lineTo(26.25f, 29.75f);
        path.close();
        path.moveTo(31.45f, 34.95f);
        path.lineTo(31.0f, 32.6f);
        path.lineTo(26.25f, 32.6f);
        path.lineTo(26.25f, 31.15f);
        path.lineTo(22.05f, 31.15f);
        path.lineTo(22.3f, 29.75f);
        path.lineTo(17.95f, 29.75f);
        path.lineTo(17.45f, 31.15f);
        path.lineTo(22.05f, 31.15f);
        path.lineTo(21.65f, 32.6f);
        path.lineTo(26.25f, 32.6f);
        path.lineTo(26.25f, 34.95f);
        path.lineTo(31.45f, 34.95f);
        path.close();
        path.moveTo(21.15f, 34.95f);
        path.lineTo(21.65f, 32.6f);
        path.lineTo(16.8f, 32.6f);
        path.lineTo(17.45f, 31.15f);
        path.lineTo(12.75f, 31.15f);
        path.lineTo(11.8f, 32.6f);
        path.lineTo(16.8f, 32.6f);
        path.lineTo(15.75f, 34.95f);
        path.lineTo(21.15f, 34.95f);
        path.close();
    }

    private static void draw_73(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_69(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 113, 113, 113));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_70(Path path)
    {
        path.reset();
        path.moveTo(40.8f, 32.6f);
        path.lineTo(39.75f, 31.15f);
        path.lineTo(35.25f, 31.15f);
        path.lineTo(35.9f, 32.6f);
        path.lineTo(40.8f, 32.6f);
        path.close();
        path.moveTo(31.45f, 34.95f);
        path.lineTo(36.85f, 34.95f);
        path.lineTo(35.9f, 32.6f);
        path.lineTo(31.0f, 32.6f);
        path.lineTo(30.7f, 31.15f);
        path.lineTo(35.25f, 31.15f);
        path.lineTo(34.65f, 29.75f);
        path.lineTo(30.4f, 29.75f);
        path.lineTo(30.7f, 31.15f);
        path.lineTo(26.25f, 31.15f);
        path.lineTo(26.25f, 29.75f);
        path.lineTo(22.3f, 29.75f);
        path.lineTo(22.05f, 31.15f);
        path.lineTo(26.25f, 31.15f);
        path.lineTo(26.25f, 32.6f);
        path.lineTo(31.0f, 32.6f);
        path.lineTo(31.45f, 34.95f);
        path.close();
        path.moveTo(21.15f, 34.95f);
        path.lineTo(26.25f, 34.95f);
        path.lineTo(26.25f, 32.6f);
        path.lineTo(21.65f, 32.6f);
        path.lineTo(22.05f, 31.15f);
        path.lineTo(17.45f, 31.15f);
        path.lineTo(17.95f, 29.75f);
        path.lineTo(13.65f, 29.75f);
        path.lineTo(12.75f, 31.15f);
        path.lineTo(17.45f, 31.15f);
        path.lineTo(16.8f, 32.6f);
        path.lineTo(21.65f, 32.6f);
        path.lineTo(21.15f, 34.95f);
        path.close();
        path.moveTo(11.8f, 32.6f);
        path.lineTo(10.35f, 34.95f);
        path.lineTo(15.75f, 34.95f);
        path.lineTo(16.8f, 32.6f);
        path.lineTo(11.8f, 32.6f);
        path.close();
    }

    private static void draw_74(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_70(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 75, 75, 75));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_71(Path path)
    {
        path.reset();
        path.moveTo(31.8f, 36.75f);
        path.lineTo(31.45f, 34.95f);
        path.lineTo(26.25f, 34.95f);
        path.lineTo(21.15f, 34.95f);
        path.lineTo(20.65f, 36.75f);
        path.lineTo(31.8f, 36.75f);
        path.close();
    }

    private static void draw_75(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_71(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 153, 153, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_72(Path path)
    {
        path.reset();
        path.moveTo(38.15f, 12.6f);
        path.lineTo(30.7f, 12.6f);
        path.lineTo(14.6f, 24.1f);
        path.lineTo(14.6f, 26.8f);
        path.lineTo(18.75f, 26.8f);
        path.lineTo(38.15f, 12.6f);
        path.close();
        path.moveTo(38.15f, 15.6f);
        path.lineTo(38.15f, 14.1f);
        path.lineTo(20.55f, 26.8f);
        path.lineTo(22.75f, 26.8f);
        path.lineTo(38.15f, 15.6f);
        path.close();
    }

    private static void draw_76(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_72(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 240, 174, 160));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_73(Path path)
    {
        path.reset();
        path.moveTo(30.7f, 12.6f);
        path.lineTo(14.6f, 12.6f);
        path.lineTo(14.6f, 24.1f);
        path.lineTo(30.7f, 12.6f);
        path.close();
        path.moveTo(38.15f, 14.1f);
        path.lineTo(38.15f, 12.6f);
        path.lineTo(18.75f, 26.8f);
        path.lineTo(20.55f, 26.8f);
        path.lineTo(38.15f, 14.1f);
        path.close();
        path.moveTo(22.75f, 26.8f);
        path.lineTo(38.15f, 26.8f);
        path.lineTo(38.15f, 15.6f);
        path.lineTo(22.75f, 26.8f);
        path.close();
    }

    private static void draw_77(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_73(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 176.25f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_74(Path path)
    {
        path.reset();
        path.moveTo(40.2f, 47.8f);
        path.quadTo(42.4f, 46.35f, 44.35f, 44.4f);
        path.quadTo(46.4f, 42.35f, 47.85f, 40.15f);
        path.quadTo(49.3f, 37.95f, 50.25f, 35.5f);
        path.quadTo(51.95f, 31.1f, 51.95f, 26.0f);
        path.quadTo(51.95f, 20.9f, 50.25f, 16.55f);
        path.quadTo(49.3f, 14.1f, 47.85f, 11.9f);
        path.quadTo(46.4f, 9.65f, 44.35f, 7.6f);
        path.quadTo(38.45f, 1.7f, 30.55f, 0.399996f);
        path.lineTo(25.95f, -4.37498e-06f);
        path.lineTo(21.35f, 0.399996f);
        path.quadTo(13.5f, 1.7f, 7.6f, 7.6f);
        path.quadTo(-9.53674e-08f, 15.25f, -9.53674e-08f, 26.0f);
        path.quadTo(-9.53674e-08f, 36.8f, 7.6f, 44.4f);
        path.quadTo(9.2f, 46.0f, 10.95f, 47.3f);
        path.lineTo(10.95f, 40.15f);
        path.quadTo(10.95f, 34.1f, 15.1f, 29.8f);
        path.quadTo(16.4f, 28.5f, 17.95f, 27.6f);
        path.lineTo(18.25f, 27.45f);
        path.quadTo(21.15f, 30.25f, 25.3f, 30.4f);
        path.lineTo(25.75f, 30.4f);
        path.quadTo(30.15f, 30.4f, 33.1f, 27.6f);
        path.lineTo(33.25f, 27.7f);
        path.lineTo(35.9f, 29.8f);
        path.quadTo(40.2f, 34.1f, 40.2f, 40.15f);
        path.lineTo(40.2f, 47.8f);
        path.close();
    }

    private static void draw_78(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_74(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 73.3f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_75(Path path)
    {
        path.reset();
        path.moveTo(17.95f, 27.6f);
        path.quadTo(16.4f, 28.5f, 15.1f, 29.8f);
        path.quadTo(10.95f, 34.1f, 10.95f, 40.15f);
        path.lineTo(10.95f, 47.3f);
        path.quadTo(17.45f, 52.0f, 25.95f, 52.0f);
        path.quadTo(34.0f, 52.0f, 40.2f, 47.8f);
        path.lineTo(40.2f, 40.15f);
        path.quadTo(40.2f, 34.1f, 35.9f, 29.8f);
        path.lineTo(33.25f, 27.7f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(17.95f, 27.6f);
        path.close();
    }

    private static void draw_79(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_75(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 73.3f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_76(Path path)
    {
        path.reset();
        path.moveTo(33.25f, 27.7f);
        path.lineTo(33.1f, 27.6f);
        path.quadTo(30.15f, 30.4f, 25.75f, 30.4f);
        path.lineTo(25.3f, 30.4f);
        path.quadTo(21.15f, 30.25f, 18.25f, 27.45f);
        path.lineTo(17.95f, 27.6f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(33.25f, 27.7f);
        path.close();
    }

    private static void draw_80(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_76(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 73.3f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_77(Path path)
    {
        path.reset();
        path.moveTo(27.85f, 30.25f);
        path.lineTo(23.15f, 30.25f);
        path.lineTo(23.8f, 33.6f);
        path.lineTo(22.2f, 39.65f);
        path.lineTo(25.45f, 43.15f);
        path.lineTo(28.65f, 39.65f);
        path.lineTo(27.15f, 33.6f);
        path.lineTo(27.85f, 30.25f);
        path.close();
    }

    private static void draw_81(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_77(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 73.3f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_78(Path path)
    {
        path.reset();
        path.moveTo(14.6f, 19.65f);
        path.quadTo(22.45f, 18.75f, 25.15f, 14.1f);
        path.quadTo(29.4f, 19.35f, 36.65f, 19.65f);
        path.quadTo(36.65f, 15.0f, 33.4f, 11.75f);
        path.quadTo(30.3f, 8.55f, 25.6f, 8.55f);
        path.lineTo(25.15f, 8.55f);
        path.quadTo(20.8f, 8.7f, 17.8f, 11.75f);
        path.quadTo(14.6f, 15.0f, 14.6f, 19.65f);
        path.close();
    }

    private static void draw_82(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_78(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 73.3f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_79(Path path)
    {
        path.reset();
        path.moveTo(36.65f, 19.65f);
        path.quadTo(29.4f, 19.35f, 25.15f, 14.1f);
        path.quadTo(22.45f, 18.75f, 14.6f, 19.65f);
        path.quadTo(14.6f, 24.25f, 17.8f, 27.45f);
        path.lineTo(18.1f, 27.75f);
        path.quadTo(21.0f, 30.5f, 25.15f, 30.65f);
        path.lineTo(25.6f, 30.65f);
        path.quadTo(30.0f, 30.65f, 33.0f, 27.9f);
        path.lineTo(33.4f, 27.45f);
        path.quadTo(36.65f, 24.25f, 36.65f, 19.65f);
        path.close();
    }

    private static void draw_83(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_79(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 19.75f, 73.3f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_80(Path path)
    {
        path.reset();
        path.moveTo(40.2f, 47.8f);
        path.quadTo(42.4f, 46.35f, 44.35f, 44.4f);
        path.quadTo(46.4f, 42.35f, 47.85f, 40.15f);
        path.quadTo(51.95f, 33.95f, 51.95f, 26.0f);
        path.quadTo(51.95f, 18.1f, 47.85f, 11.9f);
        path.quadTo(46.4f, 9.65f, 44.35f, 7.6f);
        path.quadTo(38.45f, 1.7f, 30.55f, 0.399997f);
        path.lineTo(25.95f, -3.42131e-06f);
        path.lineTo(21.35f, 0.399997f);
        path.quadTo(13.5f, 1.7f, 7.6f, 7.6f);
        path.quadTo(-9.53674e-08f, 15.25f, -9.53674e-08f, 26.0f);
        path.quadTo(-9.53674e-08f, 36.8f, 7.6f, 44.4f);
        path.quadTo(9.2f, 46.0f, 10.95f, 47.3f);
        path.lineTo(10.95f, 40.15f);
        path.quadTo(10.95f, 34.1f, 15.1f, 29.8f);
        path.quadTo(16.4f, 28.5f, 17.95f, 27.6f);
        path.lineTo(18.1f, 27.6f);
        path.lineTo(17.95f, 27.45f);
        path.quadTo(14.75f, 24.25f, 14.75f, 19.65f);
        path.lineTo(14.75f, 19.35f);
        path.quadTo(14.8f, 14.9f, 17.95f, 11.75f);
        path.quadTo(20.95f, 8.69999f, 25.3f, 8.54999f);
        path.lineTo(25.75f, 8.54999f);
        path.quadTo(30.4f, 8.54999f, 33.55f, 11.75f);
        path.quadTo(36.7f, 14.9f, 36.75f, 19.35f);
        path.lineTo(36.75f, 19.65f);
        path.quadTo(36.75f, 24.25f, 33.55f, 27.45f);
        path.lineTo(33.35f, 27.75f);
        path.lineTo(35.9f, 29.8f);
        path.quadTo(40.2f, 34.1f, 40.2f, 40.15f);
        path.lineTo(40.2f, 47.8f);
        path.close();
        path.moveTo(33.35f, 27.75f);
        path.lineTo(33.1f, 27.9f);
        path.lineTo(33.05f, 27.95f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(17.95f, 27.6f);
        path.lineTo(17.95f, 37.95f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(33.35f, 37.95f);
        path.lineTo(33.35f, 27.75f);
        path.close();
    }

    private static void draw_84(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_80(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 73.3f));
        paint.setColor(Color.argb(255, 118, 83, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_81(Path path)
    {
        path.reset();
        path.moveTo(14.75f, 19.65f);
        path.quadTo(14.75f, 24.25f, 17.95f, 27.45f);
        path.lineTo(18.1f, 27.6f);
        path.lineTo(18.25f, 27.75f);
        path.quadTo(21.15f, 30.5f, 25.3f, 30.65f);
        path.lineTo(25.75f, 30.65f);
        path.quadTo(30.05f, 30.65f, 33.05f, 27.95f);
        path.lineTo(33.1f, 27.9f);
        path.lineTo(33.35f, 27.75f);
        path.lineTo(33.55f, 27.45f);
        path.quadTo(36.75f, 24.25f, 36.75f, 19.65f);
        path.quadTo(29.55f, 19.35f, 25.3f, 14.1f);
        path.quadTo(22.6f, 18.75f, 14.75f, 19.65f);
        path.close();
    }

    private static void draw_85(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_81(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 73.3f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_82(Path path)
    {
        path.reset();
        path.moveTo(36.75f, 19.65f);
        path.lineTo(36.75f, 19.35f);
        path.quadTo(36.7f, 14.9f, 33.55f, 11.75f);
        path.quadTo(30.4f, 8.55f, 25.75f, 8.55f);
        path.lineTo(25.3f, 8.55f);
        path.quadTo(20.95f, 8.7f, 17.95f, 11.75f);
        path.quadTo(14.8f, 14.9f, 14.75f, 19.35f);
        path.lineTo(14.75f, 19.65f);
        path.quadTo(22.6f, 18.75f, 25.3f, 14.1f);
        path.quadTo(29.55f, 19.35f, 36.75f, 19.65f);
        path.close();
    }

    private static void draw_86(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_82(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 73.3f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_83(Path path)
    {
        path.reset();
        path.moveTo(18.1f, 27.6f);
        path.lineTo(17.95f, 27.6f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(33.05f, 27.95f);
        path.quadTo(30.05f, 30.65f, 25.75f, 30.65f);
        path.lineTo(25.3f, 30.65f);
        path.quadTo(21.15f, 30.5f, 18.25f, 27.75f);
        path.lineTo(18.1f, 27.6f);
        path.close();
    }

    private static void draw_87(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_83(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 73.3f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_84(Path path)
    {
        path.reset();
        path.moveTo(17.95f, 27.6f);
        path.quadTo(16.4f, 28.5f, 15.1f, 29.8f);
        path.quadTo(10.95f, 34.1f, 10.95f, 40.15f);
        path.lineTo(10.95f, 47.3f);
        path.quadTo(17.45f, 52.0f, 25.95f, 52.0f);
        path.quadTo(34.0f, 52.0f, 40.2f, 47.8f);
        path.lineTo(40.2f, 40.15f);
        path.quadTo(40.2f, 34.1f, 35.9f, 29.8f);
        path.lineTo(33.35f, 27.75f);
        path.lineTo(33.35f, 37.95f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(17.95f, 37.95f);
        path.lineTo(17.95f, 27.6f);
        path.close();
    }

    private static void draw_88(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_84(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 96.5f, 73.3f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_85(Path path)
    {
        path.reset();
        path.moveTo(40.2f, 47.8f);
        path.quadTo(42.4f, 46.35f, 44.35f, 44.4f);
        path.quadTo(46.4f, 42.35f, 47.85f, 40.15f);
        path.quadTo(51.95f, 33.95f, 51.95f, 26.0f);
        path.quadTo(51.95f, 18.1f, 47.85f, 11.9f);
        path.quadTo(46.4f, 9.65f, 44.35f, 7.6f);
        path.quadTo(38.45f, 1.7f, 30.55f, 0.399997f);
        path.lineTo(25.95f, -3.42131e-06f);
        path.lineTo(21.35f, 0.399997f);
        path.quadTo(13.5f, 1.7f, 7.6f, 7.6f);
        path.quadTo(-9.53674e-08f, 15.25f, -9.53674e-08f, 26.0f);
        path.quadTo(-9.53674e-08f, 36.8f, 7.6f, 44.4f);
        path.quadTo(9.2f, 46.0f, 10.95f, 47.3f);
        path.lineTo(10.95f, 40.15f);
        path.quadTo(10.95f, 34.1f, 15.1f, 29.8f);
        path.quadTo(16.4f, 28.5f, 17.95f, 27.6f);
        path.lineTo(18.1f, 27.6f);
        path.lineTo(17.95f, 27.45f);
        path.quadTo(14.75f, 24.25f, 14.75f, 19.65f);
        path.lineTo(14.75f, 19.35f);
        path.quadTo(14.8f, 14.9f, 17.95f, 11.75f);
        path.quadTo(20.95f, 8.69999f, 25.3f, 8.54999f);
        path.lineTo(25.75f, 8.54999f);
        path.quadTo(30.4f, 8.54999f, 33.55f, 11.75f);
        path.quadTo(36.7f, 14.9f, 36.75f, 19.35f);
        path.lineTo(36.75f, 19.65f);
        path.quadTo(36.75f, 24.25f, 33.55f, 27.45f);
        path.lineTo(33.35f, 27.75f);
        path.lineTo(35.9f, 29.8f);
        path.quadTo(40.2f, 34.1f, 40.2f, 40.15f);
        path.lineTo(40.2f, 47.8f);
        path.close();
    }

    private static void draw_89(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_85(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 234, 147, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_90(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_82(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_91(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_81(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_86(Path path)
    {
        path.reset();
        path.moveTo(10.95f, 47.3f);
        path.quadTo(17.45f, 52.0f, 25.95f, 52.0f);
        path.quadTo(34.0f, 52.0f, 40.2f, 47.8f);
        path.lineTo(40.2f, 40.15f);
        path.quadTo(40.2f, 34.1f, 35.9f, 29.8f);
        path.lineTo(33.35f, 27.75f);
        path.lineTo(33.1f, 27.9f);
        path.lineTo(33.05f, 27.95f);
        path.lineTo(25.3f, 37.95f);
        path.lineTo(17.95f, 27.6f);
        path.quadTo(16.4f, 28.5f, 15.1f, 29.8f);
        path.quadTo(10.95f, 34.1f, 10.95f, 40.15f);
        path.lineTo(10.95f, 47.3f);
        path.close();
    }

    private static void draw_92(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_86(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 75, 180, 209));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_93(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_83(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_87(Path path)
    {
        path.reset();
        path.moveTo(26.65f, 43.0f);
        path.quadTo(27.15f, 42.5f, 27.15f, 41.7f);
        path.quadTo(27.15f, 40.9f, 26.65f, 40.3f);
        path.quadTo(26.05f, 39.8f, 25.25f, 39.8f);
        path.quadTo(24.45f, 39.8f, 23.95f, 40.3f);
        path.quadTo(23.35f, 40.9f, 23.35f, 41.7f);
        path.quadTo(23.35f, 42.5f, 23.95f, 43.0f);
        path.quadTo(24.45f, 43.6f, 25.25f, 43.6f);
        path.quadTo(26.05f, 43.6f, 26.65f, 43.0f);
        path.close();
    }

    private static void draw_94(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_87(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 234, 147, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_88(Path path)
    {
        path.reset();
        path.moveTo(25.25f, 49.3f);
        path.quadTo(26.05f, 49.3f, 26.65f, 48.7f);
        path.quadTo(27.15f, 48.2f, 27.15f, 47.4f);
        path.quadTo(27.15f, 46.6f, 26.65f, 46.0f);
        path.quadTo(26.05f, 45.5f, 25.25f, 45.5f);
        path.quadTo(24.45f, 45.5f, 23.95f, 46.0f);
        path.quadTo(23.35f, 46.6f, 23.35f, 47.4f);
        path.quadTo(23.35f, 48.2f, 23.95f, 48.7f);
        path.quadTo(24.45f, 49.3f, 25.25f, 49.3f);
        path.close();
    }

    private static void draw_95(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_88(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 172.55f, 73.3f));
        paint.setColor(Color.argb(255, 234, 147, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_89(Path path)
    {
        path.reset();
        path.moveTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.8f);
        path.lineTo(44.35f, 7.6f);
        path.lineTo(44.05f, 7.3f);
        path.lineTo(42.6f, 6.0f);
        path.quadTo(39.1f, 3.05f, 35.1f, 1.5f);
        path.quadTo(32.9f, 0.7f, 30.55f, 0.35f);
        path.lineTo(25.95f, -4.82798e-07f);
        path.lineTo(23.95f, 0.0499995f);
        path.lineTo(21.35f, 0.35f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35f, 6.0f);
        path.lineTo(7.85f, 7.3f);
        path.lineTo(7.6f, 7.6f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.149998f, 19.7f, -2.48253e-06f, 25.15f);
        path.lineTo(-2.48253e-06f, 25.9f);
        path.lineTo(-2.48253e-06f, 25.95f);
        path.lineTo(-2.48253e-06f, 26.8f);
        path.lineTo(0.0499975f, 27.5f);
        path.lineTo(0.0499975f, 28.25f);
        path.quadTo(0.199998f, 30.55f, 0.799998f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.45f, 42.05f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(46.5f, 42.05f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.close();
    }

    private static void draw_96(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_89(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 73.4f));
        paint.setColor(Color.argb(255, 61, 196, 190));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_90(Path path)
    {
        path.reset();
        path.moveTo(23.25f, 10.35f);
        path.lineTo(23.25f, 14.9f);
        path.quadTo(23.25f, 15.7f, 23.85f, 16.25f);
        path.quadTo(24.5f, 16.85f, 25.3f, 16.85f);
        path.quadTo(26.2f, 16.85f, 26.8f, 16.25f);
        path.quadTo(27.35f, 15.7f, 27.35f, 14.9f);
        path.lineTo(27.35f, 10.35f);
        path.quadTo(27.35f, 9.5f, 26.8f, 8.9f);
        path.quadTo(26.2f, 8.3f, 25.3f, 8.3f);
        path.quadTo(24.5f, 8.3f, 23.85f, 8.9f);
        path.quadTo(23.25f, 9.5f, 23.25f, 10.35f);
        path.close();
    }

    private static void draw_97(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_90(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 73.4f));
        paint.setColor(Color.argb(255, 64, 63, 63));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_91(Path path)
    {
        path.reset();
        path.moveTo(41.65f, 13.7f);
        path.quadTo(41.65f, 13.0f, 41.1f, 12.4f);
        path.quadTo(40.55f, 11.9f, 39.85f, 11.9f);
        path.lineTo(12.35f, 11.9f);
        path.quadTo(11.6f, 11.9f, 11.0f, 12.4f);
        path.quadTo(10.5f, 13.0f, 10.5f, 13.7f);
        path.quadTo(10.5f, 14.45f, 11.0f, 14.95f);
        path.quadTo(11.6f, 15.55f, 12.35f, 15.55f);
        path.lineTo(39.85f, 15.55f);
        path.quadTo(40.55f, 15.55f, 41.1f, 14.95f);
        path.quadTo(41.65f, 14.45f, 41.65f, 13.7f);
        path.close();
    }

    private static void draw_98(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_91(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 73.4f));
        paint.setColor(Color.argb(255, 228, 225, 216));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_92(Path path)
    {
        path.reset();
        path.moveTo(29.9f, 13.95f);
        path.lineTo(22.1f, 13.95f);
        path.lineTo(22.1f, 39.7f);
        path.lineTo(29.9f, 39.7f);
        path.lineTo(29.9f, 13.95f);
        path.close();
    }

    private static void draw_99(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_92(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 73.4f));
        paint.setColor(Color.argb(255, 253, 251, 247));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_93(Path path)
    {
        path.reset();
        path.moveTo(22.1f, 39.7f);
        path.lineTo(22.1f, 13.95f);
        path.lineTo(14.3f, 13.95f);
        path.quadTo(13.2f, 13.95f, 13.2f, 15.05f);
        path.lineTo(13.2f, 38.55f);
        path.quadTo(13.2f, 39.7f, 14.3f, 39.7f);
        path.lineTo(22.1f, 39.7f);
        path.close();
        path.moveTo(29.9f, 13.95f);
        path.lineTo(29.9f, 39.7f);
        path.lineTo(37.8f, 39.7f);
        path.quadTo(38.95f, 39.7f, 38.95f, 38.55f);
        path.lineTo(38.95f, 15.05f);
        path.quadTo(38.95f, 13.95f, 37.8f, 13.95f);
        path.lineTo(29.9f, 13.95f);
        path.close();
    }

    private static void draw_100(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_93(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 73.4f));
        paint.setColor(Color.argb(255, 228, 225, 216));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_94(Path path)
    {
        path.reset();
        path.moveTo(29.85f, 31.35f);
        path.lineTo(25.95f, 38.1f);
        path.lineTo(22.1f, 31.35f);
        path.lineTo(16.9f, 38.25f);
        path.lineTo(11.6f, 33.0f);
        path.quadTo(8.8f, 42.4f, 16.2f, 47.0f);
        path.quadTo(25.4f, 51.6f, 35.75f, 47.0f);
        path.quadTo(43.1f, 42.4f, 40.35f, 33.0f);
        path.lineTo(35.0f, 38.25f);
        path.lineTo(29.85f, 31.35f);
        path.close();
    }

    private static void draw_101(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_94(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 249.7f, 73.4f));
        paint.setColor(Color.argb(255, 255, 102, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_95(Path path)
    {
        path.reset();
        path.moveTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.8f);
        path.lineTo(44.35f, 7.6f);
        path.lineTo(44.05f, 7.3f);
        path.lineTo(42.6f, 6.0f);
        path.quadTo(39.1f, 3.05f, 35.1f, 1.5f);
        path.quadTo(32.9f, 0.7f, 30.55f, 0.35f);
        path.lineTo(25.95f, 4.70877e-07f);
        path.lineTo(23.95f, 0.0500005f);
        path.lineTo(21.35f, 0.35f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35f, 6.0f);
        path.lineTo(7.85f, 7.3f);
        path.lineTo(7.6f, 7.6f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.150001f, 19.7f, 1.33216e-06f, 25.15f);
        path.lineTo(1.33216e-06f, 25.9f);
        path.lineTo(1.33216e-06f, 25.95f);
        path.lineTo(1.33216e-06f, 26.8f);
        path.lineTo(0.0500013f, 27.5f);
        path.lineTo(0.0500013f, 28.25f);
        path.quadTo(0.200001f, 30.55f, 0.800001f, 32.7f);
        path.lineTo(51.15f, 32.7f);
        path.close();
    }

    private static void draw_102(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_95(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 73.4f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_96(Path path)
    {
        path.reset();
        path.moveTo(0.8f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(0.8f, 32.7f);
        path.close();
    }

    private static void draw_103(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_96(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 73.4f));
        paint.setColor(Color.argb(255, 118, 83, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_97(Path path)
    {
        path.reset();
        path.moveTo(47.0f, 27.95f);
        path.lineTo(47.0f, 25.75f);
        path.quadTo(47.0f, 23.25f, 45.15f, 21.5f);
        path.quadTo(43.4f, 19.7f, 40.85f, 19.7f);
        path.quadTo(38.3f, 19.7f, 36.55f, 21.5f);
        path.quadTo(34.75f, 23.25f, 34.75f, 25.75f);
        path.lineTo(34.75f, 27.2f);
        path.lineTo(34.8f, 27.35f);
        path.lineTo(34.8f, 32.7f);
        path.lineTo(47.0f, 32.7f);
        path.lineTo(47.0f, 27.95f);
        path.close();
        path.moveTo(32.1f, 27.8f);
        path.lineTo(32.1f, 25.75f);
        path.quadTo(32.1f, 23.25f, 30.3f, 21.5f);
        path.quadTo(28.55f, 19.7f, 25.95f, 19.7f);
        path.lineTo(25.85f, 19.7f);
        path.quadTo(23.35f, 19.75f, 21.65f, 21.5f);
        path.quadTo(19.85f, 23.25f, 19.85f, 25.75f);
        path.lineTo(19.85f, 27.75f);
        path.lineTo(19.85f, 32.7f);
        path.lineTo(32.1f, 32.7f);
        path.lineTo(32.1f, 27.8f);
        path.close();
        path.moveTo(17.05f, 27.8f);
        path.lineTo(17.05f, 25.75f);
        path.quadTo(17.05f, 23.25f, 15.3f, 21.45f);
        path.quadTo(13.5f, 19.7f, 11.0f, 19.7f);
        path.lineTo(10.8f, 19.7f);
        path.lineTo(10.65f, 19.7f);
        path.quadTo(8.3f, 19.85f, 6.65f, 21.45f);
        path.quadTo(4.9f, 23.25f, 4.9f, 25.75f);
        path.lineTo(4.9f, 27.45f);
        path.lineTo(4.9f, 32.7f);
        path.lineTo(17.05f, 32.7f);
        path.lineTo(17.05f, 27.8f);
        path.close();
    }

    private static void draw_104(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_97(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 73.4f));
        paint.setColor(Color.argb(255, 239, 209, 136));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_98(Path path)
    {
        path.reset();
        path.moveTo(34.8f, 32.7f);
        path.lineTo(34.8f, 27.35f);
        path.lineTo(34.75f, 27.2f);
        path.lineTo(34.45f, 26.85f);
        path.quadTo(34.0f, 26.4f, 33.5f, 26.4f);
        path.lineTo(33.4f, 26.4f);
        path.quadTo(32.9f, 26.4f, 32.45f, 26.85f);
        path.quadTo(32.1f, 27.2f, 32.1f, 27.8f);
        path.lineTo(32.1f, 32.7f);
        path.lineTo(34.8f, 32.7f);
        path.close();
        path.moveTo(47.0f, 27.95f);
        path.lineTo(47.0f, 32.7f);
        path.lineTo(49.75f, 32.7f);
        path.lineTo(49.75f, 27.95f);
        path.lineTo(49.4f, 27.0f);
        path.quadTo(48.95f, 26.55f, 48.4f, 26.55f);
        path.quadTo(47.85f, 26.55f, 47.45f, 27.0f);
        path.quadTo(47.0f, 27.45f, 47.0f, 27.95f);
        path.close();
        path.moveTo(19.85f, 32.7f);
        path.lineTo(19.85f, 27.75f);
        path.lineTo(19.7f, 27.2f);
        path.lineTo(19.4f, 26.85f);
        path.quadTo(18.95f, 26.4f, 18.45f, 26.4f);
        path.lineTo(18.3f, 26.4f);
        path.quadTo(17.8f, 26.5f, 17.45f, 26.85f);
        path.quadTo(17.05f, 27.2f, 17.05f, 27.8f);
        path.lineTo(17.05f, 32.7f);
        path.lineTo(19.85f, 32.7f);
        path.close();
        path.moveTo(4.9f, 32.7f);
        path.lineTo(4.9f, 27.45f);
        path.lineTo(4.75f, 27.15f);
        path.lineTo(4.65f, 27.05f);
        path.lineTo(4.6f, 26.9f);
        path.lineTo(4.5f, 26.85f);
        path.quadTo(4.1f, 26.4f, 3.65f, 26.4f);
        path.lineTo(3.4f, 26.4f);
        path.lineTo(2.55f, 26.85f);
        path.quadTo(2.2f, 27.3f, 2.2f, 27.8f);
        path.lineTo(2.2f, 32.7f);
        path.lineTo(4.9f, 32.7f);
        path.close();
    }

    private static void draw_105(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_98(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 325.85f, 73.4f));
        paint.setColor(Color.argb(255, 234, 147, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_99(Path path)
    {
        path.reset();
        path.moveTo(25.95f, 0.0f);
        path.lineTo(23.95f, 0.05f);
        path.lineTo(21.35f, 0.35f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35f, 6.0f);
        path.lineTo(7.85f, 7.3f);
        path.lineTo(7.6f, 7.6f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.150001f, 19.7f, 1.33216e-06f, 25.15f);
        path.lineTo(1.33216e-06f, 25.9f);
        path.lineTo(1.33216e-06f, 25.95f);
        path.lineTo(1.33216e-06f, 26.8f);
        path.lineTo(0.0500013f, 27.5f);
        path.lineTo(0.0500013f, 28.25f);
        path.quadTo(0.200001f, 30.55f, 0.800001f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 0.0f);
        path.close();
    }

    private static void draw_106(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_99(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 73.4f));
        paint.setColor(Color.argb(255, 173, 149, 198));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_100(Path path)
    {
        path.reset();
        path.moveTo(17.95f, 32.75f);
        path.lineTo(23.65f, 32.75f);
        path.quadTo(24.45f, 32.75f, 25.0f, 32.2f);
        path.quadTo(25.6f, 31.6f, 25.6f, 30.8f);
        path.quadTo(25.6f, 30.0f, 25.0f, 29.4f);
        path.quadTo(24.45f, 28.8f, 23.65f, 28.8f);
        path.lineTo(11.15f, 28.8f);
        path.lineTo(11.15f, 16.35f);
        path.quadTo(11.15f, 15.55f, 10.55f, 14.95f);
        path.quadTo(10.0f, 14.35f, 9.2f, 14.35f);
        path.quadTo(8.4f, 14.35f, 7.8f, 14.95f);
        path.quadTo(7.2f, 15.55f, 7.2f, 16.35f);
        path.lineTo(7.2f, 30.8f);
        path.quadTo(7.2f, 31.6f, 7.8f, 32.2f);
        path.quadTo(8.4f, 32.75f, 9.2f, 32.75f);
        path.lineTo(15.75f, 32.75f);
        path.lineTo(17.95f, 32.75f);
        path.close();
        path.moveTo(37.35f, 25.55f);
        path.lineTo(46.85f, 25.55f);
        path.quadTo(47.65f, 25.55f, 48.25f, 24.95f);
        path.quadTo(48.8f, 24.35f, 48.8f, 23.55f);
        path.quadTo(48.8f, 22.75f, 48.25f, 22.2f);
        path.quadTo(47.65f, 21.6f, 46.85f, 21.6f);
        path.lineTo(38.0f, 21.6f);
        path.lineTo(38.0f, 21.65f);
        path.lineTo(37.85f, 21.6f);
        path.lineTo(28.65f, 21.6f);
        path.lineTo(25.15f, 21.6f);
        path.quadTo(24.35f, 21.6f, 23.8f, 22.2f);
        path.quadTo(23.2f, 22.75f, 23.2f, 23.55f);
        path.quadTo(23.2f, 24.35f, 23.8f, 24.95f);
        path.quadTo(24.35f, 25.55f, 25.15f, 25.55f);
        path.lineTo(35.0f, 25.55f);
        path.lineTo(37.35f, 25.55f);
        path.close();
    }

    private static void draw_107(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_100(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 73.4f));
        paint.setColor(Color.argb(255, 239, 209, 136));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_101(Path path)
    {
        path.reset();
        path.moveTo(17.95f, 32.75f);
        path.lineTo(15.75f, 32.75f);
        path.lineTo(15.75f, 37.8f);
        path.lineTo(11.6f, 37.8f);
        path.quadTo(11.15f, 37.8f, 10.85f, 38.15f);
        path.quadTo(10.55f, 38.45f, 10.55f, 38.95f);
        path.quadTo(10.55f, 39.35f, 10.85f, 39.7f);
        path.lineTo(11.25f, 39.9f);
        path.lineTo(11.15f, 39.9f);
        path.quadTo(10.45f, 39.9f, 9.9f, 40.4f);
        path.quadTo(9.4f, 41.0f, 9.4f, 41.65f);
        path.quadTo(9.4f, 42.4f, 9.9f, 42.9f);
        path.quadTo(10.45f, 43.4f, 11.15f, 43.4f);
        path.quadTo(11.8f, 43.4f, 12.35f, 42.9f);
        path.quadTo(12.9f, 42.4f, 12.9f, 41.65f);
        path.quadTo(12.9f, 41.0f, 12.35f, 40.4f);
        path.lineTo(11.6f, 40.0f);
        path.lineTo(16.4f, 40.0f);
        path.quadTo(15.95f, 40.15f, 15.6f, 40.4f);
        path.quadTo(15.1f, 41.0f, 15.1f, 41.65f);
        path.quadTo(15.1f, 42.4f, 15.6f, 42.9f);
        path.quadTo(16.1f, 43.4f, 16.85f, 43.4f);
        path.quadTo(17.5f, 43.4f, 18.1f, 42.9f);
        path.quadTo(18.6f, 42.4f, 18.6f, 41.65f);
        path.quadTo(18.6f, 41.0f, 18.1f, 40.4f);
        path.lineTo(17.3f, 40.0f);
        path.lineTo(22.1f, 40.0f);
        path.quadTo(21.65f, 40.15f, 21.3f, 40.4f);
        path.quadTo(20.8f, 41.0f, 20.8f, 41.65f);
        path.quadTo(20.8f, 42.4f, 21.3f, 42.9f);
        path.quadTo(21.8f, 43.4f, 22.55f, 43.4f);
        path.quadTo(23.25f, 43.4f, 23.8f, 42.9f);
        path.quadTo(24.3f, 42.4f, 24.3f, 41.65f);
        path.quadTo(24.3f, 41.0f, 23.8f, 40.4f);
        path.quadTo(23.25f, 40.0f, 22.7f, 39.9f);
        path.lineTo(23.15f, 39.7f);
        path.lineTo(23.4f, 38.95f);
        path.lineTo(23.15f, 38.15f);
        path.quadTo(22.75f, 37.8f, 22.4f, 37.8f);
        path.lineTo(17.95f, 37.8f);
        path.lineTo(17.95f, 32.75f);
        path.close();
        path.moveTo(38.0f, 21.6f);
        path.lineTo(42.6f, 13.55f);
        path.lineTo(41.6f, 13.0f);
        path.lineTo(37.35f, 20.45f);
        path.lineTo(28.65f, 20.45f);
        path.lineTo(28.65f, 21.6f);
        path.lineTo(37.85f, 21.6f);
        path.lineTo(38.0f, 21.6f);
        path.close();
        path.moveTo(35.0f, 25.55f);
        path.lineTo(35.0f, 40.7f);
        path.lineTo(30.8f, 40.7f);
        path.quadTo(30.35f, 40.7f, 30.05f, 41.1f);
        path.quadTo(29.75f, 41.35f, 29.75f, 41.9f);
        path.lineTo(30.05f, 42.6f);
        path.quadTo(30.35f, 42.9f, 30.8f, 42.9f);
        path.lineTo(41.6f, 42.9f);
        path.lineTo(42.3f, 42.6f);
        path.lineTo(42.6f, 41.9f);
        path.lineTo(42.3f, 41.1f);
        path.quadTo(42.05f, 40.7f, 41.6f, 40.7f);
        path.lineTo(37.35f, 40.7f);
        path.lineTo(37.35f, 25.55f);
        path.lineTo(35.0f, 25.55f);
        path.close();
        path.moveTo(22.7f, 39.9f);
        path.lineTo(22.4f, 40.0f);
        path.lineTo(22.1f, 40.0f);
        path.lineTo(22.55f, 39.9f);
        path.lineTo(22.7f, 39.9f);
        path.close();
        path.moveTo(17.3f, 40.0f);
        path.lineTo(16.4f, 40.0f);
        path.lineTo(16.85f, 39.9f);
        path.lineTo(16.9f, 39.9f);
        path.lineTo(17.3f, 40.0f);
        path.close();
    }

    private static void draw_108(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_101(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 401.85f, 73.4f));
        paint.setColor(Color.argb(255, 64, 63, 63));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_102(Path path)
    {
        path.reset();
        path.moveTo(23.95f, 0.05f);
        path.lineTo(21.35f, 0.35f);
        path.quadTo(19.05f, 0.7f, 16.9f, 1.5f);
        path.lineTo(14.35f, 2.6f);
        path.quadTo(13.5f, 3.05f, 12.6f, 3.65f);
        path.lineTo(9.35f, 6.0f);
        path.lineTo(7.85f, 7.3f);
        path.lineTo(7.6f, 7.6f);
        path.quadTo(7.5f, 7.65f, 7.35f, 7.8f);
        path.quadTo(5.7f, 9.55f, 4.35f, 11.45f);
        path.quadTo(3.15f, 13.2f, 2.35f, 15.1f);
        path.quadTo(0.150001f, 19.7f, 1.33216e-06f, 25.15f);
        path.lineTo(1.33216e-06f, 25.9f);
        path.lineTo(1.33216e-06f, 25.95f);
        path.lineTo(1.33216e-06f, 26.8f);
        path.lineTo(0.0500013f, 27.5f);
        path.lineTo(0.0500013f, 28.25f);
        path.quadTo(0.200001f, 30.55f, 0.800001f, 32.7f);
        path.quadTo(1.5f, 35.55f, 2.9f, 38.1f);
        path.quadTo(3.85f, 40.0f, 5.25f, 41.75f);
        path.lineTo(5.85f, 42.45f);
        path.lineTo(7.6f, 44.35f);
        path.lineTo(7.65f, 44.45f);
        path.lineTo(8.4f, 45.1f);
        path.lineTo(10.05f, 46.65f);
        path.lineTo(10.45f, 46.85f);
        path.lineTo(10.95f, 47.3f);
        path.lineTo(13.0f, 48.6f);
        path.quadTo(15.6f, 50.15f, 18.45f, 50.95f);
        path.lineTo(21.95f, 51.65f);
        path.lineTo(24.9f, 51.95f);
        path.lineTo(25.95f, 51.95f);
        path.lineTo(27.45f, 51.95f);
        path.lineTo(30.35f, 51.65f);
        path.lineTo(33.85f, 50.85f);
        path.quadTo(37.2f, 49.75f, 40.2f, 47.8f);
        path.lineTo(40.7f, 47.5f);
        path.lineTo(42.6f, 45.95f);
        path.lineTo(44.3f, 44.45f);
        path.lineTo(44.35f, 44.35f);
        path.lineTo(45.7f, 43.0f);
        path.lineTo(47.0f, 41.35f);
        path.lineTo(47.05f, 41.25f);
        path.lineTo(47.85f, 40.15f);
        path.lineTo(49.1f, 38.1f);
        path.lineTo(50.2f, 35.6f);
        path.lineTo(50.25f, 35.55f);
        path.lineTo(50.25f, 35.45f);
        path.lineTo(50.8f, 34.0f);
        path.lineTo(51.15f, 32.7f);
        path.lineTo(51.9f, 28.25f);
        path.lineTo(51.95f, 27.5f);
        path.lineTo(51.95f, 26.8f);
        path.lineTo(51.95f, 25.95f);
        path.lineTo(51.95f, 25.9f);
        path.lineTo(51.95f, 25.15f);
        path.quadTo(51.8f, 21.35f, 50.8f, 18.0f);
        path.lineTo(49.7f, 15.1f);
        path.lineTo(47.85f, 11.9f);
        path.lineTo(47.55f, 11.45f);
        path.lineTo(47.0f, 10.65f);
        path.lineTo(44.6f, 7.80001f);
        path.lineTo(44.35f, 7.60001f);
        path.lineTo(44.05f, 7.30001f);
        path.lineTo(42.6f, 6.00001f);
        path.quadTo(39.1f, 3.05001f, 35.1f, 1.50001f);
        path.quadTo(32.9f, 0.700012f, 30.55f, 0.350012f);
        path.lineTo(25.95f, 1.1915e-05f);
        path.lineTo(23.95f, 0.05f);
        path.close();
    }

    private static void draw_109(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_102(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 73.4f));
        paint.setColor(Color.argb(255, 246, 176, 150));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_103(Path path)
    {
        path.reset();
        path.moveTo(31.5f, 18.25f);
        path.quadTo(29.35f, 16.4f, 26.5f, 15.95f);
        path.quadTo(22.6f, 15.25f, 19.5f, 17.0f);
        path.lineTo(14.35f, 9.85f);
        path.quadTo(13.8f, 8.9f, 12.75f, 8.75f);
        path.quadTo(11.65f, 8.55f, 10.8f, 9.2f);
        path.quadTo(9.9f, 9.75f, 9.7f, 10.85f);
        path.quadTo(9.5f, 11.9f, 10.05f, 12.85f);
        path.lineTo(15.15f, 20.0f);
        path.quadTo(12.45f, 22.45f, 11.9f, 26.25f);
        path.quadTo(11.3f, 29.2f, 12.25f, 31.75f);
        path.lineTo(31.5f, 18.25f);
        path.close();
    }

    private static void draw_110(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_103(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 73.4f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_104(Path path)
    {
        path.reset();
        path.moveTo(31.5f, 18.25f);
        path.lineTo(12.25f, 31.75f);
        path.quadTo(12.75f, 33.1f, 13.7f, 34.35f);
        path.lineTo(18.95f, 41.9f);
        path.quadTo(21.6f, 45.55f, 26.05f, 46.35f);
        path.quadTo(30.5f, 47.15f, 34.15f, 44.5f);
        path.lineTo(36.1f, 43.1f);
        path.quadTo(39.85f, 40.5f, 40.65f, 36.05f);
        path.quadTo(41.35f, 31.6f, 38.75f, 27.95f);
        path.lineTo(33.5f, 20.45f);
        path.lineTo(31.5f, 18.25f);
        path.close();
    }

    private static void draw_111(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_104(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 73.4f));
        paint.setColor(Color.argb(255, 224, 93, 65));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_105(Path path)
    {
        path.reset();
        path.moveTo(45.7f, 34.45f);
        path.quadTo(46.05f, 32.1f, 44.75f, 30.2f);
        path.quadTo(43.4f, 28.4f, 41.25f, 28.0f);
        path.quadTo(38.95f, 27.65f, 37.05f, 28.95f);
        path.quadTo(35.25f, 30.3f, 34.9f, 32.45f);
        path.quadTo(34.45f, 34.75f, 35.75f, 36.55f);
        path.quadTo(37.05f, 38.45f, 39.35f, 38.9f);
        path.quadTo(41.6f, 39.25f, 43.4f, 37.95f);
        path.quadTo(45.3f, 36.65f, 45.7f, 34.45f);
        path.close();
    }

    private static void draw_112(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_105(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 478.75f, 73.4f));
        paint.setColor(Color.argb(255, 250, 247, 238));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_main(Canvas canvas, Path path, Paint paint)
    {
        draw_0(canvas, path, paint);
        draw_1(canvas, path, paint);
        draw_2(canvas, path, paint);
        draw_3(canvas, path, paint);
        draw_4(canvas, path, paint);
        draw_5(canvas, path, paint);
        draw_6(canvas, path, paint);
        draw_7(canvas, path, paint);
        draw_8(canvas, path, paint);
        draw_9(canvas, path, paint);
        draw_10(canvas, path, paint);
        draw_11(canvas, path, paint);
        draw_12(canvas, path, paint);
        draw_13(canvas, path, paint);
        draw_14(canvas, path, paint);
        draw_15(canvas, path, paint);
        draw_16(canvas, path, paint);
        draw_17(canvas, path, paint);
        draw_18(canvas, path, paint);
        draw_19(canvas, path, paint);
        draw_20(canvas, path, paint);
        draw_21(canvas, path, paint);
        draw_22(canvas, path, paint);
        draw_23(canvas, path, paint);
        draw_24(canvas, path, paint);
        draw_25(canvas, path, paint);
        draw_26(canvas, path, paint);
        draw_27(canvas, path, paint);
        draw_28(canvas, path, paint);
        draw_29(canvas, path, paint);
        draw_30(canvas, path, paint);
        draw_31(canvas, path, paint);
        draw_32(canvas, path, paint);
        draw_33(canvas, path, paint);
        draw_34(canvas, path, paint);
        draw_35(canvas, path, paint);
        draw_36(canvas, path, paint);
        draw_37(canvas, path, paint);
        draw_38(canvas, path, paint);
        draw_39(canvas, path, paint);
        draw_40(canvas, path, paint);
        draw_41(canvas, path, paint);
        draw_42(canvas, path, paint);
        draw_43(canvas, path, paint);
        draw_44(canvas, path, paint);
        draw_45(canvas, path, paint);
        draw_46(canvas, path, paint);
        draw_47(canvas, path, paint);
        draw_48(canvas, path, paint);
        draw_49(canvas, path, paint);
        draw_50(canvas, path, paint);
        draw_51(canvas, path, paint);
        draw_52(canvas, path, paint);
        draw_53(canvas, path, paint);
        draw_54(canvas, path, paint);
        draw_55(canvas, path, paint);
        draw_56(canvas, path, paint);
        draw_57(canvas, path, paint);
        draw_58(canvas, path, paint);
        draw_59(canvas, path, paint);
        draw_60(canvas, path, paint);
        draw_61(canvas, path, paint);
        draw_62(canvas, path, paint);
        draw_63(canvas, path, paint);
        draw_64(canvas, path, paint);
        draw_65(canvas, path, paint);
        draw_66(canvas, path, paint);
        draw_67(canvas, path, paint);
        draw_68(canvas, path, paint);
        draw_69(canvas, path, paint);
        draw_70(canvas, path, paint);
        draw_71(canvas, path, paint);
        draw_72(canvas, path, paint);
        draw_73(canvas, path, paint);
        draw_74(canvas, path, paint);
        draw_75(canvas, path, paint);
        draw_76(canvas, path, paint);
        draw_77(canvas, path, paint);
        draw_78(canvas, path, paint);
        draw_79(canvas, path, paint);
        draw_80(canvas, path, paint);
        draw_81(canvas, path, paint);
        draw_82(canvas, path, paint);
        draw_83(canvas, path, paint);
        draw_84(canvas, path, paint);
        draw_85(canvas, path, paint);
        draw_86(canvas, path, paint);
        draw_87(canvas, path, paint);
        draw_88(canvas, path, paint);
        draw_89(canvas, path, paint);
        draw_90(canvas, path, paint);
        draw_91(canvas, path, paint);
        draw_92(canvas, path, paint);
        draw_93(canvas, path, paint);
        draw_94(canvas, path, paint);
        draw_95(canvas, path, paint);
        draw_96(canvas, path, paint);
        draw_97(canvas, path, paint);
        draw_98(canvas, path, paint);
        draw_99(canvas, path, paint);
        draw_100(canvas, path, paint);
        draw_101(canvas, path, paint);
        draw_102(canvas, path, paint);
        draw_103(canvas, path, paint);
        draw_104(canvas, path, paint);
        draw_105(canvas, path, paint);
        draw_106(canvas, path, paint);
        draw_107(canvas, path, paint);
        draw_108(canvas, path, paint);
        draw_109(canvas, path, paint);
        draw_110(canvas, path, paint);
        draw_111(canvas, path, paint);
        draw_112(canvas, path, paint);
    }

    @Override
    protected void picture_draw_main(Canvas canvas)
    {
        Paint paint = new Paint();
        paint.setAntiAlias(true);
        
        Path path = new Path();
        path.setFillType(Path.FillType.EVEN_ODD);
        
        draw_main(canvas, path, paint);
    }
}
