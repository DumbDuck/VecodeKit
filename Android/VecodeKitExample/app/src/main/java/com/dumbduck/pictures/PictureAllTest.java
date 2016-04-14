
package com.dumbduck.pictures;

import android.graphics.*;
import com.vecodekit.GraphicsPicture;

public class PictureAllTest extends GraphicsPicture
{
    public PictureAllTest()
    {
        super(new RectF(0.0f, 0.0f, 550.0f, 400.0f));
    }
    
    private static void def_path_0(Path path)
    {
        path.reset();
        path.moveTo(528.95f, 193.0f);
        path.lineTo(528.95f, 59.0f);
        path.lineTo(409.95f, 59.0f);
        path.lineTo(409.95f, 193.0f);
        path.lineTo(528.95f, 193.0f);
        path.close();
    }

    private static Shader create_gradient_0()
    {
        int colors[] = {
            Color.argb(255, 0, 0, 255),
            Color.argb(255, 0, 0, 0)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new RadialGradient(0.0f, 0.0f, 819.2f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_0(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_0(path);
        Shader shader = create_gradient_0();
        shader.setLocalMatrix(createMatrix(0.109375f, 0.0f, 0.0f, 0.109375f, 469.45f, 126.0f));
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_1(Path path)
    {
        path.reset();
        path.moveTo(421.95f, 245.0f);
        path.lineTo(421.95f, 359.95f);
        path.lineTo(538.95f, 359.95f);
        path.lineTo(538.95f, 245.0f);
        path.lineTo(421.95f, 245.0f);
        path.close();
    }

    private static Shader create_gradient_1()
    {
        int colors[] = {
            Color.argb(255, 255, 0, 0),
            Color.argb(255, 255, 255, 0),
            Color.argb(255, 0, 255, 0),
            Color.argb(255, 0, 255, 255),
            Color.argb(255, 0, 0, 255),
            Color.argb(255, 255, 0, 255),
            Color.argb(255, 255, 0, 0)
        };
        float locations[] = {
            0.0f,
            0.164706f,
            0.364706f,
            0.498039f,
            0.666667f,
            0.831373f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_1(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_1(path);
        Shader shader = create_gradient_1();
        shader.setLocalMatrix(createMatrix(0.0714111f, 0.0f, 0.0f, 0.0701599f, 480.45f, 302.45f));
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void def_path_2(Path path)
    {
        path.reset();
        path.moveTo(58.75f, 160.95f);
        path.lineTo(14.0f, 175.45f);
        path.lineTo(14.0f, 222.5f);
        path.lineTo(58.75f, 237.0f);
        path.lineTo(86.35f, 199.0f);
        path.lineTo(58.75f, 160.95f);
        path.close();
    }

    private static void draw_2(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_2(path);
        paint.setColor(Color.argb(255, 204, 51, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_3(Path path)
    {
        path.reset();
        path.moveTo(528.95f, 193.0f);
        path.lineTo(409.95f, 193.0f);
        path.lineTo(409.95f, 59.0f);
        path.lineTo(528.95f, 59.0f);
        path.lineTo(528.95f, 193.0f);
    }

    private static void draw_3(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_3(path);
        paint.setColor(Color.argb(255, 51, 255, 102));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_4(Path path)
    {
        path.reset();
        path.moveTo(421.95f, 245.0f);
        path.lineTo(538.95f, 245.0f);
        path.lineTo(538.95f, 359.95f);
        path.lineTo(421.95f, 359.95f);
        path.lineTo(421.95f, 245.0f);
    }

    private static void draw_4(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_4(path);
        paint.setColor(Color.argb(255, 51, 255, 102));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_5(Path path)
    {
        path.reset();
        path.moveTo(78.85f, 0.0f);
        path.lineTo(-1.52588e-06f, 54.0f);
        path.lineTo(27.05f, 145.7f);
        path.lineTo(122.6f, 148.3f);
        path.lineTo(154.65f, 58.25f);
        path.lineTo(78.85f, 0.0f);
        path.close();
    }

    private static Shader create_gradient_2(float[] colorTrans)
    {
        int colors[] = {
            colorApplyColorTransform(Color.argb(255, 255, 0, 0), colorTrans),
            colorApplyColorTransform(Color.argb(255, 255, 255, 0), colorTrans),
            colorApplyColorTransform(Color.argb(255, 0, 255, 0), colorTrans),
            colorApplyColorTransform(Color.argb(255, 0, 255, 255), colorTrans),
            colorApplyColorTransform(Color.argb(255, 0, 0, 255), colorTrans),
            colorApplyColorTransform(Color.argb(255, 255, 0, 255), colorTrans),
            colorApplyColorTransform(Color.argb(255, 255, 0, 0), colorTrans)
        };
        float locations[] = {
            0.0f,
            0.164706f,
            0.364706f,
            0.498039f,
            0.666667f,
            0.831373f,
            1.0f
        };
        return new LinearGradient(-819.2f, 0.0f, 819.2f, 0.0f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_5(Canvas canvas, Path path, Paint paint, float[] colorTrans)
    {
        canvas.save();
        def_path_5(path);
        Shader shader = create_gradient_2(colorTrans);
        shader.setLocalMatrix(createMatrix(0.0943909f, 0.0f, 0.0f, 0.0905151f, 77.3f, 74.15f));
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void draw_6(Canvas canvas, Path path, Paint paint, float[] colorTrans)
    {
        canvas.save();
        def_path_5(path);
        paint.setColor(colorApplyColorTransform(Color.argb(255, 51, 255, 102), colorTrans));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_shape_2(Canvas canvas, Path path, Paint paint, float[] colorTrans)
    {
        draw_5(canvas, path, paint, colorTrans);
        draw_6(canvas, path, paint, colorTrans);
    }

    private static void def_path_6(Path path)
    {
        path.reset();
        path.moveTo(144.0f, 76.0f);
        path.quadTo(144.0f, 44.5f, 122.9f, 22.25f);
        path.quadTo(101.8f, 0.0f, 72.0f, 0.0f);
        path.quadTo(42.2f, 0.0f, 21.1f, 22.25f);
        path.quadTo(3.8147e-07f, 44.5f, 3.8147e-07f, 76.0f);
        path.quadTo(3.8147e-07f, 107.5f, 21.1f, 129.75f);
        path.quadTo(42.2f, 152.0f, 72.0f, 152.0f);
        path.quadTo(101.8f, 152.0f, 122.9f, 129.75f);
        path.quadTo(144.0f, 107.5f, 144.0f, 76.0f);
        path.close();
    }

    private static Shader create_gradient_3(float[] colorTrans)
    {
        int colors[] = {
            colorApplyColorTransform(Color.argb(255, 0, 255, 0), colorTrans),
            colorApplyColorTransform(Color.argb(255, 0, 0, 0), colorTrans)
        };
        float locations[] = {
            0.0f,
            1.0f
        };
        return new RadialGradient(0.0f, 0.0f, 819.2f, colors, locations, Shader.TileMode.CLAMP);
    }

    private static void draw_7(Canvas canvas, Path path, Paint paint, float[] colorTrans)
    {
        canvas.save();
        def_path_6(path);
        Shader shader = create_gradient_3(colorTrans);
        shader.setLocalMatrix(createMatrix(0.0935059f, 0.0f, 0.0f, 0.0935059f, 72.0f, 76.0f));
        paint.setShader(shader);
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        paint.setShader(null);
        canvas.restore();
    }

    private static void draw_8(Canvas canvas, Path path, Paint paint, float[] colorTrans)
    {
        canvas.save();
        def_path_6(path);
        paint.setColor(colorApplyColorTransform(Color.argb(255, 51, 255, 102), colorTrans));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_shape_4(Canvas canvas, Path path, Paint paint, float[] colorTrans)
    {
        draw_7(canvas, path, paint, colorTrans);
        draw_8(canvas, path, paint, colorTrans);
    }

    private static void def_path_7(Path path)
    {
        path.reset();
        path.moveTo(306.0f, -616.0f);
        path.quadTo(526.5f, -620.0f, 522.0f, -368.0f);
        path.quadTo(527.0f, -118.0f, 306.0f, -122.0f);
        path.lineTo(224.0f, -122.0f);
        path.lineTo(224.0f, -616.0f);
        path.lineTo(306.0f, -616.0f);
        path.close();
        path.moveTo(318.0f, 0.0f);
        path.quadTo(688.5f, -1.5f, 692.0f, -368.0f);
        path.quadTo(688.5f, -737.5f, 318.0f, -738.0f);
        path.lineTo(66.0f, -738.0f);
        path.lineTo(66.0f, 0.0f);
        path.lineTo(318.0f, 0.0f);
        path.close();
    }

    private static void draw_9(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_7(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 26.55f, 371.85f));
        paint.setColor(Color.argb(255, 204, 51, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_8(Path path)
    {
        path.reset();
        path.moveTo(560.0f, 0.0f);
        path.lineTo(554.0f, -92.0f);
        path.lineTo(554.0f, -514.0f);
        path.lineTo(400.0f, -514.0f);
        path.lineTo(400.0f, -204.0f);
        path.quadTo(392.0f, -94.0f, 308.0f, -86.0f);
        path.quadTo(219.0f, -85.5f, 216.0f, -204.0f);
        path.lineTo(216.0f, -514.0f);
        path.lineTo(62.0f, -514.0f);
        path.lineTo(62.0f, -180.0f);
        path.quadTo(62.5f, -137.0f, 72.0f, -98.0f);
        path.quadTo(105.5f, -2.0f, 242.0f, 13.0f);
        path.quadTo(348.0f, 13.5f, 400.0f, -62.0f);
        path.lineTo(406.0f, 0.0f);
        path.lineTo(560.0f, 0.0f);
        path.close();
    }

    private static void draw_10(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_8(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 52.45f, 371.85f));
        paint.setColor(Color.argb(255, 204, 51, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_9(Path path)
    {
        path.reset();
        path.moveTo(68.0f, -514.0f);
        path.lineTo(68.0f, 0.0f);
        path.lineTo(222.0f, 0.0f);
        path.lineTo(222.0f, -308.0f);
        path.quadTo(229.0f, -418.5f, 314.0f, -426.0f);
        path.quadTo(403.5f, -426.5f, 406.0f, -308.0f);
        path.lineTo(406.0f, 0.0f);
        path.lineTo(560.0f, 0.0f);
        path.lineTo(560.0f, -308.0f);
        path.quadTo(567.0f, -418.5f, 652.0f, -426.0f);
        path.quadTo(741.5f, -426.5f, 744.0f, -308.0f);
        path.lineTo(744.0f, 0.0f);
        path.lineTo(898.0f, 0.0f);
        path.lineTo(898.0f, -308.0f);
        path.quadTo(898.0f, -329.0f, 897.5f, -350.0f);
        path.quadTo(896.5f, -365.0f, 895.0f, -380.5f);
        path.quadTo(891.5f, -409.0f, 882.0f, -432.0f);
        path.quadTo(838.0f, -516.0f, 718.0f, -528.0f);
        path.quadTo(612.0f, -531.5f, 544.0f, -432.0f);
        path.quadTo(500.0f, -516.0f, 380.0f, -528.0f);
        path.quadTo(274.5f, -528.5f, 222.0f, -452.0f);
        path.lineTo(220.0f, -452.0f);
        path.lineTo(220.0f, -514.0f);
        path.lineTo(68.0f, -514.0f);
        path.close();
    }

    private static void draw_11(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_9(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 74.35f, 371.85f));
        paint.setColor(Color.argb(255, 204, 51, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_10(Path path)
    {
        path.reset();
        path.moveTo(314.0f, -426.0f);
        path.quadTo(427.0f, -427.5f, 424.0f, -256.0f);
        path.quadTo(427.0f, -84.5f, 314.0f, -86.0f);
        path.quadTo(212.5f, -92.0f, 204.0f, -256.0f);
        path.quadTo(212.5f, -420.0f, 314.0f, -426.0f);
        path.close();
        path.moveTo(46.0f, 0.0f);
        path.lineTo(198.0f, 0.0f);
        path.lineTo(202.0f, -72.0f);
        path.lineTo(204.0f, -72.0f);
        path.quadTo(253.0f, 12.0f, 362.0f, 13.0f);
        path.quadTo(465.0f, 7.0f, 520.5f, -60.0f);
        path.quadTo(576.0f, -127.0f, 584.0f, -256.0f);
        path.quadTo(566.5f, -514.5f, 344.0f, -528.0f);
        path.quadTo(258.0f, -524.0f, 206.0f, -454.0f);
        path.lineTo(204.0f, -454.0f);
        path.lineTo(204.0f, -738.0f);
        path.lineTo(50.0f, -738.0f);
        path.lineTo(50.0f, -102.0f);
        path.lineTo(46.0f, 0.0f);
        path.close();
    }

    private static void draw_12(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_10(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 108.3f, 371.85f));
        paint.setColor(Color.argb(255, 204, 51, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_13(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_7(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 140.15f, 371.85f));
        paint.setColor(Color.argb(255, 204, 204, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_14(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_8(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 166.05f, 371.85f));
        paint.setColor(Color.argb(255, 204, 204, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_11(Path path)
    {
        path.reset();
        path.moveTo(262.0f, -528.0f);
        path.quadTo(49.5f, -514.5f, 32.0f, -256.0f);
        path.quadTo(40.5f, -128.0f, 98.0f, -60.5f);
        path.quadTo(155.5f, 6.5f, 262.0f, 13.0f);
        path.quadTo(478.0f, 10.5f, 490.0f, -186.0f);
        path.lineTo(340.0f, -186.0f);
        path.quadTo(333.0f, -87.5f, 262.0f, -86.0f);
        path.quadTo(200.0f, -84.5f, 193.5f, -245.5f);
        path.quadTo(193.0f, -254.5f, 192.0f, -264.0f);
        path.quadTo(192.0f, -269.0f, 192.5f, -273.5f);
        path.quadTo(198.5f, -426.0f, 260.0f, -426.0f);
        path.quadTo(332.0f, -425.0f, 338.0f, -332.0f);
        path.lineTo(490.0f, -332.0f);
        path.quadTo(479.5f, -518.0f, 262.0f, -528.0f);
        path.close();
    }

    private static void draw_15(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_11(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 187.95f, 371.85f));
        paint.setColor(Color.argb(255, 204, 204, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_12(Path path)
    {
        path.reset();
        path.moveTo(68.0f, -738.0f);
        path.lineTo(68.0f, 0.0f);
        path.lineTo(222.0f, 0.0f);
        path.lineTo(222.0f, -278.0f);
        path.lineTo(224.0f, -280.0f);
        path.lineTo(378.0f, 0.0f);
        path.lineTo(558.0f, 0.0f);
        path.lineTo(368.0f, -294.0f);
        path.lineTo(546.0f, -520.0f);
        path.lineTo(374.0f, -520.0f);
        path.lineTo(224.0f, -304.0f);
        path.lineTo(222.0f, -306.0f);
        path.lineTo(222.0f, -738.0f);
        path.lineTo(68.0f, -738.0f);
        path.close();
    }

    private static void draw_16(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_12(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 205.95f, 371.85f));
        paint.setColor(Color.argb(255, 204, 204, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_13(Path path)
    {
        path.reset();
        path.moveTo(456.0f, 0.0f);
        path.lineTo(728.0f, -738.0f);
        path.lineTo(572.0f, -738.0f);
        path.lineTo(378.0f, -156.0f);
        path.lineTo(376.0f, -156.0f);
        path.lineTo(184.0f, -738.0f);
        path.lineTo(10.0f, -738.0f);
        path.lineTo(282.0f, 0.0f);
        path.lineTo(456.0f, 0.0f);
        path.close();
    }

    private static void draw_17(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_13(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 235.85f, 371.85f));
        paint.setColor(Color.argb(255, 255, 51, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_14(Path path)
    {
        path.reset();
        path.moveTo(538.0f, -249.0f);
        path.lineTo(537.0f, -273.0f);
        path.lineTo(534.0f, -314.0f);
        path.quadTo(528.0f, -363.5f, 508.0f, -406.0f);
        path.quadTo(449.0f, -529.0f, 288.0f, -528.0f);
        path.quadTo(55.0f, -515.5f, 42.0f, -256.0f);
        path.quadTo(39.0f, 15.5f, 288.0f, 13.0f);
        path.quadTo(503.0f, 12.5f, 522.0f, -152.0f);
        path.lineTo(384.0f, -152.0f);
        path.quadTo(363.0f, -83.5f, 288.0f, -86.0f);
        path.quadTo(195.5f, -83.0f, 200.0f, -216.0f);
        path.lineTo(538.0f, -216.0f);
        path.lineTo(538.0f, -249.0f);
        path.close();
        path.moveTo(288.0f, -426.0f);
        path.quadTo(380.5f, -427.0f, 378.0f, -318.0f);
        path.lineTo(200.0f, -318.0f);
        path.quadTo(202.5f, -427.0f, 288.0f, -426.0f);
        path.close();
    }

    private static void draw_18(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_14(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 261.75f, 371.85f));
        paint.setColor(Color.argb(255, 255, 51, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_19(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_11(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 281.7f, 371.85f));
        paint.setColor(Color.argb(255, 255, 51, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_15(Path path)
    {
        path.reset();
        path.moveTo(312.0f, -528.0f);
        path.quadTo(55.5f, -517.0f, 44.0f, -256.0f);
        path.quadTo(55.0f, 2.5f, 312.0f, 13.0f);
        path.quadTo(569.0f, 2.5f, 580.0f, -256.0f);
        path.quadTo(568.5f, -517.0f, 312.0f, -528.0f);
        path.close();
        path.moveTo(312.0f, -426.0f);
        path.quadTo(424.0f, -427.0f, 422.0f, -256.0f);
        path.quadTo(424.0f, -85.0f, 312.0f, -86.0f);
        path.quadTo(200.0f, -85.0f, 202.0f, -256.0f);
        path.quadTo(200.0f, -427.0f, 312.0f, -426.0f);
        path.close();
    }

    private static void draw_20(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_15(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 299.7f, 371.85f));
        paint.setColor(Color.argb(255, 255, 51, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_16(Path path)
    {
        path.reset();
        path.moveTo(310.0f, -426.0f);
        path.quadTo(411.5f, -420.0f, 420.0f, -256.0f);
        path.quadTo(411.5f, -92.0f, 310.0f, -86.0f);
        path.quadTo(194.5f, -84.5f, 198.0f, -256.0f);
        path.quadTo(194.5f, -427.5f, 310.0f, -426.0f);
        path.close();
        path.moveTo(418.0f, -454.0f);
        path.quadTo(366.0f, -524.0f, 280.0f, -528.0f);
        path.quadTo(56.5f, -515.5f, 40.0f, -256.0f);
        path.quadTo(47.5f, -127.0f, 103.0f, -60.0f);
        path.quadTo(158.5f, 7.0f, 262.0f, 13.0f);
        path.quadTo(372.0f, 12.0f, 418.0f, -72.0f);
        path.lineTo(420.0f, -72.0f);
        path.lineTo(424.0f, 0.0f);
        path.lineTo(578.0f, 0.0f);
        path.lineTo(574.0f, -102.0f);
        path.lineTo(574.0f, -738.0f);
        path.lineTo(420.0f, -738.0f);
        path.lineTo(420.0f, -454.0f);
        path.lineTo(418.0f, -454.0f);
        path.close();
    }

    private static void draw_21(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_16(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 321.6f, 371.85f));
        paint.setColor(Color.argb(255, 255, 51, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_22(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_14(path);
        canvas.concat(createMatrix(0.0351562f, 0.0f, 0.0f, 0.0351562f, 343.5f, 371.85f));
        paint.setColor(Color.argb(255, 255, 51, 0));
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
        {
            canvas.save();
            canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 39.35f, 16.75f));
            draw_shape_2(canvas, path, paint, null);
            canvas.restore();
        }
        {
            canvas.save();
            canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 217.65f, 16.75f));
            float colorTrans[] = { 0.462745f, 0.462745f, 0.462745f, 1.00392f, 0.0f, 0.0f, 0.0f, 0.0f };
            draw_shape_2(canvas, path, paint, colorTrans);
            canvas.restore();
        }
        {
            canvas.save();
            canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 94.55f, 165.05f));
            draw_shape_4(canvas, path, paint, null);
            canvas.restore();
        }
        {
            canvas.save();
            canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 238.55f, 181.0f));
            float colorTrans[] = { 0.239216f, 0.239216f, 0.239216f, 1.00392f, 0.698039f, 0.0588235f, 0.760784f, 0.0f };
            draw_shape_4(canvas, path, paint, colorTrans);
            canvas.restore();
        }
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
