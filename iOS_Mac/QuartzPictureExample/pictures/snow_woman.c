
#include <CoreGraphics/CoreGraphics.h>

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct
{
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

// MARK: g_picture_snow_woman
static void draw_main(CGContextRef ctx);
VKQuartzPicture g_picture_snow_woman = {
    { 0.15, 62.45, 768.2, 960.2 },
    draw_main,
};

/////////////////////////
static void def_path_0(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 768.35, 62.45);
    CGContextAddLineToPoint(ctx, 0.149976, 62.45);
    CGContextAddLineToPoint(ctx, 0.149976, 1022.65);
    CGContextAddLineToPoint(ctx, 768.35, 1022.65);
    CGContextAddLineToPoint(ctx, 768.35, 62.45);
    CGContextClosePath(ctx);
}

static void def_path_1(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 32.5326, -216.599);
    CGContextAddLineToPoint(ctx, 28.5326, -218.199);
    CGContextAddQuadCurveToPoint(ctx, 22.9326, -220.349, 17.8826, -221.549);
    CGContextAddQuadCurveToPoint(ctx, 11.9326, -222.999, 6.7326, -223.199);
    CGContextAddLineToPoint(ctx, 4.9826, -223.249);
    CGContextAddQuadCurveToPoint(ctx, -0.717399, -223.249, -8.8674, -221.649);
    CGContextAddLineToPoint(ctx, -19.6674, -219.149);
    CGContextAddLineToPoint(ctx, -26.0674, -217.349);
    CGContextAddLineToPoint(ctx, -31.7174, -215.599);
    CGContextAddLineToPoint(ctx, -43.8174, -211.449);
    CGContextAddQuadCurveToPoint(ctx, -45.8174, -197.799, -46.2174, -178.349);
    CGContextAddLineToPoint(ctx, -47.2174, -138.699);
    CGContextAddQuadCurveToPoint(ctx, -47.6174, -132.299, -46.7674, -118.749);
    CGContextAddQuadCurveToPoint(ctx, -45.9674, -106.599, -46.9674, -99.0486);
    CGContextAddQuadCurveToPoint(ctx, -48.9174, -84.3986, -59.3674, -66.4986);
    CGContextAddLineToPoint(ctx, -59.3674, -64.7986);
    CGContextAddQuadCurveToPoint(ctx, -55.9174, -62.2486, -50.9174, -59.6486);
    CGContextAddQuadCurveToPoint(ctx, -47.0174, -57.7486, -33.0674, -51.9486);
    CGContextAddQuadCurveToPoint(ctx, -18.3174, -45.7986, -10.2674, -43.6986);
    CGContextAddLineToPoint(ctx, -7.7174, -42.9986);
    CGContextAddLineToPoint(ctx, 2.9826, -40.9486);
    CGContextAddQuadCurveToPoint(ctx, 6.3826, -48.2486, 6.8326, -50.2486);
    CGContextAddLineToPoint(ctx, 9.5826, -62.4486);
    CGContextAddQuadCurveToPoint(ctx, 10.9826, -68.6986, 12.5826, -73.6486);
    CGContextAddLineToPoint(ctx, 18.9326, -95.1486);
    CGContextAddLineToPoint(ctx, 24.5326, -116.449);
    CGContextAddQuadCurveToPoint(ctx, 26.4326, -124.099, 35.6326, -154.049);
    CGContextAddQuadCurveToPoint(ctx, 40.9326, -172.599, 42.8826, -184.849);
    CGContextAddQuadCurveToPoint(ctx, 44.5326, -193.799, 44.5326, -201.499);
    CGContextAddLineToPoint(ctx, 44.5326, -202.699);
    CGContextAddLineToPoint(ctx, 44.2826, -205.649);
    CGContextAddLineToPoint(ctx, 43.8326, -211.099);
    CGContextAddLineToPoint(ctx, 43.2826, -211.349);
    CGContextAddLineToPoint(ctx, 32.5326, -216.599);
    CGContextClosePath(ctx);
}

static void def_path_2(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 44.29, -205.64);
    CGContextAddLineToPoint(ctx, 43.84, -211.09);
    CGContextAddLineToPoint(ctx, 43.29, -211.34);
    CGContextAddLineToPoint(ctx, 34.09, -215.89);
    CGContextAddQuadCurveToPoint(ctx, 28.89, -178.54, 20.79, -141.39);
    CGContextAddLineToPoint(ctx, 20.49, -140.09);
    CGContextAddLineToPoint(ctx, 17.09, -124.94);
    CGContextAddLineToPoint(ctx, 15.94, -120.19);
    CGContextAddLineToPoint(ctx, 15.39, -117.94);
    CGContextAddLineToPoint(ctx, 12.29, -105.44);
    CGContextAddLineToPoint(ctx, 4.89, -78.1903);
    CGContextAddQuadCurveToPoint(ctx, -0.160004, -60.3903, -5.91, -42.5903);
    CGContextAddLineToPoint(ctx, 2.99, -40.9403);
    CGContextAddQuadCurveToPoint(ctx, 6.39, -48.2403, 6.84, -50.2403);
    CGContextAddLineToPoint(ctx, 9.59, -62.4403);
    CGContextAddQuadCurveToPoint(ctx, 10.99, -68.6903, 12.59, -73.6403);
    CGContextAddLineToPoint(ctx, 18.94, -95.1403);
    CGContextAddLineToPoint(ctx, 24.54, -116.44);
    CGContextAddQuadCurveToPoint(ctx, 26.19, -123.09, 33.29, -146.29);
    CGContextAddLineToPoint(ctx, 35.64, -154.04);
    CGContextAddQuadCurveToPoint(ctx, 40.94, -172.59, 42.89, -184.84);
    CGContextAddQuadCurveToPoint(ctx, 44.54, -193.79, 44.54, -201.49);
    CGContextAddLineToPoint(ctx, 44.54, -202.69);
    CGContextAddLineToPoint(ctx, 44.29, -205.64);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 19.8049, -207.752);
    CGContextAddQuadCurveToPoint(ctx, 20.8549, -215.652, 21.6549, -220.452);
    CGContextAddLineToPoint(ctx, 17.8549, -221.502);
    CGContextAddQuadCurveToPoint(ctx, 12.7549, -222.752, 8.25493, -223.002);
    CGContextAddQuadCurveToPoint(ctx, 4.20493, -210.452, 0.604932, -184.652);
    CGContextAddQuadCurveToPoint(ctx, -4.04507, -145.952, -7.09507, -127.152);
    CGContextAddLineToPoint(ctx, -7.94507, -122.102);
    CGContextAddLineToPoint(ctx, -8.39507, -119.452);
    CGContextAddQuadCurveToPoint(ctx, -10.5951, -108.702, -15.7451, -89.052);
    CGContextAddLineToPoint(ctx, -17.9951, -80.602);
    CGContextAddLineToPoint(ctx, -21.9451, -66.352);
    CGContextAddLineToPoint(ctx, -23.5451, -60.452);
    CGContextAddLineToPoint(ctx, -25.1951, -54.552);
    CGContextAddLineToPoint(ctx, -26.6951, -49.302);
    CGContextAddQuadCurveToPoint(ctx, -21.2951, -47.202, -17.0451, -45.702);
    CGContextAddLineToPoint(ctx, -7.29507, -74.852);
    CGContextAddLineToPoint(ctx, -3.64507, -86.902);
    CGContextAddLineToPoint(ctx, -2.14507, -92.302);
    CGContextAddLineToPoint(ctx, 0.354931, -102.202);
    CGContextAddLineToPoint(ctx, 2.10493, -109.552);
    CGContextAddQuadCurveToPoint(ctx, 4.55493, -121.202, 5.05493, -129.352);
    CGContextAddLineToPoint(ctx, 5.10493, -130.702);
    CGContextAddLineToPoint(ctx, 5.35493, -133.952);
    CGContextAddQuadCurveToPoint(ctx, 6.30493, -143.852, 10.7549, -161.452);
    CGContextAddLineToPoint(ctx, 17.1049, -187.752);
    CGContextAddLineToPoint(ctx, 19.8049, -207.752);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -6.107, -222.135);
    CGContextAddLineToPoint(ctx, -8.907, -221.635);
    CGContextAddLineToPoint(ctx, -19.707, -219.135);
    CGContextAddLineToPoint(ctx, -22.257, -218.435);
    CGContextAddQuadCurveToPoint(ctx, -25.907, -201.635, -27.207, -181.035);
    CGContextAddLineToPoint(ctx, -28.857, -133.585);
    CGContextAddQuadCurveToPoint(ctx, -29.257, -122.935, -30.007, -113.285);
    CGContextAddLineToPoint(ctx, -30.957, -102.835);
    CGContextAddQuadCurveToPoint(ctx, -32.207, -91.7349, -34.007, -81.9849);
    CGContextAddQuadCurveToPoint(ctx, -36.157, -70.1349, -39.357, -58.5349);
    CGContextAddLineToPoint(ctx, -40.357, -54.9849);
    CGContextAddLineToPoint(ctx, -40.057, -54.7849);
    CGContextAddLineToPoint(ctx, -33.657, -52.1849);
    CGContextAddQuadCurveToPoint(ctx, -32.057, -58.6849, -30.407, -66.1349);
    CGContextAddLineToPoint(ctx, -29.057, -72.0849);
    CGContextAddLineToPoint(ctx, -28.307, -75.5849);
    CGContextAddQuadCurveToPoint(ctx, -23.957, -95.6349, -21.507, -109.885);
    CGContextAddLineToPoint(ctx, -19.957, -119.585);
    CGContextAddQuadCurveToPoint(ctx, -19.207, -125.185, -18.807, -129.585);
    CGContextAddLineToPoint(ctx, -14.357, -182.085);
    CGContextAddQuadCurveToPoint(ctx, -11.7003, -205.469, -6.107, -222.135);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -32.5897, -215.286);
    CGContextAddQuadCurveToPoint(ctx, -38.9397, -213.336, -43.8897, -211.436);
    CGContextAddQuadCurveToPoint(ctx, -45.8897, -197.786, -46.2897, -178.336);
    CGContextAddLineToPoint(ctx, -47.2897, -138.686);
    CGContextAddQuadCurveToPoint(ctx, -47.6897, -132.286, -46.8397, -118.736);
    CGContextAddQuadCurveToPoint(ctx, -46.1897, -109.036, -46.6897, -102.236);
    CGContextAddLineToPoint(ctx, -47.0397, -99.0359);
    CGContextAddQuadCurveToPoint(ctx, -47.6897, -94.5359, -49.0397, -89.686);
    CGContextAddQuadCurveToPoint(ctx, -52.1897, -78.8859, -59.4397, -66.4859);
    CGContextAddLineToPoint(ctx, -59.4397, -64.7859);
    CGContextAddQuadCurveToPoint(ctx, -55.9897, -62.236, -50.9897, -59.636);
    CGContextAddLineToPoint(ctx, -48.7897, -58.636);
    CGContextAddQuadCurveToPoint(ctx, -41.1897, -75.936, -38.1397, -93.736);
    CGContextAddLineToPoint(ctx, -37.4397, -98.136);
    CGContextAddLineToPoint(ctx, -36.1897, -109.286);
    CGContextAddLineToPoint(ctx, -35.5397, -121.636);
    CGContextAddLineToPoint(ctx, -35.3897, -148.986);
    CGContextAddLineToPoint(ctx, -36.5397, -175.236);
    CGContextAddQuadCurveToPoint(ctx, -36.5397, -183.686, -34.5897, -200.286);
    CGContextAddLineToPoint(ctx, -32.5897, -215.286);
    CGContextClosePath(ctx);
}

static void def_path_3(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -14.6038, 15.1173);
    CGContextAddLineToPoint(ctx, -14.5038, 15.5173);
    CGContextAddLineToPoint(ctx, -14.5038, 15.8173);
    CGContextAddLineToPoint(ctx, -14.3538, 15.7173);
    CGContextAddLineToPoint(ctx, -11.8538, 14.6673);
    CGContextAddQuadCurveToPoint(ctx, -8.95385, 13.3173, -5.75385, 11.2673);
    CGContextAddLineToPoint(ctx, 2.19615, 5.91726);
    CGContextAddQuadCurveToPoint(ctx, 7.49615, 2.16726, 8.69615, 0.617263);
    CGContextAddQuadCurveToPoint(ctx, 10.7462, -2.08274, 11.8462, -4.33274);
    CGContextAddQuadCurveToPoint(ctx, 12.6962, -6.23274, 13.3962, -9.03274);
    CGContextAddLineToPoint(ctx, 14.4962, -14.0327);
    CGContextAddLineToPoint(ctx, 14.6462, -15.5327);
    CGContextAddLineToPoint(ctx, 14.1962, -15.6327);
    CGContextAddLineToPoint(ctx, 13.4962, -15.6827);
    CGContextAddLineToPoint(ctx, 13.3962, -15.6827);
    CGContextAddQuadCurveToPoint(ctx, 0.0961515, -14.8327, -8.15385, -2.83274);
    CGContextAddQuadCurveToPoint(ctx, -11.2538, 1.71726, -13.0538, 7.11726);
    CGContextAddQuadCurveToPoint(ctx, -14.6038, 11.7515, -14.6038, 15.1173);
    CGContextClosePath(ctx);
}

static void def_path_4(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 14.2045, -15.6877);
    CGContextAddQuadCurveToPoint(ctx, 12.8545, -22.4877, 10.1545, -32.0877);
    CGContextAddQuadCurveToPoint(ctx, 5.90452, -46.7877, 5.40452, -59.3377);
    CGContextAddQuadCurveToPoint(ctx, 4.95452, -69.9877, 4.80452, -99.8377);
    CGContextAddQuadCurveToPoint(ctx, 4.65452, -112.038, 3.45452, -120.438);
    CGContextAddQuadCurveToPoint(ctx, 1.35452, -134.638, -3.39548, -134.638);
    CGContextAddQuadCurveToPoint(ctx, -5.39548, -134.638, -7.04548, -131.238);
    CGContextAddQuadCurveToPoint(ctx, -8.09548, -129.188, -8.34548, -127.338);
    CGContextAddLineToPoint(ctx, -8.39548, -125.788);
    CGContextAddLineToPoint(ctx, -8.59548, -115.588);
    CGContextAddQuadCurveToPoint(ctx, -8.99548, -99.1377, -12.2455, -82.7377);
    CGContextAddLineToPoint(ctx, -18.8955, -48.1377);
    CGContextAddQuadCurveToPoint(ctx, -22.1955, -29.6877, -22.1955, -22.6377);
    CGContextAddQuadCurveToPoint(ctx, -22.1955, -5.73773, -19.8955, 3.41227);
    CGContextAddQuadCurveToPoint(ctx, -18.0955, 10.3123, -14.7455, 15.1623);
    CGContextAddLineToPoint(ctx, -14.5955, 15.0623);
    CGContextAddQuadCurveToPoint(ctx, -14.5955, 11.7123, -13.0455, 7.06227);
    CGContextAddQuadCurveToPoint(ctx, -11.2455, 1.66227, -8.14548, -2.88773);
    CGContextAddQuadCurveToPoint(ctx, 0.104525, -14.8877, 13.4045, -15.7377);
    CGContextAddLineToPoint(ctx, 13.5045, -15.7377);
    CGContextAddLineToPoint(ctx, 14.2045, -15.6877);
    CGContextClosePath(ctx);
}

static void draw_shape_3(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.286275, 0.572549, 0.572549, 1);
    def_path_3(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_4(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

}

static void def_path_5(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.856121, -16.3234);
    CGContextAddQuadCurveToPoint(ctx, -1.64388, -18.6234, -5.34388, -18.6234);
    CGContextAddQuadCurveToPoint(ctx, -9.59388, -18.6234, -11.2939, -15.6234);
    CGContextAddLineToPoint(ctx, -12.1439, -13.4234);
    CGContextAddLineToPoint(ctx, -12.0439, -10.7234);
    CGContextAddLineToPoint(ctx, -11.9939, 2.32662);
    CGContextAddQuadCurveToPoint(ctx, -11.7939, 11.3766, -10.3439, 13.8266);
    CGContextAddQuadCurveToPoint(ctx, -8.59388, 12.3266, -8.29388, 9.32662);
    CGContextAddLineToPoint(ctx, -8.29388, 3.67662);
    CGContextAddLineToPoint(ctx, -7.94388, 3.67662);
    CGContextAddLineToPoint(ctx, -7.94388, 9.82662);
    CGContextAddQuadCurveToPoint(ctx, -7.59388, 15.2266, -5.69388, 15.2266);
    CGContextAddQuadCurveToPoint(ctx, -4.09388, 15.2266, -3.79388, 11.0266);
    CGContextAddLineToPoint(ctx, -3.74388, 6.37662);
    CGContextAddLineToPoint(ctx, -3.44388, 11.0766);
    CGContextAddQuadCurveToPoint(ctx, -2.84388, 16.2766, -1.29388, 16.2766);
    CGContextAddQuadCurveToPoint(ctx, 0.156121, 16.2766, 0.606121, 12.7766);
    CGContextAddQuadCurveToPoint(ctx, 0.206121, 11.5766, 0.206121, 9.87663);
    CGContextAddLineToPoint(ctx, 0.606121, 6.27663);
    CGContextAddLineToPoint(ctx, 0.756121, 9.72663);
    CGContextAddLineToPoint(ctx, 0.606121, 12.7766);
    CGContextAddQuadCurveToPoint(ctx, 1.30612, 15.0266, 3.55612, 15.5766);
    CGContextAddQuadCurveToPoint(ctx, 4.30612, 13.3266, 4.30612, 9.07663);
    CGContextAddLineToPoint(ctx, 4.25612, 2.62663);
    CGContextAddLineToPoint(ctx, 8.30612, 2.97663);
    CGContextAddQuadCurveToPoint(ctx, 9.85612, 2.72663, 9.85612, 0.676626);
    CGContextAddQuadCurveToPoint(ctx, 9.85612, -0.173374, 8.90612, -1.07337);
    CGContextAddQuadCurveToPoint(ctx, 7.50612, -2.07337, 6.75612, -2.77337);
    CGContextAddQuadCurveToPoint(ctx, 3.65612, -5.42337, 3.55612, -10.2234);
    CGContextAddLineToPoint(ctx, 3.55612, -10.7234);
    CGContextAddQuadCurveToPoint(ctx, 3.31033, -14.1545, 0.856121, -16.3234);
    CGContextClosePath(ctx);
}

static void def_path_6(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 8.04754, -1.48394);
    CGContextAddLineToPoint(ctx, 6.64754, 0.666057);
    CGContextAddLineToPoint(ctx, 8.64754, 2.16606);
    CGContextAddLineToPoint(ctx, 8.79754, 2.31606);
    CGContextAddQuadCurveToPoint(ctx, 10.8475, 3.66606, 11.5975, 3.66606);
    CGContextAddQuadCurveToPoint(ctx, 12.1975, 3.66606, 12.1975, 3.11606);
    CGContextAddQuadCurveToPoint(ctx, 12.1975, 2.06606, 10.3475, 0.266057);
    CGContextAddLineToPoint(ctx, 9.19754, -0.683943);
    CGContextAddLineToPoint(ctx, 8.04754, -1.48394);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 0.970271, 13.8121);
    CGContextAddLineToPoint(ctx, 0.920271, 15.2621);
    CGContextAddQuadCurveToPoint(ctx, 0.920271, 18.6121, 1.72027, 18.6121);
    CGContextAddQuadCurveToPoint(ctx, 2.77027, 18.6121, 2.97027, 15.1621);
    CGContextAddLineToPoint(ctx, 2.97027, 15.0621);
    CGContextAddLineToPoint(ctx, 2.92027, 11.0621);
    CGContextAddLineToPoint(ctx, 2.92027, 11.0121);
    CGContextAddLineToPoint(ctx, 1.87027, 10.7621);
    CGContextAddQuadCurveToPoint(ctx, 1.08442, 10.7871, 0.970271, 13.8121);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -2.05469, 11.8145);
    CGContextAddQuadCurveToPoint(ctx, -2.50469, 12.2645, -2.50469, 14.6645);
    CGContextAddLineToPoint(ctx, -2.50469, 15.4645);
    CGContextAddQuadCurveToPoint(ctx, -2.35469, 18.4645, -1.40469, 18.4645);
    CGContextAddQuadCurveToPoint(ctx, -1.05469, 18.4645, -0.70469, 17.1145);
    CGContextAddLineToPoint(ctx, -0.50469, 15.2645);
    CGContextAddLineToPoint(ctx, -0.50469, 14.5645);
    CGContextAddLineToPoint(ctx, -0.70469, 11.6145);
    CGContextAddLineToPoint(ctx, -0.70469, 11.5645);
    CGContextAddLineToPoint(ctx, -2.05469, 11.8145);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -5.25088, 11.9286);
    CGContextAddLineToPoint(ctx, -5.70088, 11.7786);
    CGContextAddLineToPoint(ctx, -6.65088, 11.7786);
    CGContextAddLineToPoint(ctx, -6.80088, 15.2786);
    CGContextAddLineToPoint(ctx, -6.65088, 17.1786);
    CGContextAddQuadCurveToPoint(ctx, -6.50088, 17.6786, -5.90088, 17.6786);
    CGContextAddQuadCurveToPoint(ctx, -5.50088, 17.6786, -5.30088, 15.6286);
    CGContextAddLineToPoint(ctx, -5.15088, 14.6286);
    CGContextAddLineToPoint(ctx, -5.15088, 14.0286);
    CGContextAddLineToPoint(ctx, -5.15088, 12.8786);
    CGContextAddLineToPoint(ctx, -5.25088, 11.9286);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -9.75978, 12.4423);
    CGContextAddLineToPoint(ctx, -9.55978, 10.9923);
    CGContextAddLineToPoint(ctx, -10.2098, 10.6423);
    CGContextAddLineToPoint(ctx, -10.7098, 10.6423);
    CGContextAddQuadCurveToPoint(ctx, -10.7098, 11.1923, -11.1098, 12.3923);
    CGContextAddLineToPoint(ctx, -11.1098, 15.6423);
    CGContextAddLineToPoint(ctx, -10.9098, 15.6923);
    CGContextAddQuadCurveToPoint(ctx, -10.2098, 15.6923, -9.80978, 13.1423);
    CGContextAddLineToPoint(ctx, -9.75978, 12.4423);
    CGContextClosePath(ctx);
}

static void def_path_7(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -31.7906, -215.571);
    CGContextAddQuadCurveToPoint(ctx, -39.3906, -213.221, -45.0906, -210.921);
    CGContextAddLineToPoint(ctx, -45.7406, -208.171);
    CGContextAddQuadCurveToPoint(ctx, -46.1906, -205.271, -46.1906, -188.521);
    CGContextAddQuadCurveToPoint(ctx, -46.1906, -176.071, -42.2906, -157.521);
    CGContextAddQuadCurveToPoint(ctx, -40.6406, -149.771, -34.1906, -124.171);
    CGContextAddQuadCurveToPoint(ctx, -28.9906, -103.621, -27.2906, -92.4713);
    CGContextAddQuadCurveToPoint(ctx, -24.8406, -76.1713, -26.9906, -66.1213);
    CGContextAddLineToPoint(ctx, -26.9906, -40.5213);
    CGContextAddLineToPoint(ctx, -26.1406, -40.3713);
    CGContextAddLineToPoint(ctx, -19.2406, -39.6713);
    CGContextAddLineToPoint(ctx, -17.1406, -39.6713);
    CGContextAddLineToPoint(ctx, -16.9906, -42.4213);
    CGContextAddQuadCurveToPoint(ctx, -16.9906, -59.8213, -19.6406, -77.6213);
    CGContextAddQuadCurveToPoint(ctx, -21.2906, -88.2213, -25.6406, -108.071);
    CGContextAddQuadCurveToPoint(ctx, -29.9906, -127.921, -31.5906, -138.721);
    CGContextAddQuadCurveToPoint(ctx, -34.3406, -156.721, -34.3406, -174.371);
    CGContextAddQuadCurveToPoint(ctx, -34.3406, -177.971, -32.9406, -198.621);
    CGContextAddLineToPoint(ctx, -31.7906, -215.571);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -8.90366, -221.621);
    CGContextAddLineToPoint(ctx, -19.7037, -219.121);
    CGContextAddLineToPoint(ctx, -19.6537, -212.721);
    CGContextAddLineToPoint(ctx, -21.5037, -156.571);
    CGContextAddQuadCurveToPoint(ctx, -21.5037, -103.371, -6.20366, -40.1212);
    CGContextAddLineToPoint(ctx, 0.14634, -40.6712);
    CGContextAddQuadCurveToPoint(ctx, -3.30366, -53.8212, -4.60366, -61.0212);
    CGContextAddQuadCurveToPoint(ctx, -6.90366, -73.9212, -6.90366, -92.1712);
    CGContextAddQuadCurveToPoint(ctx, -6.90366, -97.0212, -5.05366, -130.371);
    CGContextAddQuadCurveToPoint(ctx, -3.25366, -163.721, -3.25366, -178.921);
    CGContextAddQuadCurveToPoint(ctx, -3.25366, -191.421, -6.20366, -208.571);
    CGContextAddQuadCurveToPoint(ctx, -7.59094, -216.656, -8.90366, -221.621);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 17.8644, -221.507);
    CGContextAddQuadCurveToPoint(ctx, 11.9144, -222.957, 6.71439, -223.157);
    CGContextAddLineToPoint(ctx, 8.31439, -211.257);
    CGContextAddQuadCurveToPoint(ctx, 10.4144, -194.207, 10.4144, -183.957);
    CGContextAddQuadCurveToPoint(ctx, 10.4144, -158.857, 5.86439, -129.207);
    CGContextAddQuadCurveToPoint(ctx, 1.31439, -99.5571, 1.31439, -81.2071);
    CGContextAddQuadCurveToPoint(ctx, 1.31439, -70.3071, 5.26439, -55.0571);
    CGContextAddQuadCurveToPoint(ctx, 7.06439, -47.8571, 9.21439, -41.8571);
    CGContextAddLineToPoint(ctx, 19.4644, -43.7571);
    CGContextAddLineToPoint(ctx, 22.6644, -44.4571);
    CGContextAddLineToPoint(ctx, 19.0144, -54.2071);
    CGContextAddQuadCurveToPoint(ctx, 15.0144, -65.8071, 15.0144, -79.3571);
    CGContextAddQuadCurveToPoint(ctx, 15.0144, -91.3071, 19.5644, -122.407);
    CGContextAddQuadCurveToPoint(ctx, 24.1144, -153.557, 24.1144, -170.707);
    CGContextAddQuadCurveToPoint(ctx, 24.1144, -186.807, 22.0644, -202.007);
    CGContextAddQuadCurveToPoint(ctx, 20.4328, -214.201, 17.8644, -221.507);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 33.0463, -47.2579);
    CGContextAddQuadCurveToPoint(ctx, 37.1963, -48.6079, 40.6463, -50.0579);
    CGContextAddQuadCurveToPoint(ctx, 37.7963, -63.7579, 37.3463, -67.6079);
    CGContextAddQuadCurveToPoint(ctx, 36.9463, -70.8579, 36.9463, -99.4579);
    CGContextAddLineToPoint(ctx, 36.9463, -117.258);
    CGContextAddQuadCurveToPoint(ctx, 36.9463, -129.158, 38.7963, -141.908);
    CGContextAddLineToPoint(ctx, 43.2963, -166.058);
    CGContextAddQuadCurveToPoint(ctx, 45.1463, -175.958, 45.1463, -188.508);
    CGContextAddQuadCurveToPoint(ctx, 45.1463, -194.958, 44.2963, -205.608);
    CGContextAddLineToPoint(ctx, 43.8463, -211.058);
    CGContextAddLineToPoint(ctx, 32.5463, -216.558);
    CGContextAddLineToPoint(ctx, 28.5463, -218.158);
    CGContextAddQuadCurveToPoint(ctx, 29.1963, -213.108, 30.5463, -205.458);
    CGContextAddQuadCurveToPoint(ctx, 33.2963, -189.858, 33.2963, -182.558);
    CGContextAddQuadCurveToPoint(ctx, 33.2963, -169.908, 29.1963, -135.608);
    CGContextAddQuadCurveToPoint(ctx, 25.0963, -101.258, 25.0963, -95.3579);
    CGContextAddQuadCurveToPoint(ctx, 25.0963, -81.2579, 28.9463, -63.1079);
    CGContextAddQuadCurveToPoint(ctx, 30.8204, -54.221, 33.0463, -47.2579);
    CGContextClosePath(ctx);
}

static void def_path_8(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -19.7479, -219.11);
    CGContextAddLineToPoint(ctx, -26.1479, -217.31);
    CGContextAddLineToPoint(ctx, -31.7979, -215.56);
    CGContextAddLineToPoint(ctx, -32.9479, -198.61);
    CGContextAddQuadCurveToPoint(ctx, -34.3479, -177.96, -34.3479, -174.36);
    CGContextAddQuadCurveToPoint(ctx, -34.3479, -156.71, -31.5979, -138.71);
    CGContextAddQuadCurveToPoint(ctx, -29.9979, -127.91, -25.6479, -108.06);
    CGContextAddQuadCurveToPoint(ctx, -21.2979, -88.2099, -19.6479, -77.6099);
    CGContextAddQuadCurveToPoint(ctx, -16.9979, -59.8099, -16.9979, -42.4099);
    CGContextAddLineToPoint(ctx, -17.1479, -39.6599);
    CGContextAddLineToPoint(ctx, -6.24786, -40.1099);
    CGContextAddQuadCurveToPoint(ctx, -21.5479, -103.36, -21.5479, -156.56);
    CGContextAddLineToPoint(ctx, -19.6979, -212.71);
    CGContextAddLineToPoint(ctx, -19.7479, -219.11);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 6.73482, -223.162);
    CGContextAddLineToPoint(ctx, 4.98482, -223.212);
    CGContextAddQuadCurveToPoint(ctx, -0.715181, -223.212, -8.86518, -221.612);
    CGContextAddQuadCurveToPoint(ctx, -7.51518, -216.662, -6.16518, -208.562);
    CGContextAddQuadCurveToPoint(ctx, -3.21518, -191.412, -3.21518, -178.912);
    CGContextAddQuadCurveToPoint(ctx, -3.21518, -163.712, -5.01518, -130.362);
    CGContextAddQuadCurveToPoint(ctx, -6.86518, -97.0122, -6.86518, -92.1622);
    CGContextAddQuadCurveToPoint(ctx, -6.86518, -73.9122, -4.56518, -61.0122);
    CGContextAddQuadCurveToPoint(ctx, -3.26518, -53.8122, 0.184819, -40.6622);
    CGContextAddLineToPoint(ctx, 9.23482, -41.8622);
    CGContextAddQuadCurveToPoint(ctx, 7.08482, -47.8622, 5.28482, -55.0622);
    CGContextAddQuadCurveToPoint(ctx, 1.33482, -70.3122, 1.33482, -81.2122);
    CGContextAddQuadCurveToPoint(ctx, 1.33482, -99.5622, 5.88482, -129.212);
    CGContextAddQuadCurveToPoint(ctx, 10.4348, -158.862, 10.4348, -183.962);
    CGContextAddQuadCurveToPoint(ctx, 10.4348, -194.212, 8.33482, -211.262);
    CGContextAddLineToPoint(ctx, 6.73482, -223.162);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 28.5374, -218.197);
    CGContextAddQuadCurveToPoint(ctx, 22.9374, -220.347, 17.8874, -221.547);
    CGContextAddQuadCurveToPoint(ctx, 20.4374, -214.247, 22.0874, -202.047);
    CGContextAddQuadCurveToPoint(ctx, 24.1374, -186.847, 24.1374, -170.747);
    CGContextAddQuadCurveToPoint(ctx, 24.1374, -153.597, 19.5874, -122.447);
    CGContextAddQuadCurveToPoint(ctx, 15.0374, -91.3467, 15.0374, -79.3967);
    CGContextAddQuadCurveToPoint(ctx, 15.0374, -65.8467, 19.0374, -54.2467);
    CGContextAddLineToPoint(ctx, 22.6874, -44.4967);
    CGContextAddLineToPoint(ctx, 33.0374, -47.2967);
    CGContextAddQuadCurveToPoint(ctx, 30.8374, -54.2467, 28.9374, -63.1467);
    CGContextAddQuadCurveToPoint(ctx, 25.0874, -81.2967, 25.0874, -95.3967);
    CGContextAddQuadCurveToPoint(ctx, 25.0874, -101.297, 29.1874, -135.647);
    CGContextAddQuadCurveToPoint(ctx, 33.2874, -169.947, 33.2874, -182.597);
    CGContextAddQuadCurveToPoint(ctx, 33.2874, -189.897, 30.5374, -205.497);
    CGContextAddQuadCurveToPoint(ctx, 29.1652, -213.117, 28.5374, -218.197);
    CGContextClosePath(ctx);
}

static void def_path_9(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 11.4149, -133.84);
    CGContextAddQuadCurveToPoint(ctx, 10.0149, -133.19, 8.31495, -132.59);
    CGContextAddQuadCurveToPoint(ctx, 4.06495, -131.14, -0.685052, -131.14);
    CGContextAddLineToPoint(ctx, -2.98505, -131.29);
    CGContextAddLineToPoint(ctx, -2.08505, -125.54);
    CGContextAddQuadCurveToPoint(ctx, -1.38505, -120.79, -1.38505, -112.74);
    CGContextAddLineToPoint(ctx, -1.38505, -112.39);
    CGContextAddQuadCurveToPoint(ctx, -1.38505, -107.09, -1.93505, -102.39);
    CGContextAddLineToPoint(ctx, -2.23505, -100.39);
    CGContextAddQuadCurveToPoint(ctx, -2.83505, -96.1903, -3.88505, -92.5903);
    CGContextAddLineToPoint(ctx, -4.83505, -89.7403);
    CGContextAddLineToPoint(ctx, -5.78505, -87.3403);
    CGContextAddLineToPoint(ctx, -6.78505, -85.0903);
    CGContextAddLineToPoint(ctx, -7.58505, -83.6903);
    CGContextAddLineToPoint(ctx, -11.4351, -78.0403);
    CGContextAddLineToPoint(ctx, -13.8351, -74.8403);
    CGContextAddLineToPoint(ctx, -15.4351, -72.8903);
    CGContextAddLineToPoint(ctx, -17.7351, -69.9403);
    CGContextAddLineToPoint(ctx, -20.4351, -66.4903);
    CGContextAddLineToPoint(ctx, -21.6351, -65.0403);
    CGContextAddQuadCurveToPoint(ctx, -15.4851, -59.7903, -11.5851, -58.0403);
    CGContextAddQuadCurveToPoint(ctx, -4.48505, -54.9403, 9.41495, -54.9403);
    CGContextAddQuadCurveToPoint(ctx, 21.4649, -54.9403, 29.6649, -59.5403);
    CGContextAddQuadCurveToPoint(ctx, 30.8149, -62.0903, 30.8149, -64.8903);
    CGContextAddLineToPoint(ctx, 30.6149, -67.6403);
    CGContextAddLineToPoint(ctx, 27.3649, -71.0403);
    CGContextAddLineToPoint(ctx, 26.1649, -72.3403);
    CGContextAddLineToPoint(ctx, 23.2649, -76.0403);
    CGContextAddLineToPoint(ctx, 22.6649, -76.9903);
    CGContextAddLineToPoint(ctx, 20.4149, -80.4903);
    CGContextAddLineToPoint(ctx, 19.9149, -81.4403);
    CGContextAddLineToPoint(ctx, 18.6649, -83.8903);
    CGContextAddQuadCurveToPoint(ctx, 16.4649, -88.4903, 14.9649, -93.9403);
    CGContextAddLineToPoint(ctx, 14.7149, -94.6903);
    CGContextAddQuadCurveToPoint(ctx, 14.1649, -96.7403, 13.7649, -98.9903);
    CGContextAddLineToPoint(ctx, 13.4149, -100.34);
    CGContextAddQuadCurveToPoint(ctx, 12.8149, -103.09, 12.4149, -106.04);
    CGContextAddQuadCurveToPoint(ctx, 11.1149, -115.34, 11.1149, -126.54);
    CGContextAddLineToPoint(ctx, 11.4149, -133.84);
    CGContextClosePath(ctx);
}

static void def_path_10(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 13.755, -98.9676);
    CGContextAddLineToPoint(ctx, 13.405, -100.318);
    CGContextAddQuadCurveToPoint(ctx, 12.805, -103.068, 12.405, -106.018);
    CGContextAddLineToPoint(ctx, 9.35501, -107.068);
    CGContextAddQuadCurveToPoint(ctx, 2.95501, -109.418, -1.39499, -112.368);
    CGContextAddQuadCurveToPoint(ctx, -1.39499, -107.068, -1.94499, -102.368);
    CGContextAddLineToPoint(ctx, -2.24499, -100.368);
    CGContextAddQuadCurveToPoint(ctx, -2.84499, -96.1676, -3.89499, -92.5676);
    CGContextAddLineToPoint(ctx, -4.84499, -89.7176);
    CGContextAddLineToPoint(ctx, -5.79499, -87.3176);
    CGContextAddLineToPoint(ctx, -6.79499, -85.0676);
    CGContextAddLineToPoint(ctx, -7.59499, -83.6676);
    CGContextAddLineToPoint(ctx, -11.445, -78.0176);
    CGContextAddLineToPoint(ctx, -13.845, -74.8176);
    CGContextAddLineToPoint(ctx, -15.445, -72.8676);
    CGContextAddLineToPoint(ctx, -17.745, -69.9176);
    CGContextAddLineToPoint(ctx, -20.445, -66.4676);
    CGContextAddLineToPoint(ctx, -13.795, -64.3176);
    CGContextAddLineToPoint(ctx, -11.545, -64.0676);
    CGContextAddLineToPoint(ctx, -11.195, -64.1676);
    CGContextAddLineToPoint(ctx, -9.79499, -63.9676);
    CGContextAddLineToPoint(ctx, -7.69499, -63.9676);
    CGContextAddQuadCurveToPoint(ctx, 2.50501, -63.9676, 12.405, -67.1176);
    CGContextAddLineToPoint(ctx, 13.455, -67.5176);
    CGContextAddLineToPoint(ctx, 13.505, -67.2676);
    CGContextAddQuadCurveToPoint(ctx, 18.605, -67.8676, 22.605, -69.1176);
    CGContextAddLineToPoint(ctx, 27.355, -71.0176);
    CGContextAddLineToPoint(ctx, 26.155, -72.3176);
    CGContextAddLineToPoint(ctx, 23.255, -76.0176);
    CGContextAddLineToPoint(ctx, 22.405, -75.8676);
    CGContextAddLineToPoint(ctx, 16.255, -74.9176);
    CGContextAddLineToPoint(ctx, 22.655, -76.9676);
    CGContextAddLineToPoint(ctx, 20.405, -80.4676);
    CGContextAddLineToPoint(ctx, 19.905, -81.4176);
    CGContextAddLineToPoint(ctx, 18.655, -83.8676);
    CGContextAddQuadCurveToPoint(ctx, 16.455, -88.4676, 14.955, -93.9176);
    CGContextAddLineToPoint(ctx, 14.705, -94.6676);
    CGContextAddQuadCurveToPoint(ctx, 14.1545, -96.7417, 13.755, -98.9676);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 14.2116, -74.3684);
    CGContextAddLineToPoint(ctx, 14.0616, -74.7184);
    CGContextAddLineToPoint(ctx, 16.2616, -74.9184);
    CGContextAddLineToPoint(ctx, 14.2116, -74.3684);
    CGContextClosePath(ctx);
}

static void def_path_11(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 12.5564, -100.337);
    CGContextAddLineToPoint(ctx, 2.70644, -101.187);
    CGContextAddLineToPoint(ctx, -1.94356, -102.387);
    CGContextAddLineToPoint(ctx, -2.24356, -100.387);
    CGContextAddLineToPoint(ctx, -0.0935577, -100.087);
    CGContextAddLineToPoint(ctx, 10.1064, -98.9874);
    CGContextAddLineToPoint(ctx, 13.7564, -98.9874);
    CGContextAddLineToPoint(ctx, 13.4064, -100.337);
    CGContextAddLineToPoint(ctx, 12.5564, -100.337);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 14.9536, -93.945);
    CGContextAddLineToPoint(ctx, 14.7036, -94.695);
    CGContextAddQuadCurveToPoint(ctx, 10.7036, -93.645, 6.80358, -93.095);
    CGContextAddLineToPoint(ctx, -3.89642, -92.595);
    CGContextAddLineToPoint(ctx, -4.84642, -89.745);
    CGContextAddQuadCurveToPoint(ctx, 1.50358, -89.795, 11.7536, -92.995);
    CGContextAddLineToPoint(ctx, 14.9536, -93.945);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 14.0975, -74.7108);
    CGContextAddLineToPoint(ctx, 9.94746, -74.4608);
    CGContextAddQuadCurveToPoint(ctx, 2.74746, -74.4608, -6.05254, -76.5608);
    CGContextAddQuadCurveToPoint(ctx, -9.25254, -77.3108, -11.4025, -78.0108);
    CGContextAddLineToPoint(ctx, -13.8025, -74.8108);
    CGContextAddLineToPoint(ctx, -6.30254, -73.5108);
    CGContextAddLineToPoint(ctx, 1.39746, -73.4608);
    CGContextAddLineToPoint(ctx, 14.2475, -74.3608);
    CGContextAddLineToPoint(ctx, 14.0975, -74.7108);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 13.4696, -67.5194);
    CGContextAddLineToPoint(ctx, 13.5196, -67.2694);
    CGContextAddQuadCurveToPoint(ctx, 18.6196, -67.8694, 22.6196, -69.1194);
    CGContextAddLineToPoint(ctx, 27.3696, -71.0194);
    CGContextAddLineToPoint(ctx, 26.1696, -72.3194);
    CGContextAddQuadCurveToPoint(ctx, 18.6064, -69.2317, 13.4696, -67.5194);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 20.4328, -80.4754);
    CGContextAddLineToPoint(ctx, 19.9328, -81.4254);
    CGContextAddLineToPoint(ctx, 13.2828, -82.7254);
    CGContextAddQuadCurveToPoint(ctx, 1.53276, -84.9754, -5.76724, -87.3254);
    CGContextAddLineToPoint(ctx, -6.76724, -85.0754);
    CGContextAddQuadCurveToPoint(ctx, 6.79189, -81.674, 20.4328, -80.4754);
    CGContextClosePath(ctx);
}

static void def_path_12(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 24.0285, 17.4649);
    CGContextAddQuadCurveToPoint(ctx, 18.8285, -27.1851, 7.57846, -49.9351);
    CGContextAddQuadCurveToPoint(ctx, 2.32846, -60.5851, -5.72154, -70.2851);
    CGContextAddQuadCurveToPoint(ctx, -9.72154, -74.9351, -16.2715, -81.5851);
    CGContextAddQuadCurveToPoint(ctx, -19.1715, -75.9851, -20.9715, -70.4351);
    CGContextAddLineToPoint(ctx, -22.5715, -64.1351);
    CGContextAddLineToPoint(ctx, -22.6215, -63.8351);
    CGContextAddQuadCurveToPoint(ctx, -23.9215, -56.9351, -23.9215, -49.2851);
    CGContextAddQuadCurveToPoint(ctx, -23.9215, -32.4851, -11.4715, 0.264877);
    CGContextAddQuadCurveToPoint(ctx, -7.02154, 11.9649, -1.92154, 24.0649);
    CGContextAddLineToPoint(ctx, -1.22154, 24.0649);
    CGContextAddQuadCurveToPoint(ctx, 8.77846, 24.0649, 16.7285, 21.1649);
    CGContextAddLineToPoint(ctx, 16.9785, 21.1149);
    CGContextAddLineToPoint(ctx, 19.5785, 20.0149);
    CGContextAddLineToPoint(ctx, 24.0285, 17.4649);
    CGContextClosePath(ctx);
}

static void def_path_13(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -22.4874, -63.9808);
    CGContextAddLineToPoint(ctx, -22.6874, -63.8808);
    CGContextAddQuadCurveToPoint(ctx, -13.4374, -47.4808, -1.78745, -22.1308);
    CGContextAddQuadCurveToPoint(ctx, 11.6626, 6.96922, 16.6626, 21.1192);
    CGContextAddLineToPoint(ctx, 16.9126, 21.0692);
    CGContextAddLineToPoint(ctx, 19.5126, 19.9692);
    CGContextAddQuadCurveToPoint(ctx, 17.8126, 11.7192, 13.9126, 1.41922);
    CGContextAddQuadCurveToPoint(ctx, 9.46255, -10.2308, 1.06255, -26.9308);
    CGContextAddQuadCurveToPoint(ctx, -8.43745, -46.2308, -20.3374, -61.3808);
    CGContextAddLineToPoint(ctx, -22.4874, -63.9808);
    CGContextClosePath(ctx);
}

static void def_path_14(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.342448, 175.048);
    CGContextAddQuadCurveToPoint(ctx, -0.307552, 179.198, -0.307552, 191.498);
    CGContextAddLineToPoint(ctx, 1.04245, 228.548);
    CGContextAddLineToPoint(ctx, 0.692448, 233.898);
    CGContextAddLineToPoint(ctx, 0.542448, 235.748);
    CGContextAddLineToPoint(ctx, 0.492448, 237.448);
    CGContextAddQuadCurveToPoint(ctx, -0.457552, 238.198, -1.25755, 239.098);
    CGContextAddQuadCurveToPoint(ctx, -4.05755, 242.148, -5.20755, 247.198);
    CGContextAddQuadCurveToPoint(ctx, -6.25755, 252.248, -6.25755, 264.148);
    CGContextAddQuadCurveToPoint(ctx, -6.25755, 276.948, -3.65755, 284.248);
    CGContextAddQuadCurveToPoint(ctx, -0.657552, 292.648, 5.39245, 292.098);
    CGContextAddQuadCurveToPoint(ctx, 6.34245, 294.598, 7.99245, 294.598);
    CGContextAddQuadCurveToPoint(ctx, 10.6924, 294.598, 11.1424, 287.248);
    CGContextAddLineToPoint(ctx, 11.1424, 268.398);
    CGContextAddLineToPoint(ctx, 11.1924, 262.498);
    CGContextAddLineToPoint(ctx, 11.1424, 257.198);
    CGContextAddQuadCurveToPoint(ctx, 10.7924, 249.898, 10.0424, 245.748);
    CGContextAddQuadCurveToPoint(ctx, 9.54245, 242.648, 8.74245, 240.648);
    CGContextAddLineToPoint(ctx, 9.94245, 225.048);
    CGContextAddQuadCurveToPoint(ctx, 10.7924, 209.048, 10.7924, 194.998);
    CGContextAddQuadCurveToPoint(ctx, 10.7924, 183.498, 10.1424, 177.848);
    CGContextAddQuadCurveToPoint(ctx, 8.94245, 168.048, 5.54245, 168.048);
    CGContextAddQuadCurveToPoint(ctx, 1.54102, 168.028, 0.342448, 175.048);
    CGContextClosePath(ctx);
}

static void def_path_15(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -1.25564, 236.346);
    CGContextAddLineToPoint(ctx, -1.75564, 237.846);
    CGContextAddQuadCurveToPoint(ctx, -1.75564, 238.546, -1.30564, 239.096);
    CGContextAddLineToPoint(ctx, -0.355644, 239.846);
    CGContextAddLineToPoint(ctx, 0.894356, 240.346);
    CGContextAddQuadCurveToPoint(ctx, 1.69436, 239.296, 1.69436, 237.346);
    CGContextAddLineToPoint(ctx, 1.64436, 235.947);
    CGContextAddLineToPoint(ctx, 1.64436, 235.896);
    CGContextAddLineToPoint(ctx, 1.64436, 235.796);
    CGContextAddLineToPoint(ctx, 0.494356, 235.746);
    CGContextAddLineToPoint(ctx, 0.144356, 235.696);
    CGContextAddQuadCurveToPoint(ctx, -0.684897, 235.662, -1.25564, 236.346);
    CGContextClosePath(ctx);
}

static void def_path_16(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 8.73244, 289.826);
    CGContextAddLineToPoint(ctx, 6.68244, 289.975);
    CGContextAddLineToPoint(ctx, 6.63243, 290.625);
    CGContextAddQuadCurveToPoint(ctx, 6.63243, 291.525, 6.98243, 292.275);
    CGContextAddQuadCurveToPoint(ctx, 7.43243, 293.125, 7.98243, 293.125);
    CGContextAddQuadCurveToPoint(ctx, 8.78243, 293.125, 9.13243, 291.425);
    CGContextAddLineToPoint(ctx, 9.33243, 289.875);
    CGContextAddLineToPoint(ctx, 8.73244, 289.826);
    CGContextClosePath(ctx);
}

static void def_path_17(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 33.8453, 175.048);
    CGContextAddQuadCurveToPoint(ctx, 32.6453, 168.048, 28.6953, 168.048);
    CGContextAddQuadCurveToPoint(ctx, 25.2953, 168.048, 24.0953, 177.848);
    CGContextAddQuadCurveToPoint(ctx, 23.4453, 183.498, 23.4453, 194.998);
    CGContextAddQuadCurveToPoint(ctx, 23.4453, 209.048, 24.2953, 225.048);
    CGContextAddQuadCurveToPoint(ctx, 24.8453, 235.798, 25.4953, 240.648);
    CGContextAddQuadCurveToPoint(ctx, 24.6953, 242.648, 24.1453, 245.748);
    CGContextAddQuadCurveToPoint(ctx, 23.4953, 249.898, 23.0953, 257.198);
    CGContextAddQuadCurveToPoint(ctx, 22.9453, 259.098, 23.0453, 262.498);
    CGContextAddLineToPoint(ctx, 23.0953, 268.398);
    CGContextAddLineToPoint(ctx, 23.0953, 287.248);
    CGContextAddQuadCurveToPoint(ctx, 23.5453, 294.598, 26.1953, 294.598);
    CGContextAddQuadCurveToPoint(ctx, 27.8953, 294.598, 28.8453, 292.098);
    CGContextAddQuadCurveToPoint(ctx, 34.9453, 292.648, 37.8953, 284.248);
    CGContextAddQuadCurveToPoint(ctx, 40.5453, 276.948, 40.5453, 264.148);
    CGContextAddQuadCurveToPoint(ctx, 40.5453, 252.248, 39.4453, 247.198);
    CGContextAddQuadCurveToPoint(ctx, 38.2953, 242.148, 35.5953, 239.098);
    CGContextAddLineToPoint(ctx, 33.7453, 237.448);
    CGContextAddLineToPoint(ctx, 33.6953, 235.748);
    CGContextAddLineToPoint(ctx, 33.5453, 233.898);
    CGContextAddLineToPoint(ctx, 33.1953, 228.548);
    CGContextAddLineToPoint(ctx, 34.5953, 191.498);
    CGContextAddQuadCurveToPoint(ctx, 34.5873, 179.158, 33.8453, 175.048);
    CGContextClosePath(ctx);
}

static void def_path_18(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 35.4434, 236.346);
    CGContextAddQuadCurveToPoint(ctx, 35.9934, 237.046, 35.9934, 237.846);
    CGContextAddQuadCurveToPoint(ctx, 35.9934, 238.546, 35.5434, 239.096);
    CGContextAddLineToPoint(ctx, 34.5934, 239.846);
    CGContextAddLineToPoint(ctx, 33.2934, 240.346);
    CGContextAddQuadCurveToPoint(ctx, 32.4934, 239.296, 32.4934, 237.346);
    CGContextAddLineToPoint(ctx, 32.5434, 235.947);
    CGContextAddLineToPoint(ctx, 32.5434, 235.896);
    CGContextAddLineToPoint(ctx, 32.5434, 235.796);
    CGContextAddLineToPoint(ctx, 33.6934, 235.746);
    CGContextAddLineToPoint(ctx, 34.0434, 235.696);
    CGContextAddQuadCurveToPoint(ctx, 34.8727, 235.662, 35.4434, 236.346);
    CGContextClosePath(ctx);
}

static void def_path_19(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.4553, 289.826);
    CGContextAddLineToPoint(ctx, 24.9053, 289.875);
    CGContextAddLineToPoint(ctx, 25.0553, 291.425);
    CGContextAddQuadCurveToPoint(ctx, 25.3553, 293.125, 26.1553, 293.125);
    CGContextAddQuadCurveToPoint(ctx, 26.7553, 293.125, 27.2053, 292.275);
    CGContextAddLineToPoint(ctx, 27.5553, 290.625);
    CGContextAddLineToPoint(ctx, 27.5053, 289.975);
    CGContextAddLineToPoint(ctx, 25.4553, 289.826);
    CGContextClosePath(ctx);
}

static void def_path_20(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 31.5053, -70.4873);
    CGContextAddQuadCurveToPoint(ctx, 29.7553, -76.0373, 26.8553, -81.6373);
    CGContextAddQuadCurveToPoint(ctx, 20.3053, -74.9873, 16.3053, -70.3373);
    CGContextAddQuadCurveToPoint(ctx, 8.20526, -60.6373, 2.95526, -49.9873);
    CGContextAddQuadCurveToPoint(ctx, -8.29474, -27.2373, -13.4447, 17.4127);
    CGContextAddQuadCurveToPoint(ctx, -11.5947, 18.8127, -8.99474, 19.9627);
    CGContextAddLineToPoint(ctx, -6.39474, 21.0627);
    CGContextAddLineToPoint(ctx, -6.14474, 21.1127);
    CGContextAddQuadCurveToPoint(ctx, 1.75526, 24.0127, 11.8053, 24.0127);
    CGContextAddLineToPoint(ctx, 12.4553, 24.0127);
    CGContextAddQuadCurveToPoint(ctx, 17.6053, 11.9127, 22.0553, 0.212697);
    CGContextAddQuadCurveToPoint(ctx, 34.5053, -32.5373, 34.5053, -49.3373);
    CGContextAddQuadCurveToPoint(ctx, 34.5053, -56.9873, 33.1553, -63.8873);
    CGContextAddLineToPoint(ctx, 33.1553, -64.1873);
    CGContextAddLineToPoint(ctx, 31.5053, -70.4873);
    CGContextClosePath(ctx);
}

static void def_path_21(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 30.8774, -61.3553);
    CGContextAddQuadCurveToPoint(ctx, 19.0274, -46.2053, 9.37743, -26.9053);
    CGContextAddQuadCurveToPoint(ctx, 1.02743, -10.2053, -3.37257, 1.44466);
    CGContextAddQuadCurveToPoint(ctx, -7.27257, 11.7447, -8.97257, 19.9947);
    CGContextAddLineToPoint(ctx, -6.37257, 21.0947);
    CGContextAddLineToPoint(ctx, -6.12257, 21.1447);
    CGContextAddQuadCurveToPoint(ctx, -1.07257, 6.99466, 12.3274, -22.1053);
    CGContextAddQuadCurveToPoint(ctx, 23.9774, -47.4553, 33.1774, -63.8553);
    CGContextAddLineToPoint(ctx, 32.9774, -63.9553);
    CGContextAddLineToPoint(ctx, 30.8774, -61.3553);
    CGContextClosePath(ctx);
}

static void def_path_22(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 20.7181, -71.7429);
    CGContextAddQuadCurveToPoint(ctx, 18.1181, -81.2429, 14.9681, -86.4929);
    CGContextAddQuadCurveToPoint(ctx, 11.3681, -92.4429, 5.76813, -95.0429);
    CGContextAddQuadCurveToPoint(ctx, 0.0181298, -97.8429, -9.08187, -97.8429);
    CGContextAddLineToPoint(ctx, -14.5319, -97.6929);
    CGContextAddQuadCurveToPoint(ctx, -16.5319, -96.7429, -18.1819, -95.4429);
    CGContextAddLineToPoint(ctx, -17.8319, -95.0429);
    CGContextAddQuadCurveToPoint(ctx, -19.5319, -92.9929, -20.8819, -90.2429);
    CGContextAddLineToPoint(ctx, -20.3819, -93.4929);
    CGContextAddQuadCurveToPoint(ctx, -24.3319, -89.6929, -26.7319, -83.6929);
    CGContextAddQuadCurveToPoint(ctx, -31.7319, -71.1929, -31.7319, -45.0429);
    CGContextAddQuadCurveToPoint(ctx, -31.7319, -36.8929, -26.8819, 21.8571);
    CGContextAddQuadCurveToPoint(ctx, -22.9819, 69.3571, -20.8319, 91.6071);
    CGContextAddLineToPoint(ctx, -20.7819, 92.0071);
    CGContextAddQuadCurveToPoint(ctx, -16.7319, 94.0571, -12.9819, 95.2571);
    CGContextAddLineToPoint(ctx, -9.88187, 96.1071);
    CGContextAddLineToPoint(ctx, -7.53187, 96.6571);
    CGContextAddLineToPoint(ctx, 8.36813, 97.8071);
    CGContextAddQuadCurveToPoint(ctx, 20.4681, 97.8071, 25.5181, 96.0571);
    CGContextAddLineToPoint(ctx, 29.9681, 94.2071);
    CGContextAddQuadCurveToPoint(ctx, 31.7681, 71.2571, 31.7681, 42.2571);
    CGContextAddQuadCurveToPoint(ctx, 31.7681, 7.50708, 31.2681, -3.39292);
    CGContextAddQuadCurveToPoint(ctx, 30.1181, -27.0929, 25.5181, -50.2929);
    CGContextAddQuadCurveToPoint(ctx, 22.4874, -65.2935, 20.7181, -71.7429);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -20.9464, -90.2352);
    CGContextAddLineToPoint(ctx, -21.2964, -87.9852);
    CGContextAddLineToPoint(ctx, -21.8464, -88.2352);
    CGContextAddLineToPoint(ctx, -20.9464, -90.2352);
    CGContextClosePath(ctx);
}

static void def_path_23(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -21.2889, -87.9522);
    CGContextAddLineToPoint(ctx, -21.8389, -88.2022);
    CGContextAddQuadCurveToPoint(ctx, -25.5389, -79.0022, -25.5389, -62.8022);
    CGContextAddQuadCurveToPoint(ctx, -25.5389, -56.0022, -17.8889, 23.7978);
    CGContextAddQuadCurveToPoint(ctx, -16.1889, 40.0978, -14.6889, 65.9978);
    CGContextAddLineToPoint(ctx, -13.0389, 95.2978);
    CGContextAddLineToPoint(ctx, -9.93888, 96.1478);
    CGContextAddLineToPoint(ctx, -7.58888, 96.6978);
    CGContextAddQuadCurveToPoint(ctx, -8.73888, 69.9478, -15.0889, 8.89783);
    CGContextAddQuadCurveToPoint(ctx, -22.7389, -65.9522, -22.7389, -71.2022);
    CGContextAddQuadCurveToPoint(ctx, -22.7157, -78.0782, -21.2889, -87.9522);
    CGContextClosePath(ctx);
}

static void def_path_24(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.8549, -0.741972);
    CGContextAddLineToPoint(ctx, 17.0549, -0.391972);
    CGContextAddQuadCurveToPoint(ctx, 8.50486, -0.391972, -4.34514, -3.14197);
    CGContextAddLineToPoint(ctx, -14.6451, -5.59197);
    CGContextAddLineToPoint(ctx, -14.3951, 3.25803);
    CGContextAddLineToPoint(ctx, -14.2951, 7.15803);
    CGContextAddLineToPoint(ctx, -14.2451, 9.55803);
    CGContextAddLineToPoint(ctx, -14.0451, 12.808);
    CGContextAddLineToPoint(ctx, -13.6451, 23.658);
    CGContextAddLineToPoint(ctx, -2.54514, 26.058);
    CGContextAddQuadCurveToPoint(ctx, 5.30486, 27.508, 11.8049, 27.508);
    CGContextAddQuadCurveToPoint(ctx, 18.3049, 27.508, 27.3049, 24.708);
    CGContextAddLineToPoint(ctx, 29.3049, 24.058);
    CGContextAddLineToPoint(ctx, 28.5049, 19.108);
    CGContextAddLineToPoint(ctx, 28.2549, 17.008);
    CGContextAddLineToPoint(ctx, 27.4549, 11.758);
    CGContextAddLineToPoint(ctx, 26.8049, 7.40803);
    CGContextAddLineToPoint(ctx, 26.6549, 6.20803);
    CGContextAddLineToPoint(ctx, 25.8549, -0.741972);
    CGContextClosePath(ctx);
}

static void def_path_25(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 28.252, 17.0653);
    CGContextAddLineToPoint(ctx, 26.852, 17.0653);
    CGContextAddQuadCurveToPoint(ctx, 16.002, 17.0653, 0.851995, 13.4653);
    CGContextAddLineToPoint(ctx, -14.248, 9.61535);
    CGContextAddLineToPoint(ctx, -14.048, 12.8653);
    CGContextAddLineToPoint(ctx, -13.348, 12.8653);
    CGContextAddQuadCurveToPoint(ctx, -7.14801, 15.8653, 4.70199, 17.5653);
    CGContextAddLineToPoint(ctx, 25.452, 19.1653);
    CGContextAddLineToPoint(ctx, 28.502, 19.1653);
    CGContextAddLineToPoint(ctx, 28.252, 17.0653);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 26.8251, 7.47679);
    CGContextAddLineToPoint(ctx, 26.6751, 6.27679);
    CGContextAddLineToPoint(ctx, 23.3251, 6.62679);
    CGContextAddLineToPoint(ctx, 0.625127, 5.12679);
    CGContextAddLineToPoint(ctx, -14.3749, 3.32679);
    CGContextAddLineToPoint(ctx, -14.2749, 7.22679);
    CGContextAddLineToPoint(ctx, -7.02487, 8.52679);
    CGContextAddLineToPoint(ctx, 6.57513, 8.67679);
    CGContextAddQuadCurveToPoint(ctx, 19.8251, 8.67679, 21.7251, 8.42679);
    CGContextAddLineToPoint(ctx, 26.8251, 7.47679);
    CGContextClosePath(ctx);
}

static void def_path_26(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.913196, -79.7334);
    CGContextAddQuadCurveToPoint(ctx, -20.0868, -79.7334, -34.4368, -62.2834);
    CGContextAddQuadCurveToPoint(ctx, -48.4368, -45.1334, -48.4368, -20.7834);
    CGContextAddQuadCurveToPoint(ctx, -48.4368, 5.9166, -35.5868, 32.1666);
    CGContextAddQuadCurveToPoint(ctx, -20.2868, 63.5666, 8.5632, 79.6666);
    CGContextAddQuadCurveToPoint(ctx, 18.3632, 70.7166, 27.1132, 56.1166);
    CGContextAddQuadCurveToPoint(ctx, 36.7632, 39.9666, 42.3132, 21.2666);
    CGContextAddQuadCurveToPoint(ctx, 48.5132, 0.866598, 48.5132, -18.6334);
    CGContextAddQuadCurveToPoint(ctx, 48.5132, -45.6834, 36.2632, -62.2834);
    CGContextAddQuadCurveToPoint(ctx, 23.4006, -79.7334, 0.913196, -79.7334);
    CGContextClosePath(ctx);
}

static void def_path_27(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 2.39714, 33.3887);
    CGContextAddQuadCurveToPoint(ctx, 2.09714, 34.0387, 2.14714, 39.0387);
    CGContextAddLineToPoint(ctx, 1.94714, 47.0887);
    CGContextAddLineToPoint(ctx, 3.69714, 47.1387);
    CGContextAddLineToPoint(ctx, 3.59714, 42.2887);
    CGContextAddQuadCurveToPoint(ctx, 3.49714, 36.4387, 2.59714, 33.3887);
    CGContextAddLineToPoint(ctx, 2.39714, 33.3887);
    CGContextClosePath(ctx);
}

static void def_path_28(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0, -7.24849);
    CGContextAddQuadCurveToPoint(ctx, 0, -6.79849, -0.35, -6.79849);
    CGContextAddQuadCurveToPoint(ctx, -0.95, -3.29849, -1.7, 10.1515);
    CGContextAddLineToPoint(ctx, -2.5, 28.1015);
    CGContextAddLineToPoint(ctx, -3.65, 28.2015);
    CGContextAddQuadCurveToPoint(ctx, -4.85, 28.5015, -4.75, 29.6515);
    CGContextAddQuadCurveToPoint(ctx, -4.75, 30.8515, -2.55, 31.1515);
    CGContextAddLineToPoint(ctx, -1.15, 31.2515);
    CGContextAddLineToPoint(ctx, -1.15, 31.3015);
    CGContextAddQuadCurveToPoint(ctx, -1.15, 33.3015, 0.1, 34.3015);
    CGContextAddQuadCurveToPoint(ctx, 1.1, 35.0515, 2.75, 35.0515);
    CGContextAddQuadCurveToPoint(ctx, 4.95, 35.0515, 5.95, 33.1515);
    CGContextAddLineToPoint(ctx, 6.55, 31.5015);
    CGContextAddLineToPoint(ctx, 7.55, 31.3015);
    CGContextAddLineToPoint(ctx, 8.3, 31.1515);
    CGContextAddQuadCurveToPoint(ctx, 9.9, 30.5515, 9.9, 29.4515);
    CGContextAddQuadCurveToPoint(ctx, 9.9, 28.7515, 9.35, 28.2015);
    CGContextAddQuadCurveToPoint(ctx, 8.8, 27.6515, 8.2, 27.6515);
    CGContextAddLineToPoint(ctx, 7.7, 27.8015);
    CGContextAddQuadCurveToPoint(ctx, 2.51129, -0.627822, 0, -7.24849);
    CGContextClosePath(ctx);
}

static void def_path_29(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 7.02019, 46.8013);
    CGContextAddQuadCurveToPoint(ctx, 5.87019, 44.0013, 4.72019, 44.0013);
    CGContextAddQuadCurveToPoint(ctx, 3.92019, 44.0013, 3.32019, 44.9013);
    CGContextAddQuadCurveToPoint(ctx, 2.92019, 45.4013, 2.77019, 46.1013);
    CGContextAddLineToPoint(ctx, 2.22019, 44.9013);
    CGContextAddQuadCurveToPoint(ctx, 1.72019, 44.2013, 0.920192, 44.2013);
    CGContextAddQuadCurveToPoint(ctx, -1.07981, 44.2013, -1.87981, 47.7513);
    CGContextAddQuadCurveToPoint(ctx, -2.42981, 49.8013, -3.12981, 50.6013);
    CGContextAddLineToPoint(ctx, -3.27981, 50.7013);
    CGContextAddQuadCurveToPoint(ctx, -2.97981, 51.3013, -2.87981, 53.1013);
    CGContextAddQuadCurveToPoint(ctx, -2.82981, 54.8013, -2.22981, 55.8013);
    CGContextAddQuadCurveToPoint(ctx, -1.07981, 58.0013, 0.570192, 58.7013);
    CGContextAddLineToPoint(ctx, 3.97019, 59.1513);
    CGContextAddQuadCurveToPoint(ctx, 6.77019, 59.1513, 8.32019, 57.5013);
    CGContextAddQuadCurveToPoint(ctx, 9.77019, 56.0013, 9.77019, 53.7013);
    CGContextAddLineToPoint(ctx, 9.32019, 51.4013);
    CGContextAddLineToPoint(ctx, 8.92019, 49.4513);
    CGContextAddLineToPoint(ctx, 8.92019, 49.2513);
    CGContextAddQuadCurveToPoint(ctx, 7.81924, 48.7418, 7.02019, 46.8013);
    CGContextClosePath(ctx);
}

static void def_path_30(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 7.02019, 46.8013);
    CGContextAddQuadCurveToPoint(ctx, 5.87019, 44.0013, 4.72019, 44.0013);
    CGContextAddQuadCurveToPoint(ctx, 3.92019, 44.0013, 3.32019, 44.9013);
    CGContextAddQuadCurveToPoint(ctx, 2.92019, 45.4013, 2.77019, 46.1013);
    CGContextAddLineToPoint(ctx, 2.22019, 44.9013);
    CGContextAddQuadCurveToPoint(ctx, 1.72019, 44.2013, 0.920192, 44.2013);
    CGContextAddQuadCurveToPoint(ctx, -1.07981, 44.2013, -1.87981, 47.7513);
    CGContextAddQuadCurveToPoint(ctx, -2.42981, 49.8013, -3.12981, 50.6013);
    CGContextAddLineToPoint(ctx, -1.92981, 51.0513);
    CGContextAddLineToPoint(ctx, 0.320193, 51.5513);
    CGContextAddLineToPoint(ctx, 2.17019, 51.3013);
    CGContextAddLineToPoint(ctx, 2.32019, 51.4513);
    CGContextAddLineToPoint(ctx, 3.47019, 51.7513);
    CGContextAddQuadCurveToPoint(ctx, 4.22019, 51.7513, 4.67019, 51.3013);
    CGContextAddLineToPoint(ctx, 5.12019, 50.7513);
    CGContextAddLineToPoint(ctx, 5.17019, 50.7513);
    CGContextAddLineToPoint(ctx, 5.37019, 50.9013);
    CGContextAddLineToPoint(ctx, 5.92019, 50.9513);
    CGContextAddQuadCurveToPoint(ctx, 7.12019, 50.9513, 8.22019, 50.1013);
    CGContextAddLineToPoint(ctx, 8.92019, 49.4513);
    CGContextAddLineToPoint(ctx, 8.92019, 49.2513);
    CGContextAddQuadCurveToPoint(ctx, 7.81924, 48.7418, 7.02019, 46.8013);
    CGContextClosePath(ctx);
}

static void def_path_31(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 32.1331, 5.13673);
    CGContextAddLineToPoint(ctx, 32.4831, 5.43673);
    CGContextAddLineToPoint(ctx, 32.0331, 5.38673);
    CGContextAddLineToPoint(ctx, 26.1331, 4.18673);
    CGContextAddQuadCurveToPoint(ctx, 21.2831, 2.88673, 15.3831, -0.863273);
    CGContextAddLineToPoint(ctx, 11.1831, -3.86327);
    CGContextAddLineToPoint(ctx, 10.7831, -4.21327);
    CGContextAddLineToPoint(ctx, 11.5831, -4.26327);
    CGContextAddLineToPoint(ctx, 11.8331, -4.26327);
    CGContextAddQuadCurveToPoint(ctx, 14.8831, -4.21327, 18.6331, -3.26327);
    CGContextAddLineToPoint(ctx, 19.1331, -3.06327);
    CGContextAddQuadCurveToPoint(ctx, 18.8331, -1.46327, 19.2831, -0.163273);
    CGContextAddQuadCurveToPoint(ctx, 19.8331, 1.53673, 21.5331, 1.98673);
    CGContextAddQuadCurveToPoint(ctx, 22.7831, 2.33673, 24.3331, 1.28673);
    CGContextAddLineToPoint(ctx, 25.7831, -0.263273);
    CGContextAddLineToPoint(ctx, 26.5831, 0.186727);
    CGContextAddQuadCurveToPoint(ctx, 28.994, 1.76932, 32.1331, 5.13673);
    CGContextClosePath(ctx);
}

static void def_path_32(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.7978, -0.342448);
    CGContextAddLineToPoint(ctx, 24.3478, 1.20755);
    CGContextAddQuadCurveToPoint(ctx, 22.7978, 2.25755, 21.5478, 1.90755);
    CGContextAddQuadCurveToPoint(ctx, 19.8478, 1.45755, 19.2978, -0.242448);
    CGContextAddQuadCurveToPoint(ctx, 18.8478, -1.54245, 19.1478, -3.14245);
    CGContextAddQuadCurveToPoint(ctx, 23.0011, -2.05469, 25.7978, -0.342448);
    CGContextClosePath(ctx);
}

static void def_path_33(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 11.5862, -4.33768);
    CGContextAddQuadCurveToPoint(ctx, 14.8362, -8.58768, 17.9362, -11.1877);
    CGContextAddQuadCurveToPoint(ctx, 23.2862, -15.6377, 27.1862, -14.5877);
    CGContextAddQuadCurveToPoint(ctx, 31.2362, -13.4877, 32.8862, -7.08768);
    CGContextAddQuadCurveToPoint(ctx, 34.2362, -1.48768, 33.1362, 2.71232);
    CGContextAddLineToPoint(ctx, 32.1362, 5.06232);
    CGContextAddQuadCurveToPoint(ctx, 28.9862, 1.71232, 26.5862, 0.112321);
    CGContextAddLineToPoint(ctx, 25.7862, -0.337679);
    CGContextAddQuadCurveToPoint(ctx, 23.0362, -2.08768, 19.1362, -3.13768);
    CGContextAddLineToPoint(ctx, 18.6362, -3.33768);
    CGContextAddQuadCurveToPoint(ctx, 14.8862, -4.28768, 11.8362, -4.33768);
    CGContextAddLineToPoint(ctx, 11.5862, -4.33768);
    CGContextClosePath(ctx);
}

static void def_path_34(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 22.944, 0.570747);
    CGContextAddLineToPoint(ctx, 22.894, 0.0707474);
    CGContextAddQuadCurveToPoint(ctx, 22.944, -0.229253, 23.194, -0.329253);
    CGContextAddLineToPoint(ctx, 23.694, -0.429253);
    CGContextAddQuadCurveToPoint(ctx, 24.044, -0.329253, 24.144, -0.129253);
    CGContextAddLineToPoint(ctx, 24.194, 0.370747);
    CGContextAddLineToPoint(ctx, 23.944, 0.770747);
    CGContextAddLineToPoint(ctx, 23.344, 0.870747);
    CGContextAddLineToPoint(ctx, 22.944, 0.570747);
    CGContextClosePath(ctx);
}

static void def_path_35(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -17.5219, -43.7763);
    CGContextAddLineToPoint(ctx, -18.4719, -44.2763);
    CGContextAddLineToPoint(ctx, -20.6219, -44.6263);
    CGContextAddQuadCurveToPoint(ctx, -22.6719, -44.6263, -23.9219, -42.6763);
    CGContextAddQuadCurveToPoint(ctx, -24.9219, -41.1763, -24.9719, -39.3763);
    CGContextAddLineToPoint(ctx, -24.9719, -39.3263);
    CGContextAddLineToPoint(ctx, -24.8719, -39.3763);
    CGContextAddLineToPoint(ctx, -24.4219, -39.7263);
    CGContextAddLineToPoint(ctx, -23.2719, -40.0763);
    CGContextAddLineToPoint(ctx, -19.9719, -39.7263);
    CGContextAddQuadCurveToPoint(ctx, -18.6719, -39.7263, -17.8219, -40.4763);
    CGContextAddQuadCurveToPoint(ctx, -17.0719, -41.0763, -16.9719, -42.1263);
    CGContextAddLineToPoint(ctx, -16.9719, -42.4763);
    CGContextAddLineToPoint(ctx, -17.0719, -43.0763);
    CGContextAddLineToPoint(ctx, -17.5219, -43.7763);
    CGContextClosePath(ctx);
}

static void def_path_36(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -18.8347, -44.0617);
    CGContextAddQuadCurveToPoint(ctx, -21.6347, -44.0617, -23.2847, -42.1617);
    CGContextAddQuadCurveToPoint(ctx, -23.8847, -41.5617, -24.6847, -39.7617);
    CGContextAddLineToPoint(ctx, -24.6847, -39.7117);
    CGContextAddLineToPoint(ctx, -24.3847, -40.1617);
    CGContextAddQuadCurveToPoint(ctx, -23.7347, -40.9117, -22.5347, -41.4617);
    CGContextAddLineToPoint(ctx, -19.5847, -42.1117);
    CGContextAddQuadCurveToPoint(ctx, -17.4847, -42.5117, -17.0847, -43.0617);
    CGContextAddLineToPoint(ctx, -17.5347, -43.7617);
    CGContextAddLineToPoint(ctx, -18.8347, -44.0617);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -21.346, -40.9226);
    CGContextAddLineToPoint(ctx, -23.896, -40.4226);
    CGContextAddLineToPoint(ctx, -24.696, -39.7226);
    CGContextAddLineToPoint(ctx, -24.896, -39.3726);
    CGContextAddLineToPoint(ctx, -24.446, -39.7226);
    CGContextAddLineToPoint(ctx, -23.296, -40.0726);
    CGContextAddLineToPoint(ctx, -19.996, -39.7226);
    CGContextAddQuadCurveToPoint(ctx, -18.696, -39.7226, -17.846, -40.4726);
    CGContextAddQuadCurveToPoint(ctx, -17.096, -41.0726, -16.996, -42.1226);
    CGContextAddLineToPoint(ctx, -17.546, -41.4726);
    CGContextAddQuadCurveToPoint(ctx, -18.346, -40.8226, -19.846, -40.8226);
    CGContextAddLineToPoint(ctx, -21.346, -40.9226);
    CGContextClosePath(ctx);
}

static void def_path_37(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 23.7431, -39.724);
    CGContextAddLineToPoint(ctx, 24.1931, -39.374);
    CGContextAddLineToPoint(ctx, 24.3431, -39.324);
    CGContextAddLineToPoint(ctx, 24.3431, -39.374);
    CGContextAddQuadCurveToPoint(ctx, 24.2931, -41.174, 23.2431, -42.674);
    CGContextAddQuadCurveToPoint(ctx, 21.9931, -44.624, 19.9431, -44.624);
    CGContextAddLineToPoint(ctx, 17.8431, -44.274);
    CGContextAddLineToPoint(ctx, 16.8431, -43.774);
    CGContextAddLineToPoint(ctx, 16.3931, -43.074);
    CGContextAddLineToPoint(ctx, 16.2931, -42.474);
    CGContextAddLineToPoint(ctx, 16.2931, -42.124);
    CGContextAddQuadCurveToPoint(ctx, 16.3931, -41.074, 17.1431, -40.474);
    CGContextAddQuadCurveToPoint(ctx, 17.9931, -39.724, 19.2931, -39.724);
    CGContextAddLineToPoint(ctx, 22.6431, -40.074);
    CGContextAddLineToPoint(ctx, 23.7431, -39.724);
    CGContextClosePath(ctx);
}

static void def_path_38(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 23.7431, -39.724);
    CGContextAddLineToPoint(ctx, 24.1931, -39.374);
    CGContextAddLineToPoint(ctx, 23.9931, -39.724);
    CGContextAddLineToPoint(ctx, 23.9931, -39.774);
    CGContextAddLineToPoint(ctx, 22.6431, -42.174);
    CGContextAddQuadCurveToPoint(ctx, 20.9431, -44.074, 18.1431, -44.074);
    CGContextAddLineToPoint(ctx, 16.8431, -43.774);
    CGContextAddLineToPoint(ctx, 16.3931, -43.074);
    CGContextAddQuadCurveToPoint(ctx, 16.7931, -42.524, 18.8931, -42.124);
    CGContextAddLineToPoint(ctx, 21.8931, -41.474);
    CGContextAddLineToPoint(ctx, 23.6931, -40.174);
    CGContextAddLineToPoint(ctx, 23.9931, -39.724);
    CGContextAddLineToPoint(ctx, 23.1931, -40.424);
    CGContextAddLineToPoint(ctx, 20.6931, -40.924);
    CGContextAddLineToPoint(ctx, 19.1431, -40.824);
    CGContextAddQuadCurveToPoint(ctx, 17.6431, -40.824, 16.8431, -41.474);
    CGContextAddLineToPoint(ctx, 16.2931, -42.124);
    CGContextAddQuadCurveToPoint(ctx, 16.3931, -41.074, 17.1431, -40.474);
    CGContextAddQuadCurveToPoint(ctx, 17.9931, -39.724, 19.2931, -39.724);
    CGContextAddLineToPoint(ctx, 22.6431, -40.074);
    CGContextAddLineToPoint(ctx, 23.7431, -39.724);
    CGContextClosePath(ctx);
}

static void def_path_39(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -4.9655, -9.87393);
    CGContextAddQuadCurveToPoint(ctx, -9.0155, -8.77393, -10.6655, -2.37393);
    CGContextAddQuadCurveToPoint(ctx, -12.0155, 3.12607, -10.9155, 7.42607);
    CGContextAddLineToPoint(ctx, -9.9155, 9.77607);
    CGContextAddLineToPoint(ctx, -10.2655, 10.0761);
    CGContextAddLineToPoint(ctx, -9.8155, 9.97607);
    CGContextAddLineToPoint(ctx, -3.9155, 8.77607);
    CGContextAddQuadCurveToPoint(ctx, 0.884498, 7.47607, 6.7845, 3.72607);
    CGContextAddLineToPoint(ctx, 10.9845, 0.676071);
    CGContextAddLineToPoint(ctx, 11.3845, 0.326071);
    CGContextAddLineToPoint(ctx, 10.5845, 0.276071);
    CGContextAddQuadCurveToPoint(ctx, 7.3345, -3.87393, 4.2345, -6.52393);
    CGContextAddQuadCurveToPoint(ctx, -1.08442, -10.9584, -4.9655, -9.87393);
    CGContextClosePath(ctx);
}

static void def_path_40(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -0.741972, 5.1938);
    CGContextAddLineToPoint(ctx, -0.691972, 4.6938);
    CGContextAddLineToPoint(ctx, -0.991972, 4.2438);
    CGContextAddLineToPoint(ctx, -1.49197, 4.1938);
    CGContextAddQuadCurveToPoint(ctx, -1.84197, 4.2438, -1.94197, 4.4938);
    CGContextAddLineToPoint(ctx, -1.99197, 5.0438);
    CGContextAddLineToPoint(ctx, -1.74197, 5.4438);
    CGContextAddLineToPoint(ctx, -1.14197, 5.4938);
    CGContextAddLineToPoint(ctx, -0.741972, 5.1938);
    CGContextClosePath(ctx);
}

static void def_path_41(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -2.96789, -0.399523);
    CGContextAddQuadCurveToPoint(ctx, -4.16789, 0.250477, -4.16789, 1.40048);
    CGContextAddQuadCurveToPoint(ctx, -3.96789, 3.45048, -3.51789, 4.20048);
    CGContextAddLineToPoint(ctx, -3.56789, 4.25048);
    CGContextAddLineToPoint(ctx, -3.36789, 4.55048);
    CGContextAddLineToPoint(ctx, -2.11789, 5.85048);
    CGContextAddQuadCurveToPoint(ctx, -0.567886, 6.95048, 0.632114, 6.60048);
    CGContextAddQuadCurveToPoint(ctx, 2.33211, 6.15048, 2.88211, 4.40048);
    CGContextAddQuadCurveToPoint(ctx, 3.28211, 3.25048, 3.08211, 1.90048);
    CGContextAddLineToPoint(ctx, 3.03211, 1.45048);
    CGContextAddQuadCurveToPoint(ctx, 2.88211, 0.600477, 1.83211, -0.0995228);
    CGContextAddQuadCurveToPoint(ctx, 0.582114, -1.04952, -0.917886, -1.04952);
    CGContextAddQuadCurveToPoint(ctx, -1.94054, -1.02735, -2.96789, -0.399523);
    CGContextClosePath(ctx);
}

static void def_path_42(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -4.9655, -9.87393);
    CGContextAddQuadCurveToPoint(ctx, -9.0155, -8.77393, -10.6655, -2.37393);
    CGContextAddQuadCurveToPoint(ctx, -12.0155, 3.12607, -10.9155, 7.42607);
    CGContextAddLineToPoint(ctx, -9.9155, 9.77607);
    CGContextAddQuadCurveToPoint(ctx, -6.7655, 6.37607, -4.3655, 4.82607);
    CGContextAddLineToPoint(ctx, -3.5655, 4.27607);
    CGContextAddQuadCurveToPoint(ctx, -0.765501, 2.57607, 3.0345, 1.47607);
    CGContextAddLineToPoint(ctx, 3.5345, 1.32607);
    CGContextAddQuadCurveToPoint(ctx, 7.2845, 0.326071, 10.3345, 0.276071);
    CGContextAddLineToPoint(ctx, 10.5845, 0.276071);
    CGContextAddQuadCurveToPoint(ctx, 7.3345, -3.87393, 4.2345, -6.52393);
    CGContextAddQuadCurveToPoint(ctx, -1.08442, -10.9584, -4.9655, -9.87393);
    CGContextClosePath(ctx);
}

static void def_path_43(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -32.3043, -22.6016);
    CGContextAddLineToPoint(ctx, -31.6043, -26.7516);
    CGContextAddLineToPoint(ctx, -28.5043, -42.2016);
    CGContextAddQuadCurveToPoint(ctx, -27.3543, -53.1016, -22.7543, -65.2016);
    CGContextAddQuadCurveToPoint(ctx, -14.5543, -44.6516, -11.1543, 21.8484);
    CGContextAddQuadCurveToPoint(ctx, -9.5543, 53.8484, -9.1543, 87.1484);
    CGContextAddLineToPoint(ctx, -9.1543, 87.5984);
    CGContextAddLineToPoint(ctx, -9.1543, 88.1484);
    CGContextAddLineToPoint(ctx, -10.8043, 88.1484);
    CGContextAddLineToPoint(ctx, -12.2543, 88.1484);
    CGContextAddLineToPoint(ctx, -12.8543, 88.0984);
    CGContextAddLineToPoint(ctx, -13.5543, 88.3984);
    CGContextAddQuadCurveToPoint(ctx, -17.6043, 89.1984, -19.8043, 89.8984);
    CGContextAddQuadCurveToPoint(ctx, -22.6043, 90.8484, -26.1543, 92.6984);
    CGContextAddLineToPoint(ctx, -28.7043, 51.4984);
    CGContextAddQuadCurveToPoint(ctx, -31.6194, 1.19857, -32.3043, -22.6016);
    CGContextClosePath(ctx);
}

static void def_path_44(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -8.73244, -1.19857);
    CGContextAddLineToPoint(ctx, -9.38243, -0.498569);
    CGContextAddLineToPoint(ctx, -9.73244, 0.551431);
    CGContextAddQuadCurveToPoint(ctx, -9.73244, 2.00143, -8.98244, 2.55143);
    CGContextAddLineToPoint(ctx, -8.18244, 2.85143);
    CGContextAddLineToPoint(ctx, -4.13243, 2.50143);
    CGContextAddLineToPoint(ctx, -4.13243, 8.95143);
    CGContextAddQuadCurveToPoint(ctx, -4.13243, 13.1514, -3.38243, 15.4014);
    CGContextAddLineToPoint(ctx, -3.08243, 15.3514);
    CGContextAddQuadCurveToPoint(ctx, -1.83243, 14.9514, -1.08243, 13.9514);
    CGContextAddLineToPoint(ctx, -0.382435, 12.6014);
    CGContextAddQuadCurveToPoint(ctx, -0.182435, 14.5514, 0.317565, 15.4014);
    CGContextAddQuadCurveToPoint(ctx, 0.817565, 16.1514, 1.41757, 16.1514);
    CGContextAddLineToPoint(ctx, 2.31757, 15.6014);
    CGContextAddQuadCurveToPoint(ctx, 3.11757, 14.5014, 3.61757, 10.9514);
    CGContextAddLineToPoint(ctx, 3.86757, 6.25143);
    CGContextAddLineToPoint(ctx, 3.91757, 10.9014);
    CGContextAddQuadCurveToPoint(ctx, 4.16757, 13.9014, 5.01757, 14.7514);
    CGContextAddLineToPoint(ctx, 5.81757, 15.0514);
    CGContextAddLineToPoint(ctx, 6.66757, 14.7514);
    CGContextAddQuadCurveToPoint(ctx, 7.86757, 13.8014, 8.11757, 9.65143);
    CGContextAddLineToPoint(ctx, 8.11757, 3.50143);
    CGContextAddLineToPoint(ctx, 8.46757, 3.50143);
    CGContextAddLineToPoint(ctx, 8.51757, 9.15143);
    CGContextAddLineToPoint(ctx, 8.86757, 11.2514);
    CGContextAddLineToPoint(ctx, 9.56757, 12.6014);
    CGContextAddLineToPoint(ctx, 10.5176, 13.7014);
    CGContextAddLineToPoint(ctx, 10.9676, 12.6514);
    CGContextAddQuadCurveToPoint(ctx, 11.9676, 9.70143, 12.2176, 2.20143);
    CGContextAddLineToPoint(ctx, 12.2676, -13.5486);
    CGContextAddLineToPoint(ctx, 11.4676, -15.8486);
    CGContextAddQuadCurveToPoint(ctx, 9.76757, -18.7986, 5.46757, -18.7986);
    CGContextAddQuadCurveToPoint(ctx, 1.76757, -18.7986, -0.682434, -16.4486);
    CGContextAddQuadCurveToPoint(ctx, -3.33243, -14.0986, -3.38243, -10.3986);
    CGContextAddQuadCurveToPoint(ctx, -3.48243, -5.54857, -6.63243, -2.94857);
    CGContextAddLineToPoint(ctx, -8.73244, -1.19857);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -0.570747, 9.64563);
    CGContextAddLineToPoint(ctx, -0.370747, 6.19563);
    CGContextAddLineToPoint(ctx, -0.0707474, 9.84563);
    CGContextAddQuadCurveToPoint(ctx, -0.0207474, 11.5456, -0.370747, 12.6956);
    CGContextAddLineToPoint(ctx, -0.570747, 9.64563);
    CGContextClosePath(ctx);
}

static void def_path_45(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -8.21876, -1.25564);
    CGContextAddLineToPoint(ctx, -9.36876, -0.455644);
    CGContextAddLineToPoint(ctx, -10.4188, 0.544356);
    CGContextAddQuadCurveToPoint(ctx, -12.3188, 2.29436, -12.3188, 3.39436);
    CGContextAddQuadCurveToPoint(ctx, -12.3188, 3.89436, -11.7688, 3.89436);
    CGContextAddQuadCurveToPoint(ctx, -11.0188, 3.89436, -8.96876, 2.59436);
    CGContextAddLineToPoint(ctx, -8.76876, 2.44436);
    CGContextAddLineToPoint(ctx, -6.71876, 0.944356);
    CGContextAddLineToPoint(ctx, -8.21876, -1.25564);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 2.39714, 15.6956);
    CGContextAddLineToPoint(ctx, 2.39714, 14.8956);
    CGContextAddQuadCurveToPoint(ctx, 2.39714, 12.4956, 1.94714, 12.0456);
    CGContextAddLineToPoint(ctx, 0.647139, 11.8456);
    CGContextAddLineToPoint(ctx, 0.647139, 11.8956);
    CGContextAddLineToPoint(ctx, 0.347139, 14.7956);
    CGContextAddLineToPoint(ctx, 0.397139, 15.4956);
    CGContextAddLineToPoint(ctx, 0.647139, 17.3956);
    CGContextAddQuadCurveToPoint(ctx, 0.947139, 18.7456, 1.29714, 18.7456);
    CGContextAddQuadCurveToPoint(ctx, 2.22591, 18.7205, 2.39714, 15.6956);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -1.02735, 15.5243);
    CGContextAddLineToPoint(ctx, -1.07735, 14.0243);
    CGContextAddQuadCurveToPoint(ctx, -1.17735, 11.0243, -2.07735, 11.0243);
    CGContextAddLineToPoint(ctx, -3.02735, 11.2243);
    CGContextAddLineToPoint(ctx, -3.02735, 11.3243);
    CGContextAddLineToPoint(ctx, -3.07735, 15.2743);
    CGContextAddLineToPoint(ctx, -3.07735, 15.4243);
    CGContextAddQuadCurveToPoint(ctx, -2.92735, 18.8243, -1.87735, 18.8243);
    CGContextAddQuadCurveToPoint(ctx, -1.02735, 18.8347, -1.02735, 15.5243);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 9.64563, 12.6706);
    CGContextAddLineToPoint(ctx, 9.74563, 13.3706);
    CGContextAddQuadCurveToPoint(ctx, 10.1456, 15.9206, 10.7956, 15.9206);
    CGContextAddLineToPoint(ctx, 11.0456, 15.8706);
    CGContextAddLineToPoint(ctx, 11.0456, 12.6206);
    CGContextAddLineToPoint(ctx, 10.5956, 10.8206);
    CGContextAddLineToPoint(ctx, 10.0456, 10.8206);
    CGContextAddLineToPoint(ctx, 9.49563, 11.1706);
    CGContextAddQuadCurveToPoint(ctx, 9.47441, 11.9286, 9.64563, 12.6706);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 5.13673, 12.0998);
    CGContextAddLineToPoint(ctx, 5.08673, 13.1498);
    CGContextAddLineToPoint(ctx, 5.08673, 14.2998);
    CGContextAddLineToPoint(ctx, 5.08673, 14.8498);
    CGContextAddLineToPoint(ctx, 5.18673, 15.8998);
    CGContextAddQuadCurveToPoint(ctx, 5.38673, 17.9498, 5.83673, 17.9498);
    CGContextAddQuadCurveToPoint(ctx, 6.38673, 17.9498, 6.58673, 17.4498);
    CGContextAddLineToPoint(ctx, 6.73673, 15.4998);
    CGContextAddLineToPoint(ctx, 6.58673, 11.9998);
    CGContextAddLineToPoint(ctx, 5.58673, 11.9998);
    CGContextAddLineToPoint(ctx, 5.13673, 12.0998);
    CGContextClosePath(ctx);
}

static void def_path_46(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 19.6908, 56.6181);
    CGContextAddQuadCurveToPoint(ctx, 19.6908, 52.0381, 19.9908, 49.1481);
    CGContextAddLineToPoint(ctx, 19.9908, 49.0481);
    CGContextAddLineToPoint(ctx, 19.9908, -4.92185);
    CGContextAddLineToPoint(ctx, 19.9908, -5.84185);
    CGContextAddQuadCurveToPoint(ctx, 20.5608, -26.3918, 24.0608, -39.6918);
    CGContextAddLineToPoint(ctx, 24.4108, -40.9818);
    CGContextAddQuadCurveToPoint(ctx, 26.5408, -48.6918, 29.8508, -54.1418);
    CGContextAddLineToPoint(ctx, 30.5808, -55.4718);
    CGContextAddLineToPoint(ctx, 32.2008, -59.8318);
    CGContextAddLineToPoint(ctx, 32.8408, -60.5619);
    CGContextAddQuadCurveToPoint(ctx, 43.5208, -46.4219, 47.5708, 30.1381);
    CGContextAddLineToPoint(ctx, 47.7108, 32.9881);
    CGContextAddLineToPoint(ctx, 48.6108, 53.3881);
    CGContextAddLineToPoint(ctx, 48.7008, 55.5981);
    CGContextAddLineToPoint(ctx, 48.7308, 56.5181);
    CGContextAddLineToPoint(ctx, 48.8108, 58.7781);
    CGContextAddQuadCurveToPoint(ctx, 49.7208, 66.6581, 49.9508, 76.2081);
    CGContextAddLineToPoint(ctx, 50.0108, 79.6881);
    CGContextAddLineToPoint(ctx, 50.1908, 90.2981);
    CGContextAddLineToPoint(ctx, 50.1908, 92.6981);
    CGContextAddLineToPoint(ctx, 50.1908, 92.8281);
    CGContextAddLineToPoint(ctx, 50.2008, 93.1781);
    CGContextAddLineToPoint(ctx, 50.2008, 93.8581);
    CGContextAddLineToPoint(ctx, 50.2008, 93.9781);
    CGContextAddLineToPoint(ctx, 50.1908, 94.0581);
    CGContextAddLineToPoint(ctx, 50.1908, 94.4981);
    CGContextAddLineToPoint(ctx, 49.7908, 96.2181);
    CGContextAddLineToPoint(ctx, 49.7908, 96.2581);
    CGContextAddLineToPoint(ctx, 49.7608, 96.5581);
    CGContextAddLineToPoint(ctx, 49.6208, 97.2281);
    CGContextAddLineToPoint(ctx, 49.5608, 97.2281);
    CGContextAddLineToPoint(ctx, 49.5408, 97.3081);
    CGContextAddLineToPoint(ctx, 45.4808, 97.6681);
    CGContextAddLineToPoint(ctx, 42.2408, 98.2081);
    CGContextAddLineToPoint(ctx, 39.0208, 99.0681);
    CGContextAddLineToPoint(ctx, 32.3208, 101.018);
    CGContextAddQuadCurveToPoint(ctx, 29.5808, 101.858, 27.2108, 102.638);
    CGContextAddLineToPoint(ctx, 27.2108, 102.638);
    CGContextAddLineToPoint(ctx, 26.5208, 102.608);
    CGContextAddLineToPoint(ctx, 25.9808, 102.698);
    CGContextAddLineToPoint(ctx, 25.8708, 102.708);
    CGContextAddLineToPoint(ctx, 24.4908, 102.738);
    CGContextAddLineToPoint(ctx, 24.3808, 102.288);
    CGContextAddLineToPoint(ctx, 24.0708, 100.688);
    CGContextAddLineToPoint(ctx, 23.9608, 99.8781);
    CGContextAddLineToPoint(ctx, 22.5708, 91.8581);
    CGContextAddLineToPoint(ctx, 22.4608, 91.1581);
    CGContextAddQuadCurveToPoint(ctx, 19.6908, 73.2481, 19.6908, 56.6581);
    CGContextAddLineToPoint(ctx, 19.6908, 56.6181);
    CGContextClosePath(ctx);
}

static void def_path_47(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 6.84897, -292.736);
    CGContextAddLineToPoint(ctx, 1.14897, -293.036);
    CGContextAddLineToPoint(ctx, -2.15103, -292.986);
    CGContextAddLineToPoint(ctx, -2.20103, -293.536);
    CGContextAddLineToPoint(ctx, -2.20103, -293.836);
    CGContextAddLineToPoint(ctx, -4.45103, -294.236);
    CGContextAddLineToPoint(ctx, -9.05103, -294.636);
    CGContextAddQuadCurveToPoint(ctx, -37.651, -294.636, -51.351, -265.286);
    CGContextAddLineToPoint(ctx, -50.601, -266.136);
    CGContextAddQuadCurveToPoint(ctx, -53.951, -259.936, -56.451, -251.586);
    CGContextAddQuadCurveToPoint(ctx, -61.151, -235.736, -61.151, -220.486);
    CGContextAddQuadCurveToPoint(ctx, -61.151, -207.086, -57.301, -188.586);
    CGContextAddLineToPoint(ctx, -55.251, -178.036);
    CGContextAddLineToPoint(ctx, -55.051, -178.136);
    CGContextAddLineToPoint(ctx, -54.351, -173.836);
    CGContextAddLineToPoint(ctx, -51.401, -159.586);
    CGContextAddQuadCurveToPoint(ctx, -46.151, -136.786, -46.151, -119.586);
    CGContextAddQuadCurveToPoint(ctx, -46.151, -116.286, -47.201, -109.636);
    CGContextAddQuadCurveToPoint(ctx, -48.201, -103.136, -50.251, -93.4863);
    CGContextAddQuadCurveToPoint(ctx, -54.451, -73.9863, -54.451, -64.0363);
    CGContextAddQuadCurveToPoint(ctx, -54.451, -55.6363, -53.301, -50.6363);
    CGContextAddQuadCurveToPoint(ctx, -52.701, -48.0863, -51.751, -45.5363);
    CGContextAddQuadCurveToPoint(ctx, -49.401, -45.4363, -47.401, -45.6363);
    CGContextAddLineToPoint(ctx, -44.151, -46.2863);
    CGContextAddQuadCurveToPoint(ctx, -46.551, -52.6363, -47.551, -57.8363);
    CGContextAddQuadCurveToPoint(ctx, -48.451, -62.6363, -48.451, -70.0363);
    CGContextAddQuadCurveToPoint(ctx, -48.451, -78.8363, -45.701, -92.8863);
    CGContextAddQuadCurveToPoint(ctx, -43.001, -106.936, -43.001, -110.836);
    CGContextAddQuadCurveToPoint(ctx, -43.001, -128.786, -45.601, -155.836);
    CGContextAddQuadCurveToPoint(ctx, -47.251, -172.986, -47.801, -183.186);
    CGContextAddLineToPoint(ctx, -47.851, -183.086);
    CGContextAddLineToPoint(ctx, -47.851, -183.186);
    CGContextAddLineToPoint(ctx, -47.851, -184.136);
    CGContextAddLineToPoint(ctx, -47.801, -187.436);
    CGContextAddLineToPoint(ctx, -47.701, -190.886);
    CGContextAddLineToPoint(ctx, -47.801, -196.136);
    CGContextAddLineToPoint(ctx, -47.751, -199.136);
    CGContextAddQuadCurveToPoint(ctx, -46.051, -206.636, -45.051, -214.786);
    CGContextAddQuadCurveToPoint(ctx, -43.151, -230.886, -40.451, -236.536);
    CGContextAddLineToPoint(ctx, -34.951, -247.036);
    CGContextAddQuadCurveToPoint(ctx, -34.051, -252.436, -31.151, -256.686);
    CGContextAddQuadCurveToPoint(ctx, -27.551, -261.886, -21.851, -264.136);
    CGContextAddQuadCurveToPoint(ctx, -17.701, -265.786, -14.201, -265.236);
    CGContextAddQuadCurveToPoint(ctx, -12.351, -266.186, -9.85103, -265.936);
    CGContextAddQuadCurveToPoint(ctx, -6.65103, -265.636, -4.40103, -263.486);
    CGContextAddLineToPoint(ctx, -4.20103, -263.286);
    CGContextAddLineToPoint(ctx, -2.65103, -262.636);
    CGContextAddLineToPoint(ctx, -0.0510289, -261.836);
    CGContextAddLineToPoint(ctx, -0.0510289, -261.236);
    CGContextAddLineToPoint(ctx, 0.348971, -260.936);
    CGContextAddLineToPoint(ctx, 1.59897, -261.586);
    CGContextAddLineToPoint(ctx, 3.74897, -262.486);
    CGContextAddQuadCurveToPoint(ctx, 7.24897, -263.936, 9.09897, -263.936);
    CGContextAddQuadCurveToPoint(ctx, 21.699, -263.936, 30.399, -244.336);
    CGContextAddQuadCurveToPoint(ctx, 36.199, -231.186, 38.049, -214.636);
    CGContextAddLineToPoint(ctx, 38.199, -212.636);
    CGContextAddLineToPoint(ctx, 38.549, -208.036);
    CGContextAddLineToPoint(ctx, 38.499, -205.236);
    CGContextAddLineToPoint(ctx, 38.549, -201.086);
    CGContextAddQuadCurveToPoint(ctx, 38.549, -189.436, 35.049, -176.186);
    CGContextAddQuadCurveToPoint(ctx, 31.349, -162.036, 23.149, -143.836);
    CGContextAddLineToPoint(ctx, 21.599, -140.736);
    CGContextAddLineToPoint(ctx, 14.499, -126.736);
    CGContextAddQuadCurveToPoint(ctx, 9.79897, -117.136, 7.74897, -108.736);
    CGContextAddQuadCurveToPoint(ctx, 6.64897, -104.436, 4.14897, -89.2863);
    CGContextAddLineToPoint(ctx, 3.74897, -87.0863);
    CGContextAddQuadCurveToPoint(ctx, 0.798968, -69.8863, 0.398968, -62.4863);
    CGContextAddLineToPoint(ctx, 0.298968, -60.2363);
    CGContextAddQuadCurveToPoint(ctx, 0.298968, -57.3363, 0.598968, -54.5863);
    CGContextAddLineToPoint(ctx, 3.44897, -53.1863);
    CGContextAddQuadCurveToPoint(ctx, 7.49897, -51.3863, 9.44897, -51.3863);
    CGContextAddLineToPoint(ctx, 13.649, -52.2863);
    CGContextAddLineToPoint(ctx, 13.149, -53.7863);
    CGContextAddQuadCurveToPoint(ctx, 11.999, -57.4363, 11.549, -62.1863);
    CGContextAddQuadCurveToPoint(ctx, 11.149, -65.6363, 11.149, -69.7363);
    CGContextAddQuadCurveToPoint(ctx, 11.149, -87.2863, 17.449, -110.186);
    CGContextAddQuadCurveToPoint(ctx, 21.899, -126.336, 29.999, -146.686);
    CGContextAddLineToPoint(ctx, 31.649, -150.936);
    CGContextAddLineToPoint(ctx, 33.299, -154.536);
    CGContextAddLineToPoint(ctx, 36.649, -162.936);
    CGContextAddLineToPoint(ctx, 39.299, -169.986);
    CGContextAddQuadCurveToPoint(ctx, 45.549, -184.886, 46.749, -188.636);
    CGContextAddLineToPoint(ctx, 48.549, -195.736);
    CGContextAddLineToPoint(ctx, 48.549, -192.486);
    CGContextAddQuadCurveToPoint(ctx, 48.549, -189.536, 46.249, -179.786);
    CGContextAddLineToPoint(ctx, 41.299, -158.886);
    CGContextAddQuadCurveToPoint(ctx, 33.999, -127.586, 33.999, -111.136);
    CGContextAddQuadCurveToPoint(ctx, 33.999, -104.436, 34.149, -102.786);
    CGContextAddLineToPoint(ctx, 34.149, -102.686);
    CGContextAddQuadCurveToPoint(ctx, 32.849, -92.5364, 32.599, -85.0864);
    CGContextAddLineToPoint(ctx, 32.549, -81.9364);
    CGContextAddQuadCurveToPoint(ctx, 32.549, -70.4364, 34.399, -62.4364);
    CGContextAddQuadCurveToPoint(ctx, 35.349, -58.1364, 36.899, -54.1864);
    CGContextAddQuadCurveToPoint(ctx, 37.999, -51.4364, 39.349, -48.7864);
    CGContextAddLineToPoint(ctx, 40.249, -48.7864);
    CGContextAddQuadCurveToPoint(ctx, 42.049, -49.1364, 46.049, -52.0864);
    CGContextAddLineToPoint(ctx, 47.849, -53.4364);
    CGContextAddLineToPoint(ctx, 44.749, -57.6364);
    CGContextAddQuadCurveToPoint(ctx, 41.499, -62.8364, 40.049, -68.8864);
    CGContextAddQuadCurveToPoint(ctx, 38.249, -75.7364, 38.249, -88.2864);
    CGContextAddQuadCurveToPoint(ctx, 38.249, -111.236, 50.399, -156.086);
    CGContextAddLineToPoint(ctx, 54.749, -172.036);
    CGContextAddLineToPoint(ctx, 57.749, -180.786);
    CGContextAddQuadCurveToPoint(ctx, 60.349, -188.986, 61.799, -195.436);
    CGContextAddLineToPoint(ctx, 62.349, -200.636);
    CGContextAddLineToPoint(ctx, 62.499, -205.286);
    CGContextAddLineToPoint(ctx, 62.499, -205.636);
    CGContextAddLineToPoint(ctx, 62.499, -206.336);
    CGContextAddLineToPoint(ctx, 62.599, -211.836);
    CGContextAddLineToPoint(ctx, 62.599, -212.886);
    CGContextAddLineToPoint(ctx, 62.599, -215.936);
    CGContextAddLineToPoint(ctx, 62.499, -216.536);
    CGContextAddLineToPoint(ctx, 60.799, -225.736);
    CGContextAddLineToPoint(ctx, 60.399, -227.736);
    CGContextAddLineToPoint(ctx, 59.749, -230.686);
    CGContextAddLineToPoint(ctx, 59.849, -230.686);
    CGContextAddQuadCurveToPoint(ctx, 58.449, -238.036, 56.549, -244.536);
    CGContextAddQuadCurveToPoint(ctx, 54.799, -250.136, 51.949, -255.686);
    CGContextAddLineToPoint(ctx, 46.549, -266.036);
    CGContextAddQuadCurveToPoint(ctx, 44.249, -270.586, 39.999, -275.436);
    CGContextAddQuadCurveToPoint(ctx, 35.049, -281.086, 29.799, -284.286);
    CGContextAddQuadCurveToPoint(ctx, 27.399, -285.736, 23.849, -288.536);
    CGContextAddQuadCurveToPoint(ctx, 20.349, -290.736, 15.249, -291.536);
    CGContextAddLineToPoint(ctx, 6.84897, -292.736);
    CGContextClosePath(ctx);
}

static void def_path_48(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.970271, -294.449);
    CGContextAddLineToPoint(ctx, -1.72973, -293.749);
    CGContextAddLineToPoint(ctx, -2.22973, -293.549);
    CGContextAddLineToPoint(ctx, -1.02973, -280.299);
    CGContextAddQuadCurveToPoint(ctx, -2.72973, -281.499, -5.02973, -282.749);
    CGContextAddQuadCurveToPoint(ctx, -10.2797, -285.549, -14.3297, -285.549);
    CGContextAddQuadCurveToPoint(ctx, -29.7297, -285.549, -43.4797, -273.649);
    CGContextAddQuadCurveToPoint(ctx, -47.7297, -269.849, -51.3797, -265.299);
    CGContextAddLineToPoint(ctx, -52.0797, -263.949);
    CGContextAddQuadCurveToPoint(ctx, -57.0297, -252.749, -59.5797, -238.549);
    CGContextAddLineToPoint(ctx, -60.6797, -231.749);
    CGContextAddLineToPoint(ctx, -61.5797, -223.749);
    CGContextAddQuadCurveToPoint(ctx, -61.5797, -207.599, -62.3797, -184.399);
    CGContextAddLineToPoint(ctx, -63.8797, -144.399);
    CGContextAddQuadCurveToPoint(ctx, -64.1797, -134.049, -67.3797, -122.949);
    CGContextAddQuadCurveToPoint(ctx, -70.4797, -112.299, -75.5797, -103.199);
    CGContextAddLineToPoint(ctx, -75.8797, -102.749);
    CGContextAddLineToPoint(ctx, -79.8797, -96.2986);
    CGContextAddQuadCurveToPoint(ctx, -83.2797, -90.4486, -85.7797, -84.2486);
    CGContextAddQuadCurveToPoint(ctx, -92.6797, -67.3486, -93.4297, -47.2986);
    CGContextAddQuadCurveToPoint(ctx, -90.7797, -45.8486, -86.5297, -44.8486);
    CGContextAddQuadCurveToPoint(ctx, -81.1297, -43.4986, -76.2797, -43.3986);
    CGContextAddLineToPoint(ctx, -76.4297, -47.3986);
    CGContextAddQuadCurveToPoint(ctx, -76.4297, -66.6986, -69.4797, -89.3486);
    CGContextAddLineToPoint(ctx, -63.3297, -108.849);
    CGContextAddQuadCurveToPoint(ctx, -59.7797, -120.449, -57.7797, -130.499);
    CGContextAddLineToPoint(ctx, -57.7297, -131.299);
    CGContextAddLineToPoint(ctx, -56.9797, -144.149);
    CGContextAddQuadCurveToPoint(ctx, -56.1797, -159.699, -56.1797, -164.099);
    CGContextAddQuadCurveToPoint(ctx, -56.1797, -183.099, -56.5797, -207.199);
    CGContextAddLineToPoint(ctx, -56.8797, -207.299);
    CGContextAddLineToPoint(ctx, -56.4797, -212.549);
    CGContextAddLineToPoint(ctx, -55.9297, -218.699);
    CGContextAddQuadCurveToPoint(ctx, -55.4797, -227.349, -54.2297, -234.599);
    CGContextAddQuadCurveToPoint(ctx, -52.0297, -247.349, -47.3797, -255.799);
    CGContextAddLineToPoint(ctx, -47.1797, -256.249);
    CGContextAddQuadCurveToPoint(ctx, -36.5297, -275.149, -12.2297, -275.149);
    CGContextAddLineToPoint(ctx, -4.82973, -274.849);
    CGContextAddQuadCurveToPoint(ctx, -3.52973, -274.499, -0.929731, -272.749);
    CGContextAddLineToPoint(ctx, -0.879731, -272.799);
    CGContextAddLineToPoint(ctx, -0.579731, -273.049);
    CGContextAddLineToPoint(ctx, -0.679731, -274.499);
    CGContextAddLineToPoint(ctx, -1.02973, -279.999);
    CGContextAddLineToPoint(ctx, -0.729732, -280.149);
    CGContextAddQuadCurveToPoint(ctx, 1.27027, -281.399, 3.37027, -281.799);
    CGContextAddLineToPoint(ctx, 12.5703, -282.099);
    CGContextAddQuadCurveToPoint(ctx, 36.5203, -282.099, 49.6703, -258.049);
    CGContextAddQuadCurveToPoint(ctx, 58.2203, -242.549, 62.4703, -216.549);
    CGContextAddQuadCurveToPoint(ctx, 61.5703, -250.949, 47.1203, -272.349);
    CGContextAddQuadCurveToPoint(ctx, 32.0203, -294.649, 7.62027, -294.649);
    CGContextAddLineToPoint(ctx, 0.970271, -294.449);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 7.99046, -268.08);
    CGContextAddQuadCurveToPoint(ctx, 22.4405, -268.08, 31.5405, -254.23);
    CGContextAddQuadCurveToPoint(ctx, 35.7905, -247.73, 38.8905, -238.08);
    CGContextAddLineToPoint(ctx, 39.4905, -235.93);
    CGContextAddLineToPoint(ctx, 40.5405, -232.18);
    CGContextAddLineToPoint(ctx, 40.4905, -232.18);
    CGContextAddLineToPoint(ctx, 40.8905, -230.43);
    CGContextAddQuadCurveToPoint(ctx, 44.5405, -215.03, 44.5405, -204.03);
    CGContextAddQuadCurveToPoint(ctx, 44.5405, -195.03, 40.2405, -178.43);
    CGContextAddLineToPoint(ctx, 38.9405, -173.53);
    CGContextAddLineToPoint(ctx, 33.3905, -149.58);
    CGContextAddQuadCurveToPoint(ctx, 23.4405, -106.58, 23.4405, -79.6301);
    CGContextAddQuadCurveToPoint(ctx, 22.9405, -70.6801, 24.0905, -59.9301);
    CGContextAddLineToPoint(ctx, 25.2405, -51.9301);
    CGContextAddLineToPoint(ctx, 25.9405, -48.3301);
    CGContextAddQuadCurveToPoint(ctx, 29.1405, -47.3801, 31.1405, -47.3801);
    CGContextAddLineToPoint(ctx, 39.5905, -49.2801);
    CGContextAddQuadCurveToPoint(ctx, 35.7405, -56.9301, 34.1905, -64.2301);
    CGContextAddQuadCurveToPoint(ctx, 33.0405, -69.7301, 32.9905, -76.3301);
    CGContextAddLineToPoint(ctx, 33.1405, -86.7801);
    CGContextAddQuadCurveToPoint(ctx, 33.1405, -118.48, 42.2405, -157.53);
    CGContextAddLineToPoint(ctx, 46.4905, -174.23);
    CGContextAddLineToPoint(ctx, 46.2405, -174.33);
    CGContextAddLineToPoint(ctx, 47.9905, -180.63);
    CGContextAddLineToPoint(ctx, 48.4905, -182.58);
    CGContextAddQuadCurveToPoint(ctx, 50.2405, -191.08, 50.2405, -199.48);
    CGContextAddQuadCurveToPoint(ctx, 50.2405, -210.88, 48.6405, -221.58);
    CGContextAddLineToPoint(ctx, 47.5405, -227.58);
    CGContextAddLineToPoint(ctx, 47.2905, -229.03);
    CGContextAddQuadCurveToPoint(ctx, 45.6905, -236.48, 43.4905, -242.58);
    CGContextAddLineToPoint(ctx, 43.0905, -243.73);
    CGContextAddLineToPoint(ctx, 42.2905, -245.73);
    CGContextAddQuadCurveToPoint(ctx, 40.5405, -249.93, 38.5405, -253.53);
    CGContextAddQuadCurveToPoint(ctx, 27.1405, -274.38, 9.44047, -274.38);
    CGContextAddLineToPoint(ctx, 1.54047, -274.08);
    CGContextAddQuadCurveToPoint(ctx, 0.240475, -273.73, -0.559525, -273.03);
    CGContextAddLineToPoint(ctx, -0.559525, -272.73);
    CGContextAddLineToPoint(ctx, -0.559525, -272.48);
    CGContextAddLineToPoint(ctx, -0.309525, -267.28);
    CGContextAddLineToPoint(ctx, 1.29047, -267.88);
    CGContextAddLineToPoint(ctx, 7.99046, -268.08);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -1.48394, -266.311);
    CGContextAddLineToPoint(ctx, -5.58394, -267.461);
    CGContextAddLineToPoint(ctx, -11.9339, -268.761);
    CGContextAddQuadCurveToPoint(ctx, -30.3839, -268.761, -39.4339, -249.061);
    CGContextAddQuadCurveToPoint(ctx, -41.4839, -244.711, -43.0339, -239.411);
    CGContextAddQuadCurveToPoint(ctx, -45.7339, -230.211, -46.8839, -218.011);
    CGContextAddLineToPoint(ctx, -47.5339, -208.961);
    CGContextAddLineToPoint(ctx, -47.7339, -205.861);
    CGContextAddLineToPoint(ctx, -47.9339, -205.861);
    CGContextAddQuadCurveToPoint(ctx, -48.7839, -198.161, -48.7839, -191.461);
    CGContextAddLineToPoint(ctx, -48.7339, -189.461);
    CGContextAddLineToPoint(ctx, -48.6339, -186.911);
    CGContextAddLineToPoint(ctx, -48.6339, -186.061);
    CGContextAddLineToPoint(ctx, -48.534, -184.561);
    CGContextAddLineToPoint(ctx, -48.3839, -182.611);
    CGContextAddLineToPoint(ctx, -46.534, -159.561);
    CGContextAddLineToPoint(ctx, -46.684, -159.611);
    CGContextAddLineToPoint(ctx, -45.384, -148.561);
    CGContextAddLineToPoint(ctx, -44.634, -142.461);
    CGContextAddLineToPoint(ctx, -39.284, -123.761);
    CGContextAddQuadCurveToPoint(ctx, -35.384, -110.661, -35.384, -99.5607);
    CGContextAddQuadCurveToPoint(ctx, -35.384, -95.6607, -37.384, -79.6107);
    CGContextAddLineToPoint(ctx, -38.484, -70.0107);
    CGContextAddQuadCurveToPoint(ctx, -39.384, -60.6107, -39.384, -54.5107);
    CGContextAddQuadCurveToPoint(ctx, -39.384, -47.0107, -38.984, -45.2107);
    CGContextAddLineToPoint(ctx, -38.034, -42.0107);
    CGContextAddLineToPoint(ctx, -32.234, -41.6607);
    CGContextAddLineToPoint(ctx, -28.384, -41.6107);
    CGContextAddLineToPoint(ctx, -29.134, -45.6607);
    CGContextAddQuadCurveToPoint(ctx, -30.234, -50.5607, -30.234, -53.0607);
    CGContextAddQuadCurveToPoint(ctx, -30.234, -61.4107, -29.134, -70.4107);
    CGContextAddQuadCurveToPoint(ctx, -27.984, -79.4107, -27.984, -83.6107);
    CGContextAddQuadCurveToPoint(ctx, -27.984, -104.911, -30.384, -116.861);
    CGContextAddQuadCurveToPoint(ctx, -31.584, -122.761, -35.684, -133.561);
    CGContextAddQuadCurveToPoint(ctx, -39.384, -143.311, -40.984, -154.011);
    CGContextAddLineToPoint(ctx, -41.384, -154.011);
    CGContextAddQuadCurveToPoint(ctx, -43.934, -170.511, -43.934, -178.611);
    CGContextAddQuadCurveToPoint(ctx, -43.934, -189.061, -43.384, -198.611);
    CGContextAddLineToPoint(ctx, -42.634, -207.761);
    CGContextAddLineToPoint(ctx, -42.584, -208.711);
    CGContextAddQuadCurveToPoint(ctx, -41.234, -223.011, -38.534, -233.161);
    CGContextAddLineToPoint(ctx, -37.834, -236.311);
    CGContextAddQuadCurveToPoint(ctx, -36.834, -241.011, -35.334, -245.011);
    CGContextAddQuadCurveToPoint(ctx, -28.284, -264.561, -13.284, -264.561);
    CGContextAddQuadCurveToPoint(ctx, -9.58395, -264.561, -4.63396, -263.011);
    CGContextAddQuadCurveToPoint(ctx, -1.58396, -262.061, -0.133955, -261.211);
    CGContextAddLineToPoint(ctx, -0.333955, -266.111);
    CGContextAddLineToPoint(ctx, -1.48394, -266.311);
    CGContextClosePath(ctx);
}

static void def_path_49(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 49.9973, 0);
    CGContextAddQuadCurveToPoint(ctx, 49.9973, -6.95, 35.3473, -11.85);
    CGContextAddQuadCurveToPoint(ctx, 20.6973, -16.75, 0.0472713, -16.75);
    CGContextAddQuadCurveToPoint(ctx, -20.6027, -16.75, -35.3027, -11.85);
    CGContextAddQuadCurveToPoint(ctx, -49.9027, -6.95, -49.9027, -2.86102e-07);
    CGContextAddQuadCurveToPoint(ctx, -49.9027, 6.95, -35.3027, 11.85);
    CGContextAddQuadCurveToPoint(ctx, -20.6027, 16.75, 0.047274, 16.75);
    CGContextAddQuadCurveToPoint(ctx, 20.6973, 16.75, 35.3473, 11.85);
    CGContextAddQuadCurveToPoint(ctx, 49.9973, 6.95838, 49.9973, 0);
    CGContextClosePath(ctx);
}

static void def_path_50(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 232.18, -489.987);
    CGContextAddQuadCurveToPoint(ctx, 236.13, -489.887, 245.38, -496.287);
    CGContextAddQuadCurveToPoint(ctx, 254.58, -502.737, 255.18, -506.687);
    CGContextAddLineToPoint(ctx, 254.18, -506.937);
    CGContextAddQuadCurveToPoint(ctx, 251.23, -506.287, 241.98, -499.437);
    CGContextAddQuadCurveToPoint(ctx, 235.33, -494.437, 232.68, -491.387);
    CGContextAddLineToPoint(ctx, 232.18, -489.987);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 270.763, -339.081);
    CGContextAddLineToPoint(ctx, 270.213, -339.881);
    CGContextAddQuadCurveToPoint(ctx, 264.663, -338.231, 253.613, -327.431);
    CGContextAddLineToPoint(ctx, 250.913, -324.631);
    CGContextAddQuadCurveToPoint(ctx, 245.263, -318.831, 243.313, -315.181);
    CGContextAddLineToPoint(ctx, 243.263, -314.931);
    CGContextAddLineToPoint(ctx, 244.363, -314.431);
    CGContextAddQuadCurveToPoint(ctx, 245.263, -313.931, 246.713, -313.931);
    CGContextAddQuadCurveToPoint(ctx, 248.163, -313.931, 251.963, -315.781);
    CGContextAddQuadCurveToPoint(ctx, 256.263, -317.931, 260.263, -320.831);
    CGContextAddQuadCurveToPoint(ctx, 271.263, -328.981, 271.263, -337.031);
    CGContextAddQuadCurveToPoint(ctx, 271.276, -338.51, 270.763, -339.081);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 253.184, -267.966);
    CGContextAddQuadCurveToPoint(ctx, 251.034, -267.516, 245.584, -262.216);
    CGContextAddLineToPoint(ctx, 241.534, -258.016);
    CGContextAddQuadCurveToPoint(ctx, 246.134, -258.466, 248.834, -260.066);
    CGContextAddQuadCurveToPoint(ctx, 252.984, -262.466, 254.184, -267.616);
    CGContextAddLineToPoint(ctx, 253.184, -267.966);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 338.282, -306.891);
    CGContextAddLineToPoint(ctx, 332.832, -302.041);
    CGContextAddLineToPoint(ctx, 332.482, -301.791);
    CGContextAddLineToPoint(ctx, 330.132, -298.341);
    CGContextAddQuadCurveToPoint(ctx, 328.482, -296.041, 328.182, -293.891);
    CGContextAddQuadCurveToPoint(ctx, 329.282, -293.641, 333.632, -296.191);
    CGContextAddQuadCurveToPoint(ctx, 338.532, -299.041, 340.232, -301.991);
    CGContextAddLineToPoint(ctx, 340.232, -306.891);
    CGContextAddLineToPoint(ctx, 338.282, -306.891);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 150.278, -344.389);
    CGContextAddLineToPoint(ctx, 150.178, -344.939);
    CGContextAddQuadCurveToPoint(ctx, 145.378, -344.689, 138.978, -338.139);
    CGContextAddQuadCurveToPoint(ctx, 134.478, -333.489, 132.978, -329.189);
    CGContextAddQuadCurveToPoint(ctx, 139.028, -330.739, 143.878, -334.139);
    CGContextAddQuadCurveToPoint(ctx, 149.978, -338.339, 151.178, -343.889);
    CGContextAddQuadCurveToPoint(ctx, 150.563, -343.875, 150.278, -344.389);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 80.9891, -240.97);
    CGContextAddLineToPoint(ctx, 80.9891, -238.92);
    CGContextAddQuadCurveToPoint(ctx, 85.439, -239.77, 91.2391, -244.97);
    CGContextAddLineToPoint(ctx, 97.939, -250.97);
    CGContextAddLineToPoint(ctx, 97.939, -252.87);
    CGContextAddLineToPoint(ctx, 92.939, -252.87);
    CGContextAddQuadCurveToPoint(ctx, 92.289, -252.27, 88.5891, -250.97);
    CGContextAddLineToPoint(ctx, 86.8891, -248.77);
    CGContextAddLineToPoint(ctx, 80.9891, -240.97);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 132.984, -155.928);
    CGContextAddQuadCurveToPoint(ctx, 128.734, -155.428, 120.584, -146.178);
    CGContextAddQuadCurveToPoint(ctx, 116.134, -141.128, 113.984, -137.628);
    CGContextAddLineToPoint(ctx, 113.984, -135.878);
    CGContextAddQuadCurveToPoint(ctx, 123.334, -141.728, 126.234, -144.178);
    CGContextAddQuadCurveToPoint(ctx, 133.84, -150.506, 132.984, -155.928);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 54.0498, -203.985);
    CGContextAddQuadCurveToPoint(ctx, 55.7498, -204.185, 60.6498, -209.435);
    CGContextAddQuadCurveToPoint(ctx, 65.5498, -214.685, 65.9998, -216.935);
    CGContextAddLineToPoint(ctx, 60.9998, -216.935);
    CGContextAddQuadCurveToPoint(ctx, 59.4998, -213.985, 56.0498, -209.735);
    CGContextAddLineToPoint(ctx, 54.5998, -207.935);
    CGContextAddLineToPoint(ctx, 54.3498, -207.235);
    CGContextAddQuadCurveToPoint(ctx, 53.7073, -205.012, 54.0498, -203.985);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 19.9191, -117.973);
    CGContextAddLineToPoint(ctx, 17.9691, -117.973);
    CGContextAddLineToPoint(ctx, 3.16908, -103.773);
    CGContextAddLineToPoint(ctx, -5.48092, -94.6735);
    CGContextAddQuadCurveToPoint(ctx, -6.73092, -92.2735, -6.98092, -90.1235);
    CGContextAddLineToPoint(ctx, -5.98092, -90.0235);
    CGContextAddLineToPoint(ctx, 6.51908, -99.1735);
    CGContextAddQuadCurveToPoint(ctx, 16.5691, -106.523, 19.9191, -112.973);
    CGContextAddLineToPoint(ctx, 19.9191, -117.973);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 53.3649, -17.579);
    CGContextAddQuadCurveToPoint(ctx, 61.0149, -22.729, 61.0149, -27.479);
    CGContextAddLineToPoint(ctx, 61.0149, -29.929);
    CGContextAddQuadCurveToPoint(ctx, 56.7649, -29.629, 50.0649, -21.929);
    CGContextAddQuadCurveToPoint(ctx, 45.3149, -16.429, 43.5149, -12.979);
    CGContextAddQuadCurveToPoint(ctx, 47.1437, -13.3555, 53.3649, -17.579);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 161.522, -10.5018);
    CGContextAddQuadCurveToPoint(ctx, 150.122, 0.698248, 151.322, 4.99825);
    CGContextAddQuadCurveToPoint(ctx, 155.422, 4.74825, 163.622, -2.45175);
    CGContextAddLineToPoint(ctx, 165.222, -3.90175);
    CGContextAddLineToPoint(ctx, 172.272, -10.9018);
    CGContextAddLineToPoint(ctx, 172.272, -16.9518);
    CGContextAddLineToPoint(ctx, 168.522, -16.9518);
    CGContextAddLineToPoint(ctx, 165.222, -13.9518);
    CGContextAddLineToPoint(ctx, 161.522, -10.5018);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 249.188, 28.994);
    CGContextAddQuadCurveToPoint(ctx, 255.138, 27.994, 259.938, 25.294);
    CGContextAddQuadCurveToPoint(ctx, 266.338, 21.694, 266.138, 17.094);
    CGContextAddQuadCurveToPoint(ctx, 260.638, 16.094, 252.838, 23.844);
    CGContextAddLineToPoint(ctx, 249.138, 27.944);
    CGContextAddQuadCurveToPoint(ctx, 249.017, 28.5374, 249.188, 28.994);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 161.065, 204.099);
    CGContextAddQuadCurveToPoint(ctx, 159.165, 204.099, 156.715, 206.449);
    CGContextAddQuadCurveToPoint(ctx, 154.215, 208.799, 151.165, 213.499);
    CGContextAddLineToPoint(ctx, 151.165, 217.099);
    CGContextAddQuadCurveToPoint(ctx, 156.015, 216.599, 159.965, 213.349);
    CGContextAddQuadCurveToPoint(ctx, 164.015, 209.999, 165.165, 205.149);
    CGContextAddLineToPoint(ctx, 163.665, 204.649);
    CGContextAddQuadCurveToPoint(ctx, 162.549, 204.099, 161.065, 204.099);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 235.89, 258.377);
    CGContextAddLineToPoint(ctx, 231.99, 262.727);
    CGContextAddQuadCurveToPoint(ctx, 228.84, 266.477, 228.24, 268.127);
    CGContextAddQuadCurveToPoint(ctx, 232.49, 267.877, 237.69, 263.227);
    CGContextAddQuadCurveToPoint(ctx, 242.69, 258.727, 243.29, 255.127);
    CGContextAddQuadCurveToPoint(ctx, 239.6, 255.524, 235.89, 258.377);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -130.13, -286.915);
    CGContextAddLineToPoint(ctx, -132.78, -285.915);
    CGContextAddLineToPoint(ctx, -134.68, -284.015);
    CGContextAddQuadCurveToPoint(ctx, -138.73, -279.465, -137.88, -277.865);
    CGContextAddLineToPoint(ctx, -132.93, -277.865);
    CGContextAddLineToPoint(ctx, -125.93, -283.315);
    CGContextAddQuadCurveToPoint(ctx, -121.18, -286.615, -119.93, -288.065);
    CGContextAddLineToPoint(ctx, -119.93, -289.915);
    CGContextAddLineToPoint(ctx, -125.83, -289.915);
    CGContextAddQuadCurveToPoint(ctx, -127.105, -287.942, -130.13, -286.915);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -144.057, -155.928);
    CGContextAddLineToPoint(ctx, -151.457, -149.028);
    CGContextAddLineToPoint(ctx, -155.607, -144.928);
    CGContextAddLineToPoint(ctx, -156.207, -144.278);
    CGContextAddLineToPoint(ctx, -156.857, -142.278);
    CGContextAddLineToPoint(ctx, -155.957, -141.928);
    CGContextAddLineToPoint(ctx, -149.107, -146.778);
    CGContextAddQuadCurveToPoint(ctx, -145.357, -149.178, -144.057, -150.978);
    CGContextAddLineToPoint(ctx, -144.057, -155.928);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -104.047, -67.9189);
    CGContextAddLineToPoint(ctx, -98.1472, -67.9189);
    CGContextAddLineToPoint(ctx, -89.5972, -75.2689);
    CGContextAddQuadCurveToPoint(ctx, -85.6972, -79.1189, -82.0972, -84.8689);
    CGContextAddLineToPoint(ctx, -90.0972, -84.8689);
    CGContextAddLineToPoint(ctx, -92.8472, -83.4189);
    CGContextAddLineToPoint(ctx, -98.2472, -77.2689);
    CGContextAddQuadCurveToPoint(ctx, -103.819, -71.001, -104.047, -67.9189);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -43.0344, 50.9677);
    CGContextAddQuadCurveToPoint(ctx, -37.2844, 48.9177, -31.3344, 42.1677);
    CGContextAddQuadCurveToPoint(ctx, -25.3344, 35.2677, -24.0344, 28.9677);
    CGContextAddQuadCurveToPoint(ctx, -29.2344, 28.8177, -37.8344, 40.7677);
    CGContextAddLineToPoint(ctx, -43.0344, 48.4677);
    CGContextAddLineToPoint(ctx, -43.0344, 50.9677);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -144.057, 28.994);
    CGContextAddQuadCurveToPoint(ctx, -149.607, 29.494, -156.257, 35.744);
    CGContextAddLineToPoint(ctx, -157.207, 37.044);
    CGContextAddLineToPoint(ctx, -160.157, 40.644);
    CGContextAddQuadCurveToPoint(ctx, -162.457, 43.344, -163.057, 45.044);
    CGContextAddQuadCurveToPoint(ctx, -156.957, 45.494, -151.957, 40.444);
    CGContextAddQuadCurveToPoint(ctx, -148.965, 37.3269, -144.057, 28.994);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -144.057, 224.075);
    CGContextAddLineToPoint(ctx, -143.957, 224.125);
    CGContextAddQuadCurveToPoint(ctx, -136.107, 219.725, -132.807, 216.375);
    CGContextAddQuadCurveToPoint(ctx, -128.307, 211.825, -126.057, 204.075);
    CGContextAddLineToPoint(ctx, -128.007, 204.075);
    CGContextAddQuadCurveToPoint(ctx, -133.757, 207.375, -139.357, 215.725);
    CGContextAddQuadCurveToPoint(ctx, -142.516, 220.48, -144.057, 224.075);
    CGContextClosePath(ctx);
}

static void draw_main(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.8, 1);
    def_path_0(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_1(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_2(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.996874, 0.0658003, -0.0658003, 0.996874, 345.8, 648.7));
    draw_shape_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 364.5, 636.5));
    CGContextSetRGBFillColor(ctx, 1, 0.909804, 0.815686, 1);
    def_path_5(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 364.5, 636.5));
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.6, 1);
    def_path_6(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_7(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_8(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_9(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_10(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.8, 1);
    def_path_11(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_12(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.8, 1);
    def_path_13(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 0.909804, 0.815686, 1);
    def_path_14(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_15(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.6, 1);
    def_path_16(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 0.909804, 0.815686, 1);
    def_path_17(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_18(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.6, 1);
    def_path_19(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_20(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.8, 1);
    def_path_21(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 391.45, 652.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_22(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 391.45, 652.95));
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.8, 1);
    def_path_23(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_24(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.8, 1);
    def_path_25(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 0.909804, 0.815686, 1);
    def_path_26(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_27(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0.2, 1);
    def_path_28(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0.2, 1);
    def_path_29(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 0.376471, 0.376471, 1);
    def_path_30(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_31(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_32(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_33(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_34(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_35(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_36(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_37(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 377.3, 348));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_38(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 356.15, 340));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_39(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 356.15, 340));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_40(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 356.15, 340));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_41(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 356.15, 340));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_40(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 356.15, 340));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_42(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_43(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 0);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_43(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.993531, 0.105401, -0.105401, 0.993531, 398.35, 658.95));
    draw_shape_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 415.7, 643.4));
    CGContextSetRGBFillColor(ctx, 1, 0.909804, 0.815686, 1);
    def_path_44(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 415.7, 643.4));
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.6, 1);
    def_path_45(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_46(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 0);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_46(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_47(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 378.2, 542.95));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_48(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.945115, 0, 0, 0.885848, 397.3, 942.1));
    CGContextSetRGBFillColor(ctx, 0.286275, 0.572549, 0.572549, 1);
    def_path_49(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 321.05, 570.65));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_50(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

}


