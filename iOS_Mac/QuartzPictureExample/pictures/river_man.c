
#include <CoreGraphics/CoreGraphics.h>

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct
{
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

// MARK: g_picture_river_man
static void draw_main(CGContextRef ctx);
VKQuartzPicture g_picture_river_man = {
    { -0.1, 44, 768, 980 },
    draw_main,
};

/////////////////////////
static void def_path_0(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 767.9, 1024);
    CGContextAddLineToPoint(ctx, 767.9, 44);
    CGContextAddLineToPoint(ctx, -0.0999756, 44);
    CGContextAddLineToPoint(ctx, -0.0999756, 1024);
    CGContextAddLineToPoint(ctx, 767.9, 1024);
    CGContextClosePath(ctx);
}

static void def_path_1(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -90, -10.55);
    CGContextAddQuadCurveToPoint(ctx, -90, 7.2, -80.1, 17.2);
    CGContextAddQuadCurveToPoint(ctx, -72.15, 25.2, -56.65, 29.1);
    CGContextAddQuadCurveToPoint(ctx, -49.95, 30.8, -29.15, 33.55);
    CGContextAddQuadCurveToPoint(ctx, -13.1, 35.7, -7, 38.95);
    CGContextAddQuadCurveToPoint(ctx, 5.8, 45.65, 32.9, 57.15);
    CGContextAddQuadCurveToPoint(ctx, 58.55, 68.05, 60.5, 68.05);
    CGContextAddQuadCurveToPoint(ctx, 74.15, 68.05, 82, 61.05);
    CGContextAddQuadCurveToPoint(ctx, 90, 54, 90, 41.45);
    CGContextAddQuadCurveToPoint(ctx, 90, 27.5, 77.45, 3.4);
    CGContextAddQuadCurveToPoint(ctx, 66.15, -18.4, 55, -30.05);
    CGContextAddQuadCurveToPoint(ctx, 41.3, -44.35, 28.55, -52.1);
    CGContextAddQuadCurveToPoint(ctx, 23.95, -54.9, 17.85, -57.9);
    CGContextAddQuadCurveToPoint(ctx, 7.44999, -59.2, -6.25001, -62.55);
    CGContextAddLineToPoint(ctx, -29.5, -68.05);
    CGContextAddQuadCurveToPoint(ctx, -63.15, -68.05, -78.95, -46);
    CGContextAddQuadCurveToPoint(ctx, -90, -30.65, -90, -10.55);
    CGContextClosePath(ctx);
}

static void def_path_2(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 115.2, -61.65);
    CGContextAddLineToPoint(ctx, 115.05, -62.15);
    CGContextAddQuadCurveToPoint(ctx, 111.8, -61.05, 91.9, -50.75);
    CGContextAddQuadCurveToPoint(ctx, 73.35, -41.15, 71.05, -41.15);
    CGContextAddQuadCurveToPoint(ctx, 63.4, -41.15, 46.1, -46.45);
    CGContextAddQuadCurveToPoint(ctx, 28.45, -51.9, 19.95, -52.15);
    CGContextAddQuadCurveToPoint(ctx, 10.9, -52.35, -0.200013, -54.9);
    CGContextAddQuadCurveToPoint(ctx, -11.45, -57.5, -23.05, -62.15);
    CGContextAddQuadCurveToPoint(ctx, -42.5, -70.85, -49.45, -73.35);
    CGContextAddQuadCurveToPoint(ctx, -59.95, -77.15, -76.05, -77.15);
    CGContextAddQuadCurveToPoint(ctx, -101.75, -77.15, -111.05, -60.15);
    CGContextAddQuadCurveToPoint(ctx, -116.05, -51, -116.05, -35.65);
    CGContextAddQuadCurveToPoint(ctx, -116.05, -24.95, -109.9, -12);
    CGContextAddLineToPoint(ctx, -103.8, 0.599991);
    CGContextAddQuadCurveToPoint(ctx, -99.85, 8.94999, -97.05, 16.85);
    CGContextAddQuadCurveToPoint(ctx, -92.7, 29.3, -79, 48.55);
    CGContextAddLineToPoint(ctx, -69.6, 61.65);
    CGContextAddQuadCurveToPoint(ctx, -66.35, 66.25, -64.9, 69.1);
    CGContextAddLineToPoint(ctx, -62.9, 70.8);
    CGContextAddQuadCurveToPoint(ctx, -59.2, 73.75, -55.3, 75.2);
    CGContextAddQuadCurveToPoint(ctx, -50.35, 77.05, -42.35, 77.2);
    CGContextAddLineToPoint(ctx, -25.05, 76.95);
    CGContextAddQuadCurveToPoint(ctx, -9.70001, 76.95, -5.35001, 76.6);
    CGContextAddQuadCurveToPoint(ctx, 4.34999, 75.9, 10.1, 72.9);
    CGContextAddQuadCurveToPoint(ctx, 23.85, 65.75, 24.95, 38.85);
    CGContextAddLineToPoint(ctx, 24.7, 19.4);
    CGContextAddQuadCurveToPoint(ctx, 24.4, 6.49998, 25.35, -0.850018);
    CGContextAddQuadCurveToPoint(ctx, 28.2, -23.15, 45.45, -23.15);
    CGContextAddQuadCurveToPoint(ctx, 47.65, -23.15, 57.9, -20.65);
    CGContextAddQuadCurveToPoint(ctx, 68.15, -18.15, 72.55, -18.15);
    CGContextAddQuadCurveToPoint(ctx, 83.25, -18.15, 99.65, -38.5);
    CGContextAddQuadCurveToPoint(ctx, 108, -48.9, 116.05, -61.15);
    CGContextAddQuadCurveToPoint(ctx, 115.45, -61.15, 115.2, -61.65);
    CGContextClosePath(ctx);
}

static void def_path_3(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 121.95, 93.25);
    CGContextAddLineToPoint(ctx, 122.15, 93.55);
    CGContextAddQuadCurveToPoint(ctx, 120.35, 92.1, 116.7, 93.5);
    CGContextAddQuadCurveToPoint(ctx, 113.9, 94.55, 112.05, 96.25);
    CGContextAddQuadCurveToPoint(ctx, 110.9, 97.25, 108.7, 100.25);
    CGContextAddLineToPoint(ctx, 107.65, 101.7);
    CGContextAddLineToPoint(ctx, 107.65, 102.55);
    CGContextAddQuadCurveToPoint(ctx, 107.3, 104.3, 105, 106.4);
    CGContextAddQuadCurveToPoint(ctx, 103.45, 107.75, 100.95, 107.5);
    CGContextAddQuadCurveToPoint(ctx, 98.4, 107.15, 97.2, 108.2);
    CGContextAddQuadCurveToPoint(ctx, 95.6, 109.7, 94.85, 112.15);
    CGContextAddLineToPoint(ctx, 93.7, 114.95);
    CGContextAddQuadCurveToPoint(ctx, 92.6, 115.9, 91.35, 115.8);
    CGContextAddLineToPoint(ctx, 89, 115.25);
    CGContextAddQuadCurveToPoint(ctx, 85.65, 114.45, 82.55, 117.25);
    CGContextAddQuadCurveToPoint(ctx, 81.05, 118.6, 79.95, 120.85);
    CGContextAddQuadCurveToPoint(ctx, 78.9, 123.1, 78.15, 123.75);
    CGContextAddQuadCurveToPoint(ctx, 75.9, 125.75, 73.15, 126);
    CGContextAddQuadCurveToPoint(ctx, 69.9, 126.3, 66.95, 123.9);
    CGContextAddQuadCurveToPoint(ctx, 65.05, 122.35, 64.1, 120.4);
    CGContextAddQuadCurveToPoint(ctx, 63.15, 118.4, 62.1, 117.6);
    CGContextAddQuadCurveToPoint(ctx, 59.95, 115.85, 56.7, 115.65);
    CGContextAddLineToPoint(ctx, 50.2, 115.85);
    CGContextAddQuadCurveToPoint(ctx, 40.9, 116.1, 34, 110.5);
    CGContextAddQuadCurveToPoint(ctx, 28.6, 106.15, 24.45, 96.1);
    CGContextAddQuadCurveToPoint(ctx, 20.3, 86.1, 16.5, 83);
    CGContextAddQuadCurveToPoint(ctx, 7.74999, 75.9, -6.60001, 73.5);
    CGContextAddQuadCurveToPoint(ctx, -17.9, 71.6, -26.9, 73.25);
    CGContextAddQuadCurveToPoint(ctx, -13.15, 63.25, 3.74999, 62.2);
    CGContextAddQuadCurveToPoint(ctx, 9.04999, 62.9, 17.05, 65.75);
    CGContextAddQuadCurveToPoint(ctx, 29.9, 70.15, 36.4, 75.45);
    CGContextAddQuadCurveToPoint(ctx, 41.3, 79.45, 43.25, 83.5);
    CGContextAddQuadCurveToPoint(ctx, 44.45, 86, 45, 90.3);
    CGContextAddQuadCurveToPoint(ctx, 45.55, 94.75, 46.5, 96.95);
    CGContextAddQuadCurveToPoint(ctx, 48.15, 100.75, 52.6, 104.4);
    CGContextAddQuadCurveToPoint(ctx, 54.65, 106.05, 57, 106.15);
    CGContextAddLineToPoint(ctx, 61.25, 105.55);
    CGContextAddQuadCurveToPoint(ctx, 67.2, 104.45, 72.05, 108.05);
    CGContextAddQuadCurveToPoint(ctx, 77.3, 111.9, 83.1, 111.65);
    CGContextAddQuadCurveToPoint(ctx, 87.45, 111.55, 89.5, 109.7);
    CGContextAddLineToPoint(ctx, 91.15, 107.75);
    CGContextAddQuadCurveToPoint(ctx, 91.75, 106.7, 92.8, 105.8);
    CGContextAddQuadCurveToPoint(ctx, 94.45, 104.3, 96.2, 104.05);
    CGContextAddQuadCurveToPoint(ctx, 97.95, 103.75, 98.9, 102.9);
    CGContextAddQuadCurveToPoint(ctx, 99.8, 102.1, 100.5, 99.8);
    CGContextAddQuadCurveToPoint(ctx, 101.15, 97.6, 103.5, 95.5);
    CGContextAddQuadCurveToPoint(ctx, 107.1, 92.3, 111.8, 91.7);
    CGContextAddQuadCurveToPoint(ctx, 116.5, 91.2, 121.95, 93.25);
    CGContextClosePath(ctx);
}

static void def_path_4(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 3.75, 62.2);
    CGContextAddLineToPoint(ctx, 7.6, 62.1);
    CGContextAddLineToPoint(ctx, 13.2, 61.75);
    CGContextAddLineToPoint(ctx, 19.15, 62);
    CGContextAddQuadCurveToPoint(ctx, 20.95, 62.35, 23.45, 63.8);
    CGContextAddLineToPoint(ctx, 28, 66.25);
    CGContextAddQuadCurveToPoint(ctx, 30.9, 67.75, 34.45, 67.05);
    CGContextAddLineToPoint(ctx, 41.1, 66.1);
    CGContextAddQuadCurveToPoint(ctx, 45.05, 66.2, 49.45, 67.85);
    CGContextAddQuadCurveToPoint(ctx, 53.6, 69.5, 56.95, 72.2);
    CGContextAddQuadCurveToPoint(ctx, 66.1, 79.6, 63.85, 87.25);
    CGContextAddLineToPoint(ctx, 62.15, 92.35);
    CGContextAddQuadCurveToPoint(ctx, 61.75, 94.95, 63.95, 96.75);
    CGContextAddQuadCurveToPoint(ctx, 66.85, 99.1, 71.9, 97.55);
    CGContextAddQuadCurveToPoint(ctx, 76.9, 96, 79.7, 98.25);
    CGContextAddLineToPoint(ctx, 81.9, 100.55);
    CGContextAddQuadCurveToPoint(ctx, 83.85, 102.1, 86.5, 102.45);
    CGContextAddQuadCurveToPoint(ctx, 89.35, 102.75, 90.9, 101.35);
    CGContextAddQuadCurveToPoint(ctx, 91.6, 100.7, 93.35, 97.15);
    CGContextAddQuadCurveToPoint(ctx, 95.1, 93.45, 96.05, 92.6);
    CGContextAddQuadCurveToPoint(ctx, 100.25, 88.8, 108.15, 89.15);
    CGContextAddQuadCurveToPoint(ctx, 112.25, 89.4, 114.2, 90);
    CGContextAddLineToPoint(ctx, 116, 90.1);
    CGContextAddQuadCurveToPoint(ctx, 118.85, 90.6, 121.35, 92.65);
    CGContextAddLineToPoint(ctx, 121.95, 93.25);
    CGContextAddQuadCurveToPoint(ctx, 116.5, 91.2, 111.8, 91.7);
    CGContextAddQuadCurveToPoint(ctx, 107.1, 92.3, 103.5, 95.5);
    CGContextAddQuadCurveToPoint(ctx, 101.15, 97.6, 100.5, 99.8);
    CGContextAddQuadCurveToPoint(ctx, 99.8, 102.1, 98.9, 102.9);
    CGContextAddQuadCurveToPoint(ctx, 97.95, 103.75, 96.2, 104.05);
    CGContextAddQuadCurveToPoint(ctx, 94.45, 104.3, 92.8, 105.8);
    CGContextAddQuadCurveToPoint(ctx, 91.75, 106.7, 91.15, 107.75);
    CGContextAddLineToPoint(ctx, 89.5, 109.7);
    CGContextAddQuadCurveToPoint(ctx, 87.45, 111.55, 83.1, 111.65);
    CGContextAddQuadCurveToPoint(ctx, 77.3, 111.9, 72.05, 108.05);
    CGContextAddQuadCurveToPoint(ctx, 67.2, 104.45, 61.25, 105.55);
    CGContextAddLineToPoint(ctx, 57, 106.15);
    CGContextAddQuadCurveToPoint(ctx, 54.65, 106.05, 52.6, 104.4);
    CGContextAddQuadCurveToPoint(ctx, 48.15, 100.75, 46.5, 96.95);
    CGContextAddQuadCurveToPoint(ctx, 45.55, 94.75, 45, 90.3);
    CGContextAddQuadCurveToPoint(ctx, 44.45, 86, 43.25, 83.5);
    CGContextAddQuadCurveToPoint(ctx, 41.3, 79.45, 36.4, 75.45);
    CGContextAddQuadCurveToPoint(ctx, 29.9, 70.15, 17.05, 65.75);
    CGContextAddQuadCurveToPoint(ctx, 9.05, 62.9, 3.75, 62.2);
    CGContextClosePath(ctx);
}

static void def_path_5(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 121.95, 93.25);
    CGContextAddQuadCurveToPoint(ctx, 116.5, 91.2, 111.8, 91.7);
    CGContextAddQuadCurveToPoint(ctx, 107.1, 92.3, 103.5, 95.5);
    CGContextAddQuadCurveToPoint(ctx, 101.15, 97.6, 100.5, 99.8);
    CGContextAddQuadCurveToPoint(ctx, 99.8, 102.1, 98.9, 102.9);
    CGContextAddQuadCurveToPoint(ctx, 97.95, 103.75, 96.2, 104.05);
    CGContextAddQuadCurveToPoint(ctx, 94.45, 104.3, 92.8, 105.8);
    CGContextAddQuadCurveToPoint(ctx, 91.75, 106.7, 91.15, 107.75);
    CGContextAddLineToPoint(ctx, 89.5, 109.7);
    CGContextAddQuadCurveToPoint(ctx, 87.45, 111.55, 83.1, 111.65);
    CGContextAddQuadCurveToPoint(ctx, 77.3, 111.9, 72.05, 108.05);
    CGContextAddQuadCurveToPoint(ctx, 67.2, 104.45, 61.25, 105.55);
    CGContextAddLineToPoint(ctx, 57, 106.15);
    CGContextAddQuadCurveToPoint(ctx, 54.65, 106.05, 52.6, 104.4);
    CGContextAddQuadCurveToPoint(ctx, 48.15, 100.75, 46.5, 96.95);
    CGContextAddQuadCurveToPoint(ctx, 45.55, 94.75, 45, 90.3);
    CGContextAddQuadCurveToPoint(ctx, 44.45, 86, 43.25, 83.5);
    CGContextAddQuadCurveToPoint(ctx, 41.3, 79.45, 36.4, 75.45);
    CGContextAddQuadCurveToPoint(ctx, 29.9, 70.15, 17.05, 65.75);
    CGContextAddQuadCurveToPoint(ctx, 9.05, 62.9, 3.75, 62.2);
}

static void def_path_6(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 107.3, 99.5);
    CGContextAddQuadCurveToPoint(ctx, 106.4, 95.5, 111.3, 91.1);
    CGContextAddQuadCurveToPoint(ctx, 112.45, 90.05, 114.2, 90);
    CGContextAddLineToPoint(ctx, 116, 90.1);
    CGContextAddQuadCurveToPoint(ctx, 118.85, 90.6, 121.35, 92.65);
    CGContextAddLineToPoint(ctx, 122.15, 93.55);
    CGContextAddQuadCurveToPoint(ctx, 120.35, 92.1, 116.7, 93.5);
    CGContextAddQuadCurveToPoint(ctx, 113.9, 94.55, 112.05, 96.25);
    CGContextAddQuadCurveToPoint(ctx, 110.9, 97.25, 108.7, 100.25);
    CGContextAddLineToPoint(ctx, 107.65, 101.7);
    CGContextAddLineToPoint(ctx, 107.3, 99.5);
    CGContextClosePath(ctx);
}

static void def_path_7(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 60.9, -34.4);
    CGContextAddQuadCurveToPoint(ctx, 59.3, -74.55, 30.7, -90.6);
    CGContextAddQuadCurveToPoint(ctx, 9.85, -102.5, -25.65, -101.15);
    CGContextAddQuadCurveToPoint(ctx, -53.4, -100.15, -70.55, -94.4);
    CGContextAddQuadCurveToPoint(ctx, -88.2, -88.5, -97.5, -76.6);
    CGContextAddQuadCurveToPoint(ctx, -106.75, -64.9, -109.3, -45.55);
    CGContextAddQuadCurveToPoint(ctx, -111.65, -27.35, -108.6, 1.14999);
    CGContextAddQuadCurveToPoint(ctx, -105.6, 29.05, -101.65, 47.05);
    CGContextAddQuadCurveToPoint(ctx, -96.55, 70.65, -88.45, 86.05);
    CGContextAddQuadCurveToPoint(ctx, -68.85, 123.3, -26.2, 121.75);
    CGContextAddQuadCurveToPoint(ctx, 20.15, 120, 43.3, 71.75);
    CGContextAddQuadCurveToPoint(ctx, 63.55, 29.5, 60.9, -34.4);
    CGContextClosePath(ctx);
}

static void def_path_8(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 16.3, -45.75);
    CGContextAddLineToPoint(ctx, 11.8, -44.65);
    CGContextAddLineToPoint(ctx, 0.0499992, -42.45);
    CGContextAddQuadCurveToPoint(ctx, -6.1, -40.9, -8.2, -38);
    CGContextAddQuadCurveToPoint(ctx, -10.6, -34.75, -9.2, -28.9);
    CGContextAddQuadCurveToPoint(ctx, -8.8, -34.4, -5.15, -37.35);
    CGContextAddQuadCurveToPoint(ctx, -2.45, -39.55, 3.65, -41.1);
    CGContextAddQuadCurveToPoint(ctx, 11.4, -43.15, 13.4, -44.1);
    CGContextAddQuadCurveToPoint(ctx, 15, -44.85, 16.3, -45.75);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -57.65, -45.75);
    CGContextAddQuadCurveToPoint(ctx, -56.3, -44.85, -54.7, -44.1);
    CGContextAddQuadCurveToPoint(ctx, -52.7, -43.15, -45, -41.1);
    CGContextAddQuadCurveToPoint(ctx, -38.9, -39.55, -36.15, -37.35);
    CGContextAddQuadCurveToPoint(ctx, -32.5, -34.4, -32.1, -28.9);
    CGContextAddQuadCurveToPoint(ctx, -30.75, -34.75, -33.1, -38);
    CGContextAddQuadCurveToPoint(ctx, -35.25, -40.9, -41.35, -42.45);
    CGContextAddLineToPoint(ctx, -53.1, -44.65);
    CGContextAddLineToPoint(ctx, -57.65, -45.75);
    CGContextClosePath(ctx);
}

static void draw_gradient_0(CGContextRef ctx)
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGFloat colors[] = {
        0.180392, 0.356863, 0.537255, 1,
        0.0941176, 0.254902, 0.337255, 1
    };
    CGFloat locations[] = {
        0,
        1
    };
    CGGradientRef gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2);
    CGColorSpaceRelease(colorSpace);
    CGGradientDrawingOptions options = kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation;
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
    CGGradientRelease(gradient);
}

static void def_path_9(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 39.5, 24.1);
    CGContextAddQuadCurveToPoint(ctx, 46.35, 43.25, 48.6, 60.3);
    CGContextAddQuadCurveToPoint(ctx, 51.2, 79.8, 46.85, 91.75);
    CGContextAddQuadCurveToPoint(ctx, 40.85, 108.4, 28.3, 121.95);
    CGContextAddQuadCurveToPoint(ctx, 20.15, 130.65, 10.5, 135.6);
    CGContextAddQuadCurveToPoint(ctx, 1.7, 140.2, -4.7, 139.8);
    CGContextAddQuadCurveToPoint(ctx, -15.55, 139.15, -19.45, 122.8);
    CGContextAddQuadCurveToPoint(ctx, -22.35, 110.25, -21.1, 88.8);
    CGContextAddQuadCurveToPoint(ctx, -20.65, 67.65, -19.8, 51.1);
    CGContextAddQuadCurveToPoint(ctx, -18.2, 19.5, -14.55, 9.40002);
    CGContextAddQuadCurveToPoint(ctx, -9.65, -4.14998, -2.3, -11.2);
    CGContextAddQuadCurveToPoint(ctx, 4.9, -18.05, 13.7, -18.05);
    CGContextAddQuadCurveToPoint(ctx, 18.3, -18.05, 25.85, -5.64998);
    CGContextAddQuadCurveToPoint(ctx, 33.25, 6.5, 39.5, 24.1);
    CGContextClosePath(ctx);
}

static void draw_gradient_1(CGContextRef ctx)
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGFloat colors[] = {
        0.180392, 0.356863, 0.537255, 1,
        0.0823529, 0.219608, 0.290196, 1
    };
    CGFloat locations[] = {
        0,
        1
    };
    CGGradientRef gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2);
    CGColorSpaceRelease(colorSpace);
    CGGradientDrawingOptions options = kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation;
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
    CGGradientRelease(gradient);
}

static void def_path_10(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 49.9, -72);
    CGContextAddQuadCurveToPoint(ctx, 43, -78.5, 32.4, -75.75);
    CGContextAddQuadCurveToPoint(ctx, 20.15, -72.6, 21.8, -48);
    CGContextAddQuadCurveToPoint(ctx, 22.65, -35.6, 30.05, -2.8);
    CGContextAddQuadCurveToPoint(ctx, 33.4, 11.75, 36.45, 35.85);
    CGContextAddQuadCurveToPoint(ctx, 39.45, 58.7, 40.05, 61.15);
    CGContextAddQuadCurveToPoint(ctx, 41.85, 68.1, 44.7, 71.3);
    CGContextAddQuadCurveToPoint(ctx, 48.4, 75.45, 54, 73.95);
    CGContextAddQuadCurveToPoint(ctx, 63.75, 71.45, 69.6, 55);
    CGContextAddQuadCurveToPoint(ctx, 75.05, 39.95, 74.8, 21.5);
    CGContextAddQuadCurveToPoint(ctx, 74.75, 9.45, 70.95, -11.55);
    CGContextAddQuadCurveToPoint(ctx, 68, -28.1, 64.65, -41.1);
    CGContextAddQuadCurveToPoint(ctx, 61.25, -54.2, 58.05, -61.05);
    CGContextAddQuadCurveToPoint(ctx, 54.45, -68.7, 49.9, -72);
    CGContextClosePath(ctx);
}

static void draw_gradient_2(CGContextRef ctx)
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGFloat colors[] = {
        0.207843, 0.415686, 0.623529, 1,
        0.0823529, 0.219608, 0.290196, 1
    };
    CGFloat locations[] = {
        0,
        1
    };
    CGGradientRef gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2);
    CGColorSpaceRelease(colorSpace);
    CGGradientDrawingOptions options = kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation;
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
    CGGradientRelease(gradient);
}

static void def_path_11(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 33.25, -3.15);
    CGContextAddLineToPoint(ctx, 17.4, -17.15);
    CGContextAddQuadCurveToPoint(ctx, 10.3, -22.95, 5.15, -23.55);
    CGContextAddQuadCurveToPoint(ctx, 2.8, -23.85, 0.949999, -22.8);
    CGContextAddQuadCurveToPoint(ctx, -0.950001, -21.75, -1.35, -19.95);
    CGContextAddQuadCurveToPoint(ctx, -2.15, -16.95, 0.549999, -14.75);
    CGContextAddLineToPoint(ctx, 6.5, -10.9);
    CGContextAddLineToPoint(ctx, 12.6, -5.7);
    CGContextAddQuadCurveToPoint(ctx, 16.1, -2.15, 17.15, -8.10623e-07);
    CGContextAddQuadCurveToPoint(ctx, 25.35, 16.05, 29.45, 28.9);
    CGContextAddQuadCurveToPoint(ctx, 31.1, 33.95, 33.75, 45);
    CGContextAddQuadCurveToPoint(ctx, 36.05, 55.05, 37.8, 59.5);
    CGContextAddQuadCurveToPoint(ctx, 40.4, 66.4, 44.25, 69.6);
    CGContextAddQuadCurveToPoint(ctx, 47.3, 72.1, 51.4, 72.7);
    CGContextAddLineToPoint(ctx, 52.05, 72.75);
    CGContextAddLineToPoint(ctx, 52.2, 72.8);
    CGContextAddLineToPoint(ctx, 55.85, 72.85);
    CGContextAddQuadCurveToPoint(ctx, 58.6, 72.35, 61.75, 70.2);
    CGContextAddQuadCurveToPoint(ctx, 66.6, 66.75, 67.8, 61.9);
    CGContextAddQuadCurveToPoint(ctx, 70.5, 50.75, 56.6, 27.25);
    CGContextAddQuadCurveToPoint(ctx, 51.05, 17.85, 44.3, 9.30001);
    CGContextAddQuadCurveToPoint(ctx, 38, 1.05, 33.25, -3.15);
    CGContextClosePath(ctx);
}

static void def_path_12(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -81.3, 22.3);
    CGContextAddQuadCurveToPoint(ctx, -88.15, 41.45, -90.4, 58.5);
    CGContextAddQuadCurveToPoint(ctx, -93, 78, -88.65, 89.95);
    CGContextAddQuadCurveToPoint(ctx, -82.65, 106.6, -70.1, 120.15);
    CGContextAddQuadCurveToPoint(ctx, -61.95, 128.85, -52.3, 133.8);
    CGContextAddQuadCurveToPoint(ctx, -43.5, 138.4, -37.1, 138);
    CGContextAddQuadCurveToPoint(ctx, -26.25, 137.35, -22.35, 121);
    CGContextAddQuadCurveToPoint(ctx, -19.45, 108.45, -20.7, 87);
    CGContextAddQuadCurveToPoint(ctx, -21.15, 65.85, -22, 49.3);
    CGContextAddQuadCurveToPoint(ctx, -23.6, 17.7, -27.25, 7.60002);
    CGContextAddQuadCurveToPoint(ctx, -32.15, -5.94998, -39.5, -13);
    CGContextAddQuadCurveToPoint(ctx, -46.7, -19.85, -55.5, -19.85);
    CGContextAddQuadCurveToPoint(ctx, -60.1, -19.85, -67.65, -7.44998);
    CGContextAddQuadCurveToPoint(ctx, -75.05, 4.7, -81.3, 22.3);
    CGContextClosePath(ctx);
}

static void def_path_13(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -69.1, -51.95);
    CGContextAddQuadCurveToPoint(ctx, -67.45, -76.55, -79.7, -79.7);
    CGContextAddQuadCurveToPoint(ctx, -90.3, -82.45, -97.2, -75.95);
    CGContextAddQuadCurveToPoint(ctx, -101.75, -72.65, -105.35, -65);
    CGContextAddQuadCurveToPoint(ctx, -108.55, -58.15, -111.95, -45.05);
    CGContextAddQuadCurveToPoint(ctx, -115.3, -32.05, -118.25, -15.5);
    CGContextAddQuadCurveToPoint(ctx, -122.05, 5.5, -122.1, 17.55);
    CGContextAddQuadCurveToPoint(ctx, -122.35, 36, -116.9, 51.05);
    CGContextAddQuadCurveToPoint(ctx, -111.05, 67.5, -101.3, 70);
    CGContextAddQuadCurveToPoint(ctx, -95.7, 71.5, -92, 67.35);
    CGContextAddQuadCurveToPoint(ctx, -89.15, 64.15, -87.35, 57.2);
    CGContextAddQuadCurveToPoint(ctx, -86.75, 54.75, -83.75, 31.9);
    CGContextAddQuadCurveToPoint(ctx, -80.7, 7.79999, -77.35, -6.75001);
    CGContextAddQuadCurveToPoint(ctx, -69.95, -39.55, -69.1, -51.95);
    CGContextClosePath(ctx);
}

static void def_path_14(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -82.3, 6.85);
    CGContextAddQuadCurveToPoint(ctx, -90.6, 13.4, -97.9, 20.9);
    CGContextAddQuadCurveToPoint(ctx, -116.25, 39.85, -115.85, 51.3);
    CGContextAddQuadCurveToPoint(ctx, -115.7, 56.3, -111.65, 60.75);
    CGContextAddQuadCurveToPoint(ctx, -109.05, 63.7, -106.45, 64.85);
    CGContextAddLineToPoint(ctx, -102.85, 65.8);
    CGContextAddLineToPoint(ctx, -102.75, 65.75);
    CGContextAddLineToPoint(ctx, -102.1, 65.9);
    CGContextAddQuadCurveToPoint(ctx, -98, 66.4, -94.5, 64.75);
    CGContextAddQuadCurveToPoint(ctx, -90.1, 62.7, -86.1, 56.8);
    CGContextAddQuadCurveToPoint(ctx, -83.55, 52.95, -79.25, 43.95);
    CGContextAddQuadCurveToPoint(ctx, -74.4, 34, -71.8, 29.6);
    CGContextAddQuadCurveToPoint(ctx, -65.15, 18.35, -53.95, 5.04999);
    CGContextAddQuadCurveToPoint(ctx, -52.5, 3.29999, -48.35, 0.849993);
    CGContextAddQuadCurveToPoint(ctx, -44.6, -1.35001, -41.35, -2.60001);
    CGContextAddLineToPoint(ctx, -34.85, -4.75001);
    CGContextAddQuadCurveToPoint(ctx, -31.75, -6.10001, -31.85, -9.15001);
    CGContextAddQuadCurveToPoint(ctx, -31.9, -11.05, -33.55, -12.55);
    CGContextAddQuadCurveToPoint(ctx, -35.15, -14, -37.5, -14.35);
    CGContextAddQuadCurveToPoint(ctx, -42.6, -15.1, -50.75, -11.5);
    CGContextAddLineToPoint(ctx, -69, -2.15001);
    CGContextAddQuadCurveToPoint(ctx, -74.45, 0.6, -82.3, 6.85);
    CGContextClosePath(ctx);
}

static void def_path_15(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -24.85, -7.25);
    CGContextAddQuadCurveToPoint(ctx, -30.3, -22.95, -43.5, -22.95);
    CGContextAddQuadCurveToPoint(ctx, -56.05, -22.95, -63.35, -13.65);
    CGContextAddQuadCurveToPoint(ctx, -67.15, -8.7, -69.25, -1.75);
    CGContextAddLineToPoint(ctx, -70.35, 3);
    CGContextAddLineToPoint(ctx, -70.5, 4.5);
    CGContextAddQuadCurveToPoint(ctx, -70.5, 10.05, -68.05, 16.65);
    CGContextAddQuadCurveToPoint(ctx, -65.6, 23.35, -65.6, 30.75);
    CGContextAddQuadCurveToPoint(ctx, -65.6, 38.6, -69.3, 52.85);
    CGContextAddQuadCurveToPoint(ctx, -72.95, 67.05, -72.95, 74.65);
    CGContextAddQuadCurveToPoint(ctx, -72.95, 87.9, -66.1, 105.45);
    CGContextAddQuadCurveToPoint(ctx, -62.1, 115.55, -61.4, 117.9);
    CGContextAddQuadCurveToPoint(ctx, -59.25, 124.5, -59.25, 129.55);
    CGContextAddQuadCurveToPoint(ctx, -59.25, 135.45, -60.25, 137.7);
    CGContextAddLineToPoint(ctx, -64.15, 145.75);
    CGContextAddQuadCurveToPoint(ctx, -64.6, 147, -64.85, 153.85);
    CGContextAddQuadCurveToPoint(ctx, -65.1, 160.75, -66.1, 163.4);
    CGContextAddLineToPoint(ctx, -73.4, 181.55);
    CGContextAddQuadCurveToPoint(ctx, -76.85, 191.45, -76.85, 200.4);
    CGContextAddQuadCurveToPoint(ctx, -76.85, 217.8, -70, 217.8);
    CGContextAddQuadCurveToPoint(ctx, -69.3, 217.8, -67.8, 217.05);
    CGContextAddQuadCurveToPoint(ctx, -66.3, 216.35, -65.85, 216.35);
    CGContextAddQuadCurveToPoint(ctx, -65.15, 216.35, -62.15, 219.5);
    CGContextAddQuadCurveToPoint(ctx, -59.25, 222.7, -57.75, 222.7);
    CGContextAddQuadCurveToPoint(ctx, -57.2, 222.7, -54.25, 220.85);
    CGContextAddQuadCurveToPoint(ctx, -51.15, 218.9, -50.85, 218.8);
    CGContextAddQuadCurveToPoint(ctx, -49.95, 220.05, -48.15, 223.45);
    CGContextAddQuadCurveToPoint(ctx, -46.35, 226.15, -44, 226.15);
    CGContextAddQuadCurveToPoint(ctx, -39.55, 226.15, -36.65, 220.3);
    CGContextAddQuadCurveToPoint(ctx, -34.2, 215.45, -34.2, 210.95);
    CGContextAddQuadCurveToPoint(ctx, -34.2, 205.4, -33.45, 192.05);
    CGContextAddQuadCurveToPoint(ctx, -32.7, 178.7, -32.7, 173.95);
    CGContextAddQuadCurveToPoint(ctx, -32.7, 167, -34.4, 151.5);
    CGContextAddQuadCurveToPoint(ctx, -36.15, 135.95, -36.15, 122.95);
    CGContextAddQuadCurveToPoint(ctx, -36.15, 111.95, -33.8, 98.7999);
    CGContextAddQuadCurveToPoint(ctx, -32.4, 91.2499, -28.55, 75.0499);
    CGContextAddQuadCurveToPoint(ctx, -20.95, 43.2999, -20.95, 24.8499);
    CGContextAddQuadCurveToPoint(ctx, -20.95, 4.05, -24.85, -7.25);
    CGContextClosePath(ctx);
}

static void def_path_16(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -19.65, -1);
    CGContextAddQuadCurveToPoint(ctx, -14.2, -16.7, -1, -16.7);
    CGContextAddQuadCurveToPoint(ctx, 11.55, -16.7, 18.85, -7.4);
    CGContextAddQuadCurveToPoint(ctx, 22.65, -2.45, 24.75, 4.5);
    CGContextAddLineToPoint(ctx, 25.85, 9.25);
    CGContextAddLineToPoint(ctx, 26, 10.75);
    CGContextAddQuadCurveToPoint(ctx, 26, 16.3, 23.55, 22.9);
    CGContextAddQuadCurveToPoint(ctx, 21.1, 29.6, 21.1, 37);
    CGContextAddQuadCurveToPoint(ctx, 21.1, 44.85, 24.8, 59.1);
    CGContextAddQuadCurveToPoint(ctx, 28.45, 73.3, 28.45, 80.9);
    CGContextAddQuadCurveToPoint(ctx, 28.45, 94.15, 21.6, 111.7);
    CGContextAddQuadCurveToPoint(ctx, 17.6, 121.8, 16.9, 124.15);
    CGContextAddQuadCurveToPoint(ctx, 14.75, 130.75, 14.75, 135.8);
    CGContextAddQuadCurveToPoint(ctx, 14.75, 141.7, 15.75, 143.95);
    CGContextAddLineToPoint(ctx, 19.65, 152);
    CGContextAddQuadCurveToPoint(ctx, 20.1, 153.25, 20.35, 160.1);
    CGContextAddQuadCurveToPoint(ctx, 20.6, 167, 21.6, 169.65);
    CGContextAddLineToPoint(ctx, 28.9, 187.8);
    CGContextAddQuadCurveToPoint(ctx, 32.35, 197.7, 32.35, 206.65);
    CGContextAddQuadCurveToPoint(ctx, 32.35, 224.05, 25.5, 224.05);
    CGContextAddQuadCurveToPoint(ctx, 24.8, 224.05, 23.3, 223.3);
    CGContextAddQuadCurveToPoint(ctx, 21.8, 222.6, 21.35, 222.6);
    CGContextAddQuadCurveToPoint(ctx, 20.65, 222.6, 17.65, 225.75);
    CGContextAddQuadCurveToPoint(ctx, 14.75, 228.95, 13.25, 228.95);
    CGContextAddQuadCurveToPoint(ctx, 12.7, 228.95, 9.75, 227.1);
    CGContextAddLineToPoint(ctx, 6.35, 225.05);
    CGContextAddQuadCurveToPoint(ctx, 5.45, 226.3, 3.65, 229.7);
    CGContextAddQuadCurveToPoint(ctx, 1.85, 232.4, -0.500004, 232.4);
    CGContextAddQuadCurveToPoint(ctx, -4.95, 232.4, -7.85, 226.55);
    CGContextAddQuadCurveToPoint(ctx, -10.3, 221.7, -10.3, 217.2);
    CGContextAddQuadCurveToPoint(ctx, -10.3, 211.65, -11.05, 198.3);
    CGContextAddQuadCurveToPoint(ctx, -11.8, 184.95, -11.8, 180.2);
    CGContextAddQuadCurveToPoint(ctx, -11.8, 173.25, -10.1, 157.75);
    CGContextAddQuadCurveToPoint(ctx, -8.35, 142.2, -8.35, 129.2);
    CGContextAddQuadCurveToPoint(ctx, -8.35, 118.2, -10.7, 105.05);
    CGContextAddQuadCurveToPoint(ctx, -12.1, 97.4999, -15.95, 81.2999);
    CGContextAddQuadCurveToPoint(ctx, -23.55, 49.5499, -23.55, 31.0999);
    CGContextAddQuadCurveToPoint(ctx, -23.55, 10.3, -19.65, -1);
    CGContextClosePath(ctx);
}

static void def_path_17(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 15.75, -13.25);
    CGContextAddQuadCurveToPoint(ctx, 8.65, -21.75, 2.75, -21.75);
    CGContextAddLineToPoint(ctx, -0.0500005, -21.55);
    CGContextAddLineToPoint(ctx, -0.8, -21.4);
    CGContextAddQuadCurveToPoint(ctx, -5.15, -18.8, -12, -12.6);
    CGContextAddQuadCurveToPoint(ctx, -22.75, -2.95, -22.75, 3);
    CGContextAddLineToPoint(ctx, -22.75, 5.75);
    CGContextAddQuadCurveToPoint(ctx, -22.5, 6.25, -20.25, 6.25);
    CGContextAddLineToPoint(ctx, -17.6, 5.75);
    CGContextAddLineToPoint(ctx, -15, 5.25);
    CGContextAddQuadCurveToPoint(ctx, -10.55, 5.25, -10.3, 9.5);
    CGContextAddLineToPoint(ctx, -10.25, 13.95);
    CGContextAddQuadCurveToPoint(ctx, -10.1, 17, -9.25, 19.25);
    CGContextAddLineToPoint(ctx, -7.75, 19.25);
    CGContextAddQuadCurveToPoint(ctx, -5.8, 16.25, -5.4, 10.55);
    CGContextAddLineToPoint(ctx, -5.25, 0.75);
    CGContextAddLineToPoint(ctx, -4.75, 0.75);
    CGContextAddQuadCurveToPoint(ctx, -4.4, 2.55, -4.6, 12.6);
    CGContextAddQuadCurveToPoint(ctx, -4.3, 21.75, -1.25, 21.75);
    CGContextAddQuadCurveToPoint(ctx, 1.75, 21.75, 2.75, 16.75);
    CGContextAddQuadCurveToPoint(ctx, 3.25, 14.15, 3.25, 8.5);
    CGContextAddQuadCurveToPoint(ctx, 3.25, 6.55, 2.5, 2.1);
    CGContextAddQuadCurveToPoint(ctx, 1.85, -1.8, 1.75, -3.75);
    CGContextAddQuadCurveToPoint(ctx, 5.6, -2.2, 5.4, 6.85);
    CGContextAddQuadCurveToPoint(ctx, 5.2, 17.95, 6.25, 20.25);
    CGContextAddQuadCurveToPoint(ctx, 8.8, 21.05, 11.1, 15.5);
    CGContextAddQuadCurveToPoint(ctx, 13.25, 10.45, 13.25, 5.75);
    CGContextAddQuadCurveToPoint(ctx, 13.25, -3.9, 8.75, -9.25);
    CGContextAddLineToPoint(ctx, 9.25, -9.25);
    CGContextAddQuadCurveToPoint(ctx, 14.25, -6.3, 15.85, 4.45);
    CGContextAddLineToPoint(ctx, 16.8, 11.3);
    CGContextAddQuadCurveToPoint(ctx, 17.3, 14.25, 18.25, 14.25);
    CGContextAddQuadCurveToPoint(ctx, 20.5, 14.25, 21.75, 9.75);
    CGContextAddQuadCurveToPoint(ctx, 22.75, 6.15, 22.75, 1.75);
    CGContextAddQuadCurveToPoint(ctx, 22.75, -4.9, 15.75, -13.25);
    CGContextClosePath(ctx);
}

static void draw_shape_7(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.203922, 0.411765, 0.619608, 1);
    def_path_17(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

}

static void def_path_18(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0, -17.05);
    CGContextAddLineToPoint(ctx, -4.75, -16.8);
    CGContextAddQuadCurveToPoint(ctx, -6.1, -16.9, -6.75, -17.85);
    CGContextAddQuadCurveToPoint(ctx, -7.35, -18.8, -8.4, -18.8);
    CGContextAddQuadCurveToPoint(ctx, -10.7, -18.8, -12.45, -17.85);
    CGContextAddQuadCurveToPoint(ctx, -14.75, -14.7, -16.5, -9.45004);
    CGContextAddQuadCurveToPoint(ctx, -20, 0.899963, -17.55, 7.04996);
    CGContextAddQuadCurveToPoint(ctx, -15.95, 11.15, -13.7, 14.15);
    CGContextAddQuadCurveToPoint(ctx, -10.9, 17.9, -8.8, 17.05);
    CGContextAddQuadCurveToPoint(ctx, -7.95, 16.7, -8.55, 13.8);
    CGContextAddLineToPoint(ctx, -10.2, 7.09996);
    CGContextAddQuadCurveToPoint(ctx, -12.6, -3.50004, -9, -8.05004);
    CGContextAddLineToPoint(ctx, -8.55, -8.25004);
    CGContextAddQuadCurveToPoint(ctx, -10.75, -1.65004, -7.25, 7.34996);
    CGContextAddQuadCurveToPoint(ctx, -5.55, 11.7, -1.7, 15.6);
    CGContextAddQuadCurveToPoint(ctx, 2.45, 20, 4.5, 18.3);
    CGContextAddQuadCurveToPoint(ctx, 4.65, 15.75, 0.450003, 5.49996);
    CGContextAddQuadCurveToPoint(ctx, -3.05, -2.85004, 2.90871e-06, -5.70004);
    CGContextAddLineToPoint(ctx, 1.4, 0.049963);
    CGContextAddQuadCurveToPoint(ctx, 2.35, 4.44996, 3.05, 6.24996);
    CGContextAddQuadCurveToPoint(ctx, 5.1, 11.5, 6.5, 13.8);
    CGContextAddQuadCurveToPoint(ctx, 9.25, 18.05, 12.05, 17);
    CGContextAddQuadCurveToPoint(ctx, 14.85, 15.85, 11.85, 7.19997);
    CGContextAddQuadCurveToPoint(ctx, 8, -2.05003, 7.65, -3.85003);
    CGContextAddLineToPoint(ctx, 8.1, -4.05003);
    CGContextAddLineToPoint(ctx, 11.85, 4.99997);
    CGContextAddQuadCurveToPoint(ctx, 14.25, 10.15, 17.2, 12.25);
    CGContextAddLineToPoint(ctx, 18.55, 11.7);
    CGContextAddQuadCurveToPoint(ctx, 18.55, 9.29997, 17.55, 6.39997);
    CGContextAddLineToPoint(ctx, 16, 2.29997);
    CGContextAddLineToPoint(ctx, 15.7, 0.999967);
    CGContextAddLineToPoint(ctx, 15.5, 0.199967);
    CGContextAddLineToPoint(ctx, 15.9, -2.05003);
    CGContextAddLineToPoint(ctx, 16.25, -4.45003);
    CGContextAddQuadCurveToPoint(ctx, 16.25, -5.20003, 15.65, -7.00003);
    CGContextAddLineToPoint(ctx, 14.75, -9.30003);
    CGContextAddLineToPoint(ctx, 13.6, -9.95003);
    CGContextAddQuadCurveToPoint(ctx, 12.6, -10.25, 12.5, -10.3);
    CGContextAddLineToPoint(ctx, 11.6, -11.6);
    CGContextAddLineToPoint(ctx, 10.5, -12.8);
    CGContextAddLineToPoint(ctx, 7.30001, -13.75);
    CGContextAddQuadCurveToPoint(ctx, 5.10001, -14.3, 4.75001, -14.55);
    CGContextAddQuadCurveToPoint(ctx, 1.65, -17.05, 0, -17.05);
    CGContextClosePath(ctx);
}

static void draw_shape_9(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.203922, 0.411765, 0.619608, 1);
    def_path_18(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

}

static void def_path_19(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.449985, 7.875);
    CGContextAddQuadCurveToPoint(ctx, 0.400001, 9.95, 0.775004, 12.8);
    CGContextAddQuadCurveToPoint(ctx, 1.22501, 15.9, 1.60001, 20.125);
    CGContextAddLineToPoint(ctx, 2.4, 29.4);
    CGContextAddLineToPoint(ctx, 2.45, 30);
}

static void def_path_20(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -21.075, -4.8);
    CGContextAddQuadCurveToPoint(ctx, -20.9, -6.1, -18.75, -6.55);
    CGContextAddLineToPoint(ctx, -15.725, -6.7);
    CGContextAddQuadCurveToPoint(ctx, -14.825, -6.6, -12.9, -5.45);
    CGContextAddQuadCurveToPoint(ctx, -11.375, -4.55, -10.375, -4.5);
    CGContextAddLineToPoint(ctx, -10.075, -4);
    CGContextAddLineToPoint(ctx, -10.025, -4.5);
    CGContextAddLineToPoint(ctx, -10.375, -4.5);
    CGContextAddLineToPoint(ctx, -12.75, -8.55);
    CGContextAddQuadCurveToPoint(ctx, -13.575, -10.55, -13.15, -13.2);
    CGContextAddQuadCurveToPoint(ctx, -12.875, -14.9, -12.35, -15.35);
    CGContextAddLineToPoint(ctx, -10.25, -15.6);
    CGContextAddQuadCurveToPoint(ctx, -8.45002, -15.4, -6.62502, -14.05);
    CGContextAddQuadCurveToPoint(ctx, -4.50002, -12.55, -4.92502, -10.95);
    CGContextAddLineToPoint(ctx, -4.42502, -10.9);
    CGContextAddQuadCurveToPoint(ctx, -4.20002, -12.2, -4.67502, -14.15);
    CGContextAddQuadCurveToPoint(ctx, -5.10002, -16, -4.97502, -16.95);
    CGContextAddQuadCurveToPoint(ctx, -4.75002, -18.45, -4.15002, -18.9);
    CGContextAddLineToPoint(ctx, -1.90002, -19.15);
    CGContextAddQuadCurveToPoint(ctx, 0.84998, -18.8, 1.79998, -15.1);
    CGContextAddQuadCurveToPoint(ctx, 2.18748, -13.2125, 2.29998, -11.65);
    CGContextAddQuadCurveToPoint(ctx, 3.42498, -14.7, 5.69998, -18.9);
    CGContextAddQuadCurveToPoint(ctx, 10.475, -27.65, 13.925, -27.3);
    CGContextAddLineToPoint(ctx, 16.425, -27);
    CGContextAddQuadCurveToPoint(ctx, 16.75, -25.95, 16.375, -23.75);
    CGContextAddQuadCurveToPoint(ctx, 15.825, -20.2, 11.75, -15);
    CGContextAddLineToPoint(ctx, 6.49998, -8.65001);
    CGContextAddLineToPoint(ctx, 5.89998, -8.65001);
    CGContextAddLineToPoint(ctx, 6.39998, -8.60001);
    CGContextAddLineToPoint(ctx, 6.49998, -8.65001);
    CGContextAddLineToPoint(ctx, 9.79998, -8.90001);
    CGContextAddLineToPoint(ctx, 13, -8.8);
    CGContextAddQuadCurveToPoint(ctx, 15.65, -8.5, 17.6, -5.75);
    CGContextAddQuadCurveToPoint(ctx, 19.225, -3.4, 19.05, -2.05);
    CGContextAddQuadCurveToPoint(ctx, 18.6, 0.799995, 14.1, 0.399995);
    CGContextAddLineToPoint(ctx, 9.42498, -0.700005);
    CGContextAddLineToPoint(ctx, 7.72498, -0.900005);
    CGContextAddQuadCurveToPoint(ctx, 9.42498, -0.200005, 10.9, 4.2);
    CGContextAddQuadCurveToPoint(ctx, 12.35, 8.34999, 12, 10.7);
    CGContextAddQuadCurveToPoint(ctx, 11.775, 12.05, 11.175, 12.55);
    CGContextAddQuadCurveToPoint(ctx, 10.675, 13, 9.82498, 12.9);
    CGContextAddQuadCurveToPoint(ctx, 8.07498, 12.7, 5.82498, 9.5);
    CGContextAddQuadCurveToPoint(ctx, 4.19998, 7.15, 3.62498, 5.65);
    CGContextAddLineToPoint(ctx, 3.12498, 5.6);
    CGContextAddLineToPoint(ctx, 2.04998, 10.35);
    CGContextAddQuadCurveToPoint(ctx, 0.499984, 14.55, -2.05002, 14.5);
    CGContextAddLineToPoint(ctx, -2.35002, 14.45);
    CGContextAddQuadCurveToPoint(ctx, -4.50002, 14.2, -4.95002, 11.3);
    CGContextAddQuadCurveToPoint(ctx, -5.06251, 9.7375, -4.95002, 8.14999);
    CGContextAddLineToPoint(ctx, -4.75002, 7.15);
    CGContextAddQuadCurveToPoint(ctx, -7.85002, 11.1, -8.97502, 11.95);
    CGContextAddQuadCurveToPoint(ctx, -10.375, 13, -13.925, 12.6);
    CGContextAddQuadCurveToPoint(ctx, -16.125, 12.3, -16.65, 11.8);
    CGContextAddQuadCurveToPoint(ctx, -17.05, 11.25, -16.725, 9.25);
    CGContextAddQuadCurveToPoint(ctx, -16.225, 6, -14.875, 5.15);
    CGContextAddQuadCurveToPoint(ctx, -12.8625, 3.66249, -11.475, 2.4);
    CGContextAddLineToPoint(ctx, -10.525, 1.95);
    CGContextAddLineToPoint(ctx, -11.025, 1.9);
    CGContextAddLineToPoint(ctx, -11.475, 2.4);
    CGContextAddLineToPoint(ctx, -11.975, 2.5);
    CGContextAddLineToPoint(ctx, -13.875, 2.55);
    CGContextAddQuadCurveToPoint(ctx, -16.825, 2.2, -19.225, -0.600004);
    CGContextAddQuadCurveToPoint(ctx, -21.35, -3.1, -21.075, -4.8);
    CGContextClosePath(ctx);
}

static void def_path_21(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -4.92503, -2.075);
    CGContextAddQuadCurveToPoint(ctx, -4.92503, -3.525, -3.92503, -4.575);
    CGContextAddQuadCurveToPoint(ctx, -2.87503, -5.575, -1.42503, -5.575);
    CGContextAddQuadCurveToPoint(ctx, 0.0249723, -5.575, 1.02497, -4.575);
    CGContextAddQuadCurveToPoint(ctx, 2.07497, -3.525, 2.07497, -2.075);
    CGContextAddQuadCurveToPoint(ctx, 2.07497, -0.624999, 1.02497, 0.375001);
    CGContextAddQuadCurveToPoint(ctx, 0.0249723, 1.425, -1.42503, 1.425);
    CGContextAddQuadCurveToPoint(ctx, -2.87503, 1.425, -3.92503, 0.375001);
    CGContextAddQuadCurveToPoint(ctx, -4.92503, -0.624999, -4.92503, -2.075);
    CGContextClosePath(ctx);
}

static void draw_gradient_3(CGContextRef ctx)
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGFloat colors[] = {
        0.2, 0.4, 0.6, 1,
        0.137255, 0.27451, 0.411765, 1
    };
    CGFloat locations[] = {
        0,
        1
    };
    CGGradientRef gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2);
    CGColorSpaceRelease(colorSpace);
    CGGradientDrawingOptions options = kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation;
    CGContextDrawRadialGradient(ctx, gradient, CGPointMake(0, 0), 0, CGPointMake(0, 0), 819.2, options);
    CGGradientRelease(gradient);
}

static void def_path_22(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -56.35, -6.85);
    CGContextAddQuadCurveToPoint(ctx, -53.6, -6.85, -51.05, -3.65);
    CGContextAddQuadCurveToPoint(ctx, -48.75, -0.7, -47.05, 3.9);
    CGContextAddQuadCurveToPoint(ctx, -49.7, 4.1, -49.15, 10.2);
    CGContextAddQuadCurveToPoint(ctx, -52.3, -4.8, -58.25, -4.8);
    CGContextAddQuadCurveToPoint(ctx, -59.45, -4.8, -60.45, -3.85);
    CGContextAddLineToPoint(ctx, -60, -4.8);
    CGContextAddQuadCurveToPoint(ctx, -58.75, -6.85, -56.35, -6.85);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -56.9, 2.95);
    CGContextAddQuadCurveToPoint(ctx, -56.5, 2.05, -55.5, 1.45);
    CGContextAddQuadCurveToPoint(ctx, -56.2, 2.95, -56.2, 4.85);
    CGContextAddQuadCurveToPoint(ctx, -56.2, 7.35, -55, 9.65);
    CGContextAddLineToPoint(ctx, -54.3, 10.8);
    CGContextAddLineToPoint(ctx, -54.45, 9.2);
    CGContextAddQuadCurveToPoint(ctx, -54.45, 7.45, -53.65, 5.6);
    CGContextAddLineToPoint(ctx, -53.15, 4.55);
    CGContextAddLineToPoint(ctx, -53.35, 6.65);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 10.35, -52.1, 11.75);
    CGContextAddLineToPoint(ctx, -52.05, 11.8);
    CGContextAddQuadCurveToPoint(ctx, -52.9, 13.2, -54.65, 13.35);
    CGContextAddQuadCurveToPoint(ctx, -55.75, 12.7, -56.55, 10.9);
    CGContextAddQuadCurveToPoint(ctx, -57.45, 8.8, -57.45, 6.55);
    CGContextAddQuadCurveToPoint(ctx, -57.45, 4.05, -56.9, 2.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -41.5, 4);
    CGContextAddQuadCurveToPoint(ctx, -45.95, -6.5, -48.2, -9.5);
    CGContextAddQuadCurveToPoint(ctx, -52.25, -14.9, -56.95, -14.9);
    CGContextAddQuadCurveToPoint(ctx, -61.5, -14.9, -63.45, -9);
    CGContextAddQuadCurveToPoint(ctx, -64.75, -5.25, -64.75, -0.2);
    CGContextAddQuadCurveToPoint(ctx, -64.75, 9.3, -58.4, 16.65);
    CGContextAddQuadCurveToPoint(ctx, -52.6, 23.4, -46.45, 23.4);
    CGContextAddQuadCurveToPoint(ctx, -42.9, 23.4, -40.75, 18.75);
    CGContextAddQuadCurveToPoint(ctx, -39.05, 15.05, -39.05, 11.2);
    CGContextAddQuadCurveToPoint(ctx, -39.05, 8.6, -41.45, 4.1);
    CGContextAddLineToPoint(ctx, -41.5, 4);
    CGContextClosePath(ctx);
}

static void def_path_23(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -56.35, -6.85);
    CGContextAddQuadCurveToPoint(ctx, -58.75, -6.85, -60, -4.8);
    CGContextAddLineToPoint(ctx, -60.45, -3.85);
    CGContextAddQuadCurveToPoint(ctx, -59.45, -4.8, -58.25, -4.8);
    CGContextAddQuadCurveToPoint(ctx, -52.3, -4.8, -49.15, 10.2);
    CGContextAddQuadCurveToPoint(ctx, -49.7, 4.1, -47.05, 3.9);
    CGContextAddQuadCurveToPoint(ctx, -48.75, -0.699999, -51.05, -3.65);
    CGContextAddQuadCurveToPoint(ctx, -53.6, -6.85, -56.35, -6.85);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -56.9, 2.95);
    CGContextAddQuadCurveToPoint(ctx, -57.45, 4.05, -57.45, 6.55);
    CGContextAddQuadCurveToPoint(ctx, -57.45, 8.8, -56.55, 10.9);
    CGContextAddQuadCurveToPoint(ctx, -55.75, 12.7, -54.65, 13.35);
    CGContextAddQuadCurveToPoint(ctx, -52.9, 13.2, -52.05, 11.8);
    CGContextAddLineToPoint(ctx, -52.1, 11.75);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 10.35, -53.35, 6.65);
    CGContextAddLineToPoint(ctx, -53.15, 4.55);
    CGContextAddLineToPoint(ctx, -53.65, 5.6);
    CGContextAddQuadCurveToPoint(ctx, -54.45, 7.45, -54.45, 9.2);
    CGContextAddLineToPoint(ctx, -54.3, 10.8);
    CGContextAddLineToPoint(ctx, -55, 9.65);
    CGContextAddQuadCurveToPoint(ctx, -56.2, 7.35, -56.2, 4.85);
    CGContextAddQuadCurveToPoint(ctx, -56.2, 2.95, -55.5, 1.45);
    CGContextAddQuadCurveToPoint(ctx, -56.5, 2.05, -56.9, 2.95);
    CGContextClosePath(ctx);
}

static void def_path_24(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -56.35, -6.85);
    CGContextAddQuadCurveToPoint(ctx, -58.75, -6.85, -60, -4.8);
    CGContextAddLineToPoint(ctx, -60.45, -3.85);
    CGContextAddQuadCurveToPoint(ctx, -59.45, -4.8, -58.25, -4.8);
    CGContextAddQuadCurveToPoint(ctx, -52.3, -4.8, -49.15, 10.2);
    CGContextAddQuadCurveToPoint(ctx, -49.7, 4.1, -47.05, 3.9);
    CGContextAddQuadCurveToPoint(ctx, -48.75, -0.699999, -51.05, -3.65);
    CGContextAddQuadCurveToPoint(ctx, -53.6, -6.85, -56.35, -6.85);
    CGContextClosePath(ctx);
}

static void def_path_25(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -56.9, 2.95);
    CGContextAddQuadCurveToPoint(ctx, -57.45, 4.05, -57.45, 6.55);
    CGContextAddQuadCurveToPoint(ctx, -57.45, 8.8, -56.55, 10.9);
    CGContextAddQuadCurveToPoint(ctx, -55.75, 12.7, -54.65, 13.35);
    CGContextAddQuadCurveToPoint(ctx, -52.9, 13.2, -52.05, 11.8);
    CGContextAddLineToPoint(ctx, -52.1, 11.75);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 10.35, -53.35, 6.65);
    CGContextAddLineToPoint(ctx, -53.15, 4.55);
    CGContextAddLineToPoint(ctx, -53.65, 5.6);
    CGContextAddQuadCurveToPoint(ctx, -54.45, 7.45, -54.45, 9.2);
    CGContextAddLineToPoint(ctx, -54.3, 10.8);
    CGContextAddLineToPoint(ctx, -55, 9.65);
    CGContextAddQuadCurveToPoint(ctx, -56.2, 7.35, -56.2, 4.85);
    CGContextAddQuadCurveToPoint(ctx, -56.2, 2.95, -55.5, 1.45);
    CGContextAddQuadCurveToPoint(ctx, -56.5, 2.05, -56.9, 2.95);
}

static void def_path_26(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.5, -57.7);
    CGContextAddLineToPoint(ctx, 21.1, -60.4);
    CGContextAddQuadCurveToPoint(ctx, 9.75, -64.55, -1.15, -64.95);
    CGContextAddQuadCurveToPoint(ctx, -15.9, -65.5, -28.1, -59.05);
    CGContextAddQuadCurveToPoint(ctx, -57.15, -43.55, -52.05, -6.25001);
    CGContextAddQuadCurveToPoint(ctx, -48.75, 18.15, -33.2, 44.4);
    CGContextAddQuadCurveToPoint(ctx, -23.25, 61.35, -8.55, 64.35);
    CGContextAddQuadCurveToPoint(ctx, 4, 66.85, 18.15, 59.3);
    CGContextAddQuadCurveToPoint(ctx, 30.85, 52.45, 38.85, 39.35);
    CGContextAddQuadCurveToPoint(ctx, 46.1, 27.55, 48.7, 12.2);
    CGContextAddQuadCurveToPoint(ctx, 51.1, -1.95, 49, -16.05);
    CGContextAddQuadCurveToPoint(ctx, 47.05, -29.8, 41.45, -39.3);
    CGContextAddQuadCurveToPoint(ctx, 34.05, -51.85, 25.5, -57.7);
    CGContextClosePath(ctx);
}

static void def_path_27(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -15.95, -10);
    CGContextAddQuadCurveToPoint(ctx, -20.05, -14.8, -30.95, -14.8);
    CGContextAddLineToPoint(ctx, -36.8, -14.45);
    CGContextAddLineToPoint(ctx, -40.95, -13.75);
    CGContextAddQuadCurveToPoint(ctx, -37.55, -15.1, -34.3, -15.7);
    CGContextAddLineToPoint(ctx, -25.7, -16.3);
    CGContextAddQuadCurveToPoint(ctx, -15.5, -16.3, -12.1, -8.35);
    CGContextAddQuadCurveToPoint(ctx, -9.85, -3, -10.1, 9.15);
    CGContextAddQuadCurveToPoint(ctx, -10.4, 23, -9.65, 26.65);
    CGContextAddQuadCurveToPoint(ctx, -7.95, 34.6, -0.65, 34.6);
    CGContextAddLineToPoint(ctx, 1.6, 34.35);
    CGContextAddLineToPoint(ctx, 2.5, 34.15);
    CGContextAddLineToPoint(ctx, 0.8, 35.5);
    CGContextAddLineToPoint(ctx, -2.9, 36.1);
    CGContextAddQuadCurveToPoint(ctx, -3.25, 38, -3.25, 41.35);
    CGContextAddLineToPoint(ctx, -3.5, 41.35);
    CGContextAddLineToPoint(ctx, -3.8, 38.4);
    CGContextAddLineToPoint(ctx, -4.1, 36.1);
    CGContextAddQuadCurveToPoint(ctx, -8.95, 35.8, -11.05, 31.05);
    CGContextAddQuadCurveToPoint(ctx, -12.75, 27.2, -12.75, 19.9);
    CGContextAddLineToPoint(ctx, -12.1, 5.5);
    CGContextAddQuadCurveToPoint(ctx, -12.1, -5.5, -15.95, -10);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 16.25, -12.5);
    CGContextAddQuadCurveToPoint(ctx, 12.3, -11.1, 10.35, -7.75);
    CGContextAddQuadCurveToPoint(ctx, 8.7, -4.9, 7.6, 1.3);
    CGContextAddQuadCurveToPoint(ctx, 6.95, 4.85, 5.6, 14.15);
    CGContextAddLineToPoint(ctx, 5.65, 5.5);
    CGContextAddQuadCurveToPoint(ctx, 5.7, -4.85, 8.3, -9.8);
    CGContextAddQuadCurveToPoint(ctx, 11.9, -16.8, 21.4, -16.8);
    CGContextAddQuadCurveToPoint(ctx, 26.85, -16.8, 31.25, -15.8);
    CGContextAddQuadCurveToPoint(ctx, 35.5, -14.8, 41.6, -12.1);
    CGContextAddLineToPoint(ctx, 36.3, -13);
    CGContextAddLineToPoint(ctx, 27.9, -13.85);
    CGContextAddQuadCurveToPoint(ctx, 20.2, -13.85, 16.25, -12.5);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -9.95, 52.45);
    CGContextAddLineToPoint(ctx, -7.85, 53.3);
    CGContextAddLineToPoint(ctx, -4.1, 53.75);
    CGContextAddLineToPoint(ctx, -0.9, 53.3);
    CGContextAddQuadCurveToPoint(ctx, 0.9, 52.85, 1.65, 52.15);
    CGContextAddQuadCurveToPoint(ctx, 0.95, 53.65, -0.8, 54.55);
    CGContextAddQuadCurveToPoint(ctx, -2.55, 55.45, -4.85, 55.45);
    CGContextAddQuadCurveToPoint(ctx, -7.25, 55.45, -8.6, 54.5);
    CGContextAddQuadCurveToPoint(ctx, -9.65, 53.75, -9.95, 52.45);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 4.45, 46.6);
    CGContextAddLineToPoint(ctx, -13.35, 46.6);
    CGContextAddQuadCurveToPoint(ctx, -8.45, 45.35, -5.6, 45.35);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 45.45, 4.45, 46.6);
    CGContextClosePath(ctx);
}

static void def_path_28(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 56.35, -9.4);
    CGContextAddQuadCurveToPoint(ctx, 53.6, -9.4, 51.05, -6.2);
    CGContextAddQuadCurveToPoint(ctx, 48.75, -3.25, 47.05, 1.35);
    CGContextAddQuadCurveToPoint(ctx, 49.7, 1.55, 49.15, 7.65);
    CGContextAddQuadCurveToPoint(ctx, 52.3, -7.35, 58.25, -7.35);
    CGContextAddQuadCurveToPoint(ctx, 59.45, -7.35, 60.45, -6.4);
    CGContextAddLineToPoint(ctx, 60, -7.35);
    CGContextAddQuadCurveToPoint(ctx, 58.75, -9.4, 56.35, -9.4);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 56.9, 0.4);
    CGContextAddQuadCurveToPoint(ctx, 56.5, -0.5, 55.5, -1.1);
    CGContextAddQuadCurveToPoint(ctx, 56.2, 0.4, 56.2, 2.3);
    CGContextAddQuadCurveToPoint(ctx, 56.2, 4.8, 55, 7.1);
    CGContextAddLineToPoint(ctx, 54.3, 8.25);
    CGContextAddLineToPoint(ctx, 54.45, 6.65);
    CGContextAddQuadCurveToPoint(ctx, 54.45, 4.9, 53.65, 3.05);
    CGContextAddLineToPoint(ctx, 53.15, 2);
    CGContextAddLineToPoint(ctx, 53.35, 4.1);
    CGContextAddQuadCurveToPoint(ctx, 53.35, 7.8, 52.1, 9.2);
    CGContextAddLineToPoint(ctx, 52.05, 9.25);
    CGContextAddQuadCurveToPoint(ctx, 52.9, 10.65, 54.65, 10.8);
    CGContextAddQuadCurveToPoint(ctx, 55.75, 10.15, 56.55, 8.35);
    CGContextAddQuadCurveToPoint(ctx, 57.45, 6.25, 57.45, 4);
    CGContextAddQuadCurveToPoint(ctx, 57.45, 1.5, 56.9, 0.4);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 41.5, 1.45);
    CGContextAddQuadCurveToPoint(ctx, 45.95, -9.05, 48.2, -12.05);
    CGContextAddQuadCurveToPoint(ctx, 52.25, -17.45, 56.95, -17.45);
    CGContextAddQuadCurveToPoint(ctx, 61.5, -17.45, 63.45, -11.55);
    CGContextAddQuadCurveToPoint(ctx, 64.75, -7.8, 64.75, -2.75);
    CGContextAddQuadCurveToPoint(ctx, 64.75, 6.75, 58.4, 14.1);
    CGContextAddQuadCurveToPoint(ctx, 52.6, 20.85, 46.45, 20.85);
    CGContextAddQuadCurveToPoint(ctx, 42.9, 20.85, 40.75, 16.2);
    CGContextAddQuadCurveToPoint(ctx, 39.05, 12.5, 39.05, 8.65);
    CGContextAddQuadCurveToPoint(ctx, 39.05, 6.05, 41.45, 1.55);
    CGContextAddLineToPoint(ctx, 41.5, 1.45);
    CGContextClosePath(ctx);
}

static void def_path_29(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 56.35, -9.4);
    CGContextAddQuadCurveToPoint(ctx, 58.75, -9.4, 60, -7.35);
    CGContextAddLineToPoint(ctx, 60.45, -6.4);
    CGContextAddQuadCurveToPoint(ctx, 59.45, -7.35, 58.25, -7.35);
    CGContextAddQuadCurveToPoint(ctx, 52.3, -7.35, 49.15, 7.65);
    CGContextAddQuadCurveToPoint(ctx, 49.7, 1.55, 47.05, 1.35);
    CGContextAddQuadCurveToPoint(ctx, 48.75, -3.25, 51.05, -6.2);
    CGContextAddQuadCurveToPoint(ctx, 53.6, -9.4, 56.35, -9.4);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 56.9, 0.4);
    CGContextAddQuadCurveToPoint(ctx, 57.45, 1.5, 57.45, 4);
    CGContextAddQuadCurveToPoint(ctx, 57.45, 6.25, 56.55, 8.35);
    CGContextAddQuadCurveToPoint(ctx, 55.75, 10.15, 54.65, 10.8);
    CGContextAddQuadCurveToPoint(ctx, 52.9, 10.65, 52.05, 9.25);
    CGContextAddLineToPoint(ctx, 52.1, 9.2);
    CGContextAddQuadCurveToPoint(ctx, 53.35, 7.8, 53.35, 4.1);
    CGContextAddLineToPoint(ctx, 53.15, 2);
    CGContextAddLineToPoint(ctx, 53.65, 3.05);
    CGContextAddQuadCurveToPoint(ctx, 54.45, 4.9, 54.45, 6.65);
    CGContextAddLineToPoint(ctx, 54.3, 8.25);
    CGContextAddLineToPoint(ctx, 55, 7.1);
    CGContextAddQuadCurveToPoint(ctx, 56.2, 4.8, 56.2, 2.3);
    CGContextAddQuadCurveToPoint(ctx, 56.2, 0.400001, 55.5, -1.1);
    CGContextAddQuadCurveToPoint(ctx, 56.5, -0.5, 56.9, 0.4);
    CGContextClosePath(ctx);
}

static void def_path_30(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 56.35, -9.4);
    CGContextAddQuadCurveToPoint(ctx, 58.75, -9.4, 60, -7.35);
    CGContextAddLineToPoint(ctx, 60.45, -6.4);
    CGContextAddQuadCurveToPoint(ctx, 59.45, -7.35, 58.25, -7.35);
    CGContextAddQuadCurveToPoint(ctx, 52.3, -7.35, 49.15, 7.65);
    CGContextAddQuadCurveToPoint(ctx, 49.7, 1.55, 47.05, 1.35);
    CGContextAddQuadCurveToPoint(ctx, 48.75, -3.25, 51.05, -6.2);
    CGContextAddQuadCurveToPoint(ctx, 53.6, -9.4, 56.35, -9.4);
    CGContextClosePath(ctx);
}

static void def_path_31(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 56.9, 0.4);
    CGContextAddQuadCurveToPoint(ctx, 57.45, 1.5, 57.45, 4);
    CGContextAddQuadCurveToPoint(ctx, 57.45, 6.25, 56.55, 8.35);
    CGContextAddQuadCurveToPoint(ctx, 55.75, 10.15, 54.65, 10.8);
    CGContextAddQuadCurveToPoint(ctx, 52.9, 10.65, 52.05, 9.25);
    CGContextAddLineToPoint(ctx, 52.1, 9.2);
    CGContextAddQuadCurveToPoint(ctx, 53.35, 7.8, 53.35, 4.1);
    CGContextAddLineToPoint(ctx, 53.15, 2);
    CGContextAddLineToPoint(ctx, 53.65, 3.05);
    CGContextAddQuadCurveToPoint(ctx, 54.45, 4.9, 54.45, 6.65);
    CGContextAddLineToPoint(ctx, 54.3, 8.25);
    CGContextAddLineToPoint(ctx, 55, 7.1);
    CGContextAddQuadCurveToPoint(ctx, 56.2, 4.8, 56.2, 2.3);
    CGContextAddQuadCurveToPoint(ctx, 56.2, 0.400001, 55.5, -1.1);
    CGContextAddQuadCurveToPoint(ctx, 56.5, -0.5, 56.9, 0.4);
}

static void def_path_32(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -2.52716, -2.99733);
    CGContextAddLineToPoint(ctx, -9.42716, -1.74733);
    CGContextAddLineToPoint(ctx, -14.2772, -0.597327);
    CGContextAddLineToPoint(ctx, -15.7772, -0.247327);
    CGContextAddLineToPoint(ctx, -14.2772, 0.152673);
    CGContextAddLineToPoint(ctx, -6.67716, 2.05267);
    CGContextAddLineToPoint(ctx, 1.92284, 3.00267);
    CGContextAddLineToPoint(ctx, 5.67284, 3.10267);
    CGContextAddLineToPoint(ctx, 10.4228, 2.65267);
    CGContextAddQuadCurveToPoint(ctx, 13.6228, 1.75267, 15.6228, -0.147327);
    CGContextAddLineToPoint(ctx, 9.77284, -1.89733);
    CGContextAddLineToPoint(ctx, 6.17284, -2.64733);
    CGContextAddQuadCurveToPoint(ctx, 6.02284, -1.19733, 5.07284, 0.152673);
    CGContextAddQuadCurveToPoint(ctx, 3.77284, 2.20267, 1.92284, 2.20267);
    CGContextAddQuadCurveToPoint(ctx, -0.277159, 2.20267, -1.52716, -0.247327);
    CGContextAddLineToPoint(ctx, -2.52716, -2.99733);
    CGContextClosePath(ctx);
}

static void def_path_33(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -2.52716, -2.99733);
    CGContextAddLineToPoint(ctx, -1.52716, -0.247327);
    CGContextAddQuadCurveToPoint(ctx, -0.277158, 2.20267, 1.92284, 2.20267);
    CGContextAddQuadCurveToPoint(ctx, 3.77284, 2.20267, 5.07284, 0.152673);
    CGContextAddQuadCurveToPoint(ctx, 6.02284, -1.19733, 6.17284, -2.64733);
    CGContextAddLineToPoint(ctx, 2.67284, -3.19733);
    CGContextAddLineToPoint(ctx, 0.422842, -3.24733);
    CGContextAddLineToPoint(ctx, -2.52716, -2.99733);
    CGContextClosePath(ctx);
}

static void def_path_34(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 6.22974, -2.6447);
    CGContextAddQuadCurveToPoint(ctx, 6.07974, -1.1947, 5.12974, 0.1553);
    CGContextAddQuadCurveToPoint(ctx, 3.82974, 2.2053, 1.97974, 2.2053);
    CGContextAddQuadCurveToPoint(ctx, -0.220262, 2.2053, -1.47026, -0.2447);
    CGContextAddLineToPoint(ctx, -2.52716, -2.99733);
}

static void def_path_35(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -6.22426, -2.64238);
    CGContextAddQuadCurveToPoint(ctx, -6.02426, -1.19238, -5.12426, 0.157625);
    CGContextAddQuadCurveToPoint(ctx, -3.82426, 2.20762, -1.97426, 2.20762);
    CGContextAddQuadCurveToPoint(ctx, 0.225738, 2.20762, 1.47574, -0.242375);
    CGContextAddLineToPoint(ctx, 2.47574, -2.99238);
    CGContextAddLineToPoint(ctx, 9.32574, -1.74238);
    CGContextAddLineToPoint(ctx, 14.2257, -0.592375);
    CGContextAddLineToPoint(ctx, 15.6757, -0.242375);
    CGContextAddLineToPoint(ctx, 14.2257, 0.157625);
    CGContextAddLineToPoint(ctx, 6.62574, 2.05762);
    CGContextAddLineToPoint(ctx, -1.97426, 3.00762);
    CGContextAddLineToPoint(ctx, -5.67426, 3.10762);
    CGContextAddLineToPoint(ctx, -10.4743, 2.65762);
    CGContextAddQuadCurveToPoint(ctx, -13.6743, 1.75762, -15.6743, -0.142375);
    CGContextAddLineToPoint(ctx, -9.82426, -1.89238);
    CGContextAddLineToPoint(ctx, -6.22426, -2.64238);
    CGContextClosePath(ctx);
}

static void def_path_36(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 2.52494, -2.99469);
    CGContextAddLineToPoint(ctx, 1.52494, -0.244692);
    CGContextAddQuadCurveToPoint(ctx, 0.274936, 2.20531, -1.92506, 2.20531);
    CGContextAddQuadCurveToPoint(ctx, -3.77506, 2.20531, -5.07506, 0.155308);
    CGContextAddQuadCurveToPoint(ctx, -5.97506, -1.19469, -6.17506, -2.64469);
    CGContextAddLineToPoint(ctx, -2.67506, -3.19469);
    CGContextAddLineToPoint(ctx, -0.425064, -3.24469);
    CGContextAddLineToPoint(ctx, 2.52494, -2.99469);
    CGContextClosePath(ctx);
}

static void def_path_37(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -6.22426, -2.64238);
    CGContextAddQuadCurveToPoint(ctx, -6.02426, -1.19238, -5.12426, 0.157625);
    CGContextAddQuadCurveToPoint(ctx, -3.82426, 2.20762, -1.97426, 2.20762);
    CGContextAddQuadCurveToPoint(ctx, 0.225738, 2.20762, 1.47574, -0.242375);
    CGContextAddLineToPoint(ctx, 2.52494, -2.99469);
}

static void def_path_38(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -80.1, -98.7);
    CGContextAddQuadCurveToPoint(ctx, -97.3, -92.7, -106.35, -80.55);
    CGContextAddQuadCurveToPoint(ctx, -115.35, -68.6, -117.8, -48.85);
    CGContextAddQuadCurveToPoint(ctx, -120.1, -30.3, -117.1, -1.25);
    CGContextAddQuadCurveToPoint(ctx, -114.2, 27.2, -110.35, 45.55);
    CGContextAddQuadCurveToPoint(ctx, -105.4, 69.65, -97.5, 85.35);
    CGContextAddQuadCurveToPoint(ctx, -78.45, 123.35, -36.95, 121.75);
    CGContextAddQuadCurveToPoint(ctx, 8.05, 120, 30.6, 70.75);
    CGContextAddQuadCurveToPoint(ctx, 50.3, 27.65, 47.75, -37.5);
    CGContextAddQuadCurveToPoint(ctx, 46.15, -78.45, 18.35, -94.85);
    CGContextAddQuadCurveToPoint(ctx, -1.94999, -106.95, -36.45, -105.6);
    CGContextAddQuadCurveToPoint(ctx, -63.45, -104.55, -80.1, -98.7);
    CGContextClosePath(ctx);
}

static void def_path_39(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -46.7, -64.1);
    CGContextAddQuadCurveToPoint(ctx, -45.45, -63.15, -43.9, -62.4);
    CGContextAddQuadCurveToPoint(ctx, -41.95, -61.45, -34.45, -59.35);
    CGContextAddQuadCurveToPoint(ctx, -28.5, -57.75, -25.85, -55.5);
    CGContextAddQuadCurveToPoint(ctx, -22.3, -52.5, -21.9, -46.9);
    CGContextAddQuadCurveToPoint(ctx, -20.55, -52.85, -22.85, -56.15);
    CGContextAddQuadCurveToPoint(ctx, -24.95, -59.15, -30.9, -60.7);
    CGContextAddLineToPoint(ctx, -42.35, -62.95);
    CGContextAddLineToPoint(ctx, -46.7, -64.1);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -0.8, -55.3);
    CGContextAddQuadCurveToPoint(ctx, -8.55, -55, -8.4, -49.15);
    CGContextAddLineToPoint(ctx, -8.4, -47.55);
    CGContextAddQuadCurveToPoint(ctx, -6.2, -50.7, -0.700001, -52.7);
    CGContextAddLineToPoint(ctx, 5.1, -54.7);
    CGContextAddLineToPoint(ctx, 5.05, -55.15);
    CGContextAddLineToPoint(ctx, -0.8, -55.3);
    CGContextClosePath(ctx);
}

static void draw_gradient_4(CGContextRef ctx)
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGFloat colors[] = {
        0.180392, 0.356863, 0.537255, 1,
        0.2, 0.4, 0.6, 1
    };
    CGFloat locations[] = {
        0,
        1
    };
    CGGradientRef gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2);
    CGColorSpaceRelease(colorSpace);
    CGGradientDrawingOptions options = kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation;
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
    CGGradientRelease(gradient);
}

static void def_path_40(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -30.4, -160.7);
    CGContextAddLineToPoint(ctx, -34.75, -158.45);
    CGContextAddQuadCurveToPoint(ctx, -40.6, -133, -45.15, -121.95);
    CGContextAddQuadCurveToPoint(ctx, -51.3, -107.05, -61.4, -99.6);
    CGContextAddLineToPoint(ctx, -61.5, -93.9);
    CGContextAddQuadCurveToPoint(ctx, -61.5, -77.3, -46, -67.15);
    CGContextAddQuadCurveToPoint(ctx, -40.05, -63.25, -32.85, -61.05);
    CGContextAddQuadCurveToPoint(ctx, -26.55, -59.15, -21.6, -59.15);
    CGContextAddQuadCurveToPoint(ctx, -12, -59.15, -3.74999, -66.45);
    CGContextAddLineToPoint(ctx, -3.14999, -67);
    CGContextAddQuadCurveToPoint(ctx, -3.04999, -74.7, -1.59999, -86.15);
    CGContextAddLineToPoint(ctx, 4.25001, -103.95);
    CGContextAddQuadCurveToPoint(ctx, 9.90001, -121.5, 9.90001, -127.9);
    CGContextAddQuadCurveToPoint(ctx, 9.90001, -141.35, 1.90001, -151.65);
    CGContextAddQuadCurveToPoint(ctx, -6.64999, -162.65, -19.35, -162.65);
    CGContextAddQuadCurveToPoint(ctx, -25.7, -162.65, -30.4, -160.7);
    CGContextClosePath(ctx);
}

static void def_path_41(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -43.65, 6.35);
    CGContextAddQuadCurveToPoint(ctx, -63.55, 25.9, -75.7, 43.25);
    CGContextAddQuadCurveToPoint(ctx, -89.65, 63.15, -89.65, 75.35);
    CGContextAddQuadCurveToPoint(ctx, -89.65, 92.35, -78.55, 106.15);
    CGContextAddQuadCurveToPoint(ctx, -71.35, 115.05, -60, 120.1);
    CGContextAddQuadCurveToPoint(ctx, -49.6, 124.75, -40.15, 124.35);
    CGContextAddQuadCurveToPoint(ctx, -24.1, 123.7, -9.90001, 107);
    CGContextAddQuadCurveToPoint(ctx, 0.899994, 94.2, 10.35, 72.35);
    CGContextAddQuadCurveToPoint(ctx, 20.75, 50.75, 28.15, 33.9);
    CGContextAddQuadCurveToPoint(ctx, 42.35, 1.65001, 42.35, -8.64999);
    CGContextAddQuadCurveToPoint(ctx, 42.35, -22.45, 35.4, -29.65);
    CGContextAddQuadCurveToPoint(ctx, 28.6, -36.65, 15.85, -36.65);
    CGContextAddQuadCurveToPoint(ctx, 9.14999, -36.65, -8.25, -24);
    CGContextAddQuadCurveToPoint(ctx, -25.35, -11.6, -43.65, 6.35);
    CGContextClosePath(ctx);
}

static void def_path_42(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -129.1, 131.25);
    CGContextAddLineToPoint(ctx, -129, 131.6);
    CGContextAddQuadCurveToPoint(ctx, -128.95, 129.2, -124.85, 127.75);
    CGContextAddQuadCurveToPoint(ctx, -121.65, 126.6, -118.65, 126.6);
    CGContextAddLineToPoint(ctx, -112.2, 127.4);
    CGContextAddLineToPoint(ctx, -110.05, 127.8);
    CGContextAddLineToPoint(ctx, -109.2, 128.45);
    CGContextAddQuadCurveToPoint(ctx, -107.25, 129.6, -103.5, 129.6);
    CGContextAddQuadCurveToPoint(ctx, -101, 129.6, -99.35, 127.6);
    CGContextAddQuadCurveToPoint(ctx, -97.7, 125.6, -95.75, 125.6);
    CGContextAddQuadCurveToPoint(ctx, -93.1, 125.6, -90.15, 127);
    CGContextAddQuadCurveToPoint(ctx, -87.15, 128.35, -86.65, 128.35);
    CGContextAddQuadCurveToPoint(ctx, -84.9, 128.35, -84, 127.4);
    CGContextAddLineToPoint(ctx, -82.7, 125.35);
    CGContextAddQuadCurveToPoint(ctx, -80.9, 122.35, -75.9, 122.35);
    CGContextAddQuadCurveToPoint(ctx, -73.4, 122.35, -70.45, 123.35);
    CGContextAddQuadCurveToPoint(ctx, -67.45, 124.35, -66.25, 124.35);
    CGContextAddQuadCurveToPoint(ctx, -62.6, 124.35, -60.25, 122.6);
    CGContextAddQuadCurveToPoint(ctx, -57.5, 120.55, -57.5, 116.6);
    CGContextAddQuadCurveToPoint(ctx, -57.5, 114.1, -58.6, 111.9);
    CGContextAddQuadCurveToPoint(ctx, -59.75, 109.7, -59.75, 108.35);
    CGContextAddQuadCurveToPoint(ctx, -59.75, 105.5, -57.4, 103.05);
    CGContextAddLineToPoint(ctx, -52.25, 98.65);
    CGContextAddQuadCurveToPoint(ctx, -44.75, 92.4, -44.75, 83.2);
    CGContextAddQuadCurveToPoint(ctx, -44.75, 76.05, -51.1, 65.35);
    CGContextAddQuadCurveToPoint(ctx, -57.5, 54.65, -57.5, 49.6);
    CGContextAddQuadCurveToPoint(ctx, -57.5, 37.95, -48.7, 26.05);
    CGContextAddQuadCurveToPoint(ctx, -41.75, 16.65, -33.25, 11.7);
    CGContextAddQuadCurveToPoint(ctx, -53.4, 13.5, -67.4, 24.5);
    CGContextAddQuadCurveToPoint(ctx, -70.85, 28.8, -74.35, 36.55);
    CGContextAddQuadCurveToPoint(ctx, -80, 48.95, -80, 57.6);
    CGContextAddQuadCurveToPoint(ctx, -80, 64.15, -77.65, 68.65);
    CGContextAddQuadCurveToPoint(ctx, -76.2, 71.45, -72.5, 75.15);
    CGContextAddQuadCurveToPoint(ctx, -68.7, 79, -67.35, 81.4);
    CGContextAddQuadCurveToPoint(ctx, -65, 85.5, -65, 91.45);
    CGContextAddQuadCurveToPoint(ctx, -65, 94.2, -66.7, 95.9);
    CGContextAddLineToPoint(ctx, -70.5, 98.4);
    CGContextAddQuadCurveToPoint(ctx, -76.15, 101.65, -76.5, 107.85);
    CGContextAddQuadCurveToPoint(ctx, -76.9, 114.5, -81.55, 118.4);
    CGContextAddQuadCurveToPoint(ctx, -85.05, 121.35, -88.4, 121.35);
    CGContextAddLineToPoint(ctx, -91.5, 121);
    CGContextAddLineToPoint(ctx, -94.65, 120.6);
    CGContextAddQuadCurveToPoint(ctx, -97.3, 120.6, -98.95, 121.6);
    CGContextAddQuadCurveToPoint(ctx, -100.6, 122.6, -102.15, 122.6);
    CGContextAddQuadCurveToPoint(ctx, -103.6, 122.6, -106.25, 121.35);
    CGContextAddQuadCurveToPoint(ctx, -108.9, 120.1, -112.75, 120.1);
    CGContextAddQuadCurveToPoint(ctx, -118.55, 120.1, -122.75, 122.95);
    CGContextAddQuadCurveToPoint(ctx, -126.85, 125.8, -129.1, 131.25);
    CGContextClosePath(ctx);
}

static void def_path_43(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -67.4, 24.5);
    CGContextAddLineToPoint(ctx, -70.5, 27.1);
    CGContextAddLineToPoint(ctx, -75.15, 30.75);
    CGContextAddQuadCurveToPoint(ctx, -78.4, 33.35, -79.5, 35.1);
    CGContextAddQuadCurveToPoint(ctx, -80.55, 36.65, -81.15, 39.5);
    CGContextAddLineToPoint(ctx, -82.25, 44.6);
    CGContextAddQuadCurveToPoint(ctx, -83.15, 47.75, -86.5, 49.7);
    CGContextAddQuadCurveToPoint(ctx, -91.6, 52.75, -92.5, 53.6);
    CGContextAddQuadCurveToPoint(ctx, -95.55, 56.45, -97.3, 60.8);
    CGContextAddQuadCurveToPoint(ctx, -99, 65, -99, 69.45);
    CGContextAddQuadCurveToPoint(ctx, -99, 81.6, -90, 85.95);
    CGContextAddLineToPoint(ctx, -83.8, 88.75);
    CGContextAddQuadCurveToPoint(ctx, -81, 90.5, -81, 93.45);
    CGContextAddQuadCurveToPoint(ctx, -81, 97.3, -86.35, 99.6);
    CGContextAddQuadCurveToPoint(ctx, -91.75, 101.9, -91.75, 105.6);
    CGContextAddLineToPoint(ctx, -91.25, 108.95);
    CGContextAddQuadCurveToPoint(ctx, -91.25, 111.5, -93, 113.6);
    CGContextAddQuadCurveToPoint(ctx, -94.9, 115.85, -97.4, 115.85);
    CGContextAddQuadCurveToPoint(ctx, -98.55, 115.85, -103.35, 114.25);
    CGContextAddQuadCurveToPoint(ctx, -108.2, 112.6, -109.75, 112.6);
    CGContextAddQuadCurveToPoint(ctx, -116.65, 112.6, -122.35, 118.4);
    CGContextAddQuadCurveToPoint(ctx, -125.3, 121.45, -126.25, 123.3);
    CGContextAddLineToPoint(ctx, -127.5, 124.6);
    CGContextAddQuadCurveToPoint(ctx, -129.25, 127, -129.25, 130.35);
    CGContextAddLineToPoint(ctx, -129.1, 131.25);
    CGContextAddQuadCurveToPoint(ctx, -126.85, 125.8, -122.75, 122.95);
    CGContextAddQuadCurveToPoint(ctx, -118.55, 120.1, -112.75, 120.1);
    CGContextAddQuadCurveToPoint(ctx, -108.9, 120.1, -106.25, 121.35);
    CGContextAddQuadCurveToPoint(ctx, -103.6, 122.6, -102.15, 122.6);
    CGContextAddQuadCurveToPoint(ctx, -100.6, 122.6, -98.95, 121.6);
    CGContextAddQuadCurveToPoint(ctx, -97.3, 120.6, -94.65, 120.6);
    CGContextAddLineToPoint(ctx, -91.5, 121);
    CGContextAddLineToPoint(ctx, -88.4, 121.35);
    CGContextAddQuadCurveToPoint(ctx, -85.05, 121.35, -81.55, 118.4);
    CGContextAddQuadCurveToPoint(ctx, -76.9, 114.5, -76.5, 107.85);
    CGContextAddQuadCurveToPoint(ctx, -76.15, 101.65, -70.5, 98.4);
    CGContextAddLineToPoint(ctx, -66.7, 95.9);
    CGContextAddQuadCurveToPoint(ctx, -65, 94.2, -65, 91.45);
    CGContextAddQuadCurveToPoint(ctx, -65, 85.5, -67.35, 81.4);
    CGContextAddQuadCurveToPoint(ctx, -68.7, 79, -72.5, 75.15);
    CGContextAddQuadCurveToPoint(ctx, -76.2, 71.45, -77.65, 68.65);
    CGContextAddQuadCurveToPoint(ctx, -80, 64.15, -80, 57.6);
    CGContextAddQuadCurveToPoint(ctx, -80, 48.95, -74.35, 36.55);
    CGContextAddQuadCurveToPoint(ctx, -70.85, 28.8, -67.4, 24.5);
    CGContextClosePath(ctx);
}

static void def_path_44(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -129.1, 131.25);
    CGContextAddQuadCurveToPoint(ctx, -126.85, 125.8, -122.75, 122.95);
    CGContextAddQuadCurveToPoint(ctx, -118.55, 120.1, -112.75, 120.1);
    CGContextAddQuadCurveToPoint(ctx, -108.9, 120.1, -106.25, 121.35);
    CGContextAddQuadCurveToPoint(ctx, -103.6, 122.6, -102.15, 122.6);
    CGContextAddQuadCurveToPoint(ctx, -100.6, 122.6, -98.95, 121.6);
    CGContextAddQuadCurveToPoint(ctx, -97.3, 120.6, -94.65, 120.6);
    CGContextAddLineToPoint(ctx, -91.5, 121);
    CGContextAddLineToPoint(ctx, -88.4, 121.35);
    CGContextAddQuadCurveToPoint(ctx, -85.05, 121.35, -81.55, 118.4);
    CGContextAddQuadCurveToPoint(ctx, -76.9, 114.5, -76.5, 107.85);
    CGContextAddQuadCurveToPoint(ctx, -76.15, 101.65, -70.5, 98.4);
    CGContextAddLineToPoint(ctx, -66.7, 95.9);
    CGContextAddQuadCurveToPoint(ctx, -65, 94.2, -65, 91.45);
    CGContextAddQuadCurveToPoint(ctx, -65, 85.5, -67.35, 81.4);
    CGContextAddQuadCurveToPoint(ctx, -68.7, 79, -72.5, 75.15);
    CGContextAddQuadCurveToPoint(ctx, -76.2, 71.45, -77.65, 68.65);
    CGContextAddQuadCurveToPoint(ctx, -80, 64.15, -80, 57.6);
    CGContextAddQuadCurveToPoint(ctx, -80, 48.95, -74.35, 36.55);
    CGContextAddQuadCurveToPoint(ctx, -70.85, 28.8, -67.4, 24.5);
}

static void def_path_45(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -111.85, 125.85);
    CGContextAddQuadCurveToPoint(ctx, -115, 122.1, -123, 122.1);
    CGContextAddQuadCurveToPoint(ctx, -124.85, 122.1, -126.25, 123.3);
    CGContextAddLineToPoint(ctx, -127.5, 124.6);
    CGContextAddQuadCurveToPoint(ctx, -129.25, 127, -129.25, 130.35);
    CGContextAddLineToPoint(ctx, -129, 131.6);
    CGContextAddQuadCurveToPoint(ctx, -128.95, 129.2, -124.85, 127.75);
    CGContextAddQuadCurveToPoint(ctx, -121.65, 126.6, -118.65, 126.6);
    CGContextAddLineToPoint(ctx, -112.2, 127.4);
    CGContextAddLineToPoint(ctx, -110.05, 127.8);
    CGContextAddLineToPoint(ctx, -111.85, 125.85);
    CGContextClosePath(ctx);
}

static void draw_gradient_5(CGContextRef ctx)
{
    CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
    CGFloat colors[] = {
        0.156863, 0.313726, 0.466667, 1,
        0.0901961, 0.254902, 0.333333, 1
    };
    CGFloat locations[] = {
        0,
        1
    };
    CGGradientRef gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2);
    CGColorSpaceRelease(colorSpace);
    CGGradientDrawingOptions options = kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation;
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
    CGGradientRelease(gradient);
}

static void def_path_46(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 43.9, 107.25);
    CGContextAddQuadCurveToPoint(ctx, 45.2, 107.2, 45.7, 106.4);
    CGContextAddQuadCurveToPoint(ctx, 46.45, 105, 46.45, 103.15);
    CGContextAddQuadCurveToPoint(ctx, 46.45, 95.3, 38.45, 88.55);
    CGContextAddLineToPoint(ctx, 35.35, 85.95);
    CGContextAddLineToPoint(ctx, 27.55, 81.15);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 74.15, 12.9, 66.1);
    CGContextAddQuadCurveToPoint(ctx, 8, 57.45, 6.9, 44.15);
    CGContextAddQuadCurveToPoint(ctx, 6.65, 31.35, 7.15, 10.45);
    CGContextAddQuadCurveToPoint(ctx, 8.15, -30.25, 7.4, -48.9);
    CGContextAddQuadCurveToPoint(ctx, 6.05, -82.15, -0.449996, -99.45);
    CGContextAddQuadCurveToPoint(ctx, -8.45, -120.85, -24.95, -120.85);
    CGContextAddQuadCurveToPoint(ctx, -34.3, -120.85, -39.45, -107.8);
    CGContextAddQuadCurveToPoint(ctx, -43.45, -97.7, -43.45, -85.85);
    CGContextAddLineToPoint(ctx, -42.45, -73.6);
    CGContextAddLineToPoint(ctx, -41.45, -61.35);
    CGContextAddQuadCurveToPoint(ctx, -41.45, -53.7, -43.95, -41.85);
    CGContextAddQuadCurveToPoint(ctx, -46.45, -29.95, -46.45, -22.85);
    CGContextAddQuadCurveToPoint(ctx, -46.45, -12.7, -41.45, -1.45001);
    CGContextAddQuadCurveToPoint(ctx, -38.45, 5.29999, -30.45, 18.2);
    CGContextAddQuadCurveToPoint(ctx, -22.45, 31.1, -19.45, 37.8);
    CGContextAddQuadCurveToPoint(ctx, -14.45, 49, -14.45, 59.15);
    CGContextAddQuadCurveToPoint(ctx, -14.45, 64.95, -17.95, 69.7);
    CGContextAddQuadCurveToPoint(ctx, -20.75, 73.45, -21.3, 77.85);
    CGContextAddLineToPoint(ctx, -21.45, 80.15);
    CGContextAddLineToPoint(ctx, -21.45, 80.45);
    CGContextAddLineToPoint(ctx, -21.25, 84);
    CGContextAddQuadCurveToPoint(ctx, -20.4, 86.8, -17.4, 88.95);
    CGContextAddQuadCurveToPoint(ctx, -14.2, 91.25, -9.79999, 92.15);
    CGContextAddQuadCurveToPoint(ctx, -6.44999, 92.8, -2.19999, 95.35);
    CGContextAddQuadCurveToPoint(ctx, 2.00001, 97.85, 4.95001, 100.9);
    CGContextAddLineToPoint(ctx, 15.45, 113.5);
    CGContextAddQuadCurveToPoint(ctx, 21.65, 120.9, 24.55, 120.9);
    CGContextAddQuadCurveToPoint(ctx, 29.3, 120.9, 29.6, 116.3);
    CGContextAddQuadCurveToPoint(ctx, 29.75, 113.4, 29.85, 113.1);
    CGContextAddQuadCurveToPoint(ctx, 30.25, 111.65, 31.8, 111.65);
    CGContextAddQuadCurveToPoint(ctx, 32.85, 111.65, 34.05, 112.4);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 113.15, 36.45, 113.15);
    CGContextAddQuadCurveToPoint(ctx, 37.9, 113.15, 40.1, 110.45);
    CGContextAddLineToPoint(ctx, 42.2, 107.65);
    CGContextAddQuadCurveToPoint(ctx, 42.55, 107.3, 43.9, 107.25);
    CGContextClosePath(ctx);
}

static void def_path_47(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 19.9, -69.95);
    CGContextAddQuadCurveToPoint(ctx, 5.05, -73.95, -10.8, -69.6);
    CGContextAddQuadCurveToPoint(ctx, -22.5, -66.4, -33.7, -59);
    CGContextAddLineToPoint(ctx, -37.8, -54.95);
    CGContextAddQuadCurveToPoint(ctx, -45.55, -46.55, -50.4, -31);
    CGContextAddQuadCurveToPoint(ctx, -54.1, -19.35, -52.75, -3.95);
    CGContextAddQuadCurveToPoint(ctx, -51.45, 11.8, -45.3, 26.55);
    CGContextAddQuadCurveToPoint(ctx, -38.6, 42.5, -27.8, 53.5);
    CGContextAddQuadCurveToPoint(ctx, -15.8, 65.65, -0.299999, 69.8);
    CGContextAddQuadCurveToPoint(ctx, 16.95, 74.45, 29.85, 68.55);
    CGContextAddQuadCurveToPoint(ctx, 45, 61.6, 51.55, 40.8);
    CGContextAddQuadCurveToPoint(ctx, 61.75, 8.4, 59.15, -18.8);
    CGContextAddQuadCurveToPoint(ctx, 55.25, -60.5, 19.9, -69.95);
    CGContextClosePath(ctx);
}

static void def_path_48(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27.55, 53.8);
    CGContextAddLineToPoint(ctx, 27.55, 53.3);
    CGContextAddLineToPoint(ctx, 26.2, 53.2);
    CGContextAddLineToPoint(ctx, 24.8, 53);
    CGContextAddLineToPoint(ctx, 24.9, 53.1);
    CGContextAddLineToPoint(ctx, 26.15, 53.45);
    CGContextAddLineToPoint(ctx, 27.55, 53.8);
    CGContextClosePath(ctx);
}

static void def_path_49(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.45, -13.05);
    CGContextAddQuadCurveToPoint(ctx, -4.25, -12, -11.05, -9);
    CGContextAddLineToPoint(ctx, -5.2, -10);
    CGContextAddLineToPoint(ctx, 4.15, -10.9);
    CGContextAddQuadCurveToPoint(ctx, 12.7, -10.9, 17.1, -9.4);
    CGContextAddQuadCurveToPoint(ctx, 21.5, -7.9, 23.65, -4.15);
    CGContextAddQuadCurveToPoint(ctx, 25.5, -0.95, 26.75, 5.9);
    CGContextAddLineToPoint(ctx, 28.95, 20.15);
    CGContextAddLineToPoint(ctx, 28.9, 10.6);
    CGContextAddQuadCurveToPoint(ctx, 28.85, -0.899999, 25.95, -6.45);
    CGContextAddQuadCurveToPoint(ctx, 21.9, -14.2, 11.4, -14.2);
    CGContextAddQuadCurveToPoint(ctx, 5.3, -14.2, 0.45, -13.05);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 37.1, -5.55);
    CGContextAddQuadCurveToPoint(ctx, 37.1, -1.2, 38.5, 9.15);
    CGContextAddQuadCurveToPoint(ctx, 39.55, 16.55, 39.8, 21.35);
    CGContextAddLineToPoint(ctx, 39.9, 24.6);
    CGContextAddQuadCurveToPoint(ctx, 39.9, 29.3, 39.5, 31.15);
    CGContextAddQuadCurveToPoint(ctx, 38.45, 35.35, 35.25, 35.35);
    CGContextAddQuadCurveToPoint(ctx, 32.25, 35.35, 30.65, 32.9);
    CGContextAddQuadCurveToPoint(ctx, 31.35, 34.9, 31.9, 35.65);
    CGContextAddQuadCurveToPoint(ctx, 32.65, 36.8, 33.95, 37.3);
    CGContextAddLineToPoint(ctx, 33.7, 43.8);
    CGContextAddLineToPoint(ctx, 33.75, 45.7);
    CGContextAddLineToPoint(ctx, 32.85, 45.65);
    CGContextAddQuadCurveToPoint(ctx, 29.85, 45.65, 25.75, 47.5);
    CGContextAddLineToPoint(ctx, 21.8, 49.6);
    CGContextAddLineToPoint(ctx, 28.6, 49.05);
    CGContextAddLineToPoint(ctx, 37.45, 48.45);
    CGContextAddQuadCurveToPoint(ctx, 36.95, 46.3, 34.5, 45.85);
    CGContextAddQuadCurveToPoint(ctx, 35.75, 41.05, 35.65, 37.7);
    CGContextAddLineToPoint(ctx, 36.1, 37.7);
    CGContextAddLineToPoint(ctx, 36.2, 37.7);
    CGContextAddQuadCurveToPoint(ctx, 40.3, 37.7, 41.3, 33.5);
    CGContextAddQuadCurveToPoint(ctx, 41.8, 31.65, 41.8, 24.4);
    CGContextAddLineToPoint(ctx, 41.75, 21.35);
    CGContextAddLineToPoint(ctx, 40.85, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 39.9, 3.85, 39.9, -0.85);
    CGContextAddLineToPoint(ctx, 39.95, -6.7);
    CGContextAddQuadCurveToPoint(ctx, 40.45, -9.5, 43.2, -9.5);
    CGContextAddQuadCurveToPoint(ctx, 46.3, -9.5, 49.9, -7.95);
    CGContextAddLineToPoint(ctx, 52.95, -6.5);
    CGContextAddLineToPoint(ctx, 50.1, -9.5);
    CGContextAddQuadCurveToPoint(ctx, 47.05, -12.3, 43.9, -12.3);
    CGContextAddQuadCurveToPoint(ctx, 40.6, -12.3, 39, -10.9);
    CGContextAddQuadCurveToPoint(ctx, 37.1, -9.3, 37.1, -5.55);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 27.55, 53.3);
    CGContextAddLineToPoint(ctx, 27.55, 53.8);
    CGContextAddLineToPoint(ctx, 31.95, 54.4);
    CGContextAddQuadCurveToPoint(ctx, 33.9, 54.4, 35.05, 53.7);
    CGContextAddQuadCurveToPoint(ctx, 36.45, 52.85, 36.45, 51.1);
    CGContextAddLineToPoint(ctx, 36.4, 50.3);
    CGContextAddQuadCurveToPoint(ctx, 35.7, 52.25, 32.7, 52.9);
    CGContextAddLineToPoint(ctx, 27.55, 53.3);
    CGContextClosePath(ctx);
}

static void def_path_50(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -53.5, -9.95);
    CGContextAddQuadCurveToPoint(ctx, -50.45, -9.95, -47.65, -6.4);
    CGContextAddQuadCurveToPoint(ctx, -45.05, -3.15, -43.2, 1.95);
    CGContextAddQuadCurveToPoint(ctx, -46.15, 2.2, -45.5, 9);
    CGContextAddQuadCurveToPoint(ctx, -49.05, -7.7, -55.6, -7.7);
    CGContextAddQuadCurveToPoint(ctx, -57, -7.7, -58.05, -6.65);
    CGContextAddLineToPoint(ctx, -57.55, -7.7);
    CGContextAddQuadCurveToPoint(ctx, -56.2, -9.95, -53.5, -9.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -54.15, 0.9);
    CGContextAddQuadCurveToPoint(ctx, -53.65, -0.1, -52.6, -0.75);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 0.95, -53.35, 3.05);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 5.8, -52, 8.35);
    CGContextAddLineToPoint(ctx, -51.25, 9.65);
    CGContextAddLineToPoint(ctx, -51.4, 7.85);
    CGContextAddQuadCurveToPoint(ctx, -51.4, 5.9, -50.55, 3.85);
    CGContextAddLineToPoint(ctx, -49.95, 2.7);
    CGContextAddLineToPoint(ctx, -50.15, 5.05);
    CGContextAddQuadCurveToPoint(ctx, -50.15, 9.1, -48.8, 10.7);
    CGContextAddLineToPoint(ctx, -48.75, 10.75);
    CGContextAddQuadCurveToPoint(ctx, -49.7, 12.3, -51.6, 12.5);
    CGContextAddQuadCurveToPoint(ctx, -52.8, 11.75, -53.7, 9.75);
    CGContextAddQuadCurveToPoint(ctx, -54.75, 7.45, -54.75, 4.9);
    CGContextAddQuadCurveToPoint(ctx, -54.75, 2.15, -54.15, 0.9);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -37, 2.05);
    CGContextAddQuadCurveToPoint(ctx, -41.95, -9.6, -44.45, -12.9);
    CGContextAddQuadCurveToPoint(ctx, -48.95, -18.95, -54.15, -18.95);
    CGContextAddQuadCurveToPoint(ctx, -59.2, -18.95, -61.4, -12.4);
    CGContextAddQuadCurveToPoint(ctx, -62.8, -8.2, -62.8, -2.55);
    CGContextAddQuadCurveToPoint(ctx, -62.8, 8, -55.8, 16.15);
    CGContextAddQuadCurveToPoint(ctx, -49.35, 23.6, -42.5, 23.6);
    CGContextAddQuadCurveToPoint(ctx, -38.55, 23.6, -36.2, 18.45);
    CGContextAddQuadCurveToPoint(ctx, -34.3, 14.35, -34.3, 10.05);
    CGContextAddQuadCurveToPoint(ctx, -34.3, 7.2, -36.95, 2.2);
    CGContextAddLineToPoint(ctx, -37, 2.05);
    CGContextClosePath(ctx);
}

static void def_path_51(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -53.5, -9.95);
    CGContextAddQuadCurveToPoint(ctx, -56.2, -9.95, -57.55, -7.7);
    CGContextAddLineToPoint(ctx, -58.05, -6.65);
    CGContextAddQuadCurveToPoint(ctx, -57, -7.7, -55.6, -7.7);
    CGContextAddQuadCurveToPoint(ctx, -49.05, -7.7, -45.5, 9);
    CGContextAddQuadCurveToPoint(ctx, -46.15, 2.2, -43.2, 1.95);
    CGContextAddQuadCurveToPoint(ctx, -45.05, -3.15, -47.65, -6.4);
    CGContextAddQuadCurveToPoint(ctx, -50.45, -9.95, -53.5, -9.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, -54.15, 0.9);
    CGContextAddQuadCurveToPoint(ctx, -54.75, 2.15, -54.75, 4.9);
    CGContextAddQuadCurveToPoint(ctx, -54.75, 7.45, -53.7, 9.75);
    CGContextAddQuadCurveToPoint(ctx, -52.8, 11.75, -51.6, 12.5);
    CGContextAddQuadCurveToPoint(ctx, -49.7, 12.3, -48.75, 10.75);
    CGContextAddLineToPoint(ctx, -48.8, 10.7);
    CGContextAddQuadCurveToPoint(ctx, -50.15, 9.1, -50.15, 5.05);
    CGContextAddLineToPoint(ctx, -49.95, 2.7);
    CGContextAddLineToPoint(ctx, -50.55, 3.85);
    CGContextAddQuadCurveToPoint(ctx, -51.4, 5.9, -51.4, 7.85);
    CGContextAddLineToPoint(ctx, -51.25, 9.65);
    CGContextAddLineToPoint(ctx, -52, 8.35);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 5.8, -53.35, 3.05);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 0.949999, -52.6, -0.750001);
    CGContextAddQuadCurveToPoint(ctx, -53.65, -0.1, -54.15, 0.9);
    CGContextClosePath(ctx);
}

static void def_path_52(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -53.5, -9.95);
    CGContextAddQuadCurveToPoint(ctx, -56.2, -9.95, -57.55, -7.7);
    CGContextAddLineToPoint(ctx, -58.05, -6.65);
    CGContextAddQuadCurveToPoint(ctx, -57, -7.7, -55.6, -7.7);
    CGContextAddQuadCurveToPoint(ctx, -49.05, -7.7, -45.5, 9);
    CGContextAddQuadCurveToPoint(ctx, -46.15, 2.2, -43.2, 1.95);
    CGContextAddQuadCurveToPoint(ctx, -45.05, -3.15, -47.65, -6.4);
    CGContextAddQuadCurveToPoint(ctx, -50.45, -9.95, -53.5, -9.95);
    CGContextClosePath(ctx);
}

static void def_path_53(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -54.15, 0.9);
    CGContextAddQuadCurveToPoint(ctx, -54.75, 2.15, -54.75, 4.9);
    CGContextAddQuadCurveToPoint(ctx, -54.75, 7.45, -53.7, 9.75);
    CGContextAddQuadCurveToPoint(ctx, -52.8, 11.75, -51.6, 12.5);
    CGContextAddQuadCurveToPoint(ctx, -49.7, 12.3, -48.75, 10.75);
    CGContextAddLineToPoint(ctx, -48.8, 10.7);
    CGContextAddQuadCurveToPoint(ctx, -50.15, 9.1, -50.15, 5.05);
    CGContextAddLineToPoint(ctx, -49.95, 2.7);
    CGContextAddLineToPoint(ctx, -50.55, 3.85);
    CGContextAddQuadCurveToPoint(ctx, -51.4, 5.9, -51.4, 7.85);
    CGContextAddLineToPoint(ctx, -51.25, 9.65);
    CGContextAddLineToPoint(ctx, -52, 8.35);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 5.8, -53.35, 3.05);
    CGContextAddQuadCurveToPoint(ctx, -53.35, 0.949999, -52.6, -0.750001);
    CGContextAddQuadCurveToPoint(ctx, -53.65, -0.1, -54.15, 0.9);
}

static void def_path_54(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 9.95, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 10, 0.8, 9.5, -1);
    CGContextAddLineToPoint(ctx, 9.35, -1.7);
    CGContextAddQuadCurveToPoint(ctx, 5.55, -2.7, 2.6, -2.9);
    CGContextAddLineToPoint(ctx, 2.25, -1.9);
    CGContextAddQuadCurveToPoint(ctx, 1.9, -0.55, 1.9, 2.95);
    CGContextAddLineToPoint(ctx, 5.4, 3.05);
    CGContextAddLineToPoint(ctx, 9.95, 2.6);
    CGContextClosePath(ctx);
}

static void def_path_55(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 9.35, -1.7);
    CGContextAddLineToPoint(ctx, 9.5, -1);
    CGContextAddQuadCurveToPoint(ctx, 10, 0.8, 9.95, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13, 1.8, 14.9, -0.05);
    CGContextAddLineToPoint(ctx, 9.35, -1.7);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 1.9, 2.95);
    CGContextAddQuadCurveToPoint(ctx, 1.9, -0.55, 2.25, -1.9);
    CGContextAddLineToPoint(ctx, 2.6, -2.9);
    CGContextAddLineToPoint(ctx, 0.5, -3);
    CGContextAddQuadCurveToPoint(ctx, -2.25, -3, -8.85, -1.55);
    CGContextAddLineToPoint(ctx, -13.5, -0.5);
    CGContextAddLineToPoint(ctx, -14.85, -0.15);
    CGContextAddLineToPoint(ctx, -13.5, 0.3);
    CGContextAddLineToPoint(ctx, -6.3, 2.05);
    CGContextAddLineToPoint(ctx, 1.9, 2.95);
    CGContextClosePath(ctx);
}

static void def_path_56(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 9.95, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 10, 0.8, 9.5, -1);
    CGContextAddLineToPoint(ctx, 9.35, -1.7);
}

static void def_path_57(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 2.6, -2.9);
    CGContextAddLineToPoint(ctx, 2.25, -1.9);
    CGContextAddQuadCurveToPoint(ctx, 1.9, -0.55, 1.9, 2.95);
}

static void def_path_58(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 5.33368, -1.6001);
    CGContextAddLineToPoint(ctx, 5.48368, -0.900105);
    CGContextAddLineToPoint(ctx, 5.68368, 2.3999);
    CGContextAddQuadCurveToPoint(ctx, 7.43368, 1.6499, 8.48368, -0.0501048);
    CGContextAddLineToPoint(ctx, 5.33368, -1.6001);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 1.06674, 2.78537);
    CGContextAddQuadCurveToPoint(ctx, 0.216736, -0.464633, 0.766736, -1.36463);
    CGContextAddLineToPoint(ctx, 1.46674, -2.66463);
    CGContextAddLineToPoint(ctx, 0.266736, -2.76463);
    CGContextAddQuadCurveToPoint(ctx, -1.28326, -2.76463, -5.03326, -1.41463);
    CGContextAddLineToPoint(ctx, -7.68326, -0.414633);
    CGContextAddLineToPoint(ctx, -8.43326, -0.114633);
    CGContextAddLineToPoint(ctx, -7.68326, 0.235367);
    CGContextAddLineToPoint(ctx, -3.58326, 1.88537);
    CGContextAddLineToPoint(ctx, 1.06674, 2.78537);
    CGContextClosePath(ctx);
}

static void def_path_59(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 5.68926, 2.42979);
    CGContextAddLineToPoint(ctx, 5.48926, -0.870212);
    CGContextAddLineToPoint(ctx, 5.33926, -1.57021);
    CGContextAddQuadCurveToPoint(ctx, 3.13926, -2.42021, 1.48926, -2.67021);
    CGContextAddLineToPoint(ctx, 0.789261, -1.37021);
    CGContextAddQuadCurveToPoint(ctx, 0.239261, -0.470212, 1.08926, 2.77979);
    CGContextAddLineToPoint(ctx, 3.08926, 2.82979);
    CGContextAddLineToPoint(ctx, 5.68926, 2.42979);
    CGContextClosePath(ctx);
}

static void def_path_60(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 5.68926, 2.42979);
    CGContextAddLineToPoint(ctx, 5.48926, -0.870212);
    CGContextAddLineToPoint(ctx, 5.33368, -1.6001);
}

static void def_path_61(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 1.48158, -2.7261);
    CGContextAddLineToPoint(ctx, 0.781578, -1.4261);
    CGContextAddQuadCurveToPoint(ctx, 0.237053, -0.533368, 1.06674, 2.78537);
}

static void def_path_62(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -47, -73.75);
    CGContextAddLineToPoint(ctx, -46, -61.5);
    CGContextAddQuadCurveToPoint(ctx, -46, -53.85, -48.5, -42);
    CGContextAddQuadCurveToPoint(ctx, -51, -30.1, -51, -23);
    CGContextAddQuadCurveToPoint(ctx, -51, -12.85, -46, -1.6);
    CGContextAddQuadCurveToPoint(ctx, -43, 5.15, -35, 18.05);
    CGContextAddQuadCurveToPoint(ctx, -27, 30.95, -24, 37.65);
    CGContextAddQuadCurveToPoint(ctx, -19, 48.85, -19, 59);
    CGContextAddQuadCurveToPoint(ctx, -19, 64.8, -22.5, 69.55);
    CGContextAddQuadCurveToPoint(ctx, -26, 74.25, -26, 80);
    CGContextAddQuadCurveToPoint(ctx, -26, 86.65, -23.9, 89.65);
    CGContextAddQuadCurveToPoint(ctx, -22.35, 91.95, -18.6, 93.2);
    CGContextAddQuadCurveToPoint(ctx, -12, 95.35, -11.5, 95.6);
    CGContextAddQuadCurveToPoint(ctx, -7.1, 97.7, -4, 102);
    CGContextAddQuadCurveToPoint(ctx, -1.95, 104.85, 1.25, 110.15);
    CGContextAddQuadCurveToPoint(ctx, 3.9, 114.4, 5.3, 116.1);
    CGContextAddQuadCurveToPoint(ctx, 9.5, 121, 18, 121);
    CGContextAddLineToPoint(ctx, 23.85, 120.7);
    CGContextAddQuadCurveToPoint(ctx, 29, 119.85, 30, 117);
    CGContextAddLineToPoint(ctx, 36.3, 117.5);
    CGContextAddLineToPoint(ctx, 41.5, 118);
    CGContextAddQuadCurveToPoint(ctx, 47.15, 118, 49.05, 117);
    CGContextAddQuadCurveToPoint(ctx, 51, 115.9, 51, 112.5);
    CGContextAddQuadCurveToPoint(ctx, 51, 100.6, 41.2, 92.65);
    CGContextAddQuadCurveToPoint(ctx, 38, 90.05, 32.1, 86.55);
    CGContextAddLineToPoint(ctx, 23, 81);
    CGContextAddQuadCurveToPoint(ctx, 12.9, 74, 8.35, 65.95);
    CGContextAddQuadCurveToPoint(ctx, 3.45, 57.3, 2.35, 44);
    CGContextAddQuadCurveToPoint(ctx, 2.1, 31.2, 2.6, 10.3);
    CGContextAddQuadCurveToPoint(ctx, 3.6, -30.4, 2.85, -49.05);
    CGContextAddQuadCurveToPoint(ctx, 1.5, -82.3, -5, -99.6);
    CGContextAddQuadCurveToPoint(ctx, -13, -121, -29.5, -121);
    CGContextAddQuadCurveToPoint(ctx, -38.85, -121, -44, -107.95);
    CGContextAddQuadCurveToPoint(ctx, -48, -97.85, -48, -86);
    CGContextAddLineToPoint(ctx, -47, -73.75);
    CGContextClosePath(ctx);
}

static void def_path_63(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -23.85, -55.6);
    CGContextAddQuadCurveToPoint(ctx, -25.25, -48.05, -25.25, -34.25);
    CGContextAddQuadCurveToPoint(ctx, -25.25, -20.55, -23.9, -3.4);
    CGContextAddQuadCurveToPoint(ctx, -22.25, 18.35, -19.25, 30.25);
    CGContextAddQuadCurveToPoint(ctx, -14.75, 48.55, -5.55, 62);
    CGContextAddQuadCurveToPoint(ctx, 4.5, 76.75, 14.75, 76.75);
    CGContextAddQuadCurveToPoint(ctx, 20.7, 76.75, 23.25, 71.75);
    CGContextAddQuadCurveToPoint(ctx, 25.25, 67.85, 25.25, 60.5);
    CGContextAddQuadCurveToPoint(ctx, 25.25, 57.95, 22.3, 34.55);
    CGContextAddQuadCurveToPoint(ctx, 19.2, 10, 18.75, -5.25);
    CGContextAddQuadCurveToPoint(ctx, 17.65, -39.55, 15.3, -52);
    CGContextAddQuadCurveToPoint(ctx, 10.65, -76.75, -2.25, -76.75);
    CGContextAddQuadCurveToPoint(ctx, -13.45, -76.75, -18.6, -68.5);
    CGContextAddQuadCurveToPoint(ctx, -22.25, -64.1, -23.85, -55.6);
    CGContextClosePath(ctx);
}

static void def_path_64(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, -10.2, -20.7);
    CGContextAddQuadCurveToPoint(ctx, -21.15, -11.25, -30.85, -0.800001);
    CGContextAddQuadCurveToPoint(ctx, -55.25, 25.45, -55.25, 39.25);
    CGContextAddQuadCurveToPoint(ctx, -55.25, 45.25, -50.25, 50);
    CGContextAddQuadCurveToPoint(ctx, -47.1, 53.05, -43.75, 54.05);
    CGContextAddLineToPoint(ctx, -39.25, 54.5);
    CGContextAddLineToPoint(ctx, -39.1, 54.45);
    CGContextAddLineToPoint(ctx, -38.25, 54.5);
    CGContextAddQuadCurveToPoint(ctx, -32.95, 54.3, -28.45, 51.75);
    CGContextAddQuadCurveToPoint(ctx, -22.7, 48.5, -17.35, 40.55);
    CGContextAddQuadCurveToPoint(ctx, -13.9, 35.45, -7.95, 23.75);
    CGContextAddQuadCurveToPoint(ctx, -1.3, 10.8, 2.25, 5);
    CGContextAddQuadCurveToPoint(ctx, 11.3, -9.8, 26.25, -28);
    CGContextAddQuadCurveToPoint(ctx, 28.2, -30.4, 33.65, -34.1);
    CGContextAddQuadCurveToPoint(ctx, 38.55, -37.45, 42.75, -39.5);
    CGContextAddLineToPoint(ctx, 51.25, -43.3);
    CGContextAddQuadCurveToPoint(ctx, 55.25, -45.55, 55.25, -49.25);
    CGContextAddQuadCurveToPoint(ctx, 55.25, -51.5, 53.25, -53);
    CGContextAddQuadCurveToPoint(ctx, 51.25, -54.5, 48.25, -54.5);
    CGContextAddQuadCurveToPoint(ctx, 41.75, -54.5, 31.1, -48.6);
    CGContextAddQuadCurveToPoint(ctx, 30, -48, 7.25, -34);
    CGContextAddQuadCurveToPoint(ctx, 0.15, -29.65, -10.2, -20.7);
    CGContextClosePath(ctx);
}

static void draw_main(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.741176, 0.835294, 0.458824, 1);
    def_path_0(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315, 749.1));
    CGContextSetRGBFillColor(ctx, 0.65098, 0.729412, 0.337255, 1);
    def_path_1(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 472.05, 733.2));
    CGContextSetRGBFillColor(ctx, 0.65098, 0.729412, 0.337255, 1);
    def_path_2(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    CGContextSetRGBFillColor(ctx, 0.2, 0.6, 0.6, 1);
    def_path_3(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    CGContextSetRGBFillColor(ctx, 0.168627, 0.568627, 0.537255, 1);
    def_path_4(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    CGContextSetRGBStrokeColor(ctx, 0.168627, 0.568627, 0.537255, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_5(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    CGContextSetRGBFillColor(ctx, 0.294118, 0.760784, 0.760784, 1);
    def_path_6(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    CGContextSetRGBFillColor(ctx, 0.180392, 0.356863, 0.537255, 1);
    def_path_7(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_8(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_9(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0131531, -0.0763092, -0.0745544, 0.0249329, 11.55, 59.3));
    draw_gradient_0(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_10(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.00561523, 0.0915527, 0.0301056, -0.00184631, 49.1, -2.45));
    draw_gradient_1(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_11(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.00883484, 0.030014, 0.0518036, -0.0216217, 36.95, 31.8));
    draw_gradient_2(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_12(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.0131531, -0.0763092, 0.0745544, 0.0249329, -53.35, 57.5));
    draw_gradient_0(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_13(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.00561523, 0.0915527, -0.0301056, -0.00184631, -96.4, -6.4));
    draw_gradient_1(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_14(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.0147247, 0.026474, -0.0460815, -0.034256, -79.7, 30.4));
    draw_gradient_2(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_15(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-1.52588e-05, -0.11908, 0.0341644, 0, -48.9, 101.6));
    draw_gradient_0(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 466, 577.5));
    def_path_16(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1.52588e-05, -0.11908, -0.0341644, 0, 4.4, 107.85));
    draw_gradient_0(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.980225, 0, 0, 0.980453, 420.1, 568.95));
    draw_shape_7(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.981123, 0, 0, 0.980024, 468.95, 573));
    draw_shape_9(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 442, 384.95));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 3);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_19(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 442, 384.95));
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    def_path_20(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 442, 384.95));
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 0);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_20(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 442, 384.95));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.4, 1);
    def_path_21(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 442, 384.95));
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 0);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_21(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    def_path_22(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.0155945, -0.0270081, 0.0270081, -0.0155945, -68.9, 8.65));
    draw_gradient_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_23(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_24(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_25(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    def_path_26(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.0247955, 0.0812836, 0.0632782, 0.0193024, -19.55, 5.15));
    draw_gradient_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_27(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    def_path_28(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0155945, -0.0270081, -0.0270081, -0.0155945, 68.9, 6.1));
    draw_gradient_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_29(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_30(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 443.9, 475.35));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_31(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.850758, 0, 0, 0.850758, 415.05, 475));
    CGContextSetRGBFillColor(ctx, 0.909804, 0.952941, 1, 1);
    def_path_32(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.850758, 0, 0, 0.850758, 415.05, 475));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_33(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.850758, 0, 0, 0.850758, 415.05, 475));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_34(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.851507, 0, 0, 0.851507, 467, 475));
    CGContextSetRGBFillColor(ctx, 0.909804, 0.952941, 1, 1);
    def_path_35(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.851507, 0, 0, 0.851507, 467, 475));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_36(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.851507, 0, 0, 0.851507, 467, 475));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_37(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    CGContextSetRGBFillColor(ctx, 0.180392, 0.356863, 0.537255, 1);
    def_path_38(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_39(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    def_path_40(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0112305, -0.0142212, 0.0494995, 0.0391235, -29.05, -82.15));
    draw_gradient_4(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    def_path_41(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0208588, -0.0778351, 0.0949249, 0.0254364, -21.5, 42.25));
    draw_gradient_0(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    CGContextSetRGBFillColor(ctx, 0.2, 0.6, 0.6, 1);
    def_path_42(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    CGContextSetRGBFillColor(ctx, 0.168627, 0.568627, 0.537255, 1);
    def_path_43(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    CGContextSetRGBStrokeColor(ctx, 0.168627, 0.568627, 0.537255, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_44(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 301.4, 626.7));
    CGContextSetRGBFillColor(ctx, 0.294118, 0.760784, 0.760784, 1);
    def_path_45(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 384.2, 704.9));
    def_path_46(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-1.52588e-05, -0.0621948, 0.147568, -3.05176e-05, -30.1, -62.85));
    draw_gradient_5(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    def_path_47(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0473633, 0.0817566, -0.0636597, 0.0368805, 26.85, 1.7));
    draw_gradient_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    CGContextSetRGBFillColor(ctx, 0.117647, 0.345098, 0.435294, 1);
    def_path_48(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_49(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    def_path_50(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.0173187, -0.0299988, 0.0299988, -0.0173187, -67.45, 7.25));
    draw_gradient_3(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_51(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_52(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.35, 493.25));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_53(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 323.45, 496.1));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_54(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 323.45, 496.1));
    CGContextSetRGBFillColor(ctx, 0.909804, 0.952941, 1, 1);
    def_path_55(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 323.45, 496.1));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_56(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 323.45, 496.1));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_57(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.843695, 0, 0, 0.843695, 363.25, 496.6));
    CGContextSetRGBFillColor(ctx, 0.909804, 0.952941, 1, 1);
    def_path_58(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.843695, 0, 0, 0.843695, 363.25, 496.6));
    CGContextSetRGBFillColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    def_path_59(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.843695, 0, 0, 0.843695, 363.25, 496.6));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_60(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.843695, 0, 0, 0.843695, 363.25, 496.6));
    CGContextSetRGBStrokeColor(ctx, 0.0588235, 0.180392, 0.223529, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_61(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 350.75, 711.05));
    def_path_62(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-1.52588e-05, -0.0621948, 0.147568, -3.05176e-05, -34.65, -63));
    draw_gradient_0(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 315.15, 608.05));
    draw_shape_7(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 209.65, 617.3));
    def_path_63(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0179291, 0.0919037, -0.0302277, 0.00590515, 0, 0));
    draw_gradient_2(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 267.65, 641.05));
    def_path_64(ctx);
    CGContextEOClip(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(-0.0200653, 0.0347748, -0.0576172, -0.0332642, -7.95, 7.4));
    draw_gradient_2(ctx);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.999998, 0, 0, 0.999998, 363.15, 598.85));
    draw_shape_9(ctx);
    CGContextRestoreGState(ctx);

}


