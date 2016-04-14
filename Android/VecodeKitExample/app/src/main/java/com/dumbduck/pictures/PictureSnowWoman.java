
package com.dumbduck.pictures;

import android.graphics.*;
import com.vecodekit.GraphicsPicture;

public class PictureSnowWoman extends GraphicsPicture
{
    public PictureSnowWoman()
    {
        super(new RectF(0.15f, 62.45f, 768.35f, 1022.65f));
    }
    
    private static void def_path_0(Path path)
    {
        path.reset();
        path.moveTo(768.35f, 62.45f);
        path.lineTo(0.149976f, 62.45f);
        path.lineTo(0.149976f, 1022.65f);
        path.lineTo(768.35f, 1022.65f);
        path.lineTo(768.35f, 62.45f);
        path.close();
    }

    private static void draw_0(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_0(path);
        paint.setColor(Color.argb(255, 153, 204, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_1(Path path)
    {
        path.reset();
        path.moveTo(28.5374f, -218.197f);
        path.quadTo(22.9374f, -220.347f, 17.8874f, -221.547f);
        path.quadTo(11.9374f, -222.997f, 6.73737f, -223.197f);
        path.lineTo(4.98737f, -223.247f);
        path.quadTo(-0.71263f, -223.247f, -8.86263f, -221.647f);
        path.lineTo(-19.6626f, -219.147f);
        path.lineTo(-26.0626f, -217.347f);
        path.lineTo(-31.7126f, -215.597f);
        path.quadTo(-38.8126f, -213.447f, -44.2126f, -211.247f);
        path.lineTo(-45.0126f, -210.947f);
        path.lineTo(-45.6626f, -208.197f);
        path.lineTo(-45.8126f, -206.497f);
        path.quadTo(-47.0626f, -201.997f, -48.1626f, -195.847f);
        path.quadTo(-50.6126f, -181.797f, -50.6126f, -168.947f);
        path.quadTo(-50.6126f, -163.097f, -49.7626f, -150.047f);
        path.quadTo(-48.9126f, -137.047f, -48.9126f, -127.297f);
        path.quadTo(-48.9126f, -103.597f, -55.3126f, -84.9467f);
        path.quadTo(-58.2126f, -76.4467f, -63.3626f, -66.7467f);
        path.quadTo(-53.6626f, -58.5967f, -38.6126f, -51.9967f);
        path.quadTo(-32.7126f, -49.4467f, -26.9126f, -47.4967f);
        path.quadTo(-13.3126f, -42.9967f, -0.512639f, -42.3467f);
        path.quadTo(4.73736f, -51.9467f, 7.78736f, -62.6967f);
        path.quadTo(9.78736f, -69.7467f, 12.5874f, -84.5967f);
        path.quadTo(15.4874f, -100.097f, 17.6874f, -108.447f);
        path.quadTo(20.7374f, -119.897f, 25.9874f, -133.897f);
        path.lineTo(34.7874f, -156.697f);
        path.quadTo(44.5374f, -182.897f, 44.5374f, -201.497f);
        path.lineTo(44.5374f, -202.697f);
        path.lineTo(44.2874f, -205.647f);
        path.lineTo(43.8374f, -211.097f);
        path.lineTo(32.5374f, -216.597f);
        path.lineTo(28.5374f, -218.197f);
        path.close();
    }

    private static void draw_1(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_1(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_2(Path path)
    {
        path.reset();
        path.moveTo(45.4886f, -210.263f);
        path.quadTo(42.2386f, -212.713f, 38.4386f, -214.763f);
        path.quadTo(37.0886f, -209.863f, 34.9886f, -199.763f);
        path.quadTo(30.6386f, -179.163f, 29.1386f, -174.063f);
        path.quadTo(26.3886f, -165.263f, 21.7386f, -146.613f);
        path.lineTo(15.4386f, -120.413f);
        path.lineTo(8.18857f, -90.9133f);
        path.quadTo(3.53857f, -72.5133f, -0.461433f, -60.1633f);
        path.quadTo(-4.01143f, -49.4133f, -7.76143f, -41.0633f);
        path.lineTo(2.63857f, -39.2633f);
        path.quadTo(5.98857f, -47.0633f, 8.98857f, -57.7133f);
        path.quadTo(11.3386f, -66.0133f, 16.3386f, -87.4633f);
        path.quadTo(20.6386f, -106.163f, 23.4386f, -114.713f);
        path.quadTo(26.5386f, -124.363f, 37.7386f, -151.163f);
        path.quadTo(47.3886f, -176.863f, 47.3886f, -193.463f);
        path.quadTo(47.3886f, -200.363f, 45.9386f, -207.863f);
        path.lineTo(45.4886f, -210.263f);
        path.close();
        path.moveTo(16.9512f, -210.32f);
        path.quadTo(7.1012f, -189.47f, 3.9512f, -179.77f);
        path.quadTo(0.101197f, -167.57f, -2.8988f, -154.22f);
        path.quadTo(-6.2988f, -139.02f, -7.3988f, -127.27f);
        path.quadTo(-9.7488f, -101.27f, -25.6988f, -67.1204f);
        path.quadTo(-30.1488f, -57.5704f, -34.2988f, -50.2204f);
        path.lineTo(-26.6488f, -46.9204f);
        path.quadTo(-13.1988f, -64.3704f, -5.64881f, -82.8704f);
        path.quadTo(2.05119f, -101.67f, 4.55119f, -125.57f);
        path.quadTo(6.65119f, -145.67f, 16.2512f, -174.92f);
        path.quadTo(23.9012f, -198.27f, 32.9012f, -217.37f);
        path.quadTo(27.5512f, -219.67f, 21.8012f, -221.07f);
        path.lineTo(16.9512f, -210.32f);
        path.close();
        path.moveTo(6.84897f, -223.048f);
        path.lineTo(3.14897f, -223.198f);
        path.lineTo(-9.90103f, -222.348f);
        path.quadTo(-21.201f, -203.998f, -28.351f, -176.448f);
        path.quadTo(-32.451f, -160.648f, -38.701f, -123.098f);
        path.quadTo(-44.101f, -90.298f, -49.001f, -75.648f);
        path.quadTo(-51.601f, -67.998f, -54.751f, -61.898f);
        path.lineTo(-49.301f, -58.348f);
        path.quadTo(-45.001f, -66.748f, -40.451f, -77.848f);
        path.quadTo(-27.701f, -108.798f, -24.451f, -134.148f);
        path.quadTo(-22.951f, -145.848f, -19.051f, -158.898f);
        path.lineTo(-12.501f, -180.948f);
        path.quadTo(-10.551f, -188.448f, -0.951035f, -206.998f);
        path.quadTo(4.45183f, -217.512f, 6.84897f, -223.048f);
        path.close();
        path.moveTo(-40.6372f, -213.46f);
        path.lineTo(-44.6372f, -212.06f);
        path.quadTo(-50.5872f, -198.51f, -53.4872f, -177.36f);
        path.quadTo(-54.7372f, -168.26f, -55.9372f, -153.36f);
        path.lineTo(-57.9872f, -129.21f);
        path.quadTo(-60.7372f, -100.96f, -66.8372f, -86.2595f);
        path.quadTo(-69.2372f, -80.5595f, -72.3872f, -75.9595f);
        path.lineTo(-68.3372f, -72.3095f);
        path.lineTo(-63.9872f, -79.7095f);
        path.quadTo(-49.9372f, -105.51f, -49.5372f, -128.96f);
        path.quadTo(-49.4372f, -142.51f, -48.7372f, -151.16f);
        path.quadTo(-47.7372f, -165.31f, -45.0872f, -174.06f);
        path.quadTo(-44.0372f, -177.41f, -41.6372f, -186.66f);
        path.quadTo(-39.0872f, -195.16f, -35.9872f, -199.76f);
        path.quadTo(-26.8872f, -212.71f, -22.9372f, -219.61f);
        path.lineTo(-28.3872f, -217.96f);
        path.lineTo(-40.6372f, -213.46f);
        path.close();
    }

    private static void draw_2(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_2(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_3(Path path)
    {
        path.reset();
        path.moveTo(-14.6038f, 15.1173f);
        path.lineTo(-14.5038f, 15.5173f);
        path.lineTo(-14.5038f, 15.8173f);
        path.lineTo(-14.3538f, 15.7173f);
        path.lineTo(-11.8538f, 14.6673f);
        path.quadTo(-8.95385f, 13.3173f, -5.75385f, 11.2673f);
        path.lineTo(2.19615f, 5.91726f);
        path.quadTo(7.49615f, 2.16726f, 8.69615f, 0.617263f);
        path.quadTo(10.7462f, -2.08274f, 11.8462f, -4.33274f);
        path.quadTo(12.6962f, -6.23274f, 13.3962f, -9.03274f);
        path.lineTo(14.4962f, -14.0327f);
        path.lineTo(14.6462f, -15.5327f);
        path.lineTo(14.1962f, -15.6327f);
        path.lineTo(13.4962f, -15.6827f);
        path.lineTo(13.3962f, -15.6827f);
        path.quadTo(0.0961515f, -14.8327f, -8.15385f, -2.83274f);
        path.quadTo(-11.2538f, 1.71726f, -13.0538f, 7.11726f);
        path.quadTo(-14.6038f, 11.7515f, -14.6038f, 15.1173f);
        path.close();
    }

    private static void draw_3(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_3(path);
        paint.setColor(Color.argb(255, 73, 146, 146));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_4(Path path)
    {
        path.reset();
        path.moveTo(14.2045f, -15.6877f);
        path.quadTo(12.8545f, -22.4877f, 10.1545f, -32.0877f);
        path.quadTo(5.90452f, -46.7877f, 5.40452f, -59.3377f);
        path.quadTo(4.95452f, -69.9877f, 4.80452f, -99.8377f);
        path.quadTo(4.65452f, -112.038f, 3.45452f, -120.438f);
        path.quadTo(1.35452f, -134.638f, -3.39548f, -134.638f);
        path.quadTo(-5.39548f, -134.638f, -7.04548f, -131.238f);
        path.quadTo(-8.09548f, -129.188f, -8.34548f, -127.338f);
        path.lineTo(-8.39548f, -125.788f);
        path.lineTo(-8.59548f, -115.588f);
        path.quadTo(-8.99548f, -99.1377f, -12.2455f, -82.7377f);
        path.lineTo(-18.8955f, -48.1377f);
        path.quadTo(-22.1955f, -29.6877f, -22.1955f, -22.6377f);
        path.quadTo(-22.1955f, -5.73773f, -19.8955f, 3.41227f);
        path.quadTo(-18.0955f, 10.3123f, -14.7455f, 15.1623f);
        path.lineTo(-14.5955f, 15.0623f);
        path.quadTo(-14.5955f, 11.7123f, -13.0455f, 7.06227f);
        path.quadTo(-11.2455f, 1.66227f, -8.14548f, -2.88773f);
        path.quadTo(0.104525f, -14.8877f, 13.4045f, -15.7377f);
        path.lineTo(13.5045f, -15.7377f);
        path.lineTo(14.2045f, -15.6877f);
        path.close();
    }

    private static void draw_4(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_4(path);
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_shape_3(Canvas canvas, Path path, Paint paint)
    {
        draw_3(canvas, path, paint);
        draw_4(canvas, path, paint);
    }

    private static void def_path_5(Path path)
    {
        path.reset();
        path.moveTo(0.856121f, -16.3234f);
        path.quadTo(-1.64388f, -18.6234f, -5.34388f, -18.6234f);
        path.quadTo(-9.59388f, -18.6234f, -11.2939f, -15.6234f);
        path.lineTo(-12.1439f, -13.4234f);
        path.lineTo(-12.0439f, -10.7234f);
        path.lineTo(-11.9939f, 2.32662f);
        path.quadTo(-11.7939f, 11.3766f, -10.3439f, 13.8266f);
        path.quadTo(-8.59388f, 12.3266f, -8.29388f, 9.32662f);
        path.lineTo(-8.29388f, 3.67662f);
        path.lineTo(-7.94388f, 3.67662f);
        path.lineTo(-7.94388f, 9.82662f);
        path.quadTo(-7.59388f, 15.2266f, -5.69388f, 15.2266f);
        path.quadTo(-4.09388f, 15.2266f, -3.79388f, 11.0266f);
        path.lineTo(-3.74388f, 6.37662f);
        path.lineTo(-3.44388f, 11.0766f);
        path.quadTo(-2.84388f, 16.2766f, -1.29388f, 16.2766f);
        path.quadTo(0.156121f, 16.2766f, 0.606121f, 12.7766f);
        path.quadTo(0.206121f, 11.5766f, 0.206121f, 9.87663f);
        path.lineTo(0.606121f, 6.27663f);
        path.lineTo(0.756121f, 9.72663f);
        path.lineTo(0.606121f, 12.7766f);
        path.quadTo(1.30612f, 15.0266f, 3.55612f, 15.5766f);
        path.quadTo(4.30612f, 13.3266f, 4.30612f, 9.07663f);
        path.lineTo(4.25612f, 2.62663f);
        path.lineTo(8.30612f, 2.97663f);
        path.quadTo(9.85612f, 2.72663f, 9.85612f, 0.676626f);
        path.quadTo(9.85612f, -0.173374f, 8.90612f, -1.07337f);
        path.quadTo(7.50612f, -2.07337f, 6.75612f, -2.77337f);
        path.quadTo(3.65612f, -5.42337f, 3.55612f, -10.2234f);
        path.lineTo(3.55612f, -10.7234f);
        path.quadTo(3.31033f, -14.1545f, 0.856121f, -16.3234f);
        path.close();
    }

    private static void draw_5(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_5(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 364.5f, 637.55f));
        paint.setColor(Color.argb(255, 255, 232, 208));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_6(Path path)
    {
        path.reset();
        path.moveTo(8.04754f, -1.48394f);
        path.lineTo(6.64754f, 0.666057f);
        path.lineTo(8.64754f, 2.16606f);
        path.lineTo(8.79754f, 2.31606f);
        path.quadTo(10.8475f, 3.66606f, 11.5975f, 3.66606f);
        path.quadTo(12.1975f, 3.66606f, 12.1975f, 3.11606f);
        path.quadTo(12.1975f, 2.06606f, 10.3475f, 0.266057f);
        path.lineTo(9.19754f, -0.683943f);
        path.lineTo(8.04754f, -1.48394f);
        path.close();
        path.moveTo(0.970271f, 13.8121f);
        path.lineTo(0.920271f, 15.2621f);
        path.quadTo(0.920271f, 18.6121f, 1.72027f, 18.6121f);
        path.quadTo(2.77027f, 18.6121f, 2.97027f, 15.1621f);
        path.lineTo(2.97027f, 15.0621f);
        path.lineTo(2.92027f, 11.0621f);
        path.lineTo(2.92027f, 11.0121f);
        path.lineTo(1.87027f, 10.7621f);
        path.quadTo(1.08442f, 10.7871f, 0.970271f, 13.8121f);
        path.close();
        path.moveTo(-2.05469f, 11.8145f);
        path.quadTo(-2.50469f, 12.2645f, -2.50469f, 14.6645f);
        path.lineTo(-2.50469f, 15.4645f);
        path.quadTo(-2.35469f, 18.4645f, -1.40469f, 18.4645f);
        path.quadTo(-1.05469f, 18.4645f, -0.70469f, 17.1145f);
        path.lineTo(-0.50469f, 15.2645f);
        path.lineTo(-0.50469f, 14.5645f);
        path.lineTo(-0.70469f, 11.6145f);
        path.lineTo(-0.70469f, 11.5645f);
        path.lineTo(-2.05469f, 11.8145f);
        path.close();
        path.moveTo(-5.25088f, 11.9286f);
        path.lineTo(-5.70088f, 11.7786f);
        path.lineTo(-6.65088f, 11.7786f);
        path.lineTo(-6.80088f, 15.2786f);
        path.lineTo(-6.65088f, 17.1786f);
        path.quadTo(-6.50088f, 17.6786f, -5.90088f, 17.6786f);
        path.quadTo(-5.50088f, 17.6786f, -5.30088f, 15.6286f);
        path.lineTo(-5.15088f, 14.6286f);
        path.lineTo(-5.15088f, 14.0286f);
        path.lineTo(-5.15088f, 12.8786f);
        path.lineTo(-5.25088f, 11.9286f);
        path.close();
        path.moveTo(-9.75978f, 12.4423f);
        path.lineTo(-9.55978f, 10.9923f);
        path.lineTo(-10.2098f, 10.6423f);
        path.lineTo(-10.7098f, 10.6423f);
        path.quadTo(-10.7098f, 11.1923f, -11.1098f, 12.3923f);
        path.lineTo(-11.1098f, 15.6423f);
        path.lineTo(-10.9098f, 15.6923f);
        path.quadTo(-10.2098f, 15.6923f, -9.80978f, 13.1423f);
        path.lineTo(-9.75978f, 12.4423f);
        path.close();
    }

    private static void draw_6(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_6(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 364.5f, 637.55f));
        paint.setColor(Color.argb(255, 102, 102, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_7(Path path)
    {
        path.reset();
        path.moveTo(-17.1224f, -39.6669f);
        path.lineTo(-16.9724f, -42.4169f);
        path.quadTo(-16.9724f, -59.8169f, -19.6224f, -77.6169f);
        path.quadTo(-21.2724f, -88.2169f, -25.6224f, -108.067f);
        path.quadTo(-29.9724f, -127.917f, -31.5724f, -138.717f);
        path.quadTo(-34.3224f, -156.717f, -34.3224f, -174.367f);
        path.quadTo(-34.3224f, -177.967f, -32.9224f, -198.617f);
        path.lineTo(-31.7724f, -215.567f);
        path.quadTo(-39.3724f, -213.217f, -45.0724f, -210.917f);
        path.lineTo(-45.7224f, -208.167f);
        path.quadTo(-46.1724f, -205.267f, -46.1724f, -188.517f);
        path.quadTo(-46.1724f, -176.067f, -42.2724f, -157.517f);
        path.quadTo(-40.6224f, -149.767f, -34.1724f, -124.167f);
        path.quadTo(-28.9724f, -103.617f, -27.2724f, -92.4669f);
        path.quadTo(-24.8224f, -76.1669f, -26.9724f, -66.1169f);
        path.lineTo(-26.9724f, -40.5169f);
        path.lineTo(-26.1224f, -40.3669f);
        path.lineTo(-19.2224f, -39.6669f);
        path.lineTo(-17.1224f, -39.6669f);
        path.close();
        path.moveTo(-19.7479f, -219.11f);
        path.lineTo(-19.6979f, -212.71f);
        path.lineTo(-21.5479f, -156.56f);
        path.quadTo(-21.5479f, -103.36f, -6.24786f, -40.1099f);
        path.lineTo(0.102141f, -40.6599f);
        path.quadTo(-3.34786f, -53.8099f, -4.64786f, -61.0099f);
        path.quadTo(-6.94786f, -73.9099f, -6.94786f, -92.1599f);
        path.quadTo(-6.94786f, -97.0099f, -5.09786f, -130.36f);
        path.quadTo(-3.29786f, -163.71f, -3.29786f, -178.91f);
        path.quadTo(-3.29786f, -191.41f, -6.24786f, -208.56f);
        path.quadTo(-7.59786f, -216.66f, -8.94786f, -221.61f);
        path.lineTo(-19.7479f, -219.11f);
        path.close();
        path.moveTo(6.73482f, -223.162f);
        path.lineTo(8.33482f, -211.262f);
        path.quadTo(10.4348f, -194.212f, 10.4348f, -183.962f);
        path.quadTo(10.4348f, -158.862f, 5.88482f, -129.212f);
        path.quadTo(1.33482f, -99.5622f, 1.33482f, -81.2122f);
        path.quadTo(1.33482f, -70.3122f, 5.28482f, -55.0622f);
        path.quadTo(7.08482f, -47.8622f, 9.23482f, -41.8622f);
        path.lineTo(19.4848f, -43.7622f);
        path.lineTo(22.6848f, -44.4622f);
        path.lineTo(19.0348f, -54.2122f);
        path.quadTo(15.0348f, -65.8122f, 15.0348f, -79.3622f);
        path.quadTo(15.0348f, -91.3122f, 19.5848f, -122.412f);
        path.quadTo(24.1348f, -153.562f, 24.1348f, -170.712f);
        path.quadTo(24.1348f, -186.812f, 22.0848f, -202.012f);
        path.quadTo(20.4348f, -214.212f, 17.8848f, -221.512f);
        path.quadTo(11.9286f, -222.991f, 6.73482f, -223.162f);
        path.close();
        path.moveTo(28.5374f, -218.197f);
        path.quadTo(29.1874f, -213.147f, 30.5374f, -205.497f);
        path.quadTo(33.2874f, -189.897f, 33.2874f, -182.597f);
        path.quadTo(33.2874f, -169.947f, 29.1874f, -135.647f);
        path.quadTo(25.0874f, -101.297f, 25.0874f, -95.3967f);
        path.quadTo(25.0874f, -81.2967f, 28.9374f, -63.1467f);
        path.quadTo(30.8374f, -54.2467f, 33.0374f, -47.2967f);
        path.quadTo(37.1874f, -48.6467f, 40.6374f, -50.0967f);
        path.quadTo(37.7874f, -63.7967f, 37.3374f, -67.6467f);
        path.quadTo(36.9374f, -70.8967f, 36.9374f, -99.4967f);
        path.lineTo(36.9374f, -117.297f);
        path.quadTo(36.9374f, -129.197f, 38.7874f, -141.947f);
        path.lineTo(43.2874f, -166.097f);
        path.quadTo(45.1374f, -175.997f, 45.1374f, -188.547f);
        path.quadTo(45.1374f, -194.997f, 44.2874f, -205.647f);
        path.lineTo(43.8374f, -211.097f);
        path.lineTo(32.5374f, -216.597f);
        path.lineTo(28.5374f, -218.197f);
        path.close();
    }

    private static void draw_7(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_7(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_8(Path path)
    {
        path.reset();
        path.moveTo(-31.7906f, -215.571f);
        path.lineTo(-32.9406f, -198.621f);
        path.quadTo(-34.3406f, -177.971f, -34.3406f, -174.371f);
        path.quadTo(-34.3406f, -156.721f, -31.5906f, -138.721f);
        path.quadTo(-29.9906f, -127.921f, -25.6406f, -108.071f);
        path.quadTo(-21.2906f, -88.2213f, -19.6406f, -77.6213f);
        path.quadTo(-16.9906f, -59.8213f, -16.9906f, -42.4213f);
        path.lineTo(-17.1406f, -39.6713f);
        path.lineTo(-6.24063f, -40.1213f);
        path.quadTo(-21.5406f, -103.371f, -21.5406f, -156.571f);
        path.lineTo(-19.6906f, -212.721f);
        path.lineTo(-19.7406f, -219.121f);
        path.lineTo(-26.1406f, -217.321f);
        path.lineTo(-31.7906f, -215.571f);
        path.close();
        path.moveTo(9.24611f, -41.8929f);
        path.quadTo(7.09611f, -47.8929f, 5.29611f, -55.0929f);
        path.quadTo(1.34611f, -70.3429f, 1.34611f, -81.2429f);
        path.quadTo(1.34611f, -99.5929f, 5.89611f, -129.243f);
        path.quadTo(10.4461f, -158.893f, 10.4461f, -183.993f);
        path.quadTo(10.4461f, -194.243f, 8.34611f, -211.293f);
        path.lineTo(6.74611f, -223.193f);
        path.lineTo(4.99611f, -223.243f);
        path.quadTo(-0.703892f, -223.243f, -8.85389f, -221.643f);
        path.quadTo(-7.50389f, -216.693f, -6.15389f, -208.593f);
        path.quadTo(-3.20389f, -191.443f, -3.20389f, -178.943f);
        path.quadTo(-3.20389f, -163.743f, -5.00389f, -130.393f);
        path.quadTo(-6.85389f, -97.0429f, -6.85389f, -92.1929f);
        path.quadTo(-6.85389f, -73.9429f, -4.55389f, -61.0429f);
        path.quadTo(-3.25389f, -53.8429f, 0.196108f, -40.6929f);
        path.lineTo(9.24611f, -41.8929f);
        path.close();
        path.moveTo(17.8644f, -221.507f);
        path.quadTo(20.4144f, -214.207f, 22.0644f, -202.007f);
        path.quadTo(24.1144f, -186.807f, 24.1144f, -170.707f);
        path.quadTo(24.1144f, -153.557f, 19.5644f, -122.407f);
        path.quadTo(15.0144f, -91.3071f, 15.0144f, -79.3571f);
        path.quadTo(15.0144f, -65.8071f, 19.0144f, -54.2071f);
        path.lineTo(22.6644f, -44.4571f);
        path.lineTo(33.0144f, -47.2571f);
        path.quadTo(30.8144f, -54.2071f, 28.9144f, -63.1071f);
        path.quadTo(25.0644f, -81.2571f, 25.0644f, -95.3571f);
        path.quadTo(25.0644f, -101.257f, 29.1644f, -135.607f);
        path.quadTo(33.2644f, -169.907f, 33.2644f, -182.557f);
        path.quadTo(33.2644f, -189.857f, 30.5144f, -205.457f);
        path.quadTo(29.1644f, -213.107f, 28.5144f, -218.157f);
        path.quadTo(22.944f, -220.308f, 17.8644f, -221.507f);
        path.close();
    }

    private static void draw_8(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_8(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_9(Path path)
    {
        path.reset();
        path.moveTo(11.4149f, -133.84f);
        path.quadTo(10.0149f, -133.19f, 8.31495f, -132.59f);
        path.quadTo(4.06495f, -131.14f, -0.685052f, -131.14f);
        path.lineTo(-2.98505f, -131.29f);
        path.lineTo(-2.08505f, -125.54f);
        path.quadTo(-1.38505f, -120.79f, -1.38505f, -112.74f);
        path.lineTo(-1.38505f, -112.39f);
        path.quadTo(-1.38505f, -107.09f, -1.93505f, -102.39f);
        path.lineTo(-2.23505f, -100.39f);
        path.quadTo(-2.83505f, -96.1903f, -3.88505f, -92.5903f);
        path.lineTo(-4.83505f, -89.7403f);
        path.lineTo(-5.78505f, -87.3403f);
        path.lineTo(-6.78505f, -85.0903f);
        path.lineTo(-7.58505f, -83.6903f);
        path.lineTo(-11.4351f, -78.0403f);
        path.lineTo(-13.8351f, -74.8403f);
        path.lineTo(-15.4351f, -72.8903f);
        path.lineTo(-17.7351f, -69.9403f);
        path.lineTo(-20.4351f, -66.4903f);
        path.lineTo(-21.6351f, -65.0403f);
        path.quadTo(-15.4851f, -59.7903f, -11.5851f, -58.0403f);
        path.quadTo(-4.48505f, -54.9403f, 9.41495f, -54.9403f);
        path.quadTo(21.4649f, -54.9403f, 29.6649f, -59.5403f);
        path.quadTo(30.8149f, -62.0903f, 30.8149f, -64.8903f);
        path.lineTo(30.6149f, -67.6403f);
        path.lineTo(27.3649f, -71.0403f);
        path.lineTo(26.1649f, -72.3403f);
        path.lineTo(23.2649f, -76.0403f);
        path.lineTo(22.6649f, -76.9903f);
        path.lineTo(20.4149f, -80.4903f);
        path.lineTo(19.9149f, -81.4403f);
        path.lineTo(18.6649f, -83.8903f);
        path.quadTo(16.4649f, -88.4903f, 14.9649f, -93.9403f);
        path.lineTo(14.7149f, -94.6903f);
        path.quadTo(14.1649f, -96.7403f, 13.7649f, -98.9903f);
        path.lineTo(13.4149f, -100.34f);
        path.quadTo(12.8149f, -103.09f, 12.4149f, -106.04f);
        path.quadTo(11.1149f, -115.34f, 11.1149f, -126.54f);
        path.lineTo(11.4149f, -133.84f);
        path.close();
    }

    private static void draw_9(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_9(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_10(Path path)
    {
        path.reset();
        path.moveTo(13.755f, -98.9676f);
        path.lineTo(13.405f, -100.318f);
        path.quadTo(12.805f, -103.068f, 12.405f, -106.018f);
        path.lineTo(9.35501f, -107.068f);
        path.quadTo(2.95501f, -109.418f, -1.39499f, -112.368f);
        path.quadTo(-1.39499f, -107.068f, -1.94499f, -102.368f);
        path.lineTo(-2.24499f, -100.368f);
        path.quadTo(-2.84499f, -96.1676f, -3.89499f, -92.5676f);
        path.lineTo(-4.84499f, -89.7176f);
        path.lineTo(-5.79499f, -87.3176f);
        path.lineTo(-6.79499f, -85.0676f);
        path.lineTo(-7.59499f, -83.6676f);
        path.lineTo(-11.445f, -78.0176f);
        path.lineTo(-13.845f, -74.8176f);
        path.lineTo(-15.445f, -72.8676f);
        path.lineTo(-17.745f, -69.9176f);
        path.lineTo(-20.445f, -66.4676f);
        path.lineTo(-13.795f, -64.3176f);
        path.lineTo(-11.545f, -64.0676f);
        path.lineTo(-11.195f, -64.1676f);
        path.lineTo(-9.79499f, -63.9676f);
        path.lineTo(-7.69499f, -63.9676f);
        path.quadTo(2.50501f, -63.9676f, 12.405f, -67.1176f);
        path.lineTo(13.455f, -67.5176f);
        path.lineTo(13.505f, -67.2676f);
        path.quadTo(18.605f, -67.8676f, 22.605f, -69.1176f);
        path.lineTo(27.355f, -71.0176f);
        path.lineTo(26.155f, -72.3176f);
        path.lineTo(23.255f, -76.0176f);
        path.lineTo(22.405f, -75.8676f);
        path.lineTo(16.255f, -74.9176f);
        path.lineTo(22.655f, -76.9676f);
        path.lineTo(20.405f, -80.4676f);
        path.lineTo(19.905f, -81.4176f);
        path.lineTo(18.655f, -83.8676f);
        path.quadTo(16.455f, -88.4676f, 14.955f, -93.9176f);
        path.lineTo(14.705f, -94.6676f);
        path.quadTo(14.1545f, -96.7417f, 13.755f, -98.9676f);
        path.close();
        path.moveTo(14.2116f, -74.3684f);
        path.lineTo(14.0616f, -74.7184f);
        path.lineTo(16.2616f, -74.9184f);
        path.lineTo(14.2116f, -74.3684f);
        path.close();
    }

    private static void draw_10(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_10(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_11(Path path)
    {
        path.reset();
        path.moveTo(12.5564f, -100.337f);
        path.lineTo(2.70644f, -101.187f);
        path.lineTo(-1.94356f, -102.387f);
        path.lineTo(-2.24356f, -100.387f);
        path.lineTo(-0.0935577f, -100.087f);
        path.lineTo(10.1064f, -98.9874f);
        path.lineTo(13.7564f, -98.9874f);
        path.lineTo(13.4064f, -100.337f);
        path.lineTo(12.5564f, -100.337f);
        path.close();
        path.moveTo(14.9536f, -93.945f);
        path.lineTo(14.7036f, -94.695f);
        path.quadTo(10.7036f, -93.645f, 6.80358f, -93.095f);
        path.lineTo(-3.89642f, -92.595f);
        path.lineTo(-4.84642f, -89.745f);
        path.quadTo(1.50358f, -89.795f, 11.7536f, -92.995f);
        path.lineTo(14.9536f, -93.945f);
        path.close();
        path.moveTo(14.0975f, -74.7108f);
        path.lineTo(9.94746f, -74.4608f);
        path.quadTo(2.74746f, -74.4608f, -6.05254f, -76.5608f);
        path.quadTo(-9.25254f, -77.3108f, -11.4025f, -78.0108f);
        path.lineTo(-13.8025f, -74.8108f);
        path.lineTo(-6.30254f, -73.5108f);
        path.lineTo(1.39746f, -73.4608f);
        path.lineTo(14.2475f, -74.3608f);
        path.lineTo(14.0975f, -74.7108f);
        path.close();
        path.moveTo(13.4696f, -67.5194f);
        path.lineTo(13.5196f, -67.2694f);
        path.quadTo(18.6196f, -67.8694f, 22.6196f, -69.1194f);
        path.lineTo(27.3696f, -71.0194f);
        path.lineTo(26.1696f, -72.3194f);
        path.quadTo(18.6064f, -69.2317f, 13.4696f, -67.5194f);
        path.close();
        path.moveTo(20.4328f, -80.4754f);
        path.lineTo(19.9328f, -81.4254f);
        path.lineTo(13.2828f, -82.7254f);
        path.quadTo(1.53276f, -84.9754f, -5.76724f, -87.3254f);
        path.lineTo(-6.76724f, -85.0754f);
        path.quadTo(6.79189f, -81.674f, 20.4328f, -80.4754f);
        path.close();
    }

    private static void draw_11(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_11(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 153, 204, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_12(Path path)
    {
        path.reset();
        path.moveTo(24.0285f, 17.4649f);
        path.quadTo(18.8285f, -27.1851f, 7.57846f, -49.9351f);
        path.quadTo(2.32846f, -60.5851f, -5.72154f, -70.2851f);
        path.quadTo(-9.72154f, -74.9351f, -16.2715f, -81.5851f);
        path.quadTo(-19.1715f, -75.9851f, -20.9715f, -70.4351f);
        path.lineTo(-22.5715f, -64.1351f);
        path.lineTo(-22.6215f, -63.8351f);
        path.quadTo(-23.9215f, -56.9351f, -23.9215f, -49.2851f);
        path.quadTo(-23.9215f, -32.4851f, -11.4715f, 0.264877f);
        path.quadTo(-7.02154f, 11.9649f, -1.92154f, 24.0649f);
        path.lineTo(-1.22154f, 24.0649f);
        path.quadTo(8.77846f, 24.0649f, 16.7285f, 21.1649f);
        path.lineTo(16.9785f, 21.1149f);
        path.lineTo(19.5785f, 20.0149f);
        path.lineTo(24.0285f, 17.4649f);
        path.close();
    }

    private static void draw_12(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_12(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_13(Path path)
    {
        path.reset();
        path.moveTo(-22.4874f, -63.9808f);
        path.lineTo(-22.6874f, -63.8808f);
        path.quadTo(-13.4374f, -47.4808f, -1.78745f, -22.1308f);
        path.quadTo(11.6626f, 6.96922f, 16.6626f, 21.1192f);
        path.lineTo(16.9126f, 21.0692f);
        path.lineTo(19.5126f, 19.9692f);
        path.quadTo(17.8126f, 11.7192f, 13.9126f, 1.41922f);
        path.quadTo(9.46255f, -10.2308f, 1.06255f, -26.9308f);
        path.quadTo(-8.43745f, -46.2308f, -20.3374f, -61.3808f);
        path.lineTo(-22.4874f, -63.9808f);
        path.close();
    }

    private static void draw_13(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_13(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 153, 204, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_14(Path path)
    {
        path.reset();
        path.moveTo(0.342448f, 175.048f);
        path.quadTo(-0.307552f, 179.198f, -0.307552f, 191.498f);
        path.lineTo(1.04245f, 228.548f);
        path.lineTo(0.692448f, 233.898f);
        path.lineTo(0.542448f, 235.748f);
        path.lineTo(0.492448f, 237.448f);
        path.quadTo(-0.457552f, 238.198f, -1.25755f, 239.098f);
        path.quadTo(-4.05755f, 242.148f, -5.20755f, 247.198f);
        path.quadTo(-6.25755f, 252.248f, -6.25755f, 264.148f);
        path.quadTo(-6.25755f, 276.948f, -3.65755f, 284.248f);
        path.quadTo(-0.657552f, 292.648f, 5.39245f, 292.098f);
        path.quadTo(6.34245f, 294.598f, 7.99245f, 294.598f);
        path.quadTo(10.6924f, 294.598f, 11.1424f, 287.248f);
        path.lineTo(11.1424f, 268.398f);
        path.lineTo(11.1924f, 262.498f);
        path.lineTo(11.1424f, 257.198f);
        path.quadTo(10.7924f, 249.898f, 10.0424f, 245.748f);
        path.quadTo(9.54245f, 242.648f, 8.74245f, 240.648f);
        path.lineTo(9.94245f, 225.048f);
        path.quadTo(10.7924f, 209.048f, 10.7924f, 194.998f);
        path.quadTo(10.7924f, 183.498f, 10.1424f, 177.848f);
        path.quadTo(8.94245f, 168.048f, 5.54245f, 168.048f);
        path.quadTo(1.54102f, 168.028f, 0.342448f, 175.048f);
        path.close();
    }

    private static void draw_14(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_14(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 232, 208));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_15(Path path)
    {
        path.reset();
        path.moveTo(-1.25564f, 236.346f);
        path.lineTo(-1.75564f, 237.846f);
        path.quadTo(-1.75564f, 238.546f, -1.30564f, 239.096f);
        path.lineTo(-0.355644f, 239.846f);
        path.lineTo(0.894356f, 240.346f);
        path.quadTo(1.69436f, 239.296f, 1.69436f, 237.346f);
        path.lineTo(1.64436f, 235.947f);
        path.lineTo(1.64436f, 235.896f);
        path.lineTo(1.64436f, 235.796f);
        path.lineTo(0.494356f, 235.746f);
        path.lineTo(0.144356f, 235.696f);
        path.quadTo(-0.684897f, 235.662f, -1.25564f, 236.346f);
        path.close();
    }

    private static void draw_15(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_15(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_16(Path path)
    {
        path.reset();
        path.moveTo(8.73244f, 289.826f);
        path.lineTo(6.68244f, 289.975f);
        path.lineTo(6.63243f, 290.625f);
        path.quadTo(6.63243f, 291.525f, 6.98243f, 292.275f);
        path.quadTo(7.43243f, 293.125f, 7.98243f, 293.125f);
        path.quadTo(8.78243f, 293.125f, 9.13243f, 291.425f);
        path.lineTo(9.33243f, 289.875f);
        path.lineTo(8.73244f, 289.826f);
        path.close();
    }

    private static void draw_16(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_16(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 102, 102, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_17(Path path)
    {
        path.reset();
        path.moveTo(33.8453f, 175.048f);
        path.quadTo(32.6453f, 168.048f, 28.6953f, 168.048f);
        path.quadTo(25.2953f, 168.048f, 24.0953f, 177.848f);
        path.quadTo(23.4453f, 183.498f, 23.4453f, 194.998f);
        path.quadTo(23.4453f, 209.048f, 24.2953f, 225.048f);
        path.quadTo(24.8453f, 235.798f, 25.4953f, 240.648f);
        path.quadTo(24.6953f, 242.648f, 24.1453f, 245.748f);
        path.quadTo(23.4953f, 249.898f, 23.0953f, 257.198f);
        path.quadTo(22.9453f, 259.098f, 23.0453f, 262.498f);
        path.lineTo(23.0953f, 268.398f);
        path.lineTo(23.0953f, 287.248f);
        path.quadTo(23.5453f, 294.598f, 26.1953f, 294.598f);
        path.quadTo(27.8953f, 294.598f, 28.8453f, 292.098f);
        path.quadTo(34.9453f, 292.648f, 37.8953f, 284.248f);
        path.quadTo(40.5453f, 276.948f, 40.5453f, 264.148f);
        path.quadTo(40.5453f, 252.248f, 39.4453f, 247.198f);
        path.quadTo(38.2953f, 242.148f, 35.5953f, 239.098f);
        path.lineTo(33.7453f, 237.448f);
        path.lineTo(33.6953f, 235.748f);
        path.lineTo(33.5453f, 233.898f);
        path.lineTo(33.1953f, 228.548f);
        path.lineTo(34.5953f, 191.498f);
        path.quadTo(34.5873f, 179.158f, 33.8453f, 175.048f);
        path.close();
    }

    private static void draw_17(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_17(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 232, 208));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_18(Path path)
    {
        path.reset();
        path.moveTo(35.4434f, 236.346f);
        path.quadTo(35.9934f, 237.046f, 35.9934f, 237.846f);
        path.quadTo(35.9934f, 238.546f, 35.5434f, 239.096f);
        path.lineTo(34.5934f, 239.846f);
        path.lineTo(33.2934f, 240.346f);
        path.quadTo(32.4934f, 239.296f, 32.4934f, 237.346f);
        path.lineTo(32.5434f, 235.947f);
        path.lineTo(32.5434f, 235.896f);
        path.lineTo(32.5434f, 235.796f);
        path.lineTo(33.6934f, 235.746f);
        path.lineTo(34.0434f, 235.696f);
        path.quadTo(34.8727f, 235.662f, 35.4434f, 236.346f);
        path.close();
    }

    private static void draw_18(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_18(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_19(Path path)
    {
        path.reset();
        path.moveTo(25.4553f, 289.826f);
        path.lineTo(24.9053f, 289.875f);
        path.lineTo(25.0553f, 291.425f);
        path.quadTo(25.3553f, 293.125f, 26.1553f, 293.125f);
        path.quadTo(26.7553f, 293.125f, 27.2053f, 292.275f);
        path.lineTo(27.5553f, 290.625f);
        path.lineTo(27.5053f, 289.975f);
        path.lineTo(25.4553f, 289.826f);
        path.close();
    }

    private static void draw_19(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_19(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 102, 102, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_20(Path path)
    {
        path.reset();
        path.moveTo(33.1604f, -64.152f);
        path.lineTo(31.5104f, -70.452f);
        path.quadTo(29.7604f, -76.002f, 26.8604f, -81.602f);
        path.quadTo(20.3104f, -74.952f, 16.3104f, -70.302f);
        path.quadTo(8.21042f, -60.602f, 2.96042f, -49.952f);
        path.quadTo(-8.28958f, -27.202f, -13.4396f, 17.448f);
        path.quadTo(-11.5896f, 18.848f, -8.98957f, 19.998f);
        path.lineTo(-6.38957f, 21.098f);
        path.lineTo(-6.13957f, 21.148f);
        path.quadTo(1.76043f, 24.048f, 11.8104f, 24.048f);
        path.lineTo(12.4604f, 24.048f);
        path.quadTo(17.6104f, 11.948f, 22.0604f, 0.24799f);
        path.quadTo(34.5104f, -32.502f, 34.5104f, -49.302f);
        path.quadTo(34.5104f, -56.952f, 33.1604f, -63.852f);
        path.lineTo(33.1604f, -64.152f);
        path.close();
    }

    private static void draw_20(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_20(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_21(Path path)
    {
        path.reset();
        path.moveTo(30.8774f, -61.3553f);
        path.quadTo(19.0274f, -46.2053f, 9.37743f, -26.9053f);
        path.quadTo(1.02743f, -10.2053f, -3.37257f, 1.44466f);
        path.quadTo(-7.27257f, 11.7447f, -8.97257f, 19.9947f);
        path.lineTo(-6.37257f, 21.0947f);
        path.lineTo(-6.12257f, 21.1447f);
        path.quadTo(-1.07257f, 6.99466f, 12.3274f, -22.1053f);
        path.quadTo(23.9774f, -47.4553f, 33.1774f, -63.8553f);
        path.lineTo(32.9774f, -63.9553f);
        path.lineTo(30.8774f, -61.3553f);
        path.close();
    }

    private static void draw_21(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_21(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 153, 204, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_22(Path path)
    {
        path.reset();
        path.moveTo(20.7181f, -71.7429f);
        path.quadTo(18.1181f, -81.2429f, 14.9681f, -86.4929f);
        path.quadTo(11.3681f, -92.4429f, 5.76813f, -95.0429f);
        path.quadTo(0.0181298f, -97.8429f, -9.08187f, -97.8429f);
        path.lineTo(-14.5319f, -97.6929f);
        path.quadTo(-16.5319f, -96.7429f, -18.1819f, -95.4429f);
        path.lineTo(-17.8319f, -95.0429f);
        path.quadTo(-19.5319f, -92.9929f, -20.8819f, -90.2429f);
        path.lineTo(-20.3819f, -93.4929f);
        path.quadTo(-24.3319f, -89.6929f, -26.7319f, -83.6929f);
        path.quadTo(-31.7319f, -71.1929f, -31.7319f, -45.0429f);
        path.quadTo(-31.7319f, -36.8929f, -26.8819f, 21.8571f);
        path.quadTo(-22.9819f, 69.3571f, -20.8319f, 91.6071f);
        path.lineTo(-20.7819f, 92.0071f);
        path.quadTo(-16.7319f, 94.0571f, -12.9819f, 95.2571f);
        path.lineTo(-9.88187f, 96.1071f);
        path.lineTo(-7.53187f, 96.6571f);
        path.lineTo(8.36813f, 97.8071f);
        path.quadTo(20.4681f, 97.8071f, 25.5181f, 96.0571f);
        path.lineTo(29.9681f, 94.2071f);
        path.quadTo(31.7681f, 71.2571f, 31.7681f, 42.2571f);
        path.quadTo(31.7681f, 7.50708f, 31.2681f, -3.39292f);
        path.quadTo(30.1181f, -27.0929f, 25.5181f, -50.2929f);
        path.quadTo(22.4874f, -65.2935f, 20.7181f, -71.7429f);
        path.close();
        path.moveTo(-20.9464f, -90.2352f);
        path.lineTo(-21.2964f, -87.9852f);
        path.lineTo(-21.8464f, -88.2352f);
        path.lineTo(-20.9464f, -90.2352f);
        path.close();
    }

    private static void draw_22(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_22(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 391.45f, 654.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_23(Path path)
    {
        path.reset();
        path.moveTo(-21.2889f, -87.9522f);
        path.lineTo(-21.8389f, -88.2022f);
        path.quadTo(-25.5389f, -79.0022f, -25.5389f, -62.8022f);
        path.quadTo(-25.5389f, -56.0022f, -17.8889f, 23.7978f);
        path.quadTo(-16.1889f, 40.0978f, -14.6889f, 65.9978f);
        path.lineTo(-13.0389f, 95.2978f);
        path.lineTo(-9.93888f, 96.1478f);
        path.lineTo(-7.58888f, 96.6978f);
        path.quadTo(-8.73888f, 69.9478f, -15.0889f, 8.89783f);
        path.quadTo(-22.7389f, -65.9522f, -22.7389f, -71.2022f);
        path.quadTo(-22.7157f, -78.0782f, -21.2889f, -87.9522f);
        path.close();
    }

    private static void draw_23(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_23(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 391.45f, 654.0f));
        paint.setColor(Color.argb(255, 153, 204, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_24(Path path)
    {
        path.reset();
        path.moveTo(25.8549f, -0.741972f);
        path.lineTo(17.0549f, -0.391972f);
        path.quadTo(8.50486f, -0.391972f, -4.34514f, -3.14197f);
        path.lineTo(-14.6451f, -5.59197f);
        path.lineTo(-14.3951f, 3.25803f);
        path.lineTo(-14.2951f, 7.15803f);
        path.lineTo(-14.2451f, 9.55803f);
        path.lineTo(-14.0451f, 12.808f);
        path.lineTo(-13.6451f, 23.658f);
        path.lineTo(-2.54514f, 26.058f);
        path.quadTo(5.30486f, 27.508f, 11.8049f, 27.508f);
        path.quadTo(18.3049f, 27.508f, 27.3049f, 24.708f);
        path.lineTo(29.3049f, 24.058f);
        path.lineTo(28.5049f, 19.108f);
        path.lineTo(28.2549f, 17.008f);
        path.lineTo(27.4549f, 11.758f);
        path.lineTo(26.8049f, 7.40803f);
        path.lineTo(26.6549f, 6.20803f);
        path.lineTo(25.8549f, -0.741972f);
        path.close();
    }

    private static void draw_24(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_24(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_25(Path path)
    {
        path.reset();
        path.moveTo(28.252f, 17.0653f);
        path.lineTo(26.852f, 17.0653f);
        path.quadTo(16.002f, 17.0653f, 0.851995f, 13.4653f);
        path.lineTo(-14.248f, 9.61535f);
        path.lineTo(-14.048f, 12.8653f);
        path.lineTo(-13.348f, 12.8653f);
        path.quadTo(-7.14801f, 15.8653f, 4.70199f, 17.5653f);
        path.lineTo(25.452f, 19.1653f);
        path.lineTo(28.502f, 19.1653f);
        path.lineTo(28.252f, 17.0653f);
        path.close();
        path.moveTo(26.8251f, 7.47679f);
        path.lineTo(26.6751f, 6.27679f);
        path.lineTo(23.3251f, 6.62679f);
        path.lineTo(0.625127f, 5.12679f);
        path.lineTo(-14.3749f, 3.32679f);
        path.lineTo(-14.2749f, 7.22679f);
        path.lineTo(-7.02487f, 8.52679f);
        path.lineTo(6.57513f, 8.67679f);
        path.quadTo(19.8251f, 8.67679f, 21.7251f, 8.42679f);
        path.lineTo(26.8251f, 7.47679f);
        path.close();
    }

    private static void draw_25(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_25(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 153, 204, 204));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_26(Path path)
    {
        path.reset();
        path.moveTo(0.913196f, -79.7334f);
        path.quadTo(-20.0868f, -79.7334f, -34.4368f, -62.2834f);
        path.quadTo(-48.4368f, -45.1334f, -48.4368f, -20.7834f);
        path.quadTo(-48.4368f, 5.9166f, -35.5868f, 32.1666f);
        path.quadTo(-20.2868f, 63.5666f, 8.5632f, 79.6666f);
        path.quadTo(18.3632f, 70.7166f, 27.1132f, 56.1166f);
        path.quadTo(36.7632f, 39.9666f, 42.3132f, 21.2666f);
        path.quadTo(48.5132f, 0.866598f, 48.5132f, -18.6334f);
        path.quadTo(48.5132f, -45.6834f, 36.2632f, -62.2834f);
        path.quadTo(23.4006f, -79.7334f, 0.913196f, -79.7334f);
        path.close();
    }

    private static void draw_26(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_26(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 232, 208));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_27(Path path)
    {
        path.reset();
        path.moveTo(2.39714f, 33.3887f);
        path.quadTo(2.09714f, 34.0387f, 2.14714f, 39.0387f);
        path.lineTo(1.94714f, 47.0887f);
        path.lineTo(3.69714f, 47.1387f);
        path.lineTo(3.59714f, 42.2887f);
        path.quadTo(3.49714f, 36.4387f, 2.59714f, 33.3887f);
        path.lineTo(2.39714f, 33.3887f);
        path.close();
    }

    private static void draw_27(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_27(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_28(Path path)
    {
        path.reset();
        path.moveTo(0.0f, -7.24849f);
        path.quadTo(0.0f, -6.79849f, -0.35f, -6.79849f);
        path.quadTo(-0.95f, -3.29849f, -1.7f, 10.1515f);
        path.lineTo(-2.5f, 28.1015f);
        path.lineTo(-3.65f, 28.2015f);
        path.quadTo(-4.85f, 28.5015f, -4.75f, 29.6515f);
        path.quadTo(-4.75f, 30.8515f, -2.55f, 31.1515f);
        path.lineTo(-1.15f, 31.2515f);
        path.lineTo(-1.15f, 31.3015f);
        path.quadTo(-1.15f, 33.3015f, 0.1f, 34.3015f);
        path.quadTo(1.1f, 35.0515f, 2.75f, 35.0515f);
        path.quadTo(4.95f, 35.0515f, 5.95f, 33.1515f);
        path.lineTo(6.55f, 31.5015f);
        path.lineTo(7.55f, 31.3015f);
        path.lineTo(8.3f, 31.1515f);
        path.quadTo(9.9f, 30.5515f, 9.9f, 29.4515f);
        path.quadTo(9.9f, 28.7515f, 9.35f, 28.2015f);
        path.quadTo(8.8f, 27.6515f, 8.2f, 27.6515f);
        path.lineTo(7.7f, 27.8015f);
        path.quadTo(2.51129f, -0.627822f, 0.0f, -7.24849f);
        path.close();
    }

    private static void draw_28(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_28(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_29(Path path)
    {
        path.reset();
        path.moveTo(7.02019f, 46.8013f);
        path.quadTo(5.87019f, 44.0013f, 4.72019f, 44.0013f);
        path.quadTo(3.92019f, 44.0013f, 3.32019f, 44.9013f);
        path.quadTo(2.92019f, 45.4013f, 2.77019f, 46.1013f);
        path.lineTo(2.22019f, 44.9013f);
        path.quadTo(1.72019f, 44.2013f, 0.920192f, 44.2013f);
        path.quadTo(-1.07981f, 44.2013f, -1.87981f, 47.7513f);
        path.quadTo(-2.42981f, 49.8013f, -3.12981f, 50.6013f);
        path.lineTo(-3.27981f, 50.7013f);
        path.quadTo(-2.97981f, 51.3013f, -2.87981f, 53.1013f);
        path.quadTo(-2.82981f, 54.8013f, -2.22981f, 55.8013f);
        path.quadTo(-1.07981f, 58.0013f, 0.570192f, 58.7013f);
        path.lineTo(3.97019f, 59.1513f);
        path.quadTo(6.77019f, 59.1513f, 8.32019f, 57.5013f);
        path.quadTo(9.77019f, 56.0013f, 9.77019f, 53.7013f);
        path.lineTo(9.32019f, 51.4013f);
        path.lineTo(8.92019f, 49.4513f);
        path.lineTo(8.92019f, 49.2513f);
        path.quadTo(7.81924f, 48.7418f, 7.02019f, 46.8013f);
        path.close();
    }

    private static void draw_29(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_29(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_30(Path path)
    {
        path.reset();
        path.moveTo(7.02019f, 46.8013f);
        path.quadTo(5.87019f, 44.0013f, 4.72019f, 44.0013f);
        path.quadTo(3.92019f, 44.0013f, 3.32019f, 44.9013f);
        path.quadTo(2.92019f, 45.4013f, 2.77019f, 46.1013f);
        path.lineTo(2.22019f, 44.9013f);
        path.quadTo(1.72019f, 44.2013f, 0.920192f, 44.2013f);
        path.quadTo(-1.07981f, 44.2013f, -1.87981f, 47.7513f);
        path.quadTo(-2.42981f, 49.8013f, -3.12981f, 50.6013f);
        path.lineTo(-1.92981f, 51.0513f);
        path.lineTo(0.320193f, 51.5513f);
        path.lineTo(2.17019f, 51.3013f);
        path.lineTo(2.32019f, 51.4513f);
        path.lineTo(3.47019f, 51.7513f);
        path.quadTo(4.22019f, 51.7513f, 4.67019f, 51.3013f);
        path.lineTo(5.12019f, 50.7513f);
        path.lineTo(5.17019f, 50.7513f);
        path.lineTo(5.37019f, 50.9013f);
        path.lineTo(5.92019f, 50.9513f);
        path.quadTo(7.12019f, 50.9513f, 8.22019f, 50.1013f);
        path.lineTo(8.92019f, 49.4513f);
        path.lineTo(8.92019f, 49.2513f);
        path.quadTo(7.81924f, 48.7418f, 7.02019f, 46.8013f);
        path.close();
    }

    private static void draw_30(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_30(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 96, 96));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_31(Path path)
    {
        path.reset();
        path.moveTo(32.1331f, 5.13673f);
        path.lineTo(32.4831f, 5.43673f);
        path.lineTo(32.0331f, 5.38673f);
        path.lineTo(26.1331f, 4.18673f);
        path.quadTo(21.2831f, 2.88673f, 15.3831f, -0.863273f);
        path.lineTo(11.1831f, -3.86327f);
        path.lineTo(10.7831f, -4.21327f);
        path.lineTo(11.5831f, -4.26327f);
        path.lineTo(11.8331f, -4.26327f);
        path.quadTo(14.8831f, -4.21327f, 18.6331f, -3.26327f);
        path.lineTo(19.1331f, -3.06327f);
        path.quadTo(18.8331f, -1.46327f, 19.2831f, -0.163273f);
        path.quadTo(19.8331f, 1.53673f, 21.5331f, 1.98673f);
        path.quadTo(22.7831f, 2.33673f, 24.3331f, 1.28673f);
        path.lineTo(25.7831f, -0.263273f);
        path.lineTo(26.5831f, 0.186727f);
        path.quadTo(28.994f, 1.76932f, 32.1331f, 5.13673f);
        path.close();
    }

    private static void draw_31(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_31(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_32(Path path)
    {
        path.reset();
        path.moveTo(25.7978f, -0.342448f);
        path.lineTo(24.3478f, 1.20755f);
        path.quadTo(22.7978f, 2.25755f, 21.5478f, 1.90755f);
        path.quadTo(19.8478f, 1.45755f, 19.2978f, -0.242448f);
        path.quadTo(18.8478f, -1.54245f, 19.1478f, -3.14245f);
        path.quadTo(23.0011f, -2.05469f, 25.7978f, -0.342448f);
        path.close();
    }

    private static void draw_32(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_32(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_33(Path path)
    {
        path.reset();
        path.moveTo(11.5862f, -4.33768f);
        path.quadTo(14.8362f, -8.58768f, 17.9362f, -11.1877f);
        path.quadTo(23.2862f, -15.6377f, 27.1862f, -14.5877f);
        path.quadTo(31.2362f, -13.4877f, 32.8862f, -7.08768f);
        path.quadTo(34.2362f, -1.48768f, 33.1362f, 2.71232f);
        path.lineTo(32.1362f, 5.06232f);
        path.quadTo(28.9862f, 1.71232f, 26.5862f, 0.112321f);
        path.lineTo(25.7862f, -0.337679f);
        path.quadTo(23.0362f, -2.08768f, 19.1362f, -3.13768f);
        path.lineTo(18.6362f, -3.33768f);
        path.quadTo(14.8862f, -4.28768f, 11.8362f, -4.33768f);
        path.lineTo(11.5862f, -4.33768f);
        path.close();
    }

    private static void draw_33(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_33(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_34(Path path)
    {
        path.reset();
        path.moveTo(22.944f, 0.570747f);
        path.lineTo(22.894f, 0.0707474f);
        path.quadTo(22.944f, -0.229253f, 23.194f, -0.329253f);
        path.lineTo(23.694f, -0.429253f);
        path.quadTo(24.044f, -0.329253f, 24.144f, -0.129253f);
        path.lineTo(24.194f, 0.370747f);
        path.lineTo(23.944f, 0.770747f);
        path.lineTo(23.344f, 0.870747f);
        path.lineTo(22.944f, 0.570747f);
        path.close();
    }

    private static void draw_34(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_34(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_35(Path path)
    {
        path.reset();
        path.moveTo(-17.5219f, -43.7763f);
        path.lineTo(-18.4719f, -44.2763f);
        path.lineTo(-20.6219f, -44.6263f);
        path.quadTo(-22.6719f, -44.6263f, -23.9219f, -42.6763f);
        path.quadTo(-24.9219f, -41.1763f, -24.9719f, -39.3763f);
        path.lineTo(-24.9719f, -39.3263f);
        path.lineTo(-24.8719f, -39.3763f);
        path.lineTo(-24.4219f, -39.7263f);
        path.lineTo(-23.2719f, -40.0763f);
        path.lineTo(-19.9719f, -39.7263f);
        path.quadTo(-18.6719f, -39.7263f, -17.8219f, -40.4763f);
        path.quadTo(-17.0719f, -41.0763f, -16.9719f, -42.1263f);
        path.lineTo(-16.9719f, -42.4763f);
        path.lineTo(-17.0719f, -43.0763f);
        path.lineTo(-17.5219f, -43.7763f);
        path.close();
    }

    private static void draw_35(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_35(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_36(Path path)
    {
        path.reset();
        path.moveTo(-18.8347f, -44.0617f);
        path.quadTo(-21.6347f, -44.0617f, -23.2847f, -42.1617f);
        path.quadTo(-23.8847f, -41.5617f, -24.6847f, -39.7617f);
        path.lineTo(-24.6847f, -39.7117f);
        path.lineTo(-24.3847f, -40.1617f);
        path.quadTo(-23.7347f, -40.9117f, -22.5347f, -41.4617f);
        path.lineTo(-19.5847f, -42.1117f);
        path.quadTo(-17.4847f, -42.5117f, -17.0847f, -43.0617f);
        path.lineTo(-17.5347f, -43.7617f);
        path.lineTo(-18.8347f, -44.0617f);
        path.close();
        path.moveTo(-21.346f, -40.9226f);
        path.lineTo(-23.896f, -40.4226f);
        path.lineTo(-24.696f, -39.7226f);
        path.lineTo(-24.896f, -39.3726f);
        path.lineTo(-24.446f, -39.7226f);
        path.lineTo(-23.296f, -40.0726f);
        path.lineTo(-19.996f, -39.7226f);
        path.quadTo(-18.696f, -39.7226f, -17.846f, -40.4726f);
        path.quadTo(-17.096f, -41.0726f, -16.996f, -42.1226f);
        path.lineTo(-17.546f, -41.4726f);
        path.quadTo(-18.346f, -40.8226f, -19.846f, -40.8226f);
        path.lineTo(-21.346f, -40.9226f);
        path.close();
    }

    private static void draw_36(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_36(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_37(Path path)
    {
        path.reset();
        path.moveTo(23.7431f, -39.724f);
        path.lineTo(24.1931f, -39.374f);
        path.lineTo(24.3431f, -39.324f);
        path.lineTo(24.3431f, -39.374f);
        path.quadTo(24.2931f, -41.174f, 23.2431f, -42.674f);
        path.quadTo(21.9931f, -44.624f, 19.9431f, -44.624f);
        path.lineTo(17.8431f, -44.274f);
        path.lineTo(16.8431f, -43.774f);
        path.lineTo(16.3931f, -43.074f);
        path.lineTo(16.2931f, -42.474f);
        path.lineTo(16.2931f, -42.124f);
        path.quadTo(16.3931f, -41.074f, 17.1431f, -40.474f);
        path.quadTo(17.9931f, -39.724f, 19.2931f, -39.724f);
        path.lineTo(22.6431f, -40.074f);
        path.lineTo(23.7431f, -39.724f);
        path.close();
    }

    private static void draw_37(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_37(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_38(Path path)
    {
        path.reset();
        path.moveTo(23.7431f, -39.724f);
        path.lineTo(24.1931f, -39.374f);
        path.lineTo(23.9931f, -39.724f);
        path.lineTo(23.9931f, -39.774f);
        path.lineTo(22.6431f, -42.174f);
        path.quadTo(20.9431f, -44.074f, 18.1431f, -44.074f);
        path.lineTo(16.8431f, -43.774f);
        path.lineTo(16.3931f, -43.074f);
        path.quadTo(16.7931f, -42.524f, 18.8931f, -42.124f);
        path.lineTo(21.8931f, -41.474f);
        path.lineTo(23.6931f, -40.174f);
        path.lineTo(23.9931f, -39.724f);
        path.lineTo(23.1931f, -40.424f);
        path.lineTo(20.6931f, -40.924f);
        path.lineTo(19.1431f, -40.824f);
        path.quadTo(17.6431f, -40.824f, 16.8431f, -41.474f);
        path.lineTo(16.2931f, -42.124f);
        path.quadTo(16.3931f, -41.074f, 17.1431f, -40.474f);
        path.quadTo(17.9931f, -39.724f, 19.2931f, -39.724f);
        path.lineTo(22.6431f, -40.074f);
        path.lineTo(23.7431f, -39.724f);
        path.close();
    }

    private static void draw_38(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_38(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 377.3f, 349.05f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_39(Path path)
    {
        path.reset();
        path.moveTo(-4.9655f, -9.87393f);
        path.quadTo(-9.0155f, -8.77393f, -10.6655f, -2.37393f);
        path.quadTo(-12.0155f, 3.12607f, -10.9155f, 7.42607f);
        path.lineTo(-9.9155f, 9.77607f);
        path.lineTo(-10.2655f, 10.0761f);
        path.lineTo(-9.8155f, 9.97607f);
        path.lineTo(-3.9155f, 8.77607f);
        path.quadTo(0.884498f, 7.47607f, 6.7845f, 3.72607f);
        path.lineTo(10.9845f, 0.676071f);
        path.lineTo(11.3845f, 0.326071f);
        path.lineTo(10.5845f, 0.276071f);
        path.quadTo(7.3345f, -3.87393f, 4.2345f, -6.52393f);
        path.quadTo(-1.08442f, -10.9584f, -4.9655f, -9.87393f);
        path.close();
    }

    private static void draw_39(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_39(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 356.15f, 341.05f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_40(Path path)
    {
        path.reset();
        path.moveTo(-0.741972f, 5.1938f);
        path.lineTo(-0.691972f, 4.6938f);
        path.lineTo(-0.991972f, 4.2438f);
        path.lineTo(-1.49197f, 4.1938f);
        path.quadTo(-1.84197f, 4.2438f, -1.94197f, 4.4938f);
        path.lineTo(-1.99197f, 5.0438f);
        path.lineTo(-1.74197f, 5.4438f);
        path.lineTo(-1.14197f, 5.4938f);
        path.lineTo(-0.741972f, 5.1938f);
        path.close();
    }

    private static void draw_40(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_40(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 356.15f, 341.05f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_41(Path path)
    {
        path.reset();
        path.moveTo(-2.96789f, -0.399523f);
        path.quadTo(-4.16789f, 0.250477f, -4.16789f, 1.40048f);
        path.quadTo(-3.96789f, 3.45048f, -3.51789f, 4.20048f);
        path.lineTo(-3.56789f, 4.25048f);
        path.lineTo(-3.36789f, 4.55048f);
        path.lineTo(-2.11789f, 5.85048f);
        path.quadTo(-0.567886f, 6.95048f, 0.632114f, 6.60048f);
        path.quadTo(2.33211f, 6.15048f, 2.88211f, 4.40048f);
        path.quadTo(3.28211f, 3.25048f, 3.08211f, 1.90048f);
        path.lineTo(3.03211f, 1.45048f);
        path.quadTo(2.88211f, 0.600477f, 1.83211f, -0.0995228f);
        path.quadTo(0.582114f, -1.04952f, -0.917886f, -1.04952f);
        path.quadTo(-1.94054f, -1.02735f, -2.96789f, -0.399523f);
        path.close();
    }

    private static void draw_41(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_41(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 356.15f, 341.05f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_42(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_40(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 356.15f, 341.05f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_42(Path path)
    {
        path.reset();
        path.moveTo(-4.9655f, -9.87393f);
        path.quadTo(-9.0155f, -8.77393f, -10.6655f, -2.37393f);
        path.quadTo(-12.0155f, 3.12607f, -10.9155f, 7.42607f);
        path.lineTo(-9.9155f, 9.77607f);
        path.quadTo(-6.7655f, 6.37607f, -4.3655f, 4.82607f);
        path.lineTo(-3.5655f, 4.27607f);
        path.quadTo(-0.765501f, 2.57607f, 3.0345f, 1.47607f);
        path.lineTo(3.5345f, 1.32607f);
        path.quadTo(7.2845f, 0.326071f, 10.3345f, 0.276071f);
        path.lineTo(10.5845f, 0.276071f);
        path.quadTo(7.3345f, -3.87393f, 4.2345f, -6.52393f);
        path.quadTo(-1.08442f, -10.9584f, -4.9655f, -9.87393f);
        path.close();
    }

    private static void draw_43(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_42(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 356.15f, 341.05f));
        paint.setColor(Color.argb(255, 255, 204, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_43(Path path)
    {
        path.reset();
        path.moveTo(-32.3043f, -22.6016f);
        path.lineTo(-31.6043f, -26.7516f);
        path.lineTo(-28.5043f, -42.2016f);
        path.quadTo(-27.3543f, -53.1016f, -22.7543f, -65.2016f);
        path.quadTo(-14.5543f, -44.6516f, -11.1543f, 21.8484f);
        path.quadTo(-9.5543f, 53.8484f, -9.1543f, 87.1484f);
        path.lineTo(-9.1543f, 87.5984f);
        path.lineTo(-9.1543f, 88.1484f);
        path.lineTo(-10.8043f, 88.1484f);
        path.lineTo(-12.2543f, 88.1484f);
        path.lineTo(-12.8543f, 88.0984f);
        path.lineTo(-13.5543f, 88.3984f);
        path.quadTo(-17.6043f, 89.1984f, -19.8043f, 89.8984f);
        path.quadTo(-22.6043f, 90.8484f, -26.1543f, 92.6984f);
        path.lineTo(-28.7043f, 51.4984f);
        path.quadTo(-31.6194f, 1.19857f, -32.3043f, -22.6016f);
        path.close();
    }

    private static void draw_44(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_43(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_45(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_43(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(0, 0, 0, 0));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_44(Path path)
    {
        path.reset();
        path.moveTo(-8.73244f, -1.19857f);
        path.lineTo(-9.38243f, -0.498569f);
        path.lineTo(-9.73244f, 0.551431f);
        path.quadTo(-9.73244f, 2.00143f, -8.98244f, 2.55143f);
        path.lineTo(-8.18244f, 2.85143f);
        path.lineTo(-4.13243f, 2.50143f);
        path.lineTo(-4.13243f, 8.95143f);
        path.quadTo(-4.13243f, 13.1514f, -3.38243f, 15.4014f);
        path.lineTo(-3.08243f, 15.3514f);
        path.quadTo(-1.83243f, 14.9514f, -1.08243f, 13.9514f);
        path.lineTo(-0.382435f, 12.6014f);
        path.quadTo(-0.182435f, 14.5514f, 0.317565f, 15.4014f);
        path.quadTo(0.817565f, 16.1514f, 1.41757f, 16.1514f);
        path.lineTo(2.31757f, 15.6014f);
        path.quadTo(3.11757f, 14.5014f, 3.61757f, 10.9514f);
        path.lineTo(3.86757f, 6.25143f);
        path.lineTo(3.91757f, 10.9014f);
        path.quadTo(4.16757f, 13.9014f, 5.01757f, 14.7514f);
        path.lineTo(5.81757f, 15.0514f);
        path.lineTo(6.66757f, 14.7514f);
        path.quadTo(7.86757f, 13.8014f, 8.11757f, 9.65143f);
        path.lineTo(8.11757f, 3.50143f);
        path.lineTo(8.46757f, 3.50143f);
        path.lineTo(8.51757f, 9.15143f);
        path.lineTo(8.86757f, 11.2514f);
        path.lineTo(9.56757f, 12.6014f);
        path.lineTo(10.5176f, 13.7014f);
        path.lineTo(10.9676f, 12.6514f);
        path.quadTo(11.9676f, 9.70143f, 12.2176f, 2.20143f);
        path.lineTo(12.2676f, -13.5486f);
        path.lineTo(11.4676f, -15.8486f);
        path.quadTo(9.76757f, -18.7986f, 5.46757f, -18.7986f);
        path.quadTo(1.76757f, -18.7986f, -0.682434f, -16.4486f);
        path.quadTo(-3.33243f, -14.0986f, -3.38243f, -10.3986f);
        path.quadTo(-3.48243f, -5.54857f, -6.63243f, -2.94857f);
        path.lineTo(-8.73244f, -1.19857f);
        path.close();
        path.moveTo(-0.570747f, 9.64563f);
        path.lineTo(-0.370747f, 6.19563f);
        path.lineTo(-0.0707474f, 9.84563f);
        path.quadTo(-0.0207474f, 11.5456f, -0.370747f, 12.6956f);
        path.lineTo(-0.570747f, 9.64563f);
        path.close();
    }

    private static void draw_46(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_44(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 415.7f, 644.45f));
        paint.setColor(Color.argb(255, 255, 232, 208));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_45(Path path)
    {
        path.reset();
        path.moveTo(-8.21876f, -1.25564f);
        path.lineTo(-9.36876f, -0.455644f);
        path.lineTo(-10.4188f, 0.544356f);
        path.quadTo(-12.3188f, 2.29436f, -12.3188f, 3.39436f);
        path.quadTo(-12.3188f, 3.89436f, -11.7688f, 3.89436f);
        path.quadTo(-11.0188f, 3.89436f, -8.96876f, 2.59436f);
        path.lineTo(-8.76876f, 2.44436f);
        path.lineTo(-6.71876f, 0.944356f);
        path.lineTo(-8.21876f, -1.25564f);
        path.close();
        path.moveTo(2.39714f, 15.6956f);
        path.lineTo(2.39714f, 14.8956f);
        path.quadTo(2.39714f, 12.4956f, 1.94714f, 12.0456f);
        path.lineTo(0.647139f, 11.8456f);
        path.lineTo(0.647139f, 11.8956f);
        path.lineTo(0.347139f, 14.7956f);
        path.lineTo(0.397139f, 15.4956f);
        path.lineTo(0.647139f, 17.3956f);
        path.quadTo(0.947139f, 18.7456f, 1.29714f, 18.7456f);
        path.quadTo(2.22591f, 18.7205f, 2.39714f, 15.6956f);
        path.close();
        path.moveTo(-1.02735f, 15.5243f);
        path.lineTo(-1.07735f, 14.0243f);
        path.quadTo(-1.17735f, 11.0243f, -2.07735f, 11.0243f);
        path.lineTo(-3.02735f, 11.2243f);
        path.lineTo(-3.02735f, 11.3243f);
        path.lineTo(-3.07735f, 15.2743f);
        path.lineTo(-3.07735f, 15.4243f);
        path.quadTo(-2.92735f, 18.8243f, -1.87735f, 18.8243f);
        path.quadTo(-1.02735f, 18.8347f, -1.02735f, 15.5243f);
        path.close();
        path.moveTo(9.64563f, 12.6706f);
        path.lineTo(9.74563f, 13.3706f);
        path.quadTo(10.1456f, 15.9206f, 10.7956f, 15.9206f);
        path.lineTo(11.0456f, 15.8706f);
        path.lineTo(11.0456f, 12.6206f);
        path.lineTo(10.5956f, 10.8206f);
        path.lineTo(10.0456f, 10.8206f);
        path.lineTo(9.49563f, 11.1706f);
        path.quadTo(9.47441f, 11.9286f, 9.64563f, 12.6706f);
        path.close();
        path.moveTo(5.13673f, 12.0998f);
        path.lineTo(5.08673f, 13.1498f);
        path.lineTo(5.08673f, 14.2998f);
        path.lineTo(5.08673f, 14.8498f);
        path.lineTo(5.18673f, 15.8998f);
        path.quadTo(5.38673f, 17.9498f, 5.83673f, 17.9498f);
        path.quadTo(6.38673f, 17.9498f, 6.58673f, 17.4498f);
        path.lineTo(6.73673f, 15.4998f);
        path.lineTo(6.58673f, 11.9998f);
        path.lineTo(5.58673f, 11.9998f);
        path.lineTo(5.13673f, 12.0998f);
        path.close();
    }

    private static void draw_47(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_45(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 415.7f, 644.45f));
        paint.setColor(Color.argb(255, 102, 102, 153));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_46(Path path)
    {
        path.reset();
        path.moveTo(19.6908f, 56.6181f);
        path.quadTo(19.6908f, 52.1181f, 19.9908f, 49.3181f);
        path.lineTo(19.9908f, 49.0681f);
        path.lineTo(19.9908f, -3.73186f);
        path.lineTo(19.9908f, -5.68186f);
        path.quadTo(20.4908f, -24.9319f, 23.5908f, -37.8319f);
        path.lineTo(24.3408f, -40.7319f);
        path.quadTo(26.0908f, -47.2319f, 28.6908f, -52.1819f);
        path.lineTo(30.4908f, -55.1819f);
        path.lineTo(31.3408f, -57.7319f);
        path.lineTo(32.6408f, -60.8319f);
        path.quadTo(43.2408f, -47.5819f, 47.3408f, 25.6181f);
        path.lineTo(47.6908f, 32.4181f);
        path.lineTo(48.3908f, 48.5181f);
        path.lineTo(48.5408f, 50.6681f);
        path.lineTo(48.6908f, 55.8681f);
        path.lineTo(48.7408f, 58.1181f);
        path.lineTo(49.7908f, 70.9181f);
        path.lineTo(49.9908f, 78.9681f);
        path.lineTo(50.0908f, 84.5181f);
        path.lineTo(50.0908f, 86.6181f);
        path.lineTo(50.0908f, 86.9681f);
        path.lineTo(50.0908f, 87.0681f);
        path.lineTo(50.0908f, 87.4181f);
        path.lineTo(50.0908f, 88.1681f);
        path.lineTo(50.0908f, 88.2681f);
        path.lineTo(50.0908f, 88.4181f);
        path.lineTo(50.0908f, 88.5181f);
        path.lineTo(50.0908f, 89.3181f);
        path.lineTo(50.1908f, 93.2181f);
        path.lineTo(50.1908f, 94.8181f);
        path.lineTo(50.1908f, 95.8181f);
        path.lineTo(50.1908f, 95.8681f);
        path.lineTo(50.2408f, 96.2181f);
        path.lineTo(50.2408f, 97.0181f);
        path.lineTo(50.1908f, 97.0181f);
        path.lineTo(50.1908f, 97.1181f);
        path.lineTo(46.2908f, 97.3181f);
        path.lineTo(42.8908f, 97.7681f);
        path.lineTo(38.5408f, 98.8681f);
        path.quadTo(35.0658f, 99.7431f, 31.5908f, 100.618f);
        path.lineTo(30.7408f, 100.868f);
        path.lineTo(27.6408f, 101.668f);
        path.lineTo(24.4408f, 102.568f);
        path.lineTo(24.0408f, 100.518f);
        path.lineTo(23.4908f, 97.1681f);
        path.lineTo(23.1408f, 95.0681f);
        path.lineTo(22.5408f, 91.7181f);
        path.lineTo(22.3408f, 90.4681f);
        path.quadTo(19.6908f, 72.8681f, 19.6908f, 56.6181f);
        path.lineTo(19.6908f, 56.6181f);
        path.close();
    }

    private static void draw_48(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_46(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_49(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_46(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(0, 0, 0, 0));
        paint.setStrokeWidth(1.0f);
        paint.setStrokeCap(Paint.Cap.ROUND);
        paint.setStrokeJoin(Paint.Join.ROUND);
        paint.setStyle(Paint.Style.STROKE);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_47(Path path)
    {
        path.reset();
        path.moveTo(0.0570747f, -261.117f);
        path.lineTo(0.207075f, -261.067f);
        path.lineTo(0.207075f, -261.017f);
        path.lineTo(0.307075f, -260.917f);
        path.quadTo(1.45707f, -261.617f, 3.70707f, -262.467f);
        path.quadTo(7.20707f, -263.917f, 9.05707f, -263.917f);
        path.quadTo(21.6571f, -263.917f, 30.3571f, -244.317f);
        path.quadTo(36.5571f, -230.367f, 38.1571f, -212.617f);
        path.lineTo(38.5071f, -208.017f);
        path.quadTo(38.2571f, -191.017f, 32.0071f, -176.117f);
        path.quadTo(28.4071f, -167.617f, 17.6571f, -150.617f);
        path.quadTo(7.50707f, -134.467f, 3.35707f, -123.517f);
        path.quadTo(-3.09293f, -106.317f, -3.09293f, -85.717f);
        path.quadTo(-3.09293f, -76.017f, -2.04293f, -70.467f);
        path.quadTo(0.00707178f, -60.267f, 6.10707f, -53.317f);
        path.lineTo(6.60707f, -53.167f);
        path.lineTo(8.95707f, -53.067f);
        path.quadTo(10.9571f, -53.067f, 16.8071f, -54.767f);
        path.quadTo(9.50707f, -63.367f, 6.50707f, -73.217f);
        path.quadTo(3.95707f, -81.367f, 3.95707f, -93.467f);
        path.quadTo(3.95707f, -111.117f, 12.9571f, -127.017f);
        path.quadTo(15.2571f, -131.217f, 21.8571f, -141.217f);
        path.quadTo(28.1071f, -150.767f, 31.6571f, -157.217f);
        path.lineTo(32.8071f, -159.367f);
        path.lineTo(34.6071f, -163.067f);
        path.quadTo(38.6571f, -169.217f, 40.7571f, -172.967f);
        path.quadTo(44.9571f, -180.667f, 47.3071f, -189.867f);
        path.quadTo(45.7571f, -168.517f, 38.6571f, -146.667f);
        path.lineTo(32.4571f, -127.217f);
        path.lineTo(32.7571f, -127.117f);
        path.lineTo(31.5071f, -123.167f);
        path.lineTo(29.5571f, -116.267f);
        path.quadTo(25.3571f, -100.117f, 25.3571f, -85.7169f);
        path.quadTo(25.3571f, -76.9169f, 26.9571f, -68.9169f);
        path.quadTo(28.9071f, -59.1169f, 32.8571f, -53.9669f);
        path.lineTo(34.0571f, -53.9169f);
        path.lineTo(38.1571f, -54.5169f);
        path.lineTo(42.0071f, -55.9669f);
        path.lineTo(42.9571f, -56.5669f);
        path.lineTo(44.6071f, -57.5669f);
        path.quadTo(40.5071f, -61.6669f, 37.5571f, -68.2669f);
        path.lineTo(36.0071f, -72.0169f);
        path.quadTo(32.8571f, -80.4669f, 32.1571f, -88.7669f);
        path.lineTo(31.9571f, -93.6169f);
        path.quadTo(31.9571f, -112.867f, 35.4071f, -124.967f);
        path.quadTo(37.3071f, -131.567f, 45.9071f, -150.367f);
        path.lineTo(46.7071f, -152.167f);
        path.quadTo(53.1571f, -166.617f, 57.7071f, -180.767f);
        path.quadTo(60.3071f, -188.967f, 61.7571f, -195.417f);
        path.lineTo(62.3071f, -200.617f);
        path.lineTo(62.5571f, -211.817f);
        path.lineTo(62.5571f, -212.867f);
        path.lineTo(62.4571f, -216.517f);
        path.lineTo(61.2071f, -223.567f);
        path.quadTo(60.6571f, -249.417f, 46.0071f, -269.717f);
        path.quadTo(28.9571f, -293.267f, 2.45707f, -293.267f);
        path.lineTo(-0.142934f, -292.867f);
        path.lineTo(-2.14293f, -292.567f);
        path.lineTo(-2.24293f, -293.517f);
        path.lineTo(-2.24293f, -293.817f);
        path.lineTo(-4.49293f, -294.217f);
        path.lineTo(-9.09293f, -294.617f);
        path.quadTo(-37.6929f, -294.617f, -51.3929f, -265.267f);
        path.lineTo(-49.7429f, -267.217f);
        path.lineTo(-53.4929f, -260.017f);
        path.quadTo(-59.0929f, -247.017f, -58.9929f, -242.517f);
        path.quadTo(-58.9429f, -238.967f, -59.1929f, -232.417f);
        path.lineTo(-59.4929f, -226.217f);
        path.quadTo(-59.4929f, -213.417f, -58.2429f, -207.567f);
        path.lineTo(-56.1429f, -197.067f);
        path.quadTo(-55.9429f, -179.867f, -52.6429f, -157.467f);
        path.lineTo(-51.4929f, -150.267f);
        path.lineTo(-51.0929f, -147.767f);
        path.lineTo(-51.1429f, -147.517f);
        path.lineTo(-50.7429f, -143.767f);
        path.quadTo(-49.6429f, -133.767f, -49.6429f, -126.017f);
        path.quadTo(-49.6429f, -106.617f, -60.2929f, -84.9169f);
        path.lineTo(-67.6429f, -69.4169f);
        path.quadTo(-71.0429f, -61.0169f, -71.0429f, -53.7669f);
        path.lineTo(-70.4429f, -49.8669f);
        path.lineTo(-69.0429f, -49.2669f);
        path.quadTo(-65.3929f, -47.7169f, -61.8929f, -47.4169f);
        path.lineTo(-62.1929f, -50.5169f);
        path.quadTo(-62.1929f, -61.2169f, -53.3429f, -88.5169f);
        path.quadTo(-48.5429f, -103.217f, -46.3929f, -113.467f);
        path.quadTo(-44.4929f, -122.317f, -44.4929f, -127.817f);
        path.quadTo(-44.4929f, -139.867f, -45.4429f, -148.967f);
        path.lineTo(-45.6429f, -150.317f);
        path.lineTo(-45.7429f, -152.767f);
        path.lineTo(-45.7929f, -153.067f);
        path.quadTo(-47.8929f, -174.717f, -47.8929f, -183.067f);
        path.lineTo(-47.8429f, -187.417f);
        path.lineTo(-47.7429f, -190.867f);
        path.lineTo(-47.8429f, -196.117f);
        path.quadTo(-47.8429f, -217.967f, -44.5429f, -233.217f);
        path.quadTo(-42.2429f, -239.917f, -39.0429f, -245.767f);
        path.quadTo(-28.7429f, -264.517f, -12.7429f, -264.517f);
        path.quadTo(-9.09294f, -264.517f, -5.24294f, -263.467f);
        path.quadTo(-1.79294f, -262.517f, -0.142936f, -261.317f);
        path.lineTo(-0.0929356f, -261.267f);
        path.lineTo(-0.0929356f, -261.217f);
        path.lineTo(0.0570747f, -261.117f);
        path.close();
    }

    private static void draw_50(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_47(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 0, 0, 0));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_48(Path path)
    {
        path.reset();
        path.moveTo(0.970271f, -294.449f);
        path.lineTo(-1.72973f, -293.749f);
        path.lineTo(-2.22973f, -293.549f);
        path.lineTo(-1.02973f, -280.299f);
        path.quadTo(-2.72973f, -281.499f, -5.02973f, -282.749f);
        path.quadTo(-10.2797f, -285.549f, -14.3297f, -285.549f);
        path.quadTo(-29.7297f, -285.549f, -43.4797f, -273.649f);
        path.quadTo(-47.7297f, -269.849f, -51.3797f, -265.299f);
        path.lineTo(-52.0797f, -263.949f);
        path.quadTo(-57.0297f, -252.749f, -59.5797f, -238.549f);
        path.lineTo(-60.6797f, -231.749f);
        path.quadTo(-61.5297f, -225.699f, -61.9797f, -219.199f);
        path.lineTo(-62.0297f, -218.449f);
        path.quadTo(-62.5297f, -211.249f, -62.5297f, -203.449f);
        path.lineTo(-62.2297f, -193.799f);
        path.lineTo(-62.6797f, -186.949f);
        path.lineTo(-63.5797f, -177.749f);
        path.quadTo(-64.5797f, -162.649f, -67.8797f, -150.699f);
        path.lineTo(-67.9797f, -150.199f);
        path.lineTo(-69.4297f, -145.399f);
        path.quadTo(-73.7297f, -132.049f, -80.1297f, -121.999f);
        path.quadTo(-83.7797f, -116.249f, -93.3797f, -105.149f);
        path.quadTo(-101.03f, -96.2986f, -104.08f, -89.3986f);
        path.quadTo(-108.38f, -79.2986f, -108.38f, -63.9486f);
        path.quadTo(-108.38f, -57.5486f, -107.98f, -54.9486f);
        path.lineTo(-107.08f, -50.6486f);
        path.lineTo(-106.98f, -50.5986f);
        path.lineTo(-106.88f, -50.5486f);
        path.quadTo(-102.53f, -48.2986f, -95.0797f, -47.9486f);
        path.quadTo(-95.8297f, -51.4486f, -95.8297f, -54.7986f);
        path.quadTo(-95.8297f, -74.6986f, -85.7797f, -89.8486f);
        path.lineTo(-76.8297f, -101.699f);
        path.quadTo(-71.1297f, -108.749f, -68.4297f, -113.599f);
        path.quadTo(-62.0297f, -125.099f, -60.0297f, -146.699f);
        path.quadTo(-59.1297f, -156.399f, -58.8797f, -170.549f);
        path.lineTo(-58.7297f, -176.949f);
        path.quadTo(-57.2797f, -205.199f, -55.9297f, -218.699f);
        path.quadTo(-54.6797f, -242.499f, -47.3797f, -255.799f);
        path.lineTo(-47.1797f, -256.249f);
        path.quadTo(-36.5297f, -275.149f, -12.2297f, -275.149f);
        path.lineTo(-4.82974f, -274.849f);
        path.quadTo(-3.52974f, -274.499f, -0.929743f, -272.749f);
        path.lineTo(-0.879743f, -272.799f);
        path.lineTo(-0.579743f, -273.049f);
        path.lineTo(-0.679743f, -274.499f);
        path.lineTo(-1.02974f, -279.999f);
        path.lineTo(-0.729743f, -280.149f);
        path.quadTo(1.27026f, -281.399f, 3.37026f, -281.799f);
        path.lineTo(12.5703f, -282.099f);
        path.quadTo(36.5203f, -282.099f, 49.6703f, -258.049f);
        path.quadTo(58.2203f, -242.549f, 62.4703f, -216.549f);
        path.quadTo(61.5703f, -250.949f, 47.1203f, -272.349f);
        path.quadTo(32.0203f, -294.649f, 7.62026f, -294.649f);
        path.lineTo(0.970271f, -294.449f);
        path.close();
        path.moveTo(7.99046f, -268.08f);
        path.quadTo(22.4405f, -268.08f, 31.5405f, -254.23f);
        path.quadTo(35.7905f, -247.73f, 38.8905f, -238.08f);
        path.lineTo(39.4905f, -235.93f);
        path.lineTo(40.5405f, -232.18f);
        path.lineTo(40.4905f, -232.18f);
        path.lineTo(40.8905f, -230.43f);
        path.quadTo(44.5405f, -215.03f, 44.5405f, -204.03f);
        path.quadTo(44.5405f, -195.03f, 40.2405f, -178.43f);
        path.quadTo(35.5405f, -160.08f, 24.1905f, -126.63f);
        path.quadTo(22.6905f, -124.18f, 21.3405f, -121.28f);
        path.quadTo(18.8405f, -115.68f, 16.8905f, -108.98f);
        path.quadTo(10.8405f, -88.0801f, 10.8405f, -59.0801f);
        path.lineTo(10.9405f, -54.4301f);
        path.quadTo(11.9905f, -53.7801f, 13.4405f, -53.2801f);
        path.quadTo(17.3905f, -51.9301f, 24.5405f, -51.9301f);
        path.lineTo(27.7905f, -52.1301f);
        path.quadTo(24.5405f, -65.6801f, 24.5405f, -78.1801f);
        path.quadTo(24.5405f, -101.98f, 28.5405f, -121.48f);
        path.quadTo(31.3905f, -135.33f, 37.3905f, -150.93f);
        path.lineTo(44.2405f, -168.73f);
        path.lineTo(46.2405f, -174.33f);
        path.quadTo(50.2405f, -187.03f, 50.2405f, -199.48f);
        path.quadTo(50.2405f, -214.13f, 47.5405f, -227.58f);
        path.quadTo(45.7905f, -236.53f, 43.0905f, -243.73f);
        path.lineTo(42.2905f, -245.73f);
        path.quadTo(40.5405f, -249.93f, 38.5405f, -253.53f);
        path.quadTo(27.1405f, -274.38f, 9.44046f, -274.38f);
        path.lineTo(1.54046f, -274.08f);
        path.quadTo(0.240463f, -273.73f, -0.559537f, -273.03f);
        path.lineTo(-0.559537f, -272.73f);
        path.lineTo(-0.559537f, -272.48f);
        path.lineTo(-0.309537f, -267.28f);
        path.lineTo(1.29046f, -267.88f);
        path.lineTo(7.99046f, -268.08f);
        path.close();
        path.moveTo(-1.48394f, -266.311f);
        path.lineTo(-5.58394f, -267.461f);
        path.lineTo(-11.9339f, -268.761f);
        path.quadTo(-30.3839f, -268.761f, -39.4339f, -249.061f);
        path.quadTo(-41.4839f, -244.711f, -43.0339f, -239.411f);
        path.quadTo(-45.7339f, -230.211f, -46.8839f, -218.011f);
        path.lineTo(-47.5339f, -208.961f);
        path.lineTo(-47.7339f, -205.861f);
        path.lineTo(-47.9339f, -205.861f);
        path.quadTo(-48.7839f, -198.161f, -48.7839f, -191.461f);
        path.lineTo(-48.7339f, -189.461f);
        path.lineTo(-48.6339f, -186.911f);
        path.lineTo(-48.534f, -184.561f);
        path.quadTo(-48.084f, -175.761f, -46.534f, -159.561f);
        path.lineTo(-46.684f, -159.611f);
        path.lineTo(-45.384f, -148.561f);
        path.lineTo(-44.534f, -141.761f);
        path.lineTo(-44.334f, -140.311f);
        path.quadTo(-41.684f, -117.611f, -41.684f, -107.561f);
        path.quadTo(-41.684f, -101.361f, -42.334f, -95.9107f);
        path.quadTo(-42.884f, -92.0607f, -43.784f, -88.5607f);
        path.quadTo(-44.984f, -84.0107f, -48.534f, -75.5107f);
        path.quadTo(-51.884f, -67.4607f, -53.184f, -61.6107f);
        path.quadTo(-54.734f, -55.1607f, -55.134f, -47.2107f);
        path.lineTo(-54.384f, -46.8107f);
        path.quadTo(-52.184f, -45.7607f, -49.484f, -45.0107f);
        path.lineTo(-49.384f, -45.2107f);
        path.lineTo(-48.884f, -44.8607f);
        path.lineTo(-42.134f, -43.7107f);
        path.lineTo(-42.234f, -45.6607f);
        path.quadTo(-42.234f, -58.3607f, -37.384f, -73.5607f);
        path.quadTo(-34.934f, -81.3107f, -33.684f, -87.2607f);
        path.quadTo(-32.534f, -93.0107f, -32.534f, -97.0107f);
        path.quadTo(-32.534f, -104.011f, -36.684f, -127.511f);
        path.lineTo(-38.234f, -135.961f);
        path.quadTo(-43.934f, -166.611f, -43.934f, -178.611f);
        path.quadTo(-43.934f, -194.711f, -42.584f, -208.711f);
        path.quadTo(-41.234f, -223.011f, -38.534f, -233.161f);
        path.lineTo(-37.834f, -236.311f);
        path.quadTo(-36.834f, -241.011f, -35.334f, -245.011f);
        path.quadTo(-28.284f, -264.561f, -13.284f, -264.561f);
        path.quadTo(-9.58395f, -264.561f, -4.63396f, -263.011f);
        path.quadTo(-1.58396f, -262.061f, -0.133955f, -261.211f);
        path.lineTo(-0.333955f, -266.111f);
        path.lineTo(-1.48394f, -266.311f);
        path.close();
    }

    private static void draw_51(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_48(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 378.2f, 544.0f));
        paint.setColor(Color.argb(255, 51, 51, 51));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_49(Path path)
    {
        path.reset();
        path.moveTo(49.9973f, 0.0f);
        path.quadTo(49.9973f, -6.95f, 35.3473f, -11.85f);
        path.quadTo(20.6973f, -16.75f, 0.0472713f, -16.75f);
        path.quadTo(-20.6027f, -16.75f, -35.3027f, -11.85f);
        path.quadTo(-49.9027f, -6.95f, -49.9027f, -2.86102e-07f);
        path.quadTo(-49.9027f, 6.95f, -35.3027f, 11.85f);
        path.quadTo(-20.6027f, 16.75f, 0.047274f, 16.75f);
        path.quadTo(20.6973f, 16.75f, 35.3473f, 11.85f);
        path.quadTo(49.9973f, 6.95838f, 49.9973f, 0.0f);
        path.close();
    }

    private static void draw_52(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_49(path);
        canvas.concat(createMatrix(0.954268f, 0.0f, 0.0f, 0.885848f, 397.25f, 942.1f));
        paint.setColor(Color.argb(255, 73, 146, 146));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_50(Path path)
    {
        path.reset();
        path.moveTo(235.148f, -356.717f);
        path.lineTo(231.248f, -352.367f);
        path.quadTo(228.098f, -348.617f, 227.498f, -346.967f);
        path.quadTo(231.748f, -347.217f, 236.948f, -351.867f);
        path.quadTo(241.948f, -356.367f, 242.548f, -359.967f);
        path.quadTo(238.858f, -359.571f, 235.148f, -356.717f);
        path.close();
        path.moveTo(292.451f, -284.974f);
        path.lineTo(299.451f, -291.924f);
        path.lineTo(299.451f, -297.974f);
        path.lineTo(295.751f, -297.974f);
        path.lineTo(292.451f, -295.024f);
        path.lineTo(288.701f, -291.524f);
        path.quadTo(277.301f, -280.274f, 278.501f, -276.024f);
        path.quadTo(282.601f, -276.224f, 290.851f, -283.474f);
        path.lineTo(292.451f, -284.974f);
        path.close();
        path.moveTo(55.1342f, -249.131f);
        path.quadTo(61.2342f, -253.381f, 62.4342f, -258.881f);
        path.quadTo(61.8342f, -258.881f, 61.5342f, -259.431f);
        path.lineTo(61.4342f, -259.931f);
        path.quadTo(56.6342f, -259.681f, 50.2342f, -253.131f);
        path.quadTo(45.7342f, -248.531f, 44.2342f, -244.181f);
        path.quadTo(50.2828f, -245.764f, 55.1342f, -249.131f);
        path.close();
        path.moveTo(146.454f, -307.005f);
        path.quadTo(152.354f, -308.005f, 157.154f, -310.705f);
        path.quadTo(163.554f, -314.305f, 163.404f, -318.905f);
        path.quadTo(157.854f, -319.905f, 150.104f, -312.155f);
        path.lineTo(146.354f, -308.055f);
        path.quadTo(146.283f, -307.462f, 146.454f, -307.005f);
        path.close();
        path.moveTo(162.149f, -179.671f);
        path.quadTo(156.499f, -173.821f, 154.599f, -170.171f);
        path.lineTo(154.549f, -169.971f);
        path.lineTo(155.649f, -169.471f);
        path.quadTo(156.499f, -168.921f, 157.999f, -168.921f);
        path.quadTo(159.449f, -168.921f, 163.249f, -170.821f);
        path.quadTo(167.549f, -172.921f, 171.549f, -175.821f);
        path.quadTo(182.549f, -184.021f, 182.549f, -192.071f);
        path.quadTo(182.549f, -193.521f, 182.049f, -194.121f);
        path.quadTo(181.499f, -194.671f, 181.499f, -194.921f);
        path.quadTo(175.949f, -193.271f, 164.899f, -182.471f);
        path.lineTo(162.149f, -179.671f);
        path.close();
        path.moveTo(9.18903f, -165.973f);
        path.lineTo(9.18903f, -167.923f);
        path.lineTo(4.18903f, -167.923f);
        path.quadTo(3.53903f, -167.273f, -0.110968f, -165.973f);
        path.lineTo(-1.81097f, -163.823f);
        path.lineTo(-7.71097f, -155.973f);
        path.lineTo(-7.71097f, -153.923f);
        path.quadTo(-3.26097f, -154.773f, 2.48903f, -159.973f);
        path.lineTo(9.18903f, -165.973f);
        path.close();
        path.moveTo(37.4981f, -59.1865f);
        path.quadTo(45.0981f, -65.5365f, 44.2481f, -70.9365f);
        path.quadTo(39.9981f, -70.4365f, 31.8481f, -61.1865f);
        path.quadTo(27.3981f, -56.1865f, 25.2481f, -52.6365f);
        path.lineTo(25.2481f, -50.9365f);
        path.quadTo(34.5873f, -56.7323f, 37.4981f, -59.1865f);
        path.close();
        path.moveTo(165.403f, -62.611f);
        path.lineTo(164.403f, -62.961f);
        path.quadTo(162.253f, -62.461f, 156.803f, -57.161f);
        path.lineTo(152.753f, -53.011f);
        path.quadTo(157.353f, -53.461f, 160.053f, -55.061f);
        path.quadTo(164.204f, -57.4743f, 165.403f, -62.611f);
        path.close();
        path.moveTo(205.012f, -6.39237f);
        path.lineTo(204.462f, -5.04237f);
        path.quadTo(208.412f, -4.94237f, 217.662f, -11.3424f);
        path.quadTo(226.862f, -17.7924f, 227.462f, -21.6924f);
        path.lineTo(226.462f, -21.9924f);
        path.quadTo(223.562f, -21.2924f, 214.312f, -14.4424f);
        path.quadTo(207.638f, -9.47441f, 205.012f, -6.39237f);
        path.close();
        path.moveTo(5.1938f, 269.05f);
        path.lineTo(3.2938f, 269.05f);
        path.quadTo(-2.4562f, 272.3f, -8.0562f, 280.65f);
        path.quadTo(-11.1562f, 285.4f, -12.7062f, 289.0f);
        path.lineTo(-12.6562f, 289.05f);
        path.quadTo(-4.8062f, 284.65f, -1.4562f, 281.3f);
        path.quadTo(2.96789f, 276.755f, 5.1938f, 269.05f);
        path.close();
        path.moveTo(-82.8154f, -297.987f);
        path.quadTo(-77.9654f, -298.437f, -74.0154f, -301.687f);
        path.quadTo(-69.9654f, -305.087f, -68.8154f, -309.937f);
        path.lineTo(-70.3154f, -310.437f);
        path.lineTo(-72.9154f, -310.937f);
        path.quadTo(-74.8154f, -310.937f, -77.2654f, -308.637f);
        path.quadTo(-79.7654f, -306.287f, -82.8154f, -301.587f);
        path.lineTo(-82.8154f, -297.987f);
        path.close();
        path.moveTo(-218.882f, -161.921f);
        path.lineTo(-221.532f, -160.971f);
        path.lineTo(-223.432f, -159.021f);
        path.quadTo(-227.482f, -154.521f, -226.632f, -152.921f);
        path.lineTo(-221.682f, -152.921f);
        path.quadTo(-219.782f, -154.721f, -214.682f, -158.321f);
        path.quadTo(-209.932f, -161.621f, -208.682f, -163.071f);
        path.lineTo(-208.682f, -164.921f);
        path.lineTo(-214.632f, -164.921f);
        path.quadTo(-215.857f, -162.948f, -218.882f, -161.921f);
        path.close();
        path.moveTo(-34.4161f, -122.254f);
        path.quadTo(-35.0161f, -120.004f, -34.7161f, -119.004f);
        path.quadTo(-33.0161f, -119.154f, -28.1161f, -124.404f);
        path.quadTo(-23.2161f, -129.654f, -22.7661f, -131.954f);
        path.lineTo(-27.7661f, -131.954f);
        path.quadTo(-29.2661f, -128.954f, -32.7161f, -124.754f);
        path.lineTo(-34.1661f, -122.904f);
        path.lineTo(-34.4161f, -122.254f);
        path.close();
        path.moveTo(-157.869f, -113.008f);
        path.lineTo(-165.269f, -106.108f);
        path.lineTo(-169.469f, -101.958f);
        path.lineTo(-170.019f, -101.358f);
        path.lineTo(-170.719f, -99.358f);
        path.lineTo(-169.769f, -99.008f);
        path.quadTo(-167.669f, -100.858f, -162.919f, -103.858f);
        path.quadTo(-159.169f, -106.258f, -157.869f, -108.008f);
        path.lineTo(-157.869f, -113.008f);
        path.close();
        path.moveTo(-95.7714f, -5.13673f);
        path.lineTo(-94.8214f, -5.03673f);
        path.lineTo(-82.2214f, -14.2367f);
        path.quadTo(-72.1714f, -21.5367f, -68.8214f, -27.9867f);
        path.lineTo(-68.8214f, -32.9867f);
        path.lineTo(-70.7714f, -32.9867f);
        path.lineTo(-85.5714f, -18.7867f);
        path.lineTo(-94.2714f, -9.73672f);
        path.quadTo(-95.5431f, -7.30557f, -95.7714f, -5.13673f);
        path.close();
        path.moveTo(-45.2032f, 72.0283f);
        path.quadTo(-41.6032f, 71.6283f, -35.3532f, 67.4283f);
        path.quadTo(-27.7032f, 62.2783f, -27.7032f, 57.5283f);
        path.lineTo(-27.7032f, 55.0783f);
        path.quadTo(-31.9532f, 55.3783f, -38.6532f, 63.0783f);
        path.quadTo(-43.4339f, 68.5468f, -45.2032f, 72.0283f);
        path.close();
        path.moveTo(-116.775f, 194.111f);
        path.quadTo(-121.975f, 193.911f, -130.575f, 205.861f);
        path.quadTo(-133.625f, 210.061f, -135.775f, 213.561f);
        path.lineTo(-135.775f, 216.061f);
        path.quadTo(-130.025f, 214.011f, -124.075f, 207.261f);
        path.quadTo(-118.088f, 200.389f, -116.775f, 194.111f);
        path.close();
        path.moveTo(-8.96073f, 209.75f);
        path.lineTo(-9.91073f, 211.1f);
        path.lineTo(-12.8107f, 214.7f);
        path.quadTo(-15.1607f, 217.35f, -15.7607f, 219.1f);
        path.quadTo(-9.61073f, 219.55f, -4.66073f, 214.45f);
        path.quadTo(-1.66073f, 211.35f, 3.23927f, 203.05f);
        path.quadTo(-2.34006f, 203.471f, -8.96073f, 209.75f);
        path.close();
        path.moveTo(-254.782f, 87.039f);
        path.lineTo(-248.832f, 87.039f);
        path.lineTo(-240.282f, 79.689f);
        path.quadTo(-236.432f, 75.889f, -232.832f, 70.089f);
        path.lineTo(-240.782f, 70.089f);
        path.lineTo(-243.532f, 71.539f);
        path.lineTo(-248.982f, 77.689f);
        path.quadTo(-254.553f, 83.9569f, -254.782f, 87.039f);
        path.close();
    }

    private static void draw_53(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_50(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 321.05f, 570.65f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void def_path_51(Path path)
    {
        path.reset();
        path.moveTo(276.584f, -119.001f);
        path.lineTo(271.134f, -114.101f);
        path.lineTo(270.784f, -113.851f);
        path.lineTo(268.434f, -110.401f);
        path.quadTo(266.784f, -108.151f, 266.484f, -105.951f);
        path.quadTo(267.584f, -105.751f, 271.934f, -108.251f);
        path.quadTo(276.834f, -111.101f, 278.534f, -114.051f);
        path.lineTo(278.534f, -119.001f);
        path.lineTo(276.584f, -119.001f);
        path.close();
    }

    private static void draw_54(Canvas canvas, Path path, Paint paint)
    {
        canvas.save();
        def_path_51(path);
        canvas.concat(createMatrix(1.0f, 0.0f, 0.0f, 1.0f, 321.05f, 570.65f));
        paint.setColor(Color.argb(255, 255, 255, 255));
        paint.setStyle(Paint.Style.FILL);
        canvas.drawPath(path, paint);
        canvas.restore();
    }

    private static void draw_main(Canvas canvas, Path path, Paint paint)
    {
        draw_0(canvas, path, paint);
        draw_1(canvas, path, paint);
        draw_2(canvas, path, paint);
        {
            canvas.save();
            canvas.concat(createMatrix(0.995631f, 0.0837349f, -0.0837349f, 0.995631f, 343.5f, 649.7f));
            draw_shape_3(canvas, path, paint);
            canvas.restore();
        }
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
        {
            canvas.save();
            canvas.concat(createMatrix(0.991913f, 0.122025f, -0.122025f, 0.991913f, 396.05f, 659.75f));
            draw_shape_3(canvas, path, paint);
            canvas.restore();
        }
        draw_46(canvas, path, paint);
        draw_47(canvas, path, paint);
        draw_48(canvas, path, paint);
        draw_49(canvas, path, paint);
        draw_50(canvas, path, paint);
        draw_51(canvas, path, paint);
        draw_52(canvas, path, paint);
        draw_53(canvas, path, paint);
        draw_54(canvas, path, paint);
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
