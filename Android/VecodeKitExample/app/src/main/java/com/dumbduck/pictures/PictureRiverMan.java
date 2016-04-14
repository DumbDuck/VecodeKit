
package com.dumbduck.pictures;

import android.graphics.*;
import com.vecodekit.GraphicsPicture;

public class PictureRiverMan extends GraphicsPicture
{
    public PictureRiverMan()
    {
        super(new RectF(-0.1f, 44.0f, 767.9f, 1024.0f));
    }
    
    private static void def_path_0(Path path)
    {
        path.reset();
        path.moveTo(767.9f, 1024.0f);
        path.lineTo(767.9f, 44.0f);
        path.lineTo(-0.0999756f, 44.0f);
        path.lineTo(-0.0999756f, 1024.0f);
        path.lineTo(767.9f, 1024.0f);
        path.close();
    }

    private static void draw_0(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_0(path);
        paint.setColor(Color.argb(255, 189, 213, 117));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_1(Path path)
    {
        path.reset();
        path.moveTo(-90.0f, -10.55f);
        path.quadTo(-90.0f, 7.2f, -80.1f, 17.2f);
        path.quadTo(-72.15f, 25.2f, -56.65f, 29.1f);
        path.quadTo(-49.95f, 30.8f, -29.15f, 33.55f);
        path.quadTo(-13.1f, 35.7f, -7.0f, 38.95f);
        path.quadTo(5.8f, 45.65f, 32.9f, 57.15f);
        path.quadTo(58.55f, 68.05f, 60.5f, 68.05f);
        path.quadTo(74.15f, 68.05f, 82.0f, 61.05f);
        path.quadTo(90.0f, 54.0f, 90.0f, 41.45f);
        path.quadTo(90.0f, 27.5f, 77.45f, 3.4f);
        path.quadTo(66.15f, -18.4f, 55.0f, -30.05f);
        path.quadTo(41.3f, -44.35f, 28.55f, -52.1f);
        path.quadTo(23.95f, -54.9f, 17.85f, -57.9f);
        path.quadTo(7.44999f, -59.2f, -6.25001f, -62.55f);
        path.lineTo(-29.5f, -68.05f);
        path.quadTo(-63.15f, -68.05f, -78.95f, -46.0f);
        path.quadTo(-90.0f, -30.65f, -90.0f, -10.55f);
        path.close();
    }

    private static void draw_1(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_1(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.0f, 749.1f));
        paint.setColor(Color.argb(255, 166, 186, 86));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_2(Path path)
    {
        path.reset();
        path.moveTo(115.2f, -61.65f);
        path.lineTo(115.05f, -62.15f);
        path.quadTo(111.8f, -61.05f, 91.9f, -50.75f);
        path.quadTo(73.35f, -41.15f, 71.05f, -41.15f);
        path.quadTo(63.4f, -41.15f, 46.1f, -46.45f);
        path.quadTo(28.45f, -51.9f, 19.95f, -52.15f);
        path.quadTo(10.9f, -52.35f, -0.200013f, -54.9f);
        path.quadTo(-11.45f, -57.5f, -23.05f, -62.15f);
        path.quadTo(-42.5f, -70.85f, -49.45f, -73.35f);
        path.quadTo(-59.95f, -77.15f, -76.05f, -77.15f);
        path.quadTo(-101.75f, -77.15f, -111.05f, -60.15f);
        path.quadTo(-116.05f, -51.0f, -116.05f, -35.65f);
        path.quadTo(-116.05f, -24.95f, -109.9f, -12.0f);
        path.lineTo(-103.8f, 0.599991f);
        path.quadTo(-99.85f, 8.94999f, -97.05f, 16.85f);
        path.quadTo(-92.7f, 29.3f, -79.0f, 48.55f);
        path.lineTo(-69.6f, 61.65f);
        path.quadTo(-66.35f, 66.25f, -64.9f, 69.1f);
        path.lineTo(-62.9f, 70.8f);
        path.quadTo(-59.2f, 73.75f, -55.3f, 75.2f);
        path.quadTo(-50.35f, 77.05f, -42.35f, 77.2f);
        path.lineTo(-25.05f, 76.95f);
        path.quadTo(-9.70001f, 76.95f, -5.35001f, 76.6f);
        path.quadTo(4.34999f, 75.9f, 10.1f, 72.9f);
        path.quadTo(23.85f, 65.75f, 24.95f, 38.85f);
        path.lineTo(24.7f, 19.4f);
        path.quadTo(24.4f, 6.49998f, 25.35f, -0.850018f);
        path.quadTo(28.2f, -23.15f, 45.45f, -23.15f);
        path.quadTo(47.65f, -23.15f, 57.9f, -20.65f);
        path.quadTo(68.15f, -18.15f, 72.55f, -18.15f);
        path.quadTo(83.25f, -18.15f, 99.65f, -38.5f);
        path.quadTo(108.0f, -48.9f, 116.05f, -61.15f);
        path.quadTo(115.45f, -61.15f, 115.2f, -61.65f);
        path.close();
    }

    private static void draw_2(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_2(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 472.05f, 733.2f));
        paint.setColor(Color.argb(255, 166, 186, 86));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_3(Path path)
    {
        path.reset();
        path.moveTo(121.95f, 93.25f);
        path.lineTo(122.15f, 93.55f);
        path.quadTo(120.35f, 92.1f, 116.7f, 93.5f);
        path.quadTo(113.9f, 94.55f, 112.05f, 96.25f);
        path.quadTo(110.9f, 97.25f, 108.7f, 100.25f);
        path.lineTo(107.65f, 101.7f);
        path.lineTo(107.65f, 102.55f);
        path.quadTo(107.3f, 104.3f, 105.0f, 106.4f);
        path.quadTo(103.45f, 107.75f, 100.95f, 107.5f);
        path.quadTo(98.4f, 107.15f, 97.2f, 108.2f);
        path.quadTo(95.6f, 109.7f, 94.85f, 112.15f);
        path.lineTo(93.7f, 114.95f);
        path.quadTo(92.6f, 115.9f, 91.35f, 115.8f);
        path.lineTo(89.0f, 115.25f);
        path.quadTo(85.65f, 114.45f, 82.55f, 117.25f);
        path.quadTo(81.05f, 118.6f, 79.95f, 120.85f);
        path.quadTo(78.9f, 123.1f, 78.15f, 123.75f);
        path.quadTo(75.9f, 125.75f, 73.15f, 126.0f);
        path.quadTo(69.9f, 126.3f, 66.95f, 123.9f);
        path.quadTo(65.05f, 122.35f, 64.1f, 120.4f);
        path.quadTo(63.15f, 118.4f, 62.1f, 117.6f);
        path.quadTo(59.95f, 115.85f, 56.7f, 115.65f);
        path.lineTo(50.2f, 115.85f);
        path.quadTo(40.9f, 116.1f, 34.0f, 110.5f);
        path.quadTo(28.6f, 106.15f, 24.45f, 96.1f);
        path.quadTo(20.3f, 86.1f, 16.5f, 83.0f);
        path.quadTo(7.74999f, 75.9f, -6.60001f, 73.5f);
        path.quadTo(-17.9f, 71.6f, -26.9f, 73.25f);
        path.quadTo(-13.15f, 63.25f, 3.74999f, 62.2f);
        path.quadTo(9.04999f, 62.9f, 17.05f, 65.75f);
        path.quadTo(29.9f, 70.15f, 36.4f, 75.45f);
        path.quadTo(41.3f, 79.45f, 43.25f, 83.5f);
        path.quadTo(44.45f, 86.0f, 45.0f, 90.3f);
        path.quadTo(45.55f, 94.75f, 46.5f, 96.95f);
        path.quadTo(48.15f, 100.75f, 52.6f, 104.4f);
        path.quadTo(54.65f, 106.05f, 57.0f, 106.15f);
        path.lineTo(61.25f, 105.55f);
        path.quadTo(67.2f, 104.45f, 72.05f, 108.05f);
        path.quadTo(77.3f, 111.9f, 83.1f, 111.65f);
        path.quadTo(87.45f, 111.55f, 89.5f, 109.7f);
        path.lineTo(91.15f, 107.75f);
        path.quadTo(91.75f, 106.7f, 92.8f, 105.8f);
        path.quadTo(94.45f, 104.3f, 96.2f, 104.05f);
        path.quadTo(97.95f, 103.75f, 98.9f, 102.9f);
        path.quadTo(99.8f, 102.1f, 100.5f, 99.8f);
        path.quadTo(101.15f, 97.6f, 103.5f, 95.5f);
        path.quadTo(107.1f, 92.3f, 111.8f, 91.7f);
        path.quadTo(116.5f, 91.2f, 121.95f, 93.25f);
        path.close();
    }

    private static void draw_3(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_3(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        paint.setColor(Color.argb(255, 51, 153, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_4(Path path)
    {
        path.reset();
        path.moveTo(3.75f, 62.2f);
        path.lineTo(7.6f, 62.1f);
        path.lineTo(13.2f, 61.75f);
        path.lineTo(19.15f, 62.0f);
        path.quadTo(20.95f, 62.35f, 23.45f, 63.8f);
        path.lineTo(28.0f, 66.25f);
        path.quadTo(30.9f, 67.75f, 34.45f, 67.05f);
        path.lineTo(41.1f, 66.1f);
        path.quadTo(45.05f, 66.2f, 49.45f, 67.85f);
        path.quadTo(53.6f, 69.5f, 56.95f, 72.2f);
        path.quadTo(66.1f, 79.6f, 63.85f, 87.25f);
        path.lineTo(62.15f, 92.35f);
        path.quadTo(61.75f, 94.95f, 63.95f, 96.75f);
        path.quadTo(66.85f, 99.1f, 71.9f, 97.55f);
        path.quadTo(76.9f, 96.0f, 79.7f, 98.25f);
        path.lineTo(81.9f, 100.55f);
        path.quadTo(83.85f, 102.1f, 86.5f, 102.45f);
        path.quadTo(89.35f, 102.75f, 90.9f, 101.35f);
        path.quadTo(91.6f, 100.7f, 93.35f, 97.15f);
        path.quadTo(95.1f, 93.45f, 96.05f, 92.6f);
        path.quadTo(100.25f, 88.8f, 108.15f, 89.15f);
        path.quadTo(112.25f, 89.4f, 114.2f, 90.0f);
        path.lineTo(116.0f, 90.1f);
        path.quadTo(118.85f, 90.6f, 121.35f, 92.65f);
        path.lineTo(121.95f, 93.25f);
        path.quadTo(116.5f, 91.2f, 111.8f, 91.7f);
        path.quadTo(107.1f, 92.3f, 103.5f, 95.5f);
        path.quadTo(101.15f, 97.6f, 100.5f, 99.8f);
        path.quadTo(99.8f, 102.1f, 98.9f, 102.9f);
        path.quadTo(97.95f, 103.75f, 96.2f, 104.05f);
        path.quadTo(94.45f, 104.3f, 92.8f, 105.8f);
        path.quadTo(91.75f, 106.7f, 91.15f, 107.75f);
        path.lineTo(89.5f, 109.7f);
        path.quadTo(87.45f, 111.55f, 83.1f, 111.65f);
        path.quadTo(77.3f, 111.9f, 72.05f, 108.05f);
        path.quadTo(67.2f, 104.45f, 61.25f, 105.55f);
        path.lineTo(57.0f, 106.15f);
        path.quadTo(54.65f, 106.05f, 52.6f, 104.4f);
        path.quadTo(48.15f, 100.75f, 46.5f, 96.95f);
        path.quadTo(45.55f, 94.75f, 45.0f, 90.3f);
        path.quadTo(44.45f, 86.0f, 43.25f, 83.5f);
        path.quadTo(41.3f, 79.45f, 36.4f, 75.45f);
        path.quadTo(29.9f, 70.15f, 17.05f, 65.75f);
        path.quadTo(9.05f, 62.9f, 3.75f, 62.2f);
        path.close();
    }

    private static void draw_4(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_4(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        paint.setColor(Color.argb(255, 43, 145, 137));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_5(Path path)
    {
        path.reset();
        path.moveTo(121.95f, 93.25f);
        path.quadTo(116.5f, 91.2f, 111.8f, 91.7f);
        path.quadTo(107.1f, 92.3f, 103.5f, 95.5f);
        path.quadTo(101.15f, 97.6f, 100.5f, 99.8f);
        path.quadTo(99.8f, 102.1f, 98.9f, 102.9f);
        path.quadTo(97.95f, 103.75f, 96.2f, 104.05f);
        path.quadTo(94.45f, 104.3f, 92.8f, 105.8f);
        path.quadTo(91.75f, 106.7f, 91.15f, 107.75f);
        path.lineTo(89.5f, 109.7f);
        path.quadTo(87.45f, 111.55f, 83.1f, 111.65f);
        path.quadTo(77.3f, 111.9f, 72.05f, 108.05f);
        path.quadTo(67.2f, 104.45f, 61.25f, 105.55f);
        path.lineTo(57.0f, 106.15f);
        path.quadTo(54.65f, 106.05f, 52.6f, 104.4f);
        path.quadTo(48.15f, 100.75f, 46.5f, 96.95f);
        path.quadTo(45.55f, 94.75f, 45.0f, 90.3f);
        path.quadTo(44.45f, 86.0f, 43.25f, 83.5f);
        path.quadTo(41.3f, 79.45f, 36.4f, 75.45f);
        path.quadTo(29.9f, 70.15f, 17.05f, 65.75f);
        path.quadTo(9.05f, 62.9f, 3.75f, 62.2f);
    }

    private static void draw_5(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_5(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        paint.setColor(Color.argb(255, 43, 145, 137));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_6(Path path)
    {
        path.reset();
        path.moveTo(107.3f, 99.5f);
        path.quadTo(106.4f, 95.5f, 111.3f, 91.1f);
        path.quadTo(112.45f, 90.05f, 114.2f, 90.0f);
        path.lineTo(116.0f, 90.1f);
        path.quadTo(118.85f, 90.6f, 121.35f, 92.65f);
        path.lineTo(122.15f, 93.55f);
        path.quadTo(120.35f, 92.1f, 116.7f, 93.5f);
        path.quadTo(113.9f, 94.55f, 112.05f, 96.25f);
        path.quadTo(110.9f, 97.25f, 108.7f, 100.25f);
        path.lineTo(107.65f, 101.7f);
        path.lineTo(107.3f, 99.5f);
        path.close();
    }

    private static void draw_6(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_6(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        paint.setColor(Color.argb(255, 75, 194, 194));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_7(Path path)
    {
        path.reset();
        path.moveTo(60.9f, -34.4f);
        path.quadTo(59.3f, -74.55f, 30.7f, -90.6f);
        path.quadTo(9.85f, -102.5f, -25.65f, -101.15f);
        path.quadTo(-53.4f, -100.15f, -70.55f, -94.4f);
        path.quadTo(-88.2f, -88.5f, -97.5f, -76.6f);
        path.quadTo(-106.75f, -64.9f, -109.3f, -45.55f);
        path.quadTo(-111.65f, -27.35f, -108.6f, 1.14999f);
        path.quadTo(-105.6f, 29.05f, -101.65f, 47.05f);
        path.quadTo(-96.55f, 70.65f, -88.45f, 86.05f);
        path.quadTo(-68.85f, 123.3f, -26.2f, 121.75f);
        path.quadTo(20.15f, 120.0f, 43.3f, 71.75f);
        path.quadTo(63.55f, 29.5f, 60.9f, -34.4f);
        path.close();
    }

    private static void draw_7(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_7(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        paint.setColor(Color.argb(255, 46, 91, 137));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_8(Path path)
    {
        path.reset();
        path.moveTo(16.3f, -45.75f);
        path.lineTo(11.8f, -44.65f);
        path.lineTo(0.0499992f, -42.45f);
        path.quadTo(-6.1f, -40.9f, -8.2f, -38.0f);
        path.quadTo(-10.6f, -34.75f, -9.2f, -28.9f);
        path.quadTo(-8.8f, -34.4f, -5.15f, -37.35f);
        path.quadTo(-2.45f, -39.55f, 3.65f, -41.1f);
        path.quadTo(11.4f, -43.15f, 13.4f, -44.1f);
        path.quadTo(15.0f, -44.85f, 16.3f, -45.75f);
        path.close();
        path.moveTo(-57.65f, -45.75f);
        path.quadTo(-56.3f, -44.85f, -54.7f, -44.1f);
        path.quadTo(-52.7f, -43.15f, -45.0f, -41.1f);
        path.quadTo(-38.9f, -39.55f, -36.15f, -37.35f);
        path.quadTo(-32.5f, -34.4f, -32.1f, -28.9f);
        path.quadTo(-30.75f, -34.75f, -33.1f, -38.0f);
        path.quadTo(-35.25f, -40.9f, -41.35f, -42.45f);
        path.lineTo(-53.1f, -44.65f);
        path.lineTo(-57.65f, -45.75f);
        path.close();
    }

    private static void draw_8(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_8(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_9(Path path)
    {
        path.reset();
        path.moveTo(39.5f, 24.1f);
        path.quadTo(46.35f, 43.25f, 48.6f, 60.3f);
        path.quadTo(51.2f, 79.8f, 46.85f, 91.75f);
        path.quadTo(40.85f, 108.4f, 28.3f, 121.95f);
        path.quadTo(20.15f, 130.65f, 10.5f, 135.6f);
        path.quadTo(1.7f, 140.2f, -4.7f, 139.8f);
        path.quadTo(-15.55f, 139.15f, -19.45f, 122.8f);
        path.quadTo(-22.35f, 110.25f, -21.1f, 88.8f);
        path.quadTo(-20.65f, 67.65f, -19.8f, 51.1f);
        path.quadTo(-18.2f, 19.5f, -14.55f, 9.40002f);
        path.quadTo(-9.65f, -4.14998f, -2.3f, -11.2f);
        path.quadTo(4.9f, -18.05f, 13.7f, -18.05f);
        path.quadTo(18.3f, -18.05f, 25.85f, -5.64998f);
        path.quadTo(33.25f, 6.5f, 39.5f, 24.1f);
        path.close();
    }

    private static Shader create_gradient_0()
    {
        int colors[] = {
            Color.argb(255, 46, 91, 137),
            Color.argb(255, 24, 65, 86)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_9(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_9(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(0.0131531f, -0.0763092f, -0.0745544f, 0.0249329f, 11.55f, 59.3f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_10(Path path)
    {
        path.reset();
        path.moveTo(49.9f, -72.0f);
        path.quadTo(43.0f, -78.5f, 32.4f, -75.75f);
        path.quadTo(20.15f, -72.6f, 21.8f, -48.0f);
        path.quadTo(22.65f, -35.6f, 30.05f, -2.8f);
        path.quadTo(33.4f, 11.75f, 36.45f, 35.85f);
        path.quadTo(39.45f, 58.7f, 40.05f, 61.15f);
        path.quadTo(41.85f, 68.1f, 44.7f, 71.3f);
        path.quadTo(48.4f, 75.45f, 54.0f, 73.95f);
        path.quadTo(63.75f, 71.45f, 69.6f, 55.0f);
        path.quadTo(75.05f, 39.95f, 74.8f, 21.5f);
        path.quadTo(74.75f, 9.45f, 70.95f, -11.55f);
        path.quadTo(68.0f, -28.1f, 64.65f, -41.1f);
        path.quadTo(61.25f, -54.2f, 58.05f, -61.05f);
        path.quadTo(54.45f, -68.7f, 49.9f, -72.0f);
        path.close();
    }

    private static Shader create_gradient_1()
    {
        int colors[] = {
            Color.argb(255, 46, 91, 137),
            Color.argb(255, 21, 56, 74)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_10(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_10(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_1();
        shader.setLocalMatrix(createMatrix(0.00561523f, 0.0915527f, 0.0301056f, -0.00184631f, 49.1f, -2.45f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_11(Path path)
    {
        path.reset();
        path.moveTo(33.25f, -3.15f);
        path.lineTo(17.4f, -17.15f);
        path.quadTo(10.3f, -22.95f, 5.15f, -23.55f);
        path.quadTo(2.8f, -23.85f, 0.949999f, -22.8f);
        path.quadTo(-0.950001f, -21.75f, -1.35f, -19.95f);
        path.quadTo(-2.15f, -16.95f, 0.549999f, -14.75f);
        path.lineTo(6.5f, -10.9f);
        path.lineTo(12.6f, -5.7f);
        path.quadTo(16.1f, -2.15f, 17.15f, -8.10623e-07f);
        path.quadTo(25.35f, 16.05f, 29.45f, 28.9f);
        path.quadTo(31.1f, 33.95f, 33.75f, 45.0f);
        path.quadTo(36.05f, 55.05f, 37.8f, 59.5f);
        path.quadTo(40.4f, 66.4f, 44.25f, 69.6f);
        path.quadTo(47.3f, 72.1f, 51.4f, 72.7f);
        path.lineTo(52.05f, 72.75f);
        path.lineTo(52.2f, 72.8f);
        path.lineTo(55.85f, 72.85f);
        path.quadTo(58.6f, 72.35f, 61.75f, 70.2f);
        path.quadTo(66.6f, 66.75f, 67.8f, 61.9f);
        path.quadTo(70.5f, 50.75f, 56.6f, 27.25f);
        path.quadTo(51.05f, 17.85f, 44.3f, 9.30001f);
        path.quadTo(38.0f, 1.05f, 33.25f, -3.15f);
        path.close();
    }

    private static Shader create_gradient_2()
    {
        int colors[] = {
            Color.argb(255, 53, 106, 159),
            Color.argb(255, 21, 56, 74)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_11(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_11(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_2();
        shader.setLocalMatrix(createMatrix(0.00883484f, 0.030014f, 0.0518036f, -0.0216217f, 36.95f, 31.8f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_12(Path path)
    {
        path.reset();
        path.moveTo(-81.3f, 22.3f);
        path.quadTo(-88.15f, 41.45f, -90.4f, 58.5f);
        path.quadTo(-93.0f, 78.0f, -88.65f, 89.95f);
        path.quadTo(-82.65f, 106.6f, -70.1f, 120.15f);
        path.quadTo(-61.95f, 128.85f, -52.3f, 133.8f);
        path.quadTo(-43.5f, 138.4f, -37.1f, 138.0f);
        path.quadTo(-26.25f, 137.35f, -22.35f, 121.0f);
        path.quadTo(-19.45f, 108.45f, -20.7f, 87.0f);
        path.quadTo(-21.15f, 65.85f, -22.0f, 49.3f);
        path.quadTo(-23.6f, 17.7f, -27.25f, 7.60002f);
        path.quadTo(-32.15f, -5.94998f, -39.5f, -13.0f);
        path.quadTo(-46.7f, -19.85f, -55.5f, -19.85f);
        path.quadTo(-60.1f, -19.85f, -67.65f, -7.44998f);
        path.quadTo(-75.05f, 4.7f, -81.3f, 22.3f);
        path.close();
    }

    private static void draw_12(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_12(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(-0.0131531f, -0.0763092f, 0.0745544f, 0.0249329f, -53.35f, 57.5f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_13(Path path)
    {
        path.reset();
        path.moveTo(-69.1f, -51.95f);
        path.quadTo(-67.45f, -76.55f, -79.7f, -79.7f);
        path.quadTo(-90.3f, -82.45f, -97.2f, -75.95f);
        path.quadTo(-101.75f, -72.65f, -105.35f, -65.0f);
        path.quadTo(-108.55f, -58.15f, -111.95f, -45.05f);
        path.quadTo(-115.3f, -32.05f, -118.25f, -15.5f);
        path.quadTo(-122.05f, 5.5f, -122.1f, 17.55f);
        path.quadTo(-122.35f, 36.0f, -116.9f, 51.05f);
        path.quadTo(-111.05f, 67.5f, -101.3f, 70.0f);
        path.quadTo(-95.7f, 71.5f, -92.0f, 67.35f);
        path.quadTo(-89.15f, 64.15f, -87.35f, 57.2f);
        path.quadTo(-86.75f, 54.75f, -83.75f, 31.9f);
        path.quadTo(-80.7f, 7.79999f, -77.35f, -6.75001f);
        path.quadTo(-69.95f, -39.55f, -69.1f, -51.95f);
        path.close();
    }

    private static void draw_13(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_13(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_1();
        shader.setLocalMatrix(createMatrix(-0.00561523f, 0.0915527f, -0.0301056f, -0.00184631f, -96.4f, -6.4f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_14(Path path)
    {
        path.reset();
        path.moveTo(-82.3f, 6.85f);
        path.quadTo(-90.6f, 13.4f, -97.9f, 20.9f);
        path.quadTo(-116.25f, 39.85f, -115.85f, 51.3f);
        path.quadTo(-115.7f, 56.3f, -111.65f, 60.75f);
        path.quadTo(-109.05f, 63.7f, -106.45f, 64.85f);
        path.lineTo(-102.85f, 65.8f);
        path.lineTo(-102.75f, 65.75f);
        path.lineTo(-102.1f, 65.9f);
        path.quadTo(-98.0f, 66.4f, -94.5f, 64.75f);
        path.quadTo(-90.1f, 62.7f, -86.1f, 56.8f);
        path.quadTo(-83.55f, 52.95f, -79.25f, 43.95f);
        path.quadTo(-74.4f, 34.0f, -71.8f, 29.6f);
        path.quadTo(-65.15f, 18.35f, -53.95f, 5.04999f);
        path.quadTo(-52.5f, 3.29999f, -48.35f, 0.849993f);
        path.quadTo(-44.6f, -1.35001f, -41.35f, -2.60001f);
        path.lineTo(-34.85f, -4.75001f);
        path.quadTo(-31.75f, -6.10001f, -31.85f, -9.15001f);
        path.quadTo(-31.9f, -11.05f, -33.55f, -12.55f);
        path.quadTo(-35.15f, -14.0f, -37.5f, -14.35f);
        path.quadTo(-42.6f, -15.1f, -50.75f, -11.5f);
        path.lineTo(-69.0f, -2.15001f);
        path.quadTo(-74.45f, 0.6f, -82.3f, 6.85f);
        path.close();
    }

    private static void draw_14(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_14(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_2();
        shader.setLocalMatrix(createMatrix(-0.0147247f, 0.026474f, -0.0460815f, -0.034256f, -79.7f, 30.4f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_15(Path path)
    {
        path.reset();
        path.moveTo(-24.85f, -7.25f);
        path.quadTo(-30.3f, -22.95f, -43.5f, -22.95f);
        path.quadTo(-56.05f, -22.95f, -63.35f, -13.65f);
        path.quadTo(-67.15f, -8.7f, -69.25f, -1.75f);
        path.lineTo(-70.35f, 3.0f);
        path.lineTo(-70.5f, 4.5f);
        path.quadTo(-70.5f, 10.05f, -68.05f, 16.65f);
        path.quadTo(-65.6f, 23.35f, -65.6f, 30.75f);
        path.quadTo(-65.6f, 38.6f, -69.3f, 52.85f);
        path.quadTo(-72.95f, 67.05f, -72.95f, 74.65f);
        path.quadTo(-72.95f, 87.9f, -66.1f, 105.45f);
        path.quadTo(-62.1f, 115.55f, -61.4f, 117.9f);
        path.quadTo(-59.25f, 124.5f, -59.25f, 129.55f);
        path.quadTo(-59.25f, 135.45f, -60.25f, 137.7f);
        path.lineTo(-64.15f, 145.75f);
        path.quadTo(-64.6f, 147.0f, -64.85f, 153.85f);
        path.quadTo(-65.1f, 160.75f, -66.1f, 163.4f);
        path.lineTo(-73.4f, 181.55f);
        path.quadTo(-76.85f, 191.45f, -76.85f, 200.4f);
        path.quadTo(-76.85f, 217.8f, -70.0f, 217.8f);
        path.quadTo(-69.3f, 217.8f, -67.8f, 217.05f);
        path.quadTo(-66.3f, 216.35f, -65.85f, 216.35f);
        path.quadTo(-65.15f, 216.35f, -62.15f, 219.5f);
        path.quadTo(-59.25f, 222.7f, -57.75f, 222.7f);
        path.quadTo(-57.2f, 222.7f, -54.25f, 220.85f);
        path.quadTo(-51.15f, 218.9f, -50.85f, 218.8f);
        path.quadTo(-49.95f, 220.05f, -48.15f, 223.45f);
        path.quadTo(-46.35f, 226.15f, -44.0f, 226.15f);
        path.quadTo(-39.55f, 226.15f, -36.65f, 220.3f);
        path.quadTo(-34.2f, 215.45f, -34.2f, 210.95f);
        path.quadTo(-34.2f, 205.4f, -33.45f, 192.05f);
        path.quadTo(-32.7f, 178.7f, -32.7f, 173.95f);
        path.quadTo(-32.7f, 167.0f, -34.4f, 151.5f);
        path.quadTo(-36.15f, 135.95f, -36.15f, 122.95f);
        path.quadTo(-36.15f, 111.95f, -33.8f, 98.7999f);
        path.quadTo(-32.4f, 91.2499f, -28.55f, 75.0499f);
        path.quadTo(-20.95f, 43.2999f, -20.95f, 24.8499f);
        path.quadTo(-20.95f, 4.05f, -24.85f, -7.25f);
        path.close();
    }

    private static void draw_15(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_15(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(-1.52588e-05f, -0.11908f, 0.0341644f, 0.0f, -48.9f, 101.6f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_16(Path path)
    {
        path.reset();
        path.moveTo(-19.65f, -1.0f);
        path.quadTo(-14.2f, -16.7f, -1.0f, -16.7f);
        path.quadTo(11.55f, -16.7f, 18.85f, -7.4f);
        path.quadTo(22.65f, -2.45f, 24.75f, 4.5f);
        path.lineTo(25.85f, 9.25f);
        path.lineTo(26.0f, 10.75f);
        path.quadTo(26.0f, 16.3f, 23.55f, 22.9f);
        path.quadTo(21.1f, 29.6f, 21.1f, 37.0f);
        path.quadTo(21.1f, 44.85f, 24.8f, 59.1f);
        path.quadTo(28.45f, 73.3f, 28.45f, 80.9f);
        path.quadTo(28.45f, 94.15f, 21.6f, 111.7f);
        path.quadTo(17.6f, 121.8f, 16.9f, 124.15f);
        path.quadTo(14.75f, 130.75f, 14.75f, 135.8f);
        path.quadTo(14.75f, 141.7f, 15.75f, 143.95f);
        path.lineTo(19.65f, 152.0f);
        path.quadTo(20.1f, 153.25f, 20.35f, 160.1f);
        path.quadTo(20.6f, 167.0f, 21.6f, 169.65f);
        path.lineTo(28.9f, 187.8f);
        path.quadTo(32.35f, 197.7f, 32.35f, 206.65f);
        path.quadTo(32.35f, 224.05f, 25.5f, 224.05f);
        path.quadTo(24.8f, 224.05f, 23.3f, 223.3f);
        path.quadTo(21.8f, 222.6f, 21.35f, 222.6f);
        path.quadTo(20.65f, 222.6f, 17.65f, 225.75f);
        path.quadTo(14.75f, 228.95f, 13.25f, 228.95f);
        path.quadTo(12.7f, 228.95f, 9.75f, 227.1f);
        path.lineTo(6.35f, 225.05f);
        path.quadTo(5.45f, 226.3f, 3.65f, 229.7f);
        path.quadTo(1.85f, 232.4f, -0.500004f, 232.4f);
        path.quadTo(-4.95f, 232.4f, -7.85f, 226.55f);
        path.quadTo(-10.3f, 221.7f, -10.3f, 217.2f);
        path.quadTo(-10.3f, 211.65f, -11.05f, 198.3f);
        path.quadTo(-11.8f, 184.95f, -11.8f, 180.2f);
        path.quadTo(-11.8f, 173.25f, -10.1f, 157.75f);
        path.quadTo(-8.35f, 142.2f, -8.35f, 129.2f);
        path.quadTo(-8.35f, 118.2f, -10.7f, 105.05f);
        path.quadTo(-12.1f, 97.4999f, -15.95f, 81.2999f);
        path.quadTo(-23.55f, 49.5499f, -23.55f, 31.0999f);
        path.quadTo(-23.55f, 10.3f, -19.65f, -1.0f);
        path.close();
    }

    private static void draw_16(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_16(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 466.0f, 577.5f));
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(1.52588e-05f, -0.11908f, -0.0341644f, 0.0f, 4.4f, 107.85f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_17(Path path)
    {
        path.reset();
        path.moveTo(15.75f, -13.25f);
        path.quadTo(8.65f, -21.75f, 2.75f, -21.75f);
        path.lineTo(-0.0500005f, -21.55f);
        path.lineTo(-0.8f, -21.4f);
        path.quadTo(-5.15f, -18.8f, -12.0f, -12.6f);
        path.quadTo(-22.75f, -2.95f, -22.75f, 3.0f);
        path.lineTo(-22.75f, 5.75f);
        path.quadTo(-22.5f, 6.25f, -20.25f, 6.25f);
        path.lineTo(-17.6f, 5.75f);
        path.lineTo(-15.0f, 5.25f);
        path.quadTo(-10.55f, 5.25f, -10.3f, 9.5f);
        path.lineTo(-10.25f, 13.95f);
        path.quadTo(-10.1f, 17.0f, -9.25f, 19.25f);
        path.lineTo(-7.75f, 19.25f);
        path.quadTo(-5.8f, 16.25f, -5.4f, 10.55f);
        path.lineTo(-5.25f, 0.75f);
        path.lineTo(-4.75f, 0.75f);
        path.quadTo(-4.4f, 2.55f, -4.6f, 12.6f);
        path.quadTo(-4.3f, 21.75f, -1.25f, 21.75f);
        path.quadTo(1.75f, 21.75f, 2.75f, 16.75f);
        path.quadTo(3.25f, 14.15f, 3.25f, 8.5f);
        path.quadTo(3.25f, 6.55f, 2.5f, 2.1f);
        path.quadTo(1.85f, -1.8f, 1.75f, -3.75f);
        path.quadTo(5.6f, -2.2f, 5.4f, 6.85f);
        path.quadTo(5.2f, 17.95f, 6.25f, 20.25f);
        path.quadTo(8.8f, 21.05f, 11.1f, 15.5f);
        path.quadTo(13.25f, 10.45f, 13.25f, 5.75f);
        path.quadTo(13.25f, -3.9f, 8.75f, -9.25f);
        path.lineTo(9.25f, -9.25f);
        path.quadTo(14.25f, -6.3f, 15.85f, 4.45f);
        path.lineTo(16.8f, 11.3f);
        path.quadTo(17.3f, 14.25f, 18.25f, 14.25f);
        path.quadTo(20.5f, 14.25f, 21.75f, 9.75f);
        path.quadTo(22.75f, 6.15f, 22.75f, 1.75f);
        path.quadTo(22.75f, -4.9f, 15.75f, -13.25f);
        path.close();
    }

    private static void draw_17(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_17(path);
        paint.setColor(Color.argb(255, 52, 105, 158));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_shape_7(Canvas canvas, Path path, Paint paint)
    {
        draw_17(canvas, path, paint);
    }

    private static void def_path_18(Path path)
    {
        path.reset();
        path.moveTo(0.0f, -17.05f);
        path.lineTo(-4.75f, -16.8f);
        path.quadTo(-6.1f, -16.9f, -6.75f, -17.85f);
        path.quadTo(-7.35f, -18.8f, -8.4f, -18.8f);
        path.quadTo(-10.7f, -18.8f, -12.45f, -17.85f);
        path.quadTo(-14.75f, -14.7f, -16.5f, -9.45004f);
        path.quadTo(-20.0f, 0.899963f, -17.55f, 7.04996f);
        path.quadTo(-15.95f, 11.15f, -13.7f, 14.15f);
        path.quadTo(-10.9f, 17.9f, -8.8f, 17.05f);
        path.quadTo(-7.95f, 16.7f, -8.55f, 13.8f);
        path.lineTo(-10.2f, 7.09996f);
        path.quadTo(-12.6f, -3.50004f, -9.0f, -8.05004f);
        path.lineTo(-8.55f, -8.25004f);
        path.quadTo(-10.75f, -1.65004f, -7.25f, 7.34996f);
        path.quadTo(-5.55f, 11.7f, -1.7f, 15.6f);
        path.quadTo(2.45f, 20.0f, 4.5f, 18.3f);
        path.quadTo(4.65f, 15.75f, 0.450003f, 5.49996f);
        path.quadTo(-3.05f, -2.85004f, 2.90871e-06f, -5.70004f);
        path.lineTo(1.4f, 0.049963f);
        path.quadTo(2.35f, 4.44996f, 3.05f, 6.24996f);
        path.quadTo(5.1f, 11.5f, 6.5f, 13.8f);
        path.quadTo(9.25f, 18.05f, 12.05f, 17.0f);
        path.quadTo(14.85f, 15.85f, 11.85f, 7.19997f);
        path.quadTo(8.0f, -2.05003f, 7.65f, -3.85003f);
        path.lineTo(8.1f, -4.05003f);
        path.lineTo(11.85f, 4.99997f);
        path.quadTo(14.25f, 10.15f, 17.2f, 12.25f);
        path.lineTo(18.55f, 11.7f);
        path.quadTo(18.55f, 9.29997f, 17.55f, 6.39997f);
        path.lineTo(16.0f, 2.29997f);
        path.lineTo(15.7f, 0.999967f);
        path.lineTo(15.5f, 0.199967f);
        path.lineTo(15.9f, -2.05003f);
        path.lineTo(16.25f, -4.45003f);
        path.quadTo(16.25f, -5.20003f, 15.65f, -7.00003f);
        path.lineTo(14.75f, -9.30003f);
        path.lineTo(13.6f, -9.95003f);
        path.quadTo(12.6f, -10.25f, 12.5f, -10.3f);
        path.lineTo(11.6f, -11.6f);
        path.lineTo(10.5f, -12.8f);
        path.lineTo(7.30001f, -13.75f);
        path.quadTo(5.10001f, -14.3f, 4.75001f, -14.55f);
        path.quadTo(1.65f, -17.05f, 0.0f, -17.05f);
        path.close();
    }

    private static void draw_18(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_18(path);
        paint.setColor(Color.argb(255, 52, 105, 158));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_shape_9(Canvas canvas, Path path, Paint paint)
    {
        draw_18(canvas, path, paint);
    }

    private static void def_path_19(Path path)
    {
        path.reset();
        path.moveTo(1.45f, 8.0f);
        path.lineTo(1.75f, 13.5f);
        path.lineTo(1.95f, 19.95f);
        path.lineTo(2.4f, 29.5f);
        path.lineTo(2.45f, 30.0f);
    }

    private static void draw_19(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_19(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 442.0f, 376.95f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(3.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_20(Path path)
    {
        path.reset();
        path.moveTo(-20.05f, -3.5f);
        path.quadTo(-20.05f, -4.8f, -18.05f, -5.5f);
        path.lineTo(-15.05f, -6.0f);
        path.quadTo(-14.15f, -6.0f, -12.05f, -5.05f);
        path.quadTo(-10.45f, -4.35f, -9.4f, -4.45f);
        path.lineTo(-9.05f, -4.0f);
        path.lineTo(-9.05f, -4.5f);
        path.lineTo(-9.4f, -4.45f);
        path.lineTo(-12.4f, -8.2f);
        path.quadTo(-13.55f, -10.1f, -13.55f, -12.75f);
        path.quadTo(-13.55f, -14.5f, -13.05f, -15.0f);
        path.quadTo(-12.6f, -15.5f, -11.05f, -15.5f);
        path.quadTo(-9.2f, -15.5f, -7.2f, -14.4f);
        path.quadTo(-4.9f, -13.15f, -5.05f, -11.5f);
        path.lineTo(-4.55f, -11.5f);
        path.quadTo(-4.55f, -12.85f, -5.3f, -14.7f);
        path.quadTo(-6.05f, -16.55f, -6.05f, -17.5f);
        path.quadTo(-6.05f, -19.0f, -5.55f, -19.5f);
        path.quadTo(-5.0f, -20.0f, -3.3f, -20.0f);
        path.quadTo(-0.549998f, -20.0f, 0.950002f, -16.4f);
        path.quadTo(1.75f, -14.45f, 1.95f, -13.1f);
        path.quadTo(2.6f, -16.2f, 4.2f, -20.7f);
        path.quadTo(7.55f, -29.95f, 11.0f, -30.0f);
        path.lineTo(13.5f, -30.0f);
        path.quadTo(14.0f, -29.0f, 14.0f, -26.75f);
        path.quadTo(14.0f, -23.15f, 10.8f, -17.55f);
        path.lineTo(6.6f, -10.6f);
        path.lineTo(6.0f, -10.5f);
        path.lineTo(6.5f, -10.5f);
        path.lineTo(6.6f, -10.6f);
        path.lineTo(9.8f, -11.2f);
        path.lineTo(13.0f, -11.5f);
        path.quadTo(15.65f, -11.5f, 18.0f, -9.0f);
        path.quadTo(20.0f, -6.85f, 20.0f, -5.5f);
        path.quadTo(20.0f, -2.6f, 15.45f, -2.5f);
        path.lineTo(10.75f, -3.0f);
        path.lineTo(9.0f, -3.0f);
        path.quadTo(10.8f, -2.55f, 12.95f, 1.65f);
        path.quadTo(15.0f, 5.65f, 15.0f, 8.0f);
        path.quadTo(15.0f, 9.4f, 14.5f, 10.0f);
        path.quadTo(14.1f, 10.5f, 13.25f, 10.5f);
        path.quadTo(11.5f, 10.5f, 8.75f, 7.55f);
        path.quadTo(6.75f, 5.4f, 6.0f, 4.0f);
        path.lineTo(5.5f, 4.0f);
        path.lineTo(5.15f, 8.85f);
        path.quadTo(4.3f, 13.25f, 1.75f, 13.5f);
        path.lineTo(1.45f, 13.5f);
        path.quadTo(-0.699998f, 13.5f, -1.6f, 10.65f);
        path.quadTo(-2.05f, 9.15f, -2.05f, 7.5f);
        path.lineTo(-2.05f, 6.5f);
        path.quadTo(-4.5f, 10.8f, -5.5f, 11.75f);
        path.quadTo(-6.7f, 13.0f, -10.3f, 13.0f);
        path.quadTo(-12.5f, 13.0f, -13.05f, 12.5f);
        path.quadTo(-13.55f, 12.0f, -13.55f, 10.0f);
        path.quadTo(-13.55f, 6.7f, -12.4f, 5.7f);
        path.lineTo(-9.4f, 2.55f);
        path.lineTo(-8.55f, 2.0f);
        path.lineTo(-9.05f, 2.0f);
        path.lineTo(-9.4f, 2.55f);
        path.lineTo(-9.9f, 2.7f);
        path.lineTo(-11.8f, 3.0f);
        path.quadTo(-14.75f, 3.0f, -17.55f, 0.499999f);
        path.quadTo(-20.05f, -1.75f, -20.05f, -3.5f);
        path.close();
    }

    private static void draw_20(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_20(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 442.0f, 376.95f));
        paint.setColor(Color.argb(255, 255, 255, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_21(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_20(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 442.0f, 376.95f));
        paint.setColor(Color.argb(0, 0, 0, 0));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_21(Path path)
    {
        path.reset();
        path.moveTo(-2.5f, -2.5f);
        path.quadTo(-2.5f, -3.95f, -1.5f, -5.0f);
        path.quadTo(-0.45f, -6.0f, 1.0f, -6.0f);
        path.quadTo(2.45f, -6.0f, 3.45f, -5.0f);
        path.quadTo(4.5f, -3.95f, 4.5f, -2.5f);
        path.quadTo(4.5f, -1.05f, 3.45f, -0.05f);
        path.quadTo(2.45f, 1.0f, 1.0f, 1.0f);
        path.quadTo(-0.45f, 1.0f, -1.5f, -0.05f);
        path.quadTo(-2.5f, -1.05f, -2.5f, -2.5f);
        path.close();
    }

    private static void draw_22(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_21(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 442.0f, 376.95f));
        paint.setColor(Color.argb(255, 255, 204, 102));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_23(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_21(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 442.0f, 376.95f));
        paint.setColor(Color.argb(0, 0, 0, 0));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_22(Path path)
    {
        path.reset();
        path.moveTo(-56.35f, -6.85f);
        path.quadTo(-53.6f, -6.85f, -51.05f, -3.65f);
        path.quadTo(-48.75f, -0.7f, -47.05f, 3.9f);
        path.quadTo(-49.7f, 4.1f, -49.15f, 10.2f);
        path.quadTo(-52.3f, -4.8f, -58.25f, -4.8f);
        path.quadTo(-59.45f, -4.8f, -60.45f, -3.85f);
        path.lineTo(-60.0f, -4.8f);
        path.quadTo(-58.75f, -6.85f, -56.35f, -6.85f);
        path.close();
        path.moveTo(-56.9f, 2.95f);
        path.quadTo(-56.5f, 2.05f, -55.5f, 1.45f);
        path.quadTo(-56.2f, 2.95f, -56.2f, 4.85f);
        path.quadTo(-56.2f, 7.35f, -55.0f, 9.65f);
        path.lineTo(-54.3f, 10.8f);
        path.lineTo(-54.45f, 9.2f);
        path.quadTo(-54.45f, 7.45f, -53.65f, 5.6f);
        path.lineTo(-53.15f, 4.55f);
        path.lineTo(-53.35f, 6.65f);
        path.quadTo(-53.35f, 10.35f, -52.1f, 11.75f);
        path.lineTo(-52.05f, 11.8f);
        path.quadTo(-52.9f, 13.2f, -54.65f, 13.35f);
        path.quadTo(-55.75f, 12.7f, -56.55f, 10.9f);
        path.quadTo(-57.45f, 8.8f, -57.45f, 6.55f);
        path.quadTo(-57.45f, 4.05f, -56.9f, 2.95f);
        path.close();
        path.moveTo(-41.5f, 4.0f);
        path.quadTo(-45.95f, -6.5f, -48.2f, -9.5f);
        path.quadTo(-52.25f, -14.9f, -56.95f, -14.9f);
        path.quadTo(-61.5f, -14.9f, -63.45f, -9.0f);
        path.quadTo(-64.75f, -5.25f, -64.75f, -0.2f);
        path.quadTo(-64.75f, 9.3f, -58.4f, 16.65f);
        path.quadTo(-52.6f, 23.4f, -46.45f, 23.4f);
        path.quadTo(-42.9f, 23.4f, -40.75f, 18.75f);
        path.quadTo(-39.05f, 15.05f, -39.05f, 11.2f);
        path.quadTo(-39.05f, 8.6f, -41.45f, 4.1f);
        path.lineTo(-41.5f, 4.0f);
        path.close();
    }

    private static Shader create_gradient_3()
    {
        int colors[] = {
            Color.argb(255, 51, 102, 153),
            Color.argb(255, 35, 70, 105)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new RadialGradient(0.0f, 0.0f, 819.2f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_24(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_22(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        Shader shader = create_gradient_3();
        shader.setLocalMatrix(createMatrix(-0.0155945f, -0.0270081f, 0.0270081f, -0.0155945f, -68.9f, 8.65f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_23(Path path)
    {
        path.reset();
        path.moveTo(-56.35f, -6.85f);
        path.quadTo(-58.75f, -6.85f, -60.0f, -4.8f);
        path.lineTo(-60.45f, -3.85f);
        path.quadTo(-59.45f, -4.8f, -58.25f, -4.8f);
        path.quadTo(-52.3f, -4.8f, -49.15f, 10.2f);
        path.quadTo(-49.7f, 4.1f, -47.05f, 3.9f);
        path.quadTo(-48.75f, -0.699999f, -51.05f, -3.65f);
        path.quadTo(-53.6f, -6.85f, -56.35f, -6.85f);
        path.close();
        path.moveTo(-56.9f, 2.95f);
        path.quadTo(-57.45f, 4.05f, -57.45f, 6.55f);
        path.quadTo(-57.45f, 8.8f, -56.55f, 10.9f);
        path.quadTo(-55.75f, 12.7f, -54.65f, 13.35f);
        path.quadTo(-52.9f, 13.2f, -52.05f, 11.8f);
        path.lineTo(-52.1f, 11.75f);
        path.quadTo(-53.35f, 10.35f, -53.35f, 6.65f);
        path.lineTo(-53.15f, 4.55f);
        path.lineTo(-53.65f, 5.6f);
        path.quadTo(-54.45f, 7.45f, -54.45f, 9.2f);
        path.lineTo(-54.3f, 10.8f);
        path.lineTo(-55.0f, 9.65f);
        path.quadTo(-56.2f, 7.35f, -56.2f, 4.85f);
        path.quadTo(-56.2f, 2.95f, -55.5f, 1.45f);
        path.quadTo(-56.5f, 2.05f, -56.9f, 2.95f);
        path.close();
    }

    private static void draw_25(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_23(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_24(Path path)
    {
        path.reset();
        path.moveTo(-56.35f, -6.85f);
        path.quadTo(-58.75f, -6.85f, -60.0f, -4.8f);
        path.lineTo(-60.45f, -3.85f);
        path.quadTo(-59.45f, -4.8f, -58.25f, -4.8f);
        path.quadTo(-52.3f, -4.8f, -49.15f, 10.2f);
        path.quadTo(-49.7f, 4.1f, -47.05f, 3.9f);
        path.quadTo(-48.75f, -0.699999f, -51.05f, -3.65f);
        path.quadTo(-53.6f, -6.85f, -56.35f, -6.85f);
        path.close();
    }

    private static void draw_26(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_24(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_25(Path path)
    {
        path.reset();
        path.moveTo(-56.9f, 2.95f);
        path.quadTo(-57.45f, 4.05f, -57.45f, 6.55f);
        path.quadTo(-57.45f, 8.8f, -56.55f, 10.9f);
        path.quadTo(-55.75f, 12.7f, -54.65f, 13.35f);
        path.quadTo(-52.9f, 13.2f, -52.05f, 11.8f);
        path.lineTo(-52.1f, 11.75f);
        path.quadTo(-53.35f, 10.35f, -53.35f, 6.65f);
        path.lineTo(-53.15f, 4.55f);
        path.lineTo(-53.65f, 5.6f);
        path.quadTo(-54.45f, 7.45f, -54.45f, 9.2f);
        path.lineTo(-54.3f, 10.8f);
        path.lineTo(-55.0f, 9.65f);
        path.quadTo(-56.2f, 7.35f, -56.2f, 4.85f);
        path.quadTo(-56.2f, 2.95f, -55.5f, 1.45f);
        path.quadTo(-56.5f, 2.05f, -56.9f, 2.95f);
    }

    private static void draw_27(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_25(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_26(Path path)
    {
        path.reset();
        path.moveTo(25.5f, -57.7f);
        path.lineTo(21.1f, -60.4f);
        path.quadTo(9.75f, -64.55f, -1.15f, -64.95f);
        path.quadTo(-15.9f, -65.5f, -28.1f, -59.05f);
        path.quadTo(-57.15f, -43.55f, -52.05f, -6.25001f);
        path.quadTo(-48.75f, 18.15f, -33.2f, 44.4f);
        path.quadTo(-23.25f, 61.35f, -8.55f, 64.35f);
        path.quadTo(4.0f, 66.85f, 18.15f, 59.3f);
        path.quadTo(30.85f, 52.45f, 38.85f, 39.35f);
        path.quadTo(46.1f, 27.55f, 48.7f, 12.2f);
        path.quadTo(51.1f, -1.95f, 49.0f, -16.05f);
        path.quadTo(47.05f, -29.8f, 41.45f, -39.3f);
        path.quadTo(34.05f, -51.85f, 25.5f, -57.7f);
        path.close();
    }

    private static void draw_28(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_26(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        Shader shader = create_gradient_3();
        shader.setLocalMatrix(createMatrix(-0.0247955f, 0.0812836f, 0.0632782f, 0.0193024f, -19.55f, 5.15f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_27(Path path)
    {
        path.reset();
        path.moveTo(-15.95f, -10.0f);
        path.quadTo(-20.05f, -14.8f, -30.95f, -14.8f);
        path.lineTo(-36.8f, -14.45f);
        path.lineTo(-40.95f, -13.75f);
        path.quadTo(-37.55f, -15.1f, -34.3f, -15.7f);
        path.lineTo(-25.7f, -16.3f);
        path.quadTo(-15.5f, -16.3f, -12.1f, -8.35f);
        path.quadTo(-9.85f, -3.0f, -10.1f, 9.15f);
        path.quadTo(-10.4f, 23.0f, -9.65f, 26.65f);
        path.quadTo(-7.95f, 34.6f, -0.65f, 34.6f);
        path.lineTo(1.6f, 34.35f);
        path.lineTo(2.5f, 34.15f);
        path.lineTo(0.8f, 35.5f);
        path.lineTo(-2.9f, 36.1f);
        path.quadTo(-3.25f, 38.0f, -3.25f, 41.35f);
        path.lineTo(-3.5f, 41.35f);
        path.lineTo(-3.8f, 38.4f);
        path.lineTo(-4.1f, 36.1f);
        path.quadTo(-8.95f, 35.8f, -11.05f, 31.05f);
        path.quadTo(-12.75f, 27.2f, -12.75f, 19.9f);
        path.lineTo(-12.1f, 5.5f);
        path.quadTo(-12.1f, -5.5f, -15.95f, -10.0f);
        path.close();
        path.moveTo(16.25f, -12.5f);
        path.quadTo(12.3f, -11.1f, 10.35f, -7.75f);
        path.quadTo(8.7f, -4.9f, 7.6f, 1.3f);
        path.quadTo(6.95f, 4.85f, 5.6f, 14.15f);
        path.lineTo(5.65f, 5.5f);
        path.quadTo(5.7f, -4.85f, 8.3f, -9.8f);
        path.quadTo(11.9f, -16.8f, 21.4f, -16.8f);
        path.quadTo(26.85f, -16.8f, 31.25f, -15.8f);
        path.quadTo(35.5f, -14.8f, 41.6f, -12.1f);
        path.lineTo(36.3f, -13.0f);
        path.lineTo(27.9f, -13.85f);
        path.quadTo(20.2f, -13.85f, 16.25f, -12.5f);
        path.close();
        path.moveTo(-9.95f, 52.45f);
        path.lineTo(-7.85f, 53.3f);
        path.lineTo(-4.1f, 53.75f);
        path.lineTo(-0.9f, 53.3f);
        path.quadTo(0.9f, 52.85f, 1.65f, 52.15f);
        path.quadTo(0.95f, 53.65f, -0.8f, 54.55f);
        path.quadTo(-2.55f, 55.45f, -4.85f, 55.45f);
        path.quadTo(-7.25f, 55.45f, -8.6f, 54.5f);
        path.quadTo(-9.65f, 53.75f, -9.95f, 52.45f);
        path.close();
        path.moveTo(4.45f, 46.6f);
        path.lineTo(-13.35f, 46.6f);
        path.quadTo(-8.45f, 45.35f, -5.6f, 45.35f);
        path.quadTo(1.5f, 45.45f, 4.45f, 46.6f);
        path.close();
    }

    private static void draw_29(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_27(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_28(Path path)
    {
        path.reset();
        path.moveTo(56.35f, -9.4f);
        path.quadTo(53.6f, -9.4f, 51.05f, -6.2f);
        path.quadTo(48.75f, -3.25f, 47.05f, 1.35f);
        path.quadTo(49.7f, 1.55f, 49.15f, 7.65f);
        path.quadTo(52.3f, -7.35f, 58.25f, -7.35f);
        path.quadTo(59.45f, -7.35f, 60.45f, -6.4f);
        path.lineTo(60.0f, -7.35f);
        path.quadTo(58.75f, -9.4f, 56.35f, -9.4f);
        path.close();
        path.moveTo(56.9f, 0.4f);
        path.quadTo(56.5f, -0.5f, 55.5f, -1.1f);
        path.quadTo(56.2f, 0.4f, 56.2f, 2.3f);
        path.quadTo(56.2f, 4.8f, 55.0f, 7.1f);
        path.lineTo(54.3f, 8.25f);
        path.lineTo(54.45f, 6.65f);
        path.quadTo(54.45f, 4.9f, 53.65f, 3.05f);
        path.lineTo(53.15f, 2.0f);
        path.lineTo(53.35f, 4.1f);
        path.quadTo(53.35f, 7.8f, 52.1f, 9.2f);
        path.lineTo(52.05f, 9.25f);
        path.quadTo(52.9f, 10.65f, 54.65f, 10.8f);
        path.quadTo(55.75f, 10.15f, 56.55f, 8.35f);
        path.quadTo(57.45f, 6.25f, 57.45f, 4.0f);
        path.quadTo(57.45f, 1.5f, 56.9f, 0.4f);
        path.close();
        path.moveTo(41.5f, 1.45f);
        path.quadTo(45.95f, -9.05f, 48.2f, -12.05f);
        path.quadTo(52.25f, -17.45f, 56.95f, -17.45f);
        path.quadTo(61.5f, -17.45f, 63.45f, -11.55f);
        path.quadTo(64.75f, -7.8f, 64.75f, -2.75f);
        path.quadTo(64.75f, 6.75f, 58.4f, 14.1f);
        path.quadTo(52.6f, 20.85f, 46.45f, 20.85f);
        path.quadTo(42.9f, 20.85f, 40.75f, 16.2f);
        path.quadTo(39.05f, 12.5f, 39.05f, 8.65f);
        path.quadTo(39.05f, 6.05f, 41.45f, 1.55f);
        path.lineTo(41.5f, 1.45f);
        path.close();
    }

    private static void draw_30(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_28(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        Shader shader = create_gradient_3();
        shader.setLocalMatrix(createMatrix(0.0155945f, -0.0270081f, -0.0270081f, -0.0155945f, 68.9f, 6.1f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_29(Path path)
    {
        path.reset();
        path.moveTo(56.35f, -9.4f);
        path.quadTo(58.75f, -9.4f, 60.0f, -7.35f);
        path.lineTo(60.45f, -6.4f);
        path.quadTo(59.45f, -7.35f, 58.25f, -7.35f);
        path.quadTo(52.3f, -7.35f, 49.15f, 7.65f);
        path.quadTo(49.7f, 1.55f, 47.05f, 1.35f);
        path.quadTo(48.75f, -3.25f, 51.05f, -6.2f);
        path.quadTo(53.6f, -9.4f, 56.35f, -9.4f);
        path.close();
        path.moveTo(56.9f, 0.4f);
        path.quadTo(57.45f, 1.5f, 57.45f, 4.0f);
        path.quadTo(57.45f, 6.25f, 56.55f, 8.35f);
        path.quadTo(55.75f, 10.15f, 54.65f, 10.8f);
        path.quadTo(52.9f, 10.65f, 52.05f, 9.25f);
        path.lineTo(52.1f, 9.2f);
        path.quadTo(53.35f, 7.8f, 53.35f, 4.1f);
        path.lineTo(53.15f, 2.0f);
        path.lineTo(53.65f, 3.05f);
        path.quadTo(54.45f, 4.9f, 54.45f, 6.65f);
        path.lineTo(54.3f, 8.25f);
        path.lineTo(55.0f, 7.1f);
        path.quadTo(56.2f, 4.8f, 56.2f, 2.3f);
        path.quadTo(56.2f, 0.400001f, 55.5f, -1.1f);
        path.quadTo(56.5f, -0.5f, 56.9f, 0.4f);
        path.close();
    }

    private static void draw_31(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_29(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_30(Path path)
    {
        path.reset();
        path.moveTo(56.35f, -9.4f);
        path.quadTo(58.75f, -9.4f, 60.0f, -7.35f);
        path.lineTo(60.45f, -6.4f);
        path.quadTo(59.45f, -7.35f, 58.25f, -7.35f);
        path.quadTo(52.3f, -7.35f, 49.15f, 7.65f);
        path.quadTo(49.7f, 1.55f, 47.05f, 1.35f);
        path.quadTo(48.75f, -3.25f, 51.05f, -6.2f);
        path.quadTo(53.6f, -9.4f, 56.35f, -9.4f);
        path.close();
    }

    private static void draw_32(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_30(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_31(Path path)
    {
        path.reset();
        path.moveTo(56.9f, 0.4f);
        path.quadTo(57.45f, 1.5f, 57.45f, 4.0f);
        path.quadTo(57.45f, 6.25f, 56.55f, 8.35f);
        path.quadTo(55.75f, 10.15f, 54.65f, 10.8f);
        path.quadTo(52.9f, 10.65f, 52.05f, 9.25f);
        path.lineTo(52.1f, 9.2f);
        path.quadTo(53.35f, 7.8f, 53.35f, 4.1f);
        path.lineTo(53.15f, 2.0f);
        path.lineTo(53.65f, 3.05f);
        path.quadTo(54.45f, 4.9f, 54.45f, 6.65f);
        path.lineTo(54.3f, 8.25f);
        path.lineTo(55.0f, 7.1f);
        path.quadTo(56.2f, 4.8f, 56.2f, 2.3f);
        path.quadTo(56.2f, 0.400001f, 55.5f, -1.1f);
        path.quadTo(56.5f, -0.5f, 56.9f, 0.4f);
    }

    private static void draw_33(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_31(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 443.9f, 467.35f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_32(Path path)
    {
        path.reset();
        path.moveTo(-2.52716f, -2.99733f);
        path.lineTo(-9.42716f, -1.74733f);
        path.lineTo(-14.2772f, -0.597327f);
        path.lineTo(-15.7772f, -0.247327f);
        path.lineTo(-14.2772f, 0.152673f);
        path.lineTo(-6.67716f, 2.05267f);
        path.lineTo(1.92284f, 3.00267f);
        path.lineTo(5.67284f, 3.10267f);
        path.lineTo(10.4228f, 2.65267f);
        path.quadTo(13.6228f, 1.75267f, 15.6228f, -0.147327f);
        path.lineTo(9.77284f, -1.89733f);
        path.lineTo(6.17284f, -2.64733f);
        path.quadTo(6.02284f, -1.19733f, 5.07284f, 0.152673f);
        path.quadTo(3.77284f, 2.20267f, 1.92284f, 2.20267f);
        path.quadTo(-0.277159f, 2.20267f, -1.52716f, -0.247327f);
        path.lineTo(-2.52716f, -2.99733f);
        path.close();
    }

    private static void draw_34(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_32(path);
        canvas.concat(createMatrix(0.850758f, 0.0f, 0.0f, 0.850758f, 415.05f, 467.0f));
        paint.setColor(Color.argb(255, 232, 243, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_33(Path path)
    {
        path.reset();
        path.moveTo(-2.52716f, -2.99733f);
        path.lineTo(-1.52716f, -0.247327f);
        path.quadTo(-0.277158f, 2.20267f, 1.92284f, 2.20267f);
        path.quadTo(3.77284f, 2.20267f, 5.07284f, 0.152673f);
        path.quadTo(6.02284f, -1.19733f, 6.17284f, -2.64733f);
        path.lineTo(2.67284f, -3.19733f);
        path.lineTo(0.422842f, -3.24733f);
        path.lineTo(-2.52716f, -2.99733f);
        path.close();
    }

    private static void draw_35(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_33(path);
        canvas.concat(createMatrix(0.850758f, 0.0f, 0.0f, 0.850758f, 415.05f, 467.0f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_34(Path path)
    {
        path.reset();
        path.moveTo(6.22974f, -2.6447f);
        path.quadTo(6.07974f, -1.1947f, 5.12974f, 0.1553f);
        path.quadTo(3.82974f, 2.2053f, 1.97974f, 2.2053f);
        path.quadTo(-0.220262f, 2.2053f, -1.47026f, -0.2447f);
        path.lineTo(-2.52716f, -2.99733f);
    }

    private static void draw_36(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_34(path);
        canvas.concat(createMatrix(0.850758f, 0.0f, 0.0f, 0.850758f, 415.05f, 467.0f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_35(Path path)
    {
        path.reset();
        path.moveTo(-6.22426f, -2.64238f);
        path.quadTo(-6.02426f, -1.19238f, -5.12426f, 0.157625f);
        path.quadTo(-3.82426f, 2.20762f, -1.97426f, 2.20762f);
        path.quadTo(0.225738f, 2.20762f, 1.47574f, -0.242375f);
        path.lineTo(2.47574f, -2.99238f);
        path.lineTo(9.32574f, -1.74238f);
        path.lineTo(14.2257f, -0.592375f);
        path.lineTo(15.6757f, -0.242375f);
        path.lineTo(14.2257f, 0.157625f);
        path.lineTo(6.62574f, 2.05762f);
        path.lineTo(-1.97426f, 3.00762f);
        path.lineTo(-5.67426f, 3.10762f);
        path.lineTo(-10.4743f, 2.65762f);
        path.quadTo(-13.6743f, 1.75762f, -15.6743f, -0.142375f);
        path.lineTo(-9.82426f, -1.89238f);
        path.lineTo(-6.22426f, -2.64238f);
        path.close();
    }

    private static void draw_37(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_35(path);
        canvas.concat(createMatrix(0.851507f, 0.0f, 0.0f, 0.851507f, 467.0f, 467.0f));
        paint.setColor(Color.argb(255, 232, 243, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_36(Path path)
    {
        path.reset();
        path.moveTo(2.52494f, -2.99469f);
        path.lineTo(1.52494f, -0.244692f);
        path.quadTo(0.274936f, 2.20531f, -1.92506f, 2.20531f);
        path.quadTo(-3.77506f, 2.20531f, -5.07506f, 0.155308f);
        path.quadTo(-5.97506f, -1.19469f, -6.17506f, -2.64469f);
        path.lineTo(-2.67506f, -3.19469f);
        path.lineTo(-0.425064f, -3.24469f);
        path.lineTo(2.52494f, -2.99469f);
        path.close();
    }

    private static void draw_38(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_36(path);
        canvas.concat(createMatrix(0.851507f, 0.0f, 0.0f, 0.851507f, 467.0f, 467.0f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_37(Path path)
    {
        path.reset();
        path.moveTo(-6.22426f, -2.64238f);
        path.quadTo(-6.02426f, -1.19238f, -5.12426f, 0.157625f);
        path.quadTo(-3.82426f, 2.20762f, -1.97426f, 2.20762f);
        path.quadTo(0.225738f, 2.20762f, 1.47574f, -0.242375f);
        path.lineTo(2.52494f, -2.99469f);
    }

    private static void draw_39(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_37(path);
        canvas.concat(createMatrix(0.851507f, 0.0f, 0.0f, 0.851507f, 467.0f, 467.0f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_38(Path path)
    {
        path.reset();
        path.moveTo(-80.1f, -98.7f);
        path.quadTo(-97.3f, -92.7f, -106.35f, -80.55f);
        path.quadTo(-115.35f, -68.6f, -117.8f, -48.85f);
        path.quadTo(-120.1f, -30.3f, -117.1f, -1.25f);
        path.quadTo(-114.2f, 27.2f, -110.35f, 45.55f);
        path.quadTo(-105.4f, 69.65f, -97.5f, 85.35f);
        path.quadTo(-78.45f, 123.35f, -36.95f, 121.75f);
        path.quadTo(8.05f, 120.0f, 30.6f, 70.75f);
        path.quadTo(50.3f, 27.65f, 47.75f, -37.5f);
        path.quadTo(46.15f, -78.45f, 18.35f, -94.85f);
        path.quadTo(-1.94999f, -106.95f, -36.45f, -105.6f);
        path.quadTo(-63.45f, -104.55f, -80.1f, -98.7f);
        path.close();
    }

    private static void draw_40(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_38(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        paint.setColor(Color.argb(255, 46, 91, 137));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_39(Path path)
    {
        path.reset();
        path.moveTo(-46.7f, -64.1f);
        path.quadTo(-45.45f, -63.15f, -43.9f, -62.4f);
        path.quadTo(-41.95f, -61.45f, -34.45f, -59.35f);
        path.quadTo(-28.5f, -57.75f, -25.85f, -55.5f);
        path.quadTo(-22.3f, -52.5f, -21.9f, -46.9f);
        path.quadTo(-20.55f, -52.85f, -22.85f, -56.15f);
        path.quadTo(-24.95f, -59.15f, -30.9f, -60.7f);
        path.lineTo(-42.35f, -62.95f);
        path.lineTo(-46.7f, -64.1f);
        path.close();
        path.moveTo(-0.8f, -55.3f);
        path.quadTo(-8.55f, -55.0f, -8.4f, -49.15f);
        path.lineTo(-8.4f, -47.55f);
        path.quadTo(-6.2f, -50.7f, -0.700001f, -52.7f);
        path.lineTo(5.1f, -54.7f);
        path.lineTo(5.05f, -55.15f);
        path.lineTo(-0.8f, -55.3f);
        path.close();
    }

    private static void draw_41(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_39(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_40(Path path)
    {
        path.reset();
        path.moveTo(-30.4f, -160.7f);
        path.lineTo(-34.75f, -158.45f);
        path.quadTo(-40.6f, -133.0f, -45.15f, -121.95f);
        path.quadTo(-51.3f, -107.05f, -61.4f, -99.6f);
        path.lineTo(-61.5f, -93.9f);
        path.quadTo(-61.5f, -77.3f, -46.0f, -67.15f);
        path.quadTo(-40.05f, -63.25f, -32.85f, -61.05f);
        path.quadTo(-26.55f, -59.15f, -21.6f, -59.15f);
        path.quadTo(-12.0f, -59.15f, -3.74999f, -66.45f);
        path.lineTo(-3.14999f, -67.0f);
        path.quadTo(-3.04999f, -74.7f, -1.59999f, -86.15f);
        path.lineTo(4.25001f, -103.95f);
        path.quadTo(9.90001f, -121.5f, 9.90001f, -127.9f);
        path.quadTo(9.90001f, -141.35f, 1.90001f, -151.65f);
        path.quadTo(-6.64999f, -162.65f, -19.35f, -162.65f);
        path.quadTo(-25.7f, -162.65f, -30.4f, -160.7f);
        path.close();
    }

    private static Shader create_gradient_4()
    {
        int colors[] = {
            Color.argb(255, 46, 91, 137),
            Color.argb(255, 51, 102, 153)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_42(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_40(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        Shader shader = create_gradient_4();
        shader.setLocalMatrix(createMatrix(0.0112305f, -0.0142212f, 0.0494995f, 0.0391235f, -29.05f, -82.15f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_41(Path path)
    {
        path.reset();
        path.moveTo(-43.65f, 6.35f);
        path.quadTo(-63.55f, 25.9f, -75.7f, 43.25f);
        path.quadTo(-89.65f, 63.15f, -89.65f, 75.35f);
        path.quadTo(-89.65f, 92.35f, -78.55f, 106.15f);
        path.quadTo(-71.35f, 115.05f, -60.0f, 120.1f);
        path.quadTo(-49.6f, 124.75f, -40.15f, 124.35f);
        path.quadTo(-24.1f, 123.7f, -9.90001f, 107.0f);
        path.quadTo(0.899994f, 94.2f, 10.35f, 72.35f);
        path.quadTo(20.75f, 50.75f, 28.15f, 33.9f);
        path.quadTo(42.35f, 1.65001f, 42.35f, -8.64999f);
        path.quadTo(42.35f, -22.45f, 35.4f, -29.65f);
        path.quadTo(28.6f, -36.65f, 15.85f, -36.65f);
        path.quadTo(9.14999f, -36.65f, -8.25f, -24.0f);
        path.quadTo(-25.35f, -11.6f, -43.65f, 6.35f);
        path.close();
    }

    private static void draw_43(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_41(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(0.0208588f, -0.0778351f, 0.0949249f, 0.0254364f, -21.5f, 42.25f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_42(Path path)
    {
        path.reset();
        path.moveTo(-129.1f, 131.25f);
        path.lineTo(-129.0f, 131.6f);
        path.quadTo(-128.95f, 129.2f, -124.85f, 127.75f);
        path.quadTo(-121.65f, 126.6f, -118.65f, 126.6f);
        path.lineTo(-112.2f, 127.4f);
        path.lineTo(-110.05f, 127.8f);
        path.lineTo(-109.2f, 128.45f);
        path.quadTo(-107.25f, 129.6f, -103.5f, 129.6f);
        path.quadTo(-101.0f, 129.6f, -99.35f, 127.6f);
        path.quadTo(-97.7f, 125.6f, -95.75f, 125.6f);
        path.quadTo(-93.1f, 125.6f, -90.15f, 127.0f);
        path.quadTo(-87.15f, 128.35f, -86.65f, 128.35f);
        path.quadTo(-84.9f, 128.35f, -84.0f, 127.4f);
        path.lineTo(-82.7f, 125.35f);
        path.quadTo(-80.9f, 122.35f, -75.9f, 122.35f);
        path.quadTo(-73.4f, 122.35f, -70.45f, 123.35f);
        path.quadTo(-67.45f, 124.35f, -66.25f, 124.35f);
        path.quadTo(-62.6f, 124.35f, -60.25f, 122.6f);
        path.quadTo(-57.5f, 120.55f, -57.5f, 116.6f);
        path.quadTo(-57.5f, 114.1f, -58.6f, 111.9f);
        path.quadTo(-59.75f, 109.7f, -59.75f, 108.35f);
        path.quadTo(-59.75f, 105.5f, -57.4f, 103.05f);
        path.lineTo(-52.25f, 98.65f);
        path.quadTo(-44.75f, 92.4f, -44.75f, 83.2f);
        path.quadTo(-44.75f, 76.05f, -51.1f, 65.35f);
        path.quadTo(-57.5f, 54.65f, -57.5f, 49.6f);
        path.quadTo(-57.5f, 37.95f, -48.7f, 26.05f);
        path.quadTo(-41.75f, 16.65f, -33.25f, 11.7f);
        path.quadTo(-53.4f, 13.5f, -67.4f, 24.5f);
        path.quadTo(-70.85f, 28.8f, -74.35f, 36.55f);
        path.quadTo(-80.0f, 48.95f, -80.0f, 57.6f);
        path.quadTo(-80.0f, 64.15f, -77.65f, 68.65f);
        path.quadTo(-76.2f, 71.45f, -72.5f, 75.15f);
        path.quadTo(-68.7f, 79.0f, -67.35f, 81.4f);
        path.quadTo(-65.0f, 85.5f, -65.0f, 91.45f);
        path.quadTo(-65.0f, 94.2f, -66.7f, 95.9f);
        path.lineTo(-70.5f, 98.4f);
        path.quadTo(-76.15f, 101.65f, -76.5f, 107.85f);
        path.quadTo(-76.9f, 114.5f, -81.55f, 118.4f);
        path.quadTo(-85.05f, 121.35f, -88.4f, 121.35f);
        path.lineTo(-91.5f, 121.0f);
        path.lineTo(-94.65f, 120.6f);
        path.quadTo(-97.3f, 120.6f, -98.95f, 121.6f);
        path.quadTo(-100.6f, 122.6f, -102.15f, 122.6f);
        path.quadTo(-103.6f, 122.6f, -106.25f, 121.35f);
        path.quadTo(-108.9f, 120.1f, -112.75f, 120.1f);
        path.quadTo(-118.55f, 120.1f, -122.75f, 122.95f);
        path.quadTo(-126.85f, 125.8f, -129.1f, 131.25f);
        path.close();
    }

    private static void draw_44(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_42(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        paint.setColor(Color.argb(255, 51, 153, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_43(Path path)
    {
        path.reset();
        path.moveTo(-67.4f, 24.5f);
        path.lineTo(-70.5f, 27.1f);
        path.lineTo(-75.15f, 30.75f);
        path.quadTo(-78.4f, 33.35f, -79.5f, 35.1f);
        path.quadTo(-80.55f, 36.65f, -81.15f, 39.5f);
        path.lineTo(-82.25f, 44.6f);
        path.quadTo(-83.15f, 47.75f, -86.5f, 49.7f);
        path.quadTo(-91.6f, 52.75f, -92.5f, 53.6f);
        path.quadTo(-95.55f, 56.45f, -97.3f, 60.8f);
        path.quadTo(-99.0f, 65.0f, -99.0f, 69.45f);
        path.quadTo(-99.0f, 81.6f, -90.0f, 85.95f);
        path.lineTo(-83.8f, 88.75f);
        path.quadTo(-81.0f, 90.5f, -81.0f, 93.45f);
        path.quadTo(-81.0f, 97.3f, -86.35f, 99.6f);
        path.quadTo(-91.75f, 101.9f, -91.75f, 105.6f);
        path.lineTo(-91.25f, 108.95f);
        path.quadTo(-91.25f, 111.5f, -93.0f, 113.6f);
        path.quadTo(-94.9f, 115.85f, -97.4f, 115.85f);
        path.quadTo(-98.55f, 115.85f, -103.35f, 114.25f);
        path.quadTo(-108.2f, 112.6f, -109.75f, 112.6f);
        path.quadTo(-116.65f, 112.6f, -122.35f, 118.4f);
        path.quadTo(-125.3f, 121.45f, -126.25f, 123.3f);
        path.lineTo(-127.5f, 124.6f);
        path.quadTo(-129.25f, 127.0f, -129.25f, 130.35f);
        path.lineTo(-129.1f, 131.25f);
        path.quadTo(-126.85f, 125.8f, -122.75f, 122.95f);
        path.quadTo(-118.55f, 120.1f, -112.75f, 120.1f);
        path.quadTo(-108.9f, 120.1f, -106.25f, 121.35f);
        path.quadTo(-103.6f, 122.6f, -102.15f, 122.6f);
        path.quadTo(-100.6f, 122.6f, -98.95f, 121.6f);
        path.quadTo(-97.3f, 120.6f, -94.65f, 120.6f);
        path.lineTo(-91.5f, 121.0f);
        path.lineTo(-88.4f, 121.35f);
        path.quadTo(-85.05f, 121.35f, -81.55f, 118.4f);
        path.quadTo(-76.9f, 114.5f, -76.5f, 107.85f);
        path.quadTo(-76.15f, 101.65f, -70.5f, 98.4f);
        path.lineTo(-66.7f, 95.9f);
        path.quadTo(-65.0f, 94.2f, -65.0f, 91.45f);
        path.quadTo(-65.0f, 85.5f, -67.35f, 81.4f);
        path.quadTo(-68.7f, 79.0f, -72.5f, 75.15f);
        path.quadTo(-76.2f, 71.45f, -77.65f, 68.65f);
        path.quadTo(-80.0f, 64.15f, -80.0f, 57.6f);
        path.quadTo(-80.0f, 48.95f, -74.35f, 36.55f);
        path.quadTo(-70.85f, 28.8f, -67.4f, 24.5f);
        path.close();
    }

    private static void draw_45(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_43(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        paint.setColor(Color.argb(255, 43, 145, 137));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_44(Path path)
    {
        path.reset();
        path.moveTo(-129.1f, 131.25f);
        path.quadTo(-126.85f, 125.8f, -122.75f, 122.95f);
        path.quadTo(-118.55f, 120.1f, -112.75f, 120.1f);
        path.quadTo(-108.9f, 120.1f, -106.25f, 121.35f);
        path.quadTo(-103.6f, 122.6f, -102.15f, 122.6f);
        path.quadTo(-100.6f, 122.6f, -98.95f, 121.6f);
        path.quadTo(-97.3f, 120.6f, -94.65f, 120.6f);
        path.lineTo(-91.5f, 121.0f);
        path.lineTo(-88.4f, 121.35f);
        path.quadTo(-85.05f, 121.35f, -81.55f, 118.4f);
        path.quadTo(-76.9f, 114.5f, -76.5f, 107.85f);
        path.quadTo(-76.15f, 101.65f, -70.5f, 98.4f);
        path.lineTo(-66.7f, 95.9f);
        path.quadTo(-65.0f, 94.2f, -65.0f, 91.45f);
        path.quadTo(-65.0f, 85.5f, -67.35f, 81.4f);
        path.quadTo(-68.7f, 79.0f, -72.5f, 75.15f);
        path.quadTo(-76.2f, 71.45f, -77.65f, 68.65f);
        path.quadTo(-80.0f, 64.15f, -80.0f, 57.6f);
        path.quadTo(-80.0f, 48.95f, -74.35f, 36.55f);
        path.quadTo(-70.85f, 28.8f, -67.4f, 24.5f);
    }

    private static void draw_46(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_44(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        paint.setColor(Color.argb(255, 43, 145, 137));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_45(Path path)
    {
        path.reset();
        path.moveTo(-111.85f, 125.85f);
        path.quadTo(-115.0f, 122.1f, -123.0f, 122.1f);
        path.quadTo(-124.85f, 122.1f, -126.25f, 123.3f);
        path.lineTo(-127.5f, 124.6f);
        path.quadTo(-129.25f, 127.0f, -129.25f, 130.35f);
        path.lineTo(-129.0f, 131.6f);
        path.quadTo(-128.95f, 129.2f, -124.85f, 127.75f);
        path.quadTo(-121.65f, 126.6f, -118.65f, 126.6f);
        path.lineTo(-112.2f, 127.4f);
        path.lineTo(-110.05f, 127.8f);
        path.lineTo(-111.85f, 125.85f);
        path.close();
    }

    private static void draw_47(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_45(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 301.4f, 626.7f));
        paint.setColor(Color.argb(255, 75, 194, 194));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_46(Path path)
    {
        path.reset();
        path.moveTo(43.9f, 107.25f);
        path.quadTo(45.2f, 107.2f, 45.7f, 106.4f);
        path.quadTo(46.45f, 105.0f, 46.45f, 103.15f);
        path.quadTo(46.45f, 95.3f, 38.45f, 88.55f);
        path.lineTo(35.35f, 85.95f);
        path.lineTo(27.55f, 81.15f);
        path.quadTo(17.45f, 74.15f, 12.9f, 66.1f);
        path.quadTo(8.0f, 57.45f, 6.9f, 44.15f);
        path.quadTo(6.65f, 31.35f, 7.15f, 10.45f);
        path.quadTo(8.15f, -30.25f, 7.4f, -48.9f);
        path.quadTo(6.05f, -82.15f, -0.449996f, -99.45f);
        path.quadTo(-8.45f, -120.85f, -24.95f, -120.85f);
        path.quadTo(-34.3f, -120.85f, -39.45f, -107.8f);
        path.quadTo(-43.45f, -97.7f, -43.45f, -85.85f);
        path.lineTo(-42.45f, -73.6f);
        path.lineTo(-41.45f, -61.35f);
        path.quadTo(-41.45f, -53.7f, -43.95f, -41.85f);
        path.quadTo(-46.45f, -29.95f, -46.45f, -22.85f);
        path.quadTo(-46.45f, -12.7f, -41.45f, -1.45001f);
        path.quadTo(-38.45f, 5.29999f, -30.45f, 18.2f);
        path.quadTo(-22.45f, 31.1f, -19.45f, 37.8f);
        path.quadTo(-14.45f, 49.0f, -14.45f, 59.15f);
        path.quadTo(-14.45f, 64.95f, -17.95f, 69.7f);
        path.quadTo(-20.75f, 73.45f, -21.3f, 77.85f);
        path.lineTo(-21.45f, 80.15f);
        path.lineTo(-21.45f, 80.45f);
        path.lineTo(-21.25f, 84.0f);
        path.quadTo(-20.4f, 86.8f, -17.4f, 88.95f);
        path.quadTo(-14.2f, 91.25f, -9.79999f, 92.15f);
        path.quadTo(-6.44999f, 92.8f, -2.19999f, 95.35f);
        path.quadTo(2.00001f, 97.85f, 4.95001f, 100.9f);
        path.lineTo(15.45f, 113.5f);
        path.quadTo(21.65f, 120.9f, 24.55f, 120.9f);
        path.quadTo(29.3f, 120.9f, 29.6f, 116.3f);
        path.quadTo(29.75f, 113.4f, 29.85f, 113.1f);
        path.quadTo(30.25f, 111.65f, 31.8f, 111.65f);
        path.quadTo(32.85f, 111.65f, 34.05f, 112.4f);
        path.quadTo(35.25f, 113.15f, 36.45f, 113.15f);
        path.quadTo(37.9f, 113.15f, 40.1f, 110.45f);
        path.lineTo(42.2f, 107.65f);
        path.quadTo(42.55f, 107.3f, 43.9f, 107.25f);
        path.close();
    }

    private static Shader create_gradient_5()
    {
        int colors[] = {
            Color.argb(255, 40, 80, 119),
            Color.argb(255, 23, 65, 85)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_48(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_46(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 384.2f, 704.9f));
        Shader shader = create_gradient_5();
        shader.setLocalMatrix(createMatrix(-1.52588e-05f, -0.0621948f, 0.147568f, -3.05176e-05f, -30.1f, -62.85f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_47(Path path)
    {
        path.reset();
        path.moveTo(19.9f, -69.95f);
        path.quadTo(5.05f, -73.95f, -10.8f, -69.6f);
        path.quadTo(-22.5f, -66.4f, -33.7f, -59.0f);
        path.lineTo(-37.8f, -54.95f);
        path.quadTo(-45.55f, -46.55f, -50.4f, -31.0f);
        path.quadTo(-54.1f, -19.35f, -52.75f, -3.95f);
        path.quadTo(-51.45f, 11.8f, -45.3f, 26.55f);
        path.quadTo(-38.6f, 42.5f, -27.8f, 53.5f);
        path.quadTo(-15.8f, 65.65f, -0.299999f, 69.8f);
        path.quadTo(16.95f, 74.45f, 29.85f, 68.55f);
        path.quadTo(45.0f, 61.6f, 51.55f, 40.8f);
        path.quadTo(61.75f, 8.4f, 59.15f, -18.8f);
        path.quadTo(55.25f, -60.5f, 19.9f, -69.95f);
        path.close();
    }

    private static void draw_49(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_47(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        Shader shader = create_gradient_3();
        shader.setLocalMatrix(createMatrix(0.0473633f, 0.0817566f, -0.0636597f, 0.0368805f, 26.85f, 1.7f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_48(Path path)
    {
        path.reset();
        path.moveTo(27.55f, 53.8f);
        path.lineTo(27.55f, 53.3f);
        path.lineTo(26.2f, 53.2f);
        path.lineTo(24.8f, 53.0f);
        path.lineTo(24.9f, 53.1f);
        path.lineTo(26.15f, 53.45f);
        path.lineTo(27.55f, 53.8f);
        path.close();
    }

    private static void draw_50(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_48(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        paint.setColor(Color.argb(255, 30, 88, 111));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_49(Path path)
    {
        path.reset();
        path.moveTo(0.45f, -13.05f);
        path.quadTo(-4.25f, -12.0f, -11.05f, -9.0f);
        path.lineTo(-5.2f, -10.0f);
        path.lineTo(4.15f, -10.9f);
        path.quadTo(12.7f, -10.9f, 17.1f, -9.4f);
        path.quadTo(21.5f, -7.9f, 23.65f, -4.15f);
        path.quadTo(25.5f, -0.95f, 26.75f, 5.9f);
        path.lineTo(28.95f, 20.15f);
        path.lineTo(28.9f, 10.6f);
        path.quadTo(28.85f, -0.899999f, 25.95f, -6.45f);
        path.quadTo(21.9f, -14.2f, 11.4f, -14.2f);
        path.quadTo(5.3f, -14.2f, 0.45f, -13.05f);
        path.close();
        path.moveTo(37.1f, -5.55f);
        path.quadTo(37.1f, -1.2f, 38.5f, 9.15f);
        path.quadTo(39.55f, 16.55f, 39.8f, 21.35f);
        path.lineTo(39.9f, 24.6f);
        path.quadTo(39.9f, 29.3f, 39.5f, 31.15f);
        path.quadTo(38.45f, 35.35f, 35.25f, 35.35f);
        path.quadTo(32.25f, 35.35f, 30.65f, 32.9f);
        path.quadTo(31.35f, 34.9f, 31.9f, 35.65f);
        path.quadTo(32.65f, 36.8f, 33.95f, 37.3f);
        path.lineTo(33.7f, 43.8f);
        path.lineTo(33.75f, 45.7f);
        path.lineTo(32.85f, 45.65f);
        path.quadTo(29.85f, 45.65f, 25.75f, 47.5f);
        path.lineTo(21.8f, 49.6f);
        path.lineTo(28.6f, 49.05f);
        path.lineTo(37.45f, 48.45f);
        path.quadTo(36.95f, 46.3f, 34.5f, 45.85f);
        path.quadTo(35.75f, 41.05f, 35.65f, 37.7f);
        path.lineTo(36.1f, 37.7f);
        path.lineTo(36.2f, 37.7f);
        path.quadTo(40.3f, 37.7f, 41.3f, 33.5f);
        path.quadTo(41.8f, 31.65f, 41.8f, 24.4f);
        path.lineTo(41.75f, 21.35f);
        path.lineTo(40.85f, 11.75f);
        path.quadTo(39.9f, 3.85f, 39.9f, -0.85f);
        path.lineTo(39.95f, -6.7f);
        path.quadTo(40.45f, -9.5f, 43.2f, -9.5f);
        path.quadTo(46.3f, -9.5f, 49.9f, -7.95f);
        path.lineTo(52.95f, -6.5f);
        path.lineTo(50.1f, -9.5f);
        path.quadTo(47.05f, -12.3f, 43.9f, -12.3f);
        path.quadTo(40.6f, -12.3f, 39.0f, -10.9f);
        path.quadTo(37.1f, -9.3f, 37.1f, -5.55f);
        path.close();
        path.moveTo(27.55f, 53.3f);
        path.lineTo(27.55f, 53.8f);
        path.lineTo(31.95f, 54.4f);
        path.quadTo(33.9f, 54.4f, 35.05f, 53.7f);
        path.quadTo(36.45f, 52.85f, 36.45f, 51.1f);
        path.lineTo(36.4f, 50.3f);
        path.quadTo(35.7f, 52.25f, 32.7f, 52.9f);
        path.lineTo(27.55f, 53.3f);
        path.close();
    }

    private static void draw_51(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_49(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_50(Path path)
    {
        path.reset();
        path.moveTo(-53.5f, -9.95f);
        path.quadTo(-50.45f, -9.95f, -47.65f, -6.4f);
        path.quadTo(-45.05f, -3.15f, -43.2f, 1.95f);
        path.quadTo(-46.15f, 2.2f, -45.5f, 9.0f);
        path.quadTo(-49.05f, -7.7f, -55.6f, -7.7f);
        path.quadTo(-57.0f, -7.7f, -58.05f, -6.65f);
        path.lineTo(-57.55f, -7.7f);
        path.quadTo(-56.2f, -9.95f, -53.5f, -9.95f);
        path.close();
        path.moveTo(-54.15f, 0.9f);
        path.quadTo(-53.65f, -0.1f, -52.6f, -0.75f);
        path.quadTo(-53.35f, 0.95f, -53.35f, 3.05f);
        path.quadTo(-53.35f, 5.8f, -52.0f, 8.35f);
        path.lineTo(-51.25f, 9.65f);
        path.lineTo(-51.4f, 7.85f);
        path.quadTo(-51.4f, 5.9f, -50.55f, 3.85f);
        path.lineTo(-49.95f, 2.7f);
        path.lineTo(-50.15f, 5.05f);
        path.quadTo(-50.15f, 9.1f, -48.8f, 10.7f);
        path.lineTo(-48.75f, 10.75f);
        path.quadTo(-49.7f, 12.3f, -51.6f, 12.5f);
        path.quadTo(-52.8f, 11.75f, -53.7f, 9.75f);
        path.quadTo(-54.75f, 7.45f, -54.75f, 4.9f);
        path.quadTo(-54.75f, 2.15f, -54.15f, 0.9f);
        path.close();
        path.moveTo(-37.0f, 2.05f);
        path.quadTo(-41.95f, -9.6f, -44.45f, -12.9f);
        path.quadTo(-48.95f, -18.95f, -54.15f, -18.95f);
        path.quadTo(-59.2f, -18.95f, -61.4f, -12.4f);
        path.quadTo(-62.8f, -8.2f, -62.8f, -2.55f);
        path.quadTo(-62.8f, 8.0f, -55.8f, 16.15f);
        path.quadTo(-49.35f, 23.6f, -42.5f, 23.6f);
        path.quadTo(-38.55f, 23.6f, -36.2f, 18.45f);
        path.quadTo(-34.3f, 14.35f, -34.3f, 10.05f);
        path.quadTo(-34.3f, 7.2f, -36.95f, 2.2f);
        path.lineTo(-37.0f, 2.05f);
        path.close();
    }

    private static void draw_52(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_50(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        Shader shader = create_gradient_3();
        shader.setLocalMatrix(createMatrix(-0.0173187f, -0.0299988f, 0.0299988f, -0.0173187f, -67.45f, 7.25f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_51(Path path)
    {
        path.reset();
        path.moveTo(-53.5f, -9.95f);
        path.quadTo(-56.2f, -9.95f, -57.55f, -7.7f);
        path.lineTo(-58.05f, -6.65f);
        path.quadTo(-57.0f, -7.7f, -55.6f, -7.7f);
        path.quadTo(-49.05f, -7.7f, -45.5f, 9.0f);
        path.quadTo(-46.15f, 2.2f, -43.2f, 1.95f);
        path.quadTo(-45.05f, -3.15f, -47.65f, -6.4f);
        path.quadTo(-50.45f, -9.95f, -53.5f, -9.95f);
        path.close();
        path.moveTo(-54.15f, 0.9f);
        path.quadTo(-54.75f, 2.15f, -54.75f, 4.9f);
        path.quadTo(-54.75f, 7.45f, -53.7f, 9.75f);
        path.quadTo(-52.8f, 11.75f, -51.6f, 12.5f);
        path.quadTo(-49.7f, 12.3f, -48.75f, 10.75f);
        path.lineTo(-48.8f, 10.7f);
        path.quadTo(-50.15f, 9.1f, -50.15f, 5.05f);
        path.lineTo(-49.95f, 2.7f);
        path.lineTo(-50.55f, 3.85f);
        path.quadTo(-51.4f, 5.9f, -51.4f, 7.85f);
        path.lineTo(-51.25f, 9.65f);
        path.lineTo(-52.0f, 8.35f);
        path.quadTo(-53.35f, 5.8f, -53.35f, 3.05f);
        path.quadTo(-53.35f, 0.949999f, -52.6f, -0.750001f);
        path.quadTo(-53.65f, -0.1f, -54.15f, 0.9f);
        path.close();
    }

    private static void draw_53(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_51(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_52(Path path)
    {
        path.reset();
        path.moveTo(-53.5f, -9.95f);
        path.quadTo(-56.2f, -9.95f, -57.55f, -7.7f);
        path.lineTo(-58.05f, -6.65f);
        path.quadTo(-57.0f, -7.7f, -55.6f, -7.7f);
        path.quadTo(-49.05f, -7.7f, -45.5f, 9.0f);
        path.quadTo(-46.15f, 2.2f, -43.2f, 1.95f);
        path.quadTo(-45.05f, -3.15f, -47.65f, -6.4f);
        path.quadTo(-50.45f, -9.95f, -53.5f, -9.95f);
        path.close();
    }

    private static void draw_54(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_52(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_53(Path path)
    {
        path.reset();
        path.moveTo(-54.15f, 0.9f);
        path.quadTo(-54.75f, 2.15f, -54.75f, 4.9f);
        path.quadTo(-54.75f, 7.45f, -53.7f, 9.75f);
        path.quadTo(-52.8f, 11.75f, -51.6f, 12.5f);
        path.quadTo(-49.7f, 12.3f, -48.75f, 10.75f);
        path.lineTo(-48.8f, 10.7f);
        path.quadTo(-50.15f, 9.1f, -50.15f, 5.05f);
        path.lineTo(-49.95f, 2.7f);
        path.lineTo(-50.55f, 3.85f);
        path.quadTo(-51.4f, 5.9f, -51.4f, 7.85f);
        path.lineTo(-51.25f, 9.65f);
        path.lineTo(-52.0f, 8.35f);
        path.quadTo(-53.35f, 5.8f, -53.35f, 3.05f);
        path.quadTo(-53.35f, 0.949999f, -52.6f, -0.750001f);
        path.quadTo(-53.65f, -0.1f, -54.15f, 0.9f);
    }

    private static void draw_55(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_53(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.35f, 493.25f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_54(Path path)
    {
        path.reset();
        path.moveTo(9.95f, 2.6f);
        path.quadTo(10.0f, 0.8f, 9.5f, -1.0f);
        path.lineTo(9.35f, -1.7f);
        path.quadTo(5.55f, -2.7f, 2.6f, -2.9f);
        path.lineTo(2.25f, -1.9f);
        path.quadTo(1.9f, -0.55f, 1.9f, 2.95f);
        path.lineTo(5.4f, 3.05f);
        path.lineTo(9.95f, 2.6f);
        path.close();
    }

    private static void draw_56(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_54(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 323.45f, 496.1f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_55(Path path)
    {
        path.reset();
        path.moveTo(9.35f, -1.7f);
        path.lineTo(9.5f, -1.0f);
        path.quadTo(10.0f, 0.8f, 9.95f, 2.6f);
        path.quadTo(13.0f, 1.8f, 14.9f, -0.05f);
        path.lineTo(9.35f, -1.7f);
        path.close();
        path.moveTo(1.9f, 2.95f);
        path.quadTo(1.9f, -0.55f, 2.25f, -1.9f);
        path.lineTo(2.6f, -2.9f);
        path.lineTo(0.5f, -3.0f);
        path.quadTo(-2.25f, -3.0f, -8.85f, -1.55f);
        path.lineTo(-13.5f, -0.5f);
        path.lineTo(-14.85f, -0.15f);
        path.lineTo(-13.5f, 0.3f);
        path.lineTo(-6.3f, 2.05f);
        path.lineTo(1.9f, 2.95f);
        path.close();
    }

    private static void draw_57(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_55(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 323.45f, 496.1f));
        paint.setColor(Color.argb(255, 232, 243, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_56(Path path)
    {
        path.reset();
        path.moveTo(9.95f, 2.6f);
        path.quadTo(10.0f, 0.8f, 9.5f, -1.0f);
        path.lineTo(9.35f, -1.7f);
    }

    private static void draw_58(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_56(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 323.45f, 496.1f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_57(Path path)
    {
        path.reset();
        path.moveTo(2.6f, -2.9f);
        path.lineTo(2.25f, -1.9f);
        path.quadTo(1.9f, -0.55f, 1.9f, 2.95f);
    }

    private static void draw_59(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_57(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 323.45f, 496.1f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_58(Path path)
    {
        path.reset();
        path.moveTo(5.33368f, -1.6001f);
        path.lineTo(5.48368f, -0.900105f);
        path.lineTo(5.68368f, 2.3999f);
        path.quadTo(7.43368f, 1.6499f, 8.48368f, -0.0501048f);
        path.lineTo(5.33368f, -1.6001f);
        path.close();
        path.moveTo(1.06674f, 2.78537f);
        path.quadTo(0.216736f, -0.464633f, 0.766736f, -1.36463f);
        path.lineTo(1.46674f, -2.66463f);
        path.lineTo(0.266736f, -2.76463f);
        path.quadTo(-1.28326f, -2.76463f, -5.03326f, -1.41463f);
        path.lineTo(-7.68326f, -0.414633f);
        path.lineTo(-8.43326f, -0.114633f);
        path.lineTo(-7.68326f, 0.235367f);
        path.lineTo(-3.58326f, 1.88537f);
        path.lineTo(1.06674f, 2.78537f);
        path.close();
    }

    private static void draw_60(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_58(path);
        canvas.concat(createMatrix(0.843695f, 0.0f, 0.0f, 0.843695f, 363.25f, 496.6f));
        paint.setColor(Color.argb(255, 232, 243, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_59(Path path)
    {
        path.reset();
        path.moveTo(5.68926f, 2.42979f);
        path.lineTo(5.48926f, -0.870212f);
        path.lineTo(5.33926f, -1.57021f);
        path.quadTo(3.13926f, -2.42021f, 1.48926f, -2.67021f);
        path.lineTo(0.789261f, -1.37021f);
        path.quadTo(0.239261f, -0.470212f, 1.08926f, 2.77979f);
        path.lineTo(3.08926f, 2.82979f);
        path.lineTo(5.68926f, 2.42979f);
        path.close();
    }

    private static void draw_61(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_59(path);
        canvas.concat(createMatrix(0.843695f, 0.0f, 0.0f, 0.843695f, 363.25f, 496.6f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_60(Path path)
    {
        path.reset();
        path.moveTo(5.68926f, 2.42979f);
        path.lineTo(5.48926f, -0.870212f);
        path.lineTo(5.33368f, -1.6001f);
    }

    private static void draw_62(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_60(path);
        canvas.concat(createMatrix(0.843695f, 0.0f, 0.0f, 0.843695f, 363.25f, 496.6f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_61(Path path)
    {
        path.reset();
        path.moveTo(1.48158f, -2.7261f);
        path.lineTo(0.781578f, -1.4261f);
        path.quadTo(0.237053f, -0.533368f, 1.06674f, 2.78537f);
    }

    private static void draw_63(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_61(path);
        canvas.concat(createMatrix(0.843695f, 0.0f, 0.0f, 0.843695f, 363.25f, 496.6f));
        paint.setColor(Color.argb(255, 15, 46, 57));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.BEVEL);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_62(Path path)
    {
        path.reset();
        path.moveTo(-47.0f, -73.75f);
        path.lineTo(-46.0f, -61.5f);
        path.quadTo(-46.0f, -53.85f, -48.5f, -42.0f);
        path.quadTo(-51.0f, -30.1f, -51.0f, -23.0f);
        path.quadTo(-51.0f, -12.85f, -46.0f, -1.6f);
        path.quadTo(-43.0f, 5.15f, -35.0f, 18.05f);
        path.quadTo(-27.0f, 30.95f, -24.0f, 37.65f);
        path.quadTo(-19.0f, 48.85f, -19.0f, 59.0f);
        path.quadTo(-19.0f, 64.8f, -22.5f, 69.55f);
        path.quadTo(-26.0f, 74.25f, -26.0f, 80.0f);
        path.quadTo(-26.0f, 86.65f, -23.9f, 89.65f);
        path.quadTo(-22.35f, 91.95f, -18.6f, 93.2f);
        path.quadTo(-12.0f, 95.35f, -11.5f, 95.6f);
        path.quadTo(-7.1f, 97.7f, -4.0f, 102.0f);
        path.quadTo(-1.95f, 104.85f, 1.25f, 110.15f);
        path.quadTo(3.9f, 114.4f, 5.3f, 116.1f);
        path.quadTo(9.5f, 121.0f, 18.0f, 121.0f);
        path.lineTo(23.85f, 120.7f);
        path.quadTo(29.0f, 119.85f, 30.0f, 117.0f);
        path.lineTo(36.3f, 117.5f);
        path.lineTo(41.5f, 118.0f);
        path.quadTo(47.15f, 118.0f, 49.05f, 117.0f);
        path.quadTo(51.0f, 115.9f, 51.0f, 112.5f);
        path.quadTo(51.0f, 100.6f, 41.2f, 92.65f);
        path.quadTo(38.0f, 90.05f, 32.1f, 86.55f);
        path.lineTo(23.0f, 81.0f);
        path.quadTo(12.9f, 74.0f, 8.35f, 65.95f);
        path.quadTo(3.45f, 57.3f, 2.35f, 44.0f);
        path.quadTo(2.1f, 31.2f, 2.6f, 10.3f);
        path.quadTo(3.6f, -30.4f, 2.85f, -49.05f);
        path.quadTo(1.5f, -82.3f, -5.0f, -99.6f);
        path.quadTo(-13.0f, -121.0f, -29.5f, -121.0f);
        path.quadTo(-38.85f, -121.0f, -44.0f, -107.95f);
        path.quadTo(-48.0f, -97.85f, -48.0f, -86.0f);
        path.lineTo(-47.0f, -73.75f);
        path.close();
    }

    private static void draw_64(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_62(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 350.75f, 711.05f));
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(-1.52588e-05f, -0.0621948f, 0.147568f, -3.05176e-05f, -34.65f, -63.0f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_63(Path path)
    {
        path.reset();
        path.moveTo(-23.85f, -55.6f);
        path.quadTo(-25.25f, -48.05f, -25.25f, -34.25f);
        path.quadTo(-25.25f, -20.55f, -23.9f, -3.4f);
        path.quadTo(-22.25f, 18.35f, -19.25f, 30.25f);
        path.quadTo(-14.75f, 48.55f, -5.55f, 62.0f);
        path.quadTo(4.5f, 76.75f, 14.75f, 76.75f);
        path.quadTo(20.7f, 76.75f, 23.25f, 71.75f);
        path.quadTo(25.25f, 67.85f, 25.25f, 60.5f);
        path.quadTo(25.25f, 57.95f, 22.3f, 34.55f);
        path.quadTo(19.2f, 10.0f, 18.75f, -5.25f);
        path.quadTo(17.65f, -39.55f, 15.3f, -52.0f);
        path.quadTo(10.65f, -76.75f, -2.25f, -76.75f);
        path.quadTo(-13.45f, -76.75f, -18.6f, -68.5f);
        path.quadTo(-22.25f, -64.1f, -23.85f, -55.6f);
        path.close();
    }

    private static void draw_65(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_63(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 209.65f, 617.3f));
        Shader shader = create_gradient_2();
        shader.setLocalMatrix(createMatrix(0.0179291f, 0.0919037f, -0.0302277f, 0.00590515f, 0.0f, 0.0f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_64(Path path)
    {
        path.reset();
        path.moveTo(-10.2f, -20.7f);
        path.quadTo(-21.15f, -11.25f, -30.85f, -0.800001f);
        path.quadTo(-55.25f, 25.45f, -55.25f, 39.25f);
        path.quadTo(-55.25f, 45.25f, -50.25f, 50.0f);
        path.quadTo(-47.1f, 53.05f, -43.75f, 54.05f);
        path.lineTo(-39.25f, 54.5f);
        path.lineTo(-39.1f, 54.45f);
        path.lineTo(-38.25f, 54.5f);
        path.quadTo(-32.95f, 54.3f, -28.45f, 51.75f);
        path.quadTo(-22.7f, 48.5f, -17.35f, 40.55f);
        path.quadTo(-13.9f, 35.45f, -7.95f, 23.75f);
        path.quadTo(-1.3f, 10.8f, 2.25f, 5.0f);
        path.quadTo(11.3f, -9.8f, 26.25f, -28.0f);
        path.quadTo(28.2f, -30.4f, 33.65f, -34.1f);
        path.quadTo(38.55f, -37.45f, 42.75f, -39.5f);
        path.lineTo(51.25f, -43.3f);
        path.quadTo(55.25f, -45.55f, 55.25f, -49.25f);
        path.quadTo(55.25f, -51.5f, 53.25f, -53.0f);
        path.quadTo(51.25f, -54.5f, 48.25f, -54.5f);
        path.quadTo(41.75f, -54.5f, 31.1f, -48.6f);
        path.quadTo(30.0f, -48.0f, 7.25f, -34.0f);
        path.quadTo(0.15f, -29.65f, -10.2f, -20.7f);
        path.close();
    }

    private static void draw_66(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_64(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 267.65f, 641.05f));
        Shader shader = create_gradient_2();
        shader.setLocalMatrix(createMatrix(-0.0200653f, 0.0347748f, -0.0576172f, -0.0332642f, -7.95f, 7.4f));
        paint.setAlpha(255);
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
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
        {
            canvas.save();
            canvas.concat(createMatrix(0.980225f, 0.0f, 0.0f, 0.980453f, 420.1f, 568.95f));
            draw_shape_7(canvas, path, paint);
            canvas.restore();
        }
        {
            canvas.save();
            canvas.concat(createMatrix(0.981123f, 0.0f, 0.0f, 0.980024f, 468.95f, 573.0f));
            draw_shape_9(canvas, path, paint);
            canvas.restore();
        }
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
        {
            canvas.save();
            canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 315.15f, 608.05f));
            draw_shape_7(canvas, path, paint);
            canvas.restore();
        }
        draw_65(canvas, path, paint);
        draw_66(canvas, path, paint);
        {
            canvas.save();
            canvas.concat(createMatrix(0.972532f, 0.229553f, -0.229553f, 0.972532f, 363.15f, 598.85f));
            draw_shape_9(canvas, path, paint);
            canvas.restore();
        }
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
