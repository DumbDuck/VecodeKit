
#include <CoreGraphics/CoreGraphics.h>

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct
{
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

// MARK: g_picture_icons
static void draw_main(CGContextRef ctx);
VKQuartzPicture g_picture_icons = {
    { 0, 0, 550, 400 },
    draw_main,
};

/////////////////////////
static void def_path_0(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.15, 19.7, -9.83477e-08, 25.15);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.9);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.95);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499999, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499999, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.2, 30.55, 0.8, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 1.1915e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500119);
    CGContextAddLineToPoint(ctx, 21.35, 0.350012);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.700012, 16.9, 1.50001);
    CGContextAddLineToPoint(ctx, 14.35, 2.60001);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05001, 12.6, 3.65001);
    CGContextAddLineToPoint(ctx, 9.34999, 6.00001);
    CGContextAddLineToPoint(ctx, 7.84999, 7.30001);
    CGContextAddLineToPoint(ctx, 7.59999, 7.60001);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextClosePath(ctx);
}

static void def_path_1(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 38.4, 42.55);
    CGContextAddQuadCurveToPoint(ctx, 43.2, 41.6, 43.2, 40.2);
    CGContextAddQuadCurveToPoint(ctx, 43.2, 38.8, 38.4, 37.85);
    CGContextAddQuadCurveToPoint(ctx, 33.55, 36.9, 26.7, 36.9);
    CGContextAddQuadCurveToPoint(ctx, 19.85, 36.9, 15.05, 37.85);
    CGContextAddQuadCurveToPoint(ctx, 10.2, 38.8, 10.2, 40.2);
    CGContextAddQuadCurveToPoint(ctx, 10.2, 41.6, 15.05, 42.55);
    CGContextAddLineToPoint(ctx, 26.7, 43.5);
    CGContextAddLineToPoint(ctx, 38.4, 42.55);
    CGContextClosePath(ctx);
}

static void def_path_2(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 41.25, 29.85);
    CGContextAddQuadCurveToPoint(ctx, 41.25, 29.05, 40.55, 28.3);
    CGContextAddQuadCurveToPoint(ctx, 39.9, 27.7, 39.05, 27.7);
    CGContextAddLineToPoint(ctx, 37.45, 27.7);
    CGContextAddQuadCurveToPoint(ctx, 36.55, 27.7, 35.9, 28.3);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 29.05, 35.25, 29.85);
    CGContextAddLineToPoint(ctx, 35.25, 37.85);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 38.75, 35.9, 39.35);
    CGContextAddQuadCurveToPoint(ctx, 36.55, 40.05, 37.45, 40.05);
    CGContextAddLineToPoint(ctx, 39.05, 40.05);
    CGContextAddQuadCurveToPoint(ctx, 39.9, 40.05, 40.55, 39.35);
    CGContextAddQuadCurveToPoint(ctx, 41.25, 38.75, 41.25, 37.85);
    CGContextAddLineToPoint(ctx, 41.25, 29.85);
    CGContextClosePath(ctx);
}

static void def_path_3(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 15.55, 27.8);
    CGContextAddLineToPoint(ctx, 13.95, 27.8);
    CGContextAddQuadCurveToPoint(ctx, 13.05, 27.8, 12.4, 28.4);
    CGContextAddQuadCurveToPoint(ctx, 11.75, 29.1, 11.75, 29.9);
    CGContextAddLineToPoint(ctx, 11.75, 37.95);
    CGContextAddQuadCurveToPoint(ctx, 11.75, 38.8, 12.4, 39.45);
    CGContextAddQuadCurveToPoint(ctx, 13.05, 40.15, 13.95, 40.15);
    CGContextAddLineToPoint(ctx, 15.55, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 40.15, 17.05, 39.45);
    CGContextAddQuadCurveToPoint(ctx, 17.65, 38.8, 17.65, 37.95);
    CGContextAddLineToPoint(ctx, 17.65, 29.9);
    CGContextAddQuadCurveToPoint(ctx, 17.65, 29.1, 17.05, 28.4);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 27.8, 15.55, 27.8);
    CGContextClosePath(ctx);
}

static void def_path_4(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 44.8, 25.9);
    CGContextAddQuadCurveToPoint(ctx, 44.8, 22.45, 41.35, 22.45);
    CGContextAddLineToPoint(ctx, 11.8, 22.45);
    CGContextAddQuadCurveToPoint(ctx, 8.4, 22.45, 8.4, 25.9);
    CGContextAddLineToPoint(ctx, 8.4, 34.65);
    CGContextAddLineToPoint(ctx, 44.8, 34.65);
    CGContextAddLineToPoint(ctx, 44.8, 25.9);
    CGContextClosePath(ctx);
}

static void def_path_5(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.35, 13.65);
    CGContextAddQuadCurveToPoint(ctx, 33.7, 13.2, 32.55, 13.2);
    CGContextAddLineToPoint(ctx, 19.7, 13.2);
    CGContextAddQuadCurveToPoint(ctx, 17.3, 13.15, 16.7, 15.1);
    CGContextAddLineToPoint(ctx, 14.45, 22.6);
    CGContextAddLineToPoint(ctx, 34.35, 13.65);
    CGContextClosePath(ctx);
}

static void def_path_6(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 14.2, 13.25);
    CGContextAddLineToPoint(ctx, 11.4, 22.85);
    CGContextAddLineToPoint(ctx, 40.8, 22.9);
    CGContextAddLineToPoint(ctx, 38, 13.25);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 10.95, 34.3, 11);
    CGContextAddLineToPoint(ctx, 17.95, 11);
    CGContextAddQuadCurveToPoint(ctx, 14.95, 10.85, 14.2, 13.25);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 14.45, 22.6);
    CGContextAddLineToPoint(ctx, 16.7, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 17.3, 13.15, 19.7, 13.2);
    CGContextAddLineToPoint(ctx, 32.55, 13.2);
    CGContextAddQuadCurveToPoint(ctx, 33.7, 13.2, 34.35, 13.65);
    CGContextAddQuadCurveToPoint(ctx, 35.15, 14.15, 35.45, 15.1);
    CGContextAddLineToPoint(ctx, 37.7, 22.7);
    CGContextAddLineToPoint(ctx, 14.45, 22.6);
    CGContextClosePath(ctx);
}

static void def_path_7(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.35, 13.65);
    CGContextAddLineToPoint(ctx, 14.45, 22.6);
    CGContextAddLineToPoint(ctx, 37.7, 22.7);
    CGContextAddLineToPoint(ctx, 35.45, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 35.15, 14.15, 34.35, 13.65);
    CGContextClosePath(ctx);
}

static void def_path_8(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 14.45, 31.75);
    CGContextAddQuadCurveToPoint(ctx, 15.3, 32.55, 16.35, 32.55);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 32.55, 18.25, 31.75);
    CGContextAddQuadCurveToPoint(ctx, 19.1, 30.95, 19.1, 29.85);
    CGContextAddQuadCurveToPoint(ctx, 19.1, 28.75, 18.25, 27.95);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 27.15, 16.35, 27.15);
    CGContextAddQuadCurveToPoint(ctx, 15.3, 27.15, 14.45, 27.95);
    CGContextAddQuadCurveToPoint(ctx, 13.65, 28.75, 13.65, 29.85);
    CGContextAddQuadCurveToPoint(ctx, 13.65, 30.95, 14.45, 31.75);
    CGContextClosePath(ctx);
}

static void def_path_9(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.35, 29.85);
    CGContextAddQuadCurveToPoint(ctx, 34.35, 30.95, 35.25, 31.75);
    CGContextAddQuadCurveToPoint(ctx, 36.05, 32.55, 37.15, 32.55);
    CGContextAddQuadCurveToPoint(ctx, 38.25, 32.55, 38.95, 31.75);
    CGContextAddQuadCurveToPoint(ctx, 39.85, 30.95, 39.85, 29.85);
    CGContextAddQuadCurveToPoint(ctx, 39.85, 28.75, 38.95, 27.95);
    CGContextAddQuadCurveToPoint(ctx, 38.25, 27.15, 37.15, 27.15);
    CGContextAddQuadCurveToPoint(ctx, 36.05, 27.15, 35.25, 27.95);
    CGContextAddQuadCurveToPoint(ctx, 34.35, 28.75, 34.35, 29.85);
    CGContextClosePath(ctx);
}

static void def_path_10(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.15, 19.7, -9.83477e-08, 25.15);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.9);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.95);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499999, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499999, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.2, 30.55, 0.8, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 1.1915e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500119);
    CGContextAddLineToPoint(ctx, 21.35, 0.350012);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.700012, 16.9, 1.50001);
    CGContextAddLineToPoint(ctx, 14.35, 2.60001);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05001, 12.6, 3.65001);
    CGContextAddLineToPoint(ctx, 9.34999, 6.00001);
    CGContextAddLineToPoint(ctx, 7.84999, 7.30001);
    CGContextAddLineToPoint(ctx, 7.59999, 7.60001);
    CGContextAddQuadCurveToPoint(ctx, 7.49999, 7.65001, 7.34999, 7.80001);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextClosePath(ctx);
}

static void def_path_11(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 38.1, 45.75);
    CGContextAddQuadCurveToPoint(ctx, 42.9, 44.8, 42.9, 43.4);
    CGContextAddQuadCurveToPoint(ctx, 42.9, 42.05, 38.1, 41.1);
    CGContextAddLineToPoint(ctx, 26.4, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 19.55, 40.15, 14.75, 41.1);
    CGContextAddQuadCurveToPoint(ctx, 9.9, 42.05, 9.9, 43.4);
    CGContextAddQuadCurveToPoint(ctx, 9.9, 44.8, 14.75, 45.75);
    CGContextAddLineToPoint(ctx, 26.4, 46.7);
    CGContextAddLineToPoint(ctx, 38.1, 45.75);
    CGContextClosePath(ctx);
}

static void def_path_12(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 20, 33.8);
    CGContextAddQuadCurveToPoint(ctx, 19.4, 33.25, 18.65, 33.25);
    CGContextAddLineToPoint(ctx, 17.35, 33.25);
    CGContextAddQuadCurveToPoint(ctx, 16.65, 33.25, 16.05, 33.8);
    CGContextAddQuadCurveToPoint(ctx, 15.55, 34.35, 15.55, 35.1);
    CGContextAddLineToPoint(ctx, 15.55, 41.8);
    CGContextAddQuadCurveToPoint(ctx, 15.55, 42.55, 16.05, 43.05);
    CGContextAddQuadCurveToPoint(ctx, 16.65, 43.65, 17.35, 43.65);
    CGContextAddLineToPoint(ctx, 18.65, 43.65);
    CGContextAddQuadCurveToPoint(ctx, 19.4, 43.65, 20, 43.05);
    CGContextAddQuadCurveToPoint(ctx, 20.5, 42.55, 20.5, 41.8);
    CGContextAddLineToPoint(ctx, 20.5, 35.1);
    CGContextAddQuadCurveToPoint(ctx, 20.5, 34.35, 20, 33.8);
    CGContextClosePath(ctx);
}

static void def_path_13(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 35.9, 33.25);
    CGContextAddLineToPoint(ctx, 34.6, 33.25);
    CGContextAddQuadCurveToPoint(ctx, 33.85, 33.25, 33.25, 33.8);
    CGContextAddQuadCurveToPoint(ctx, 32.75, 34.35, 32.75, 35.1);
    CGContextAddLineToPoint(ctx, 32.75, 41.8);
    CGContextAddQuadCurveToPoint(ctx, 32.75, 42.55, 33.25, 43.05);
    CGContextAddQuadCurveToPoint(ctx, 33.85, 43.65, 34.6, 43.65);
    CGContextAddLineToPoint(ctx, 35.9, 43.65);
    CGContextAddQuadCurveToPoint(ctx, 36.65, 43.65, 37.2, 43.05);
    CGContextAddQuadCurveToPoint(ctx, 37.7, 42.55, 37.7, 41.8);
    CGContextAddLineToPoint(ctx, 37.7, 35.1);
    CGContextAddQuadCurveToPoint(ctx, 37.7, 34.35, 37.2, 33.8);
    CGContextAddQuadCurveToPoint(ctx, 36.65, 33.25, 35.9, 33.25);
    CGContextClosePath(ctx);
}

static void def_path_14(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 12.6, 12.9);
    CGContextAddLineToPoint(ctx, 12.6, 38.25);
    CGContextAddLineToPoint(ctx, 40.05, 38.25);
    CGContextAddLineToPoint(ctx, 40.05, 12.9);
    CGContextAddQuadCurveToPoint(ctx, 40.05, 10.8, 38, 10.8);
    CGContextAddLineToPoint(ctx, 14.65, 10.8);
    CGContextAddQuadCurveToPoint(ctx, 12.6, 10.8, 12.6, 12.9);
    CGContextClosePath(ctx);
}

static void def_path_15(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 16.4, 30.8);
    CGContextAddQuadCurveToPoint(ctx, 15.7, 31.6, 15.7, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 15.7, 33.8, 16.4, 34.5);
    CGContextAddQuadCurveToPoint(ctx, 17.2, 35.3, 18.3, 35.3);
    CGContextAddQuadCurveToPoint(ctx, 19.35, 35.3, 20.15, 34.5);
    CGContextAddQuadCurveToPoint(ctx, 20.95, 33.8, 20.95, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 20.95, 31.6, 20.15, 30.8);
    CGContextAddQuadCurveToPoint(ctx, 19.35, 30.05, 18.3, 30.05);
    CGContextAddQuadCurveToPoint(ctx, 17.2, 30.05, 16.4, 30.8);
    CGContextClosePath(ctx);
}

static void def_path_16(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.15, 30.05);
    CGContextAddQuadCurveToPoint(ctx, 33.05, 30.05, 32.3, 30.85);
    CGContextAddQuadCurveToPoint(ctx, 31.5, 31.65, 31.5, 32.75);
    CGContextAddQuadCurveToPoint(ctx, 31.5, 33.8, 32.3, 34.6);
    CGContextAddQuadCurveToPoint(ctx, 33.05, 35.4, 34.15, 35.4);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 35.4, 35.95, 34.6);
    CGContextAddQuadCurveToPoint(ctx, 36.75, 33.8, 36.75, 32.75);
    CGContextAddQuadCurveToPoint(ctx, 36.75, 31.65, 35.95, 30.85);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 30.05, 34.15, 30.05);
    CGContextClosePath(ctx);
}

static void def_path_17(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 37.7, 14.15);
    CGContextAddLineToPoint(ctx, 15.1, 14.15);
    CGContextAddLineToPoint(ctx, 15.1, 27.2);
    CGContextAddLineToPoint(ctx, 37.7, 14.15);
    CGContextClosePath(ctx);
}

static void def_path_18(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 37.7, 14.15);
    CGContextAddLineToPoint(ctx, 15.1, 27.2);
    CGContextAddLineToPoint(ctx, 37.7, 27.2);
    CGContextAddLineToPoint(ctx, 37.7, 14.15);
    CGContextClosePath(ctx);
}

static void def_path_19(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.15, 19.7, -9.83477e-08, 25.15);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.9);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.95);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499999, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499999, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.2, 30.55, 0.8, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 1.1915e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500119);
    CGContextAddLineToPoint(ctx, 21.35, 0.350012);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.700012, 16.9, 1.50001);
    CGContextAddLineToPoint(ctx, 14.35, 2.60001);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05001, 12.6, 3.65001);
    CGContextAddLineToPoint(ctx, 9.34999, 6.00001);
    CGContextAddLineToPoint(ctx, 7.84999, 7.30001);
    CGContextAddLineToPoint(ctx, 7.59999, 7.60001);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextClosePath(ctx);
}

static void def_path_20(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 7.95, 14.75);
    CGContextAddQuadCurveToPoint(ctx, 7.05, 17.2, 8.3, 21.45);
    CGContextAddLineToPoint(ctx, 8.75, 22.9);
    CGContextAddQuadCurveToPoint(ctx, 10.65, 28.6, 15.4, 34.75);
    CGContextAddQuadCurveToPoint(ctx, 20.2, 40.85, 25.3, 44.15);
    CGContextAddLineToPoint(ctx, 26.65, 44.85);
    CGContextAddQuadCurveToPoint(ctx, 29.7, 46.55, 31.95, 46.7);
    CGContextAddQuadCurveToPoint(ctx, 34.45, 47.05, 36.35, 45.55);
    CGContextAddLineToPoint(ctx, 37.7, 44.45);
    CGContextAddQuadCurveToPoint(ctx, 39.55, 43.05, 38.75, 41.5);
    CGContextAddLineToPoint(ctx, 38.25, 40.65);
    CGContextAddLineToPoint(ctx, 34.05, 35.25);
    CGContextAddLineToPoint(ctx, 33.95, 35.1);
    CGContextAddLineToPoint(ctx, 33.35, 34.6);
    CGContextAddQuadCurveToPoint(ctx, 32.05, 33.4, 30.2, 34.8);
    CGContextAddLineToPoint(ctx, 28.75, 35.95);
    CGContextAddQuadCurveToPoint(ctx, 27.7, 36.85, 27.2, 37.95);
    CGContextAddLineToPoint(ctx, 26.4, 37.8);
    CGContextAddLineToPoint(ctx, 25.55, 37.6);
    CGContextAddQuadCurveToPoint(ctx, 21.35, 36.5, 18.3, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 15.3, 28.8, 15.25, 24.45);
    CGContextAddLineToPoint(ctx, 15.15, 23.35);
    CGContextAddLineToPoint(ctx, 15.3, 22.6);
    CGContextAddQuadCurveToPoint(ctx, 16.5, 22.3, 17.45, 21.6);
    CGContextAddLineToPoint(ctx, 18.9, 20.45);
    CGContextAddQuadCurveToPoint(ctx, 20.7, 19.05, 19.9, 17.3);
    CGContextAddLineToPoint(ctx, 19.7, 16.9);
    CGContextAddLineToPoint(ctx, 19.4, 16.65);
    CGContextAddLineToPoint(ctx, 15.25, 11.25);
    CGContextAddLineToPoint(ctx, 14.5, 10.55);
    CGContextAddQuadCurveToPoint(ctx, 13.2, 9.35001, 11.4, 10.7);
    CGContextAddLineToPoint(ctx, 10, 11.8);
    CGContextAddQuadCurveToPoint(ctx, 8.55, 12.9, 7.95, 14.75);
    CGContextClosePath(ctx);
}

static void def_path_21(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27.95, 10);
    CGContextAddLineToPoint(ctx, 27.95, 13.2);
    CGContextAddLineToPoint(ctx, 28.3, 13.2);
    CGContextAddQuadCurveToPoint(ctx, 33.7, 13.2, 37.7, 17.05);
    CGContextAddQuadCurveToPoint(ctx, 41.6, 21.1, 41.6, 26.5);
    CGContextAddLineToPoint(ctx, 41.6, 26.8);
    CGContextAddLineToPoint(ctx, 44.95, 26.8);
    CGContextAddLineToPoint(ctx, 44.95, 26.5);
    CGContextAddQuadCurveToPoint(ctx, 44.95, 19.75, 40.15, 14.8);
    CGContextAddQuadCurveToPoint(ctx, 35, 10, 28.3, 10);
    CGContextAddLineToPoint(ctx, 27.95, 10);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 28.3, 14.65);
    CGContextAddLineToPoint(ctx, 27.95, 14.65);
    CGContextAddLineToPoint(ctx, 27.95, 17.8);
    CGContextAddLineToPoint(ctx, 28.3, 17.8);
    CGContextAddQuadCurveToPoint(ctx, 31.8, 17.8, 34.45, 20.35);
    CGContextAddQuadCurveToPoint(ctx, 37, 23, 37, 26.5);
    CGContextAddLineToPoint(ctx, 37, 26.8);
    CGContextAddLineToPoint(ctx, 40.15, 26.8);
    CGContextAddLineToPoint(ctx, 40.15, 26.5);
    CGContextAddQuadCurveToPoint(ctx, 40.15, 21.65, 36.65, 18.1);
    CGContextAddQuadCurveToPoint(ctx, 33.1, 14.65, 28.3, 14.65);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 31.45, 23.35);
    CGContextAddQuadCurveToPoint(ctx, 32.6, 24.75, 32.6, 26.5);
    CGContextAddLineToPoint(ctx, 32.6, 26.8);
    CGContextAddLineToPoint(ctx, 35.55, 26.8);
    CGContextAddLineToPoint(ctx, 35.55, 26.5);
    CGContextAddQuadCurveToPoint(ctx, 35.55, 23.5, 33.5, 21.3);
    CGContextAddQuadCurveToPoint(ctx, 31.3, 19.25, 28.3, 19.25);
    CGContextAddLineToPoint(ctx, 27.95, 19.25);
    CGContextAddLineToPoint(ctx, 27.95, 22.2);
    CGContextAddLineToPoint(ctx, 28.3, 22.2);
    CGContextAddQuadCurveToPoint(ctx, 30.15, 22.2, 31.45, 23.35);
    CGContextClosePath(ctx);
}

static void def_path_22(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 14.35, 2.65);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.1, 12.6, 3.65);
    CGContextAddQuadCurveToPoint(ctx, 9.9, 5.25, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 3.8147e-07, 15.25, 3.8147e-07, 26);
    CGContextAddQuadCurveToPoint(ctx, 3.8147e-07, 35, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.85, 42.5);
    CGContextAddLineToPoint(ctx, 7.6, 44.4);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.7);
    CGContextAddLineToPoint(ctx, 24.9, 52);
    CGContextAddLineToPoint(ctx, 25.95, 52);
    CGContextAddLineToPoint(ctx, 27.45, 52);
    CGContextAddLineToPoint(ctx, 30.35, 51.7);
    CGContextAddLineToPoint(ctx, 33.85, 50.9);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.8, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.55);
    CGContextAddLineToPoint(ctx, 42.6, 46);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.4);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 47, 41.4);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 49.75, 37.25, 50.8, 34.05);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 30.25, 51.95, 26);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 21.75, 50.8, 18.05);
    CGContextAddQuadCurveToPoint(ctx, 49.75, 14.85, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.35, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 3.45, 35.1, 1.55);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.750003, 30.55, 0.400003);
    CGContextAddLineToPoint(ctx, 25.95, 3.16501e-06);
    CGContextAddLineToPoint(ctx, 23.95, 0.100003);
    CGContextAddLineToPoint(ctx, 21.35, 0.400003);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.750003, 16.9, 1.55);
    CGContextAddLineToPoint(ctx, 14.35, 2.65);
    CGContextClosePath(ctx);
}

static void def_path_23(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 23.4, 9.3);
    CGContextAddQuadCurveToPoint(ctx, 19.55, 9.85, 17.2, 12.05);
    CGContextAddQuadCurveToPoint(ctx, 14.9, 14.25, 14.9, 17.25);
    CGContextAddQuadCurveToPoint(ctx, 14.9, 20.1, 16.4, 22.15);
    CGContextAddQuadCurveToPoint(ctx, 18.1, 24.25, 22.1, 25.7);
    CGContextAddLineToPoint(ctx, 25.15, 26.9);
    CGContextAddQuadCurveToPoint(ctx, 28.55, 28.2, 29.55, 28.75);
    CGContextAddLineToPoint(ctx, 31, 30.45);
    CGContextAddQuadCurveToPoint(ctx, 31.5, 31.45, 31.5, 32.8);
    CGContextAddQuadCurveToPoint(ctx, 31.5, 34.9, 29.6, 36.3);
    CGContextAddQuadCurveToPoint(ctx, 27.7, 37.7, 24.6, 37.7);
    CGContextAddLineToPoint(ctx, 20.65, 37);
    CGContextAddQuadCurveToPoint(ctx, 18.25, 36.45, 16.85, 35.55);
    CGContextAddLineToPoint(ctx, 14.95, 39.5);
    CGContextAddQuadCurveToPoint(ctx, 15.95, 40.1, 18.8, 40.75);
    CGContextAddLineToPoint(ctx, 23.4, 41.45);
    CGContextAddLineToPoint(ctx, 23.4, 46.2);
    CGContextAddLineToPoint(ctx, 27.15, 46.2);
    CGContextAddLineToPoint(ctx, 27.15, 41.25);
    CGContextAddQuadCurveToPoint(ctx, 31.75, 40.65, 34.3, 38.5);
    CGContextAddQuadCurveToPoint(ctx, 36.9, 36.3, 36.9, 33.35);
    CGContextAddQuadCurveToPoint(ctx, 36.9, 29.85, 34.9, 27.6);
    CGContextAddQuadCurveToPoint(ctx, 33, 25.35, 28.9, 23.75);
    CGContextAddLineToPoint(ctx, 26.4, 22.85);
    CGContextAddLineToPoint(ctx, 22.3, 21.05);
    CGContextAddQuadCurveToPoint(ctx, 21.35, 20.3, 20.8, 19.35);
    CGContextAddQuadCurveToPoint(ctx, 20.15, 18.35, 20.15, 17.15);
    CGContextAddQuadCurveToPoint(ctx, 20.15, 15.2, 21.8, 13.95);
    CGContextAddQuadCurveToPoint(ctx, 23.35, 12.7, 26.05, 12.7);
    CGContextAddLineToPoint(ctx, 30.05, 13.3);
    CGContextAddQuadCurveToPoint(ctx, 32.25, 13.9, 33.35, 14.55);
    CGContextAddLineToPoint(ctx, 34.9, 10.8);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 9.3, 27.15, 9.15);
    CGContextAddLineToPoint(ctx, 27.15, 5.85);
    CGContextAddLineToPoint(ctx, 23.4, 5.85);
    CGContextAddLineToPoint(ctx, 23.4, 9.3);
    CGContextClosePath(ctx);
}

static void def_path_24(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.95, 0);
    CGContextAddLineToPoint(ctx, 21.35, 0.4);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 1.7, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 15.25, -9.53674e-08, 26);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 36.8, 7.6, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 9.2, 46, 10.95, 47.3);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 52, 25.95, 52);
    CGContextAddQuadCurveToPoint(ctx, 34, 52, 40.2, 47.8);
    CGContextAddQuadCurveToPoint(ctx, 42.4, 46.35, 44.35, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 42.35, 47.85, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 33.95, 51.95, 26);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 18.1, 47.85, 11.9);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 9.64999, 44.35, 7.59999);
    CGContextAddQuadCurveToPoint(ctx, 38.45, 1.69999, 30.55, 0.399993);
    CGContextAddLineToPoint(ctx, 25.95, 0);
    CGContextClosePath(ctx);
}

static void def_path_25(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 11.45, 17.4);
    CGContextAddQuadCurveToPoint(ctx, 8.8, 20, 8.8, 23.75);
    CGContextAddQuadCurveToPoint(ctx, 8.8, 24.85, 9.1, 25.8);
    CGContextAddQuadCurveToPoint(ctx, 9.25, 26.95, 9.9, 28.05);
    CGContextAddQuadCurveToPoint(ctx, 12.05, 33, 16.2, 37.15);
    CGContextAddQuadCurveToPoint(ctx, 20.8, 41.85, 26.5, 43.95);
    CGContextAddLineToPoint(ctx, 26.5, 44.05);
    CGContextAddLineToPoint(ctx, 26.65, 44.05);
    CGContextAddLineToPoint(ctx, 26.65, 43.95);
    CGContextAddQuadCurveToPoint(ctx, 32.3, 41.85, 36.9, 37.15);
    CGContextAddQuadCurveToPoint(ctx, 41.1, 33, 43.2, 28.05);
    CGContextAddQuadCurveToPoint(ctx, 43.8, 26.95, 44, 25.8);
    CGContextAddLineToPoint(ctx, 44.3, 23.75);
    CGContextAddQuadCurveToPoint(ctx, 44.3, 20, 41.6, 17.4);
    CGContextAddQuadCurveToPoint(ctx, 38.95, 14.7, 35.25, 14.7);
    CGContextAddQuadCurveToPoint(ctx, 31.6, 14.7, 28.9, 17.4);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 19.15, 26.5, 21.35);
    CGContextAddQuadCurveToPoint(ctx, 25.9, 19.15, 24.2, 17.4);
    CGContextAddQuadCurveToPoint(ctx, 21.5, 14.7, 17.8, 14.7);
    CGContextAddQuadCurveToPoint(ctx, 14.15, 14.7, 11.45, 17.4);
    CGContextClosePath(ctx);
}

static void def_path_26(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.8, 26.8);
    CGContextAddLineToPoint(ctx, 40.8, 23.45);
    CGContextAddLineToPoint(ctx, 36.4, 23.45);
    CGContextAddLineToPoint(ctx, 36.4, 19.05);
    CGContextAddLineToPoint(ctx, 33.05, 19.05);
    CGContextAddLineToPoint(ctx, 33.05, 23.45);
    CGContextAddLineToPoint(ctx, 28.65, 23.45);
    CGContextAddLineToPoint(ctx, 28.65, 26.8);
    CGContextAddLineToPoint(ctx, 33.05, 26.8);
    CGContextAddLineToPoint(ctx, 33.05, 31.2);
    CGContextAddLineToPoint(ctx, 36.4, 31.2);
    CGContextAddLineToPoint(ctx, 36.4, 26.8);
    CGContextAddLineToPoint(ctx, 40.8, 26.8);
    CGContextClosePath(ctx);
}

static void def_path_27(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.15, 18.75);
    CGContextAddLineToPoint(ctx, 25.15, 41.35);
    CGContextAddQuadCurveToPoint(ctx, 25.15, 42.25, 24.45, 42.95);
    CGContextAddQuadCurveToPoint(ctx, 23.8, 43.65, 22.85, 43.65);
    CGContextAddQuadCurveToPoint(ctx, 21.9, 43.65, 21.15, 42.95);
    CGContextAddQuadCurveToPoint(ctx, 20.5, 42.25, 20.5, 41.35);
    CGContextAddLineToPoint(ctx, 20.5, 39.15);
    CGContextAddLineToPoint(ctx, 20.2, 38.4);
    CGContextAddQuadCurveToPoint(ctx, 19.9, 38.1, 19.4, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 18.95, 38.1, 18.65, 38.4);
    CGContextAddQuadCurveToPoint(ctx, 18.4, 38.7, 18.4, 39.15);
    CGContextAddLineToPoint(ctx, 18.4, 41.45);
    CGContextAddQuadCurveToPoint(ctx, 18.4, 43.3, 19.7, 44.6);
    CGContextAddQuadCurveToPoint(ctx, 21, 45.9, 22.85, 45.9);
    CGContextAddQuadCurveToPoint(ctx, 24.65, 45.9, 25.95, 44.6);
    CGContextAddQuadCurveToPoint(ctx, 27.3, 43.3, 27.3, 41.45);
    CGContextAddLineToPoint(ctx, 27.3, 30.25);
    CGContextAddLineToPoint(ctx, 27.2, 29.7);
    CGContextAddLineToPoint(ctx, 27.2, 18.75);
    CGContextAddLineToPoint(ctx, 25.15, 18.75);
    CGContextClosePath(ctx);
}

static void def_path_28(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.3, 17.3);
    CGContextAddQuadCurveToPoint(ctx, 34.5, 12.35, 26.4, 12.35);
    CGContextAddQuadCurveToPoint(ctx, 18.3, 12.35, 12.55, 17.3);
    CGContextAddQuadCurveToPoint(ctx, 8.1, 21.2, 7.05, 26.3);
    CGContextAddQuadCurveToPoint(ctx, 8.6, 25.1, 10.5, 25.1);
    CGContextAddQuadCurveToPoint(ctx, 12.55, 25.1, 14.2, 26.5);
    CGContextAddQuadCurveToPoint(ctx, 15.75, 25.1, 17.85, 25.1);
    CGContextAddQuadCurveToPoint(ctx, 20.15, 25.1, 21.8, 26.75);
    CGContextAddQuadCurveToPoint(ctx, 23.8, 25.1, 26.4, 25.1);
    CGContextAddQuadCurveToPoint(ctx, 29.2, 25.1, 31.25, 26.95);
    CGContextAddQuadCurveToPoint(ctx, 33, 25.1, 35.45, 25.1);
    CGContextAddQuadCurveToPoint(ctx, 37.5, 25.1, 39.1, 26.5);
    CGContextAddQuadCurveToPoint(ctx, 40.7, 25.1, 42.85, 25.1);
    CGContextAddQuadCurveToPoint(ctx, 44.35, 25.1, 45.6, 25.85);
    CGContextAddQuadCurveToPoint(ctx, 44.5, 21.05, 40.3, 17.3);
    CGContextClosePath(ctx);
}

static void def_path_29(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 26.5, 5.35);
    CGContextAddLineToPoint(ctx, 26.5, 5.2);
    CGContextAddLineToPoint(ctx, 24.5, 18.75);
    CGContextAddLineToPoint(ctx, 28.6, 18.75);
    CGContextAddLineToPoint(ctx, 26.5, 5.35);
    CGContextClosePath(ctx);
}

static void def_path_30(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 37.5, 29.45);
    CGContextAddLineToPoint(ctx, 34.35, 29.45);
    CGContextAddLineToPoint(ctx, 34.35, 33.45);
    CGContextAddLineToPoint(ctx, 30.35, 33.45);
    CGContextAddLineToPoint(ctx, 30.35, 36.5);
    CGContextAddLineToPoint(ctx, 34.35, 36.5);
    CGContextAddLineToPoint(ctx, 34.35, 40.6);
    CGContextAddLineToPoint(ctx, 37.5, 40.6);
    CGContextAddLineToPoint(ctx, 37.5, 36.5);
    CGContextAddLineToPoint(ctx, 41.5, 36.5);
    CGContextAddLineToPoint(ctx, 41.5, 33.45);
    CGContextAddLineToPoint(ctx, 37.5, 33.45);
    CGContextAddLineToPoint(ctx, 37.5, 29.45);
    CGContextClosePath(ctx);
}

static void def_path_31(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.15, 19.7, -9.83477e-08, 25.15);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.9);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.95);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499999, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499999, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.2, 30.55, 0.8, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 1.1915e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500119);
    CGContextAddLineToPoint(ctx, 21.35, 0.350012);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.700012, 16.9, 1.50001);
    CGContextAddLineToPoint(ctx, 14.35, 2.60001);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05001, 12.6, 3.65001);
    CGContextAddLineToPoint(ctx, 9.34999, 6.00001);
    CGContextAddLineToPoint(ctx, 7.84999, 7.30001);
    CGContextAddLineToPoint(ctx, 7.59999, 7.60001);
    CGContextAddQuadCurveToPoint(ctx, 7.49999, 7.65001, 7.34999, 7.80001);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextClosePath(ctx);
}

static void def_path_32(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 23.2, 26.25);
    CGContextAddLineToPoint(ctx, 23.2, 44.85);
    CGContextAddQuadCurveToPoint(ctx, 23.2, 45.55, 24.65, 45.55);
    CGContextAddLineToPoint(ctx, 27.3, 45.55);
    CGContextAddQuadCurveToPoint(ctx, 28.75, 45.55, 28.75, 44.85);
    CGContextAddLineToPoint(ctx, 28.75, 26.25);
    CGContextAddQuadCurveToPoint(ctx, 28.75, 25.7, 27.3, 25.7);
    CGContextAddLineToPoint(ctx, 24.65, 25.7);
    CGContextAddQuadCurveToPoint(ctx, 23.2, 25.7, 23.2, 26.25);
    CGContextClosePath(ctx);
}

static void def_path_33(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 36.2, 5.7);
    CGContextAddLineToPoint(ctx, 15.9, 5.7);
    CGContextAddQuadCurveToPoint(ctx, 14.45, 5.7, 14.45, 7.15);
    CGContextAddLineToPoint(ctx, 14.45, 35);
    CGContextAddQuadCurveToPoint(ctx, 14.45, 36.5, 15.9, 36.5);
    CGContextAddLineToPoint(ctx, 36.2, 36.5);
    CGContextAddQuadCurveToPoint(ctx, 37.65, 36.5, 37.65, 35);
    CGContextAddLineToPoint(ctx, 37.65, 7.15);
    CGContextAddQuadCurveToPoint(ctx, 37.65, 5.7, 36.2, 5.7);
    CGContextClosePath(ctx);
}

static void def_path_34(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.8, 47.15);
    CGContextAddLineToPoint(ctx, 41.25, 47.15);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 46.85, 41.6);
    CGContextAddLineToPoint(ctx, 5.14999, 41.6);
    CGContextAddLineToPoint(ctx, 5.25, 41.75);
    CGContextClosePath(ctx);
}

static void def_path_35(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 22.45, 40.4);
    CGContextAddQuadCurveToPoint(ctx, 20.7, 40.4, 20.7, 42.1);
    CGContextAddLineToPoint(ctx, 20.7, 45.8);
    CGContextAddQuadCurveToPoint(ctx, 20.7, 47.55, 22.45, 47.55);
    CGContextAddLineToPoint(ctx, 29.55, 47.55);
    CGContextAddQuadCurveToPoint(ctx, 31.25, 47.55, 31.25, 45.8);
    CGContextAddLineToPoint(ctx, 31.25, 42.1);
    CGContextAddQuadCurveToPoint(ctx, 31.25, 40.4, 29.55, 40.4);
    CGContextAddLineToPoint(ctx, 22.45, 40.4);
    CGContextClosePath(ctx);
}

static void def_path_36(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 17.6, 28);
    CGContextAddQuadCurveToPoint(ctx, 16.8, 28.8, 16.8, 29.9);
    CGContextAddQuadCurveToPoint(ctx, 16.8, 31, 17.6, 31.8);
    CGContextAddQuadCurveToPoint(ctx, 18.4, 32.6, 19.5, 32.6);
    CGContextAddQuadCurveToPoint(ctx, 20.55, 32.6, 21.35, 31.8);
    CGContextAddQuadCurveToPoint(ctx, 22.2, 31, 22.2, 29.9);
    CGContextAddQuadCurveToPoint(ctx, 22.2, 28.8, 21.35, 28);
    CGContextAddQuadCurveToPoint(ctx, 20.55, 27.2, 19.5, 27.2);
    CGContextAddQuadCurveToPoint(ctx, 18.4, 27.2, 17.6, 28);
    CGContextClosePath(ctx);
}

static void def_path_37(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 36.05, 24.5);
    CGContextAddLineToPoint(ctx, 16.05, 24.5);
    CGContextAddLineToPoint(ctx, 15.55, 24.65);
    CGContextAddLineToPoint(ctx, 15.4, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 15.4, 25.45, 15.55, 25.6);
    CGContextAddQuadCurveToPoint(ctx, 15.75, 25.85, 16.05, 25.85);
    CGContextAddLineToPoint(ctx, 36.05, 25.85);
    CGContextAddLineToPoint(ctx, 36.5, 25.6);
    CGContextAddLineToPoint(ctx, 36.65, 25.15);
    CGContextAddLineToPoint(ctx, 36.5, 24.65);
    CGContextAddQuadCurveToPoint(ctx, 36.35, 24.5, 36.05, 24.5);
    CGContextClosePath(ctx);
}

static void def_path_38(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.2, 10.15);
    CGContextAddLineToPoint(ctx, 13.8, 10.15);
    CGContextAddQuadCurveToPoint(ctx, 11.8, 10.2, 11.8, 12.2);
    CGContextAddLineToPoint(ctx, 11.8, 41.25);
    CGContextAddQuadCurveToPoint(ctx, 11.8, 43.25, 13.8, 43.35);
    CGContextAddLineToPoint(ctx, 34.2, 43.35);
    CGContextAddQuadCurveToPoint(ctx, 36.2, 43.25, 36.2, 41.25);
    CGContextAddLineToPoint(ctx, 36.2, 12.2);
    CGContextAddQuadCurveToPoint(ctx, 36.2, 10.2, 34.2, 10.15);
    CGContextClosePath(ctx);
}

static void def_path_39(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.2, 10.15);
    CGContextAddQuadCurveToPoint(ctx, 36.2, 10.2, 36.2, 12.2);
    CGContextAddLineToPoint(ctx, 36.2, 41.25);
    CGContextAddQuadCurveToPoint(ctx, 36.2, 43.25, 34.2, 43.35);
    CGContextAddLineToPoint(ctx, 38.75, 43.35);
    CGContextAddQuadCurveToPoint(ctx, 40.85, 43.35, 40.85, 41.25);
    CGContextAddLineToPoint(ctx, 40.85, 12.2);
    CGContextAddQuadCurveToPoint(ctx, 40.85, 10.15, 38.75, 10.15);
    CGContextAddLineToPoint(ctx, 34.2, 10.15);
    CGContextClosePath(ctx);
}

static void def_path_40(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 42.4, 25.4);
    CGContextAddQuadCurveToPoint(ctx, 41.75, 24.75, 40.95, 24.75);
    CGContextAddLineToPoint(ctx, 33.95, 24.75);
    CGContextAddQuadCurveToPoint(ctx, 33.1, 24.75, 32.45, 25.4);
    CGContextAddQuadCurveToPoint(ctx, 31.9, 25.95, 31.9, 26.85);
    CGContextAddLineToPoint(ctx, 31.9, 27.35);
    CGContextAddQuadCurveToPoint(ctx, 31.9, 28.15, 32.45, 28.8);
    CGContextAddQuadCurveToPoint(ctx, 33.1, 29.4, 33.95, 29.4);
    CGContextAddLineToPoint(ctx, 40.95, 29.4);
    CGContextAddQuadCurveToPoint(ctx, 41.75, 29.4, 42.4, 28.8);
    CGContextAddQuadCurveToPoint(ctx, 43, 28.15, 43, 27.35);
    CGContextAddLineToPoint(ctx, 43, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 43, 25.95, 42.4, 25.4);
    CGContextClosePath(ctx);
}

static void def_path_41(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 32.05, 27.35);
    CGContextAddQuadCurveToPoint(ctx, 32.05, 28, 32.45, 28.45);
    CGContextAddLineToPoint(ctx, 33.65, 28.9);
    CGContextAddQuadCurveToPoint(ctx, 34.3, 28.9, 34.75, 28.45);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 28, 35.25, 27.35);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 26.7, 34.75, 26.2);
    CGContextAddQuadCurveToPoint(ctx, 34.3, 25.75, 33.65, 25.75);
    CGContextAddQuadCurveToPoint(ctx, 33, 25.75, 32.45, 26.2);
    CGContextAddQuadCurveToPoint(ctx, 32.05, 26.7, 32.05, 27.35);
    CGContextClosePath(ctx);
}

static void def_path_42(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 41.5, 11);
    CGContextAddLineToPoint(ctx, 35.25, 17.6);
    CGContextAddLineToPoint(ctx, 44, 26.4);
    CGContextAddLineToPoint(ctx, 50.35, 19.75);
    CGContextAddLineToPoint(ctx, 49.45, 18.95);
    CGContextAddLineToPoint(ctx, 43.55, 17.45);
    CGContextAddLineToPoint(ctx, 44.5, 13.95);
    CGContextAddLineToPoint(ctx, 41.5, 11);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 46.4, 9.9);
    CGContextAddLineToPoint(ctx, 44.5, 17);
    CGContextAddLineToPoint(ctx, 50.95, 18.6);
    CGContextAddLineToPoint(ctx, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 25.6, 23.95);
    CGContextAddLineToPoint(ctx, 19.75, 31.6);
    CGContextAddLineToPoint(ctx, 31.25, 31.65);
    CGContextAddLineToPoint(ctx, 33, 29.35);
    CGContextAddLineToPoint(ctx, 25.6, 23.95);
    CGContextClosePath(ctx);
}

static void def_path_43(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 24.3, 4.45);
    CGContextAddLineToPoint(ctx, 22.1, 3.35);
    CGContextAddLineToPoint(ctx, 6.65, 30);
    CGContextAddLineToPoint(ctx, 8.8, 31.25);
    CGContextAddLineToPoint(ctx, 8.75, 31.15);
    CGContextAddLineToPoint(ctx, 8.9, 31.1);
    CGContextAddLineToPoint(ctx, 24.3, 4.45);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 51.1, 33.1);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.6, 30.5);
    CGContextAddLineToPoint(ctx, 40.2, 33.5);
    CGContextAddLineToPoint(ctx, 40.2, 31.45);
    CGContextAddLineToPoint(ctx, 9.2, 31.45);
    CGContextAddLineToPoint(ctx, 9.05, 31.5);
    CGContextAddLineToPoint(ctx, 9.05, 40.15);
    CGContextAddLineToPoint(ctx, 4.1, 40.15);
    CGContextAddLineToPoint(ctx, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 6, 42.6);
    CGContextAddLineToPoint(ctx, 9.05, 42.6);
    CGContextAddLineToPoint(ctx, 9.05, 45.75);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.2, 36.05);
    CGContextAddLineToPoint(ctx, 51.1, 33.1);
    CGContextClosePath(ctx);
}

static void def_path_44(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 42.75, 18.3);
    CGContextAddLineToPoint(ctx, 38.15, 18.3);
    CGContextAddLineToPoint(ctx, 38.15, 41);
    CGContextAddLineToPoint(ctx, 22.3, 41);
    CGContextAddLineToPoint(ctx, 22.3, 45.1);
    CGContextAddLineToPoint(ctx, 42.75, 45.1);
    CGContextAddLineToPoint(ctx, 42.75, 18.3);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 36.7, 12.6);
    CGContextAddLineToPoint(ctx, 31.75, 12.6);
    CGContextAddLineToPoint(ctx, 31.75, 34.5);
    CGContextAddLineToPoint(ctx, 16.25, 34.5);
    CGContextAddLineToPoint(ctx, 16.25, 39.4);
    CGContextAddLineToPoint(ctx, 36.7, 39.4);
    CGContextAddLineToPoint(ctx, 36.7, 12.6);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 30.2, 6.2);
    CGContextAddLineToPoint(ctx, 9.75, 6.2);
    CGContextAddLineToPoint(ctx, 9.75, 33);
    CGContextAddLineToPoint(ctx, 30.2, 33);
    CGContextAddLineToPoint(ctx, 30.2, 6.2);
    CGContextClosePath(ctx);
}

static void def_path_45(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.15, 19.7, -9.83477e-08, 25.15);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.9);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 25.95);
    CGContextAddLineToPoint(ctx, -9.83477e-08, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499999, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499999, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.2, 30.55, 0.8, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddLineToPoint(ctx, 15.95, 50.05);
    CGContextAddLineToPoint(ctx, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddLineToPoint(ctx, 36.05, 50.05);
    CGContextAddLineToPoint(ctx, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80002);
    CGContextAddLineToPoint(ctx, 44.35, 7.60002);
    CGContextAddLineToPoint(ctx, 44.05, 7.30002);
    CGContextAddLineToPoint(ctx, 42.6, 6.00002);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05002, 35.1, 1.50002);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700016, 30.55, 0.350016);
    CGContextAddLineToPoint(ctx, 25.95, 1.57297e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500157);
    CGContextAddLineToPoint(ctx, 21.35, 0.350016);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.700016, 16.9, 1.50002);
    CGContextAddLineToPoint(ctx, 14.35, 2.60002);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05002, 12.6, 3.65002);
    CGContextAddLineToPoint(ctx, 9.34999, 6.00002);
    CGContextAddLineToPoint(ctx, 7.84999, 7.30002);
    CGContextAddLineToPoint(ctx, 7.59999, 7.60002);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextClosePath(ctx);
}

static void def_path_46(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27, 8.45);
    CGContextAddLineToPoint(ctx, 26.25, 7.15);
    CGContextAddLineToPoint(ctx, 25.7, 8.45);
    CGContextAddLineToPoint(ctx, 25.7, 20.45);
    CGContextAddLineToPoint(ctx, 26.8, 20.45);
    CGContextAddLineToPoint(ctx, 27, 8.45);
    CGContextClosePath(ctx);
}

static void def_path_47(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27, 8.45);
    CGContextAddLineToPoint(ctx, 26.8, 20.45);
    CGContextAddLineToPoint(ctx, 25.7, 20.45);
    CGContextAddLineToPoint(ctx, 25.7, 8.45);
    CGContextAddLineToPoint(ctx, 17.2, 24.15);
    CGContextAddQuadCurveToPoint(ctx, 22.25, 26.9, 21.25, 31.6);
    CGContextAddLineToPoint(ctx, 31.3, 31.6);
    CGContextAddQuadCurveToPoint(ctx, 30.85, 26.65, 35.25, 24);
    CGContextAddLineToPoint(ctx, 27, 8.45);
    CGContextClosePath(ctx);
}

static void def_path_48(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 21.25, 31.6);
    CGContextAddQuadCurveToPoint(ctx, 20, 41.95, 19.75, 51.3);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.1, 51.1);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 41.3, 31.3, 31.6);
    CGContextAddLineToPoint(ctx, 21.25, 31.6);
    CGContextClosePath(ctx);
}

static void def_path_49(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27.7, 19.6);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 19.1, 26.25, 19.1);
    CGContextAddQuadCurveToPoint(ctx, 25.3, 19.1, 24.75, 19.6);
    CGContextAddQuadCurveToPoint(ctx, 24.15, 20.2, 24.15, 21);
    CGContextAddQuadCurveToPoint(ctx, 24.15, 21.9, 24.75, 22.4);
    CGContextAddQuadCurveToPoint(ctx, 25.3, 23, 26.25, 23);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 23, 27.7, 22.4);
    CGContextAddQuadCurveToPoint(ctx, 28.3, 21.9, 28.3, 21);
    CGContextAddQuadCurveToPoint(ctx, 28.3, 20.2, 27.7, 19.6);
    CGContextClosePath(ctx);
}

static void def_path_50(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35, 6);
    CGContextAddLineToPoint(ctx, 7.85, 7.3);
    CGContextAddLineToPoint(ctx, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.149999, 19.7, -5.75185e-07, 25.15);
    CGContextAddLineToPoint(ctx, -5.75185e-07, 25.9);
    CGContextAddLineToPoint(ctx, -5.75185e-07, 25.95);
    CGContextAddLineToPoint(ctx, -5.75185e-07, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499994, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499994, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.199999, 30.55, 0.799999, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 1.1915e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500119);
    CGContextAddLineToPoint(ctx, 21.35, 0.350012);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextClosePath(ctx);
}

static void def_path_51(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.65, 35.25);
    CGContextAddLineToPoint(ctx, 42.05, 35.25);
    CGContextAddLineToPoint(ctx, 42.05, 19.9);
    CGContextAddQuadCurveToPoint(ctx, 42.05, 18.45, 40.65, 18.45);
    CGContextAddLineToPoint(ctx, 11.6, 18.45);
    CGContextAddQuadCurveToPoint(ctx, 10.15, 18.45, 10.15, 19.9);
    CGContextAddLineToPoint(ctx, 10.15, 35.25);
    CGContextAddLineToPoint(ctx, 17.75, 35.25);
    CGContextAddLineToPoint(ctx, 17.75, 29.35);
    CGContextAddLineToPoint(ctx, 34.65, 29.35);
    CGContextAddLineToPoint(ctx, 34.65, 35.25);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 40.35, 23.55);
    CGContextAddLineToPoint(ctx, 11.9, 23.55);
    CGContextAddLineToPoint(ctx, 11.9, 22.45);
    CGContextAddLineToPoint(ctx, 40.35, 22.45);
    CGContextAddLineToPoint(ctx, 40.35, 23.55);
    CGContextClosePath(ctx);
}

static void def_path_52(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.65, 7.65);
    CGContextAddLineToPoint(ctx, 17.75, 7.65);
    CGContextAddLineToPoint(ctx, 17.75, 17.05);
    CGContextAddLineToPoint(ctx, 34.65, 17.05);
    CGContextAddLineToPoint(ctx, 34.65, 7.65);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 34.65, 35.25);
    CGContextAddLineToPoint(ctx, 34.65, 29.35);
    CGContextAddLineToPoint(ctx, 17.75, 29.35);
    CGContextAddLineToPoint(ctx, 17.75, 35.25);
    CGContextAddLineToPoint(ctx, 17.75, 45.15);
    CGContextAddLineToPoint(ctx, 34.65, 45.15);
    CGContextAddLineToPoint(ctx, 34.65, 35.25);
    CGContextClosePath(ctx);
}

static void def_path_53(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.35, 23.55);
    CGContextAddLineToPoint(ctx, 40.35, 22.45);
    CGContextAddLineToPoint(ctx, 11.9, 22.45);
    CGContextAddLineToPoint(ctx, 11.9, 23.55);
    CGContextAddLineToPoint(ctx, 40.35, 23.55);
    CGContextClosePath(ctx);
}

static void def_path_54(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 32.2, 31.65);
    CGContextAddLineToPoint(ctx, 20.3, 31.65);
    CGContextAddLineToPoint(ctx, 20.3, 32.1);
    CGContextAddLineToPoint(ctx, 32.2, 32.1);
    CGContextAddLineToPoint(ctx, 32.2, 31.65);
    CGContextClosePath(ctx);
}

static void def_path_55(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 32.2, 34.9);
    CGContextAddLineToPoint(ctx, 32.2, 34.45);
    CGContextAddLineToPoint(ctx, 20.3, 34.45);
    CGContextAddLineToPoint(ctx, 20.3, 34.9);
    CGContextAddLineToPoint(ctx, 32.2, 34.9);
    CGContextClosePath(ctx);
}

static void def_path_56(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 20.3, 37.7);
    CGContextAddLineToPoint(ctx, 32.2, 37.7);
    CGContextAddLineToPoint(ctx, 32.2, 37.2);
    CGContextAddLineToPoint(ctx, 20.3, 37.2);
    CGContextAddLineToPoint(ctx, 20.3, 37.7);
    CGContextClosePath(ctx);
}

static void def_path_57(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 20.3, 40.05);
    CGContextAddLineToPoint(ctx, 20.3, 40.5);
    CGContextAddLineToPoint(ctx, 32.2, 40.5);
    CGContextAddLineToPoint(ctx, 32.2, 40.05);
    CGContextAddLineToPoint(ctx, 20.3, 40.05);
    CGContextClosePath(ctx);
}

static void def_path_58(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 32.2, 42.85);
    CGContextAddLineToPoint(ctx, 20.3, 42.85);
    CGContextAddLineToPoint(ctx, 20.3, 43.25);
    CGContextAddLineToPoint(ctx, 32.2, 43.25);
    CGContextAddLineToPoint(ctx, 32.2, 42.85);
    CGContextClosePath(ctx);
}

static void def_path_59(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 50.05, 15.85);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 46.35, 9.85);
    CGContextAddLineToPoint(ctx, 45.1, 8.4);
    CGContextAddLineToPoint(ctx, 44.6, 7.8);
    CGContextAddLineToPoint(ctx, 44.35, 7.6);
    CGContextAddLineToPoint(ctx, 44.05, 7.3);
    CGContextAddLineToPoint(ctx, 43.7, 7);
    CGContextAddLineToPoint(ctx, 42.6, 6);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05, 35.1, 1.5);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.7, 30.55, 0.35);
    CGContextAddLineToPoint(ctx, 25.95, 4.70877e-07);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500005);
    CGContextAddLineToPoint(ctx, 21.35, 0.35);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35001, 6);
    CGContextAddLineToPoint(ctx, 7.85001, 7.3);
    CGContextAddLineToPoint(ctx, 7.60001, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.50001, 7.65, 7.35001, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.70001, 9.55, 4.35001, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15001, 13.2, 2.35001, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.150005, 19.7, 5.14686e-06, 25.15);
    CGContextAddLineToPoint(ctx, 5.14686e-06, 25.9);
    CGContextAddLineToPoint(ctx, 5.14686e-06, 25.95);
    CGContextAddLineToPoint(ctx, 5.14686e-06, 26.8);
    CGContextAddLineToPoint(ctx, 0.0500051, 27.5);
    CGContextAddLineToPoint(ctx, 0.0500051, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.200005, 30.55, 0.800005, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.50001, 35.55, 2.90001, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85001, 40, 5.25001, 41.75);
    CGContextAddLineToPoint(ctx, 5.45001, 42.05);
    CGContextAddLineToPoint(ctx, 5.85001, 42.45);
    CGContextAddLineToPoint(ctx, 7.60001, 44.35);
    CGContextAddLineToPoint(ctx, 7.65001, 44.45);
    CGContextAddLineToPoint(ctx, 8.40001, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 43.7, 45);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.15, 43.55);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 47.95, 40.05);
    CGContextAddLineToPoint(ctx, 35.6, 33.4);
    CGContextAddLineToPoint(ctx, 35.6, 23.15);
    CGContextAddLineToPoint(ctx, 50.05, 15.85);
    CGContextClosePath(ctx);
}

static void def_path_60(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 47.95, 40.05);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.6);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 50.05, 15.85);
    CGContextAddLineToPoint(ctx, 35.6, 23.15);
    CGContextAddLineToPoint(ctx, 35.6, 33.4);
    CGContextAddLineToPoint(ctx, 47.95, 40.05);
    CGContextClosePath(ctx);
}

static void def_path_61(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 18.4, 15.75);
    CGContextAddLineToPoint(ctx, 25.15, 15.75);
    CGContextAddLineToPoint(ctx, 25.15, 22.55);
    CGContextAddLineToPoint(ctx, 24.95, 23);
    CGContextAddLineToPoint(ctx, 24.75, 23.15);
    CGContextAddLineToPoint(ctx, 24.2, 23);
    CGContextAddQuadCurveToPoint(ctx, 21.8, 22.55, 20.05, 20.8);
    CGContextAddQuadCurveToPoint(ctx, 18.3, 19.05, 17.85, 16.8);
    CGContextAddLineToPoint(ctx, 17.8, 16.25);
    CGContextAddQuadCurveToPoint(ctx, 17.8, 16.05, 17.95, 15.9);
    CGContextAddQuadCurveToPoint(ctx, 18.15, 15.75, 18.4, 15.75);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 17.85, 13.25);
    CGContextAddQuadCurveToPoint(ctx, 18.3, 10.95, 20.05, 9.2);
    CGContextAddQuadCurveToPoint(ctx, 21.8, 7.45, 24.2, 7.05);
    CGContextAddLineToPoint(ctx, 24.75, 7);
    CGContextAddLineToPoint(ctx, 24.95, 7.05);
    CGContextAddLineToPoint(ctx, 25.15, 7.6);
    CGContextAddLineToPoint(ctx, 25.15, 14.2);
    CGContextAddLineToPoint(ctx, 18.4, 14.2);
    CGContextAddLineToPoint(ctx, 17.95, 14.1);
    CGContextAddLineToPoint(ctx, 17.8, 13.8);
    CGContextAddLineToPoint(ctx, 17.85, 13.25);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 18.9, 8.1);
    CGContextAddQuadCurveToPoint(ctx, 16.05, 10.95, 16.05, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 16.05, 19.1, 18.9, 21.9);
    CGContextAddQuadCurveToPoint(ctx, 21.8, 24.8, 25.9, 24.8);
    CGContextAddQuadCurveToPoint(ctx, 29.9, 24.8, 32.75, 21.9);
    CGContextAddQuadCurveToPoint(ctx, 35.7, 19.1, 35.7, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 35.7, 10.95, 32.75, 8.1);
    CGContextAddQuadCurveToPoint(ctx, 29.9, 5.25, 25.9, 5.25);
    CGContextAddQuadCurveToPoint(ctx, 21.8, 5.25, 18.9, 8.1);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 27.45, 7);
    CGContextAddQuadCurveToPoint(ctx, 29.85, 7.35, 31.65, 9.2);
    CGContextAddQuadCurveToPoint(ctx, 33.4, 10.95, 33.95, 13.25);
    CGContextAddLineToPoint(ctx, 34, 13.8);
    CGContextAddLineToPoint(ctx, 33.8, 14.1);
    CGContextAddLineToPoint(ctx, 33.4, 14.2);
    CGContextAddLineToPoint(ctx, 26.5, 14.2);
    CGContextAddLineToPoint(ctx, 26.5, 7.6);
    CGContextAddLineToPoint(ctx, 26.7, 7.05);
    CGContextAddLineToPoint(ctx, 27, 6.9);
    CGContextAddLineToPoint(ctx, 27.15, 6.9);
    CGContextAddLineToPoint(ctx, 27.45, 7);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 33.4, 15.75);
    CGContextAddLineToPoint(ctx, 33.8, 15.9);
    CGContextAddLineToPoint(ctx, 34, 16.25);
    CGContextAddLineToPoint(ctx, 33.95, 16.8);
    CGContextAddQuadCurveToPoint(ctx, 33.4, 19.05, 31.65, 20.8);
    CGContextAddQuadCurveToPoint(ctx, 29.85, 22.6, 27.6, 23.05);
    CGContextAddLineToPoint(ctx, 27, 23.15);
    CGContextAddLineToPoint(ctx, 26.7, 23);
    CGContextAddLineToPoint(ctx, 26.5, 22.55);
    CGContextAddLineToPoint(ctx, 26.5, 15.75);
    CGContextAddLineToPoint(ctx, 33.4, 15.75);
    CGContextClosePath(ctx);
}

static void def_path_62(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 21.35, 8.55);
    CGContextAddQuadCurveToPoint(ctx, 21.6, 8.3, 21.8, 8.25);
    CGContextAddQuadCurveToPoint(ctx, 23.8, 6.85, 26.25, 6.85);
    CGContextAddQuadCurveToPoint(ctx, 28.75, 6.85, 30.7, 8.25);
    CGContextAddLineToPoint(ctx, 31.1, 8.6);
    CGContextAddLineToPoint(ctx, 31.25, 8.9);
    CGContextAddLineToPoint(ctx, 31, 9.25);
    CGContextAddLineToPoint(ctx, 26.25, 14);
    CGContextAddLineToPoint(ctx, 21.5, 9.25);
    CGContextAddLineToPoint(ctx, 21.35, 8.8);
    CGContextAddLineToPoint(ctx, 21.35, 8.55);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 19.6, 10.3);
    CGContextAddLineToPoint(ctx, 20, 10.2);
    CGContextAddLineToPoint(ctx, 20.45, 10.35);
    CGContextAddLineToPoint(ctx, 25.15, 15.1);
    CGContextAddLineToPoint(ctx, 20.35, 19.9);
    CGContextAddLineToPoint(ctx, 20, 20.15);
    CGContextAddLineToPoint(ctx, 19.7, 20);
    CGContextAddLineToPoint(ctx, 19.4, 19.55);
    CGContextAddQuadCurveToPoint(ctx, 18, 17.6, 18.1, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 18.1, 12.55, 19.35, 10.7);
    CGContextAddLineToPoint(ctx, 19.6, 10.3);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 21.35, 20.95);
    CGContextAddLineToPoint(ctx, 26.2, 16.1);
    CGContextAddLineToPoint(ctx, 31, 20.95);
    CGContextAddLineToPoint(ctx, 31.15, 21.35);
    CGContextAddLineToPoint(ctx, 31.1, 21.75);
    CGContextAddQuadCurveToPoint(ctx, 30.85, 21.8, 30.65, 22.05);
    CGContextAddQuadCurveToPoint(ctx, 28.75, 23.2, 26.25, 23.2);
    CGContextAddQuadCurveToPoint(ctx, 23.7, 23.25, 21.75, 22.05);
    CGContextAddLineToPoint(ctx, 21.35, 21.65);
    CGContextAddLineToPoint(ctx, 21.15, 21.3);
    CGContextAddLineToPoint(ctx, 21.35, 20.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 19.25, 8.15);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 11, 16.4, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 19.2, 19.25, 22.05);
    CGContextAddQuadCurveToPoint(ctx, 22.2, 24.95, 26.2, 24.9);
    CGContextAddQuadCurveToPoint(ctx, 30.3, 24.9, 33.1, 22.05);
    CGContextAddQuadCurveToPoint(ctx, 36.05, 19.1, 36.05, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 36.05, 11.1, 33.1, 8.15);
    CGContextAddQuadCurveToPoint(ctx, 30.3, 5.3, 26.25, 5.25);
    CGContextAddQuadCurveToPoint(ctx, 22.2, 5.25, 19.25, 8.15);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 33, 10.5);
    CGContextAddQuadCurveToPoint(ctx, 34.45, 12.55, 34.45, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 34.45, 17.5, 33.1, 19.55);
    CGContextAddLineToPoint(ctx, 32.85, 20);
    CGContextAddLineToPoint(ctx, 32.55, 20);
    CGContextAddLineToPoint(ctx, 32.1, 19.85);
    CGContextAddLineToPoint(ctx, 27.3, 15.05);
    CGContextAddLineToPoint(ctx, 32.05, 10.3);
    CGContextAddLineToPoint(ctx, 32.4, 10.05);
    CGContextAddLineToPoint(ctx, 32.85, 10.2);
    CGContextAddLineToPoint(ctx, 32.9, 10.3);
    CGContextAddLineToPoint(ctx, 33, 10.5);
    CGContextClosePath(ctx);
}

static void def_path_63(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 8.45, 19.6);
    CGContextAddQuadCurveToPoint(ctx, 3.55, 19.6, 3.55, 24.5);
    CGContextAddLineToPoint(ctx, 3.55, 31.8);
    CGContextAddQuadCurveToPoint(ctx, 3.55, 36.7, 8.45, 36.7);
    CGContextAddLineToPoint(ctx, 27.6, 36.7);
    CGContextAddQuadCurveToPoint(ctx, 32.45, 36.7, 32.45, 31.8);
    CGContextAddLineToPoint(ctx, 37.35, 34.5);
    CGContextAddLineToPoint(ctx, 37.35, 22.1);
    CGContextAddLineToPoint(ctx, 32.45, 24.5);
    CGContextAddQuadCurveToPoint(ctx, 32.45, 19.6, 27.6, 19.6);
    CGContextAddLineToPoint(ctx, 8.45, 19.6);
    CGContextClosePath(ctx);
}

static void def_path_64(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 26.25, 13.15);
    CGContextAddLineToPoint(ctx, 26.2, 13.15);
    CGContextAddQuadCurveToPoint(ctx, 25.4, 13.15, 24.8, 13.7);
    CGContextAddQuadCurveToPoint(ctx, 24.2, 14.2, 24.2, 15.05);
    CGContextAddLineToPoint(ctx, 24.2, 26.35);
    CGContextAddQuadCurveToPoint(ctx, 24.2, 27.15, 24.8, 27.65);
    CGContextAddQuadCurveToPoint(ctx, 25.4, 28.25, 26.2, 28.25);
    CGContextAddLineToPoint(ctx, 26.25, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 27.05, 28.25, 27.65, 27.65);
    CGContextAddQuadCurveToPoint(ctx, 28.25, 27.15, 28.25, 26.35);
    CGContextAddLineToPoint(ctx, 28.25, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 28.25, 14.2, 27.65, 13.7);
    CGContextAddQuadCurveToPoint(ctx, 27.05, 13.15, 26.25, 13.15);
    CGContextClosePath(ctx);
}

static void def_path_65(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27.35, 15.3);
    CGContextAddQuadCurveToPoint(ctx, 27.35, 14.8, 27, 14.45);
    CGContextAddQuadCurveToPoint(ctx, 26.65, 14.1, 26.2, 14.1);
    CGContextAddQuadCurveToPoint(ctx, 25.75, 14.1, 25.4, 14.45);
    CGContextAddQuadCurveToPoint(ctx, 25, 14.8, 25, 15.3);
    CGContextAddQuadCurveToPoint(ctx, 25, 15.75, 25.4, 16.1);
    CGContextAddQuadCurveToPoint(ctx, 25.75, 16.5, 26.2, 16.5);
    CGContextAddQuadCurveToPoint(ctx, 26.65, 16.5, 27, 16.1);
    CGContextAddQuadCurveToPoint(ctx, 27.35, 15.75, 27.35, 15.3);
    CGContextClosePath(ctx);
}

static void def_path_66(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.95, 0);
    CGContextAddLineToPoint(ctx, 23.95, 0.05);
    CGContextAddLineToPoint(ctx, 21.35, 0.35);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35, 6);
    CGContextAddLineToPoint(ctx, 7.85, 7.3);
    CGContextAddLineToPoint(ctx, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.150001, 19.7, 1.33216e-06, 25.15);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.9);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.95);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 26.8);
    CGContextAddLineToPoint(ctx, 0.0500013, 27.5);
    CGContextAddLineToPoint(ctx, 0.0500013, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.200001, 30.55, 0.800001, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 0);
    CGContextClosePath(ctx);
}

static void def_path_67(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.3, 28.4);
    CGContextAddLineToPoint(ctx, 40.3, 10.7);
    CGContextAddLineToPoint(ctx, 12.45, 10.7);
    CGContextAddLineToPoint(ctx, 12.45, 28.4);
    CGContextAddLineToPoint(ctx, 40.3, 28.4);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 6.1, 36.75);
    CGContextAddLineToPoint(ctx, 6.1, 39.75);
    CGContextAddLineToPoint(ctx, 46.85, 39.75);
    CGContextAddLineToPoint(ctx, 46.85, 36.75);
    CGContextAddLineToPoint(ctx, 31.8, 36.75);
    CGContextAddLineToPoint(ctx, 20.65, 36.75);
    CGContextAddLineToPoint(ctx, 6.1, 36.75);
    CGContextClosePath(ctx);
}

static void def_path_68(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 46.85, 36.75);
    CGContextAddLineToPoint(ctx, 40.3, 28.4);
    CGContextAddLineToPoint(ctx, 12.45, 28.4);
    CGContextAddLineToPoint(ctx, 6.1, 36.75);
    CGContextAddLineToPoint(ctx, 20.65, 36.75);
    CGContextAddLineToPoint(ctx, 21.15, 34.95);
    CGContextAddLineToPoint(ctx, 15.75, 34.95);
    CGContextAddLineToPoint(ctx, 10.35, 34.95);
    CGContextAddLineToPoint(ctx, 11.8, 32.6);
    CGContextAddLineToPoint(ctx, 12.75, 31.15);
    CGContextAddLineToPoint(ctx, 13.65, 29.75);
    CGContextAddLineToPoint(ctx, 17.95, 29.75);
    CGContextAddLineToPoint(ctx, 22.3, 29.75);
    CGContextAddLineToPoint(ctx, 26.25, 29.75);
    CGContextAddLineToPoint(ctx, 30.4, 29.75);
    CGContextAddLineToPoint(ctx, 34.65, 29.75);
    CGContextAddLineToPoint(ctx, 38.95, 29.75);
    CGContextAddLineToPoint(ctx, 39.75, 31.15);
    CGContextAddLineToPoint(ctx, 40.8, 32.6);
    CGContextAddLineToPoint(ctx, 42.25, 34.95);
    CGContextAddLineToPoint(ctx, 36.85, 34.95);
    CGContextAddLineToPoint(ctx, 31.45, 34.95);
    CGContextAddLineToPoint(ctx, 31.8, 36.75);
    CGContextAddLineToPoint(ctx, 46.85, 36.75);
    CGContextClosePath(ctx);
}

static void def_path_69(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 36.85, 34.95);
    CGContextAddLineToPoint(ctx, 42.25, 34.95);
    CGContextAddLineToPoint(ctx, 40.8, 32.6);
    CGContextAddLineToPoint(ctx, 35.9, 32.6);
    CGContextAddLineToPoint(ctx, 35.25, 31.15);
    CGContextAddLineToPoint(ctx, 39.75, 31.15);
    CGContextAddLineToPoint(ctx, 38.95, 29.75);
    CGContextAddLineToPoint(ctx, 34.65, 29.75);
    CGContextAddLineToPoint(ctx, 35.25, 31.15);
    CGContextAddLineToPoint(ctx, 30.7, 31.15);
    CGContextAddLineToPoint(ctx, 31, 32.6);
    CGContextAddLineToPoint(ctx, 35.9, 32.6);
    CGContextAddLineToPoint(ctx, 36.85, 34.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 26.25, 29.75);
    CGContextAddLineToPoint(ctx, 26.25, 31.15);
    CGContextAddLineToPoint(ctx, 30.7, 31.15);
    CGContextAddLineToPoint(ctx, 30.4, 29.75);
    CGContextAddLineToPoint(ctx, 26.25, 29.75);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 31.45, 34.95);
    CGContextAddLineToPoint(ctx, 31, 32.6);
    CGContextAddLineToPoint(ctx, 26.25, 32.6);
    CGContextAddLineToPoint(ctx, 26.25, 31.15);
    CGContextAddLineToPoint(ctx, 22.05, 31.15);
    CGContextAddLineToPoint(ctx, 22.3, 29.75);
    CGContextAddLineToPoint(ctx, 17.95, 29.75);
    CGContextAddLineToPoint(ctx, 17.45, 31.15);
    CGContextAddLineToPoint(ctx, 22.05, 31.15);
    CGContextAddLineToPoint(ctx, 21.65, 32.6);
    CGContextAddLineToPoint(ctx, 26.25, 32.6);
    CGContextAddLineToPoint(ctx, 26.25, 34.95);
    CGContextAddLineToPoint(ctx, 31.45, 34.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 21.15, 34.95);
    CGContextAddLineToPoint(ctx, 21.65, 32.6);
    CGContextAddLineToPoint(ctx, 16.8, 32.6);
    CGContextAddLineToPoint(ctx, 17.45, 31.15);
    CGContextAddLineToPoint(ctx, 12.75, 31.15);
    CGContextAddLineToPoint(ctx, 11.8, 32.6);
    CGContextAddLineToPoint(ctx, 16.8, 32.6);
    CGContextAddLineToPoint(ctx, 15.75, 34.95);
    CGContextAddLineToPoint(ctx, 21.15, 34.95);
    CGContextClosePath(ctx);
}

static void def_path_70(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.8, 32.6);
    CGContextAddLineToPoint(ctx, 39.75, 31.15);
    CGContextAddLineToPoint(ctx, 35.25, 31.15);
    CGContextAddLineToPoint(ctx, 35.9, 32.6);
    CGContextAddLineToPoint(ctx, 40.8, 32.6);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 31.45, 34.95);
    CGContextAddLineToPoint(ctx, 36.85, 34.95);
    CGContextAddLineToPoint(ctx, 35.9, 32.6);
    CGContextAddLineToPoint(ctx, 31, 32.6);
    CGContextAddLineToPoint(ctx, 30.7, 31.15);
    CGContextAddLineToPoint(ctx, 35.25, 31.15);
    CGContextAddLineToPoint(ctx, 34.65, 29.75);
    CGContextAddLineToPoint(ctx, 30.4, 29.75);
    CGContextAddLineToPoint(ctx, 30.7, 31.15);
    CGContextAddLineToPoint(ctx, 26.25, 31.15);
    CGContextAddLineToPoint(ctx, 26.25, 29.75);
    CGContextAddLineToPoint(ctx, 22.3, 29.75);
    CGContextAddLineToPoint(ctx, 22.05, 31.15);
    CGContextAddLineToPoint(ctx, 26.25, 31.15);
    CGContextAddLineToPoint(ctx, 26.25, 32.6);
    CGContextAddLineToPoint(ctx, 31, 32.6);
    CGContextAddLineToPoint(ctx, 31.45, 34.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 21.15, 34.95);
    CGContextAddLineToPoint(ctx, 26.25, 34.95);
    CGContextAddLineToPoint(ctx, 26.25, 32.6);
    CGContextAddLineToPoint(ctx, 21.65, 32.6);
    CGContextAddLineToPoint(ctx, 22.05, 31.15);
    CGContextAddLineToPoint(ctx, 17.45, 31.15);
    CGContextAddLineToPoint(ctx, 17.95, 29.75);
    CGContextAddLineToPoint(ctx, 13.65, 29.75);
    CGContextAddLineToPoint(ctx, 12.75, 31.15);
    CGContextAddLineToPoint(ctx, 17.45, 31.15);
    CGContextAddLineToPoint(ctx, 16.8, 32.6);
    CGContextAddLineToPoint(ctx, 21.65, 32.6);
    CGContextAddLineToPoint(ctx, 21.15, 34.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 11.8, 32.6);
    CGContextAddLineToPoint(ctx, 10.35, 34.95);
    CGContextAddLineToPoint(ctx, 15.75, 34.95);
    CGContextAddLineToPoint(ctx, 16.8, 32.6);
    CGContextAddLineToPoint(ctx, 11.8, 32.6);
    CGContextClosePath(ctx);
}

static void def_path_71(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 31.8, 36.75);
    CGContextAddLineToPoint(ctx, 31.45, 34.95);
    CGContextAddLineToPoint(ctx, 26.25, 34.95);
    CGContextAddLineToPoint(ctx, 21.15, 34.95);
    CGContextAddLineToPoint(ctx, 20.65, 36.75);
    CGContextAddLineToPoint(ctx, 31.8, 36.75);
    CGContextClosePath(ctx);
}

static void def_path_72(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 38.15, 12.6);
    CGContextAddLineToPoint(ctx, 30.7, 12.6);
    CGContextAddLineToPoint(ctx, 14.6, 24.1);
    CGContextAddLineToPoint(ctx, 14.6, 26.8);
    CGContextAddLineToPoint(ctx, 18.75, 26.8);
    CGContextAddLineToPoint(ctx, 38.15, 12.6);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 38.15, 15.6);
    CGContextAddLineToPoint(ctx, 38.15, 14.1);
    CGContextAddLineToPoint(ctx, 20.55, 26.8);
    CGContextAddLineToPoint(ctx, 22.75, 26.8);
    CGContextAddLineToPoint(ctx, 38.15, 15.6);
    CGContextClosePath(ctx);
}

static void def_path_73(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 30.7, 12.6);
    CGContextAddLineToPoint(ctx, 14.6, 12.6);
    CGContextAddLineToPoint(ctx, 14.6, 24.1);
    CGContextAddLineToPoint(ctx, 30.7, 12.6);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 38.15, 14.1);
    CGContextAddLineToPoint(ctx, 38.15, 12.6);
    CGContextAddLineToPoint(ctx, 18.75, 26.8);
    CGContextAddLineToPoint(ctx, 20.55, 26.8);
    CGContextAddLineToPoint(ctx, 38.15, 14.1);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 22.75, 26.8);
    CGContextAddLineToPoint(ctx, 38.15, 26.8);
    CGContextAddLineToPoint(ctx, 38.15, 15.6);
    CGContextAddLineToPoint(ctx, 22.75, 26.8);
    CGContextClosePath(ctx);
}

static void def_path_74(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.2, 47.8);
    CGContextAddQuadCurveToPoint(ctx, 42.4, 46.35, 44.35, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 42.35, 47.85, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 49.3, 37.95, 50.25, 35.5);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 31.1, 51.95, 26);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 20.9, 50.25, 16.55);
    CGContextAddQuadCurveToPoint(ctx, 49.3, 14.1, 47.85, 11.9);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 9.65, 44.35, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 38.45, 1.7, 30.55, 0.399996);
    CGContextAddLineToPoint(ctx, 25.95, -4.37498e-06);
    CGContextAddLineToPoint(ctx, 21.35, 0.399996);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 1.7, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 15.25, -9.53674e-08, 26);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 36.8, 7.6, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 9.2, 46, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 10.95, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 10.95, 34.1, 15.1, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 28.5, 17.95, 27.6);
    CGContextAddLineToPoint(ctx, 18.25, 27.45);
    CGContextAddQuadCurveToPoint(ctx, 21.15, 30.25, 25.3, 30.4);
    CGContextAddLineToPoint(ctx, 25.75, 30.4);
    CGContextAddQuadCurveToPoint(ctx, 30.15, 30.4, 33.1, 27.6);
    CGContextAddLineToPoint(ctx, 33.25, 27.7);
    CGContextAddLineToPoint(ctx, 35.9, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 34.1, 40.2, 40.15);
    CGContextAddLineToPoint(ctx, 40.2, 47.8);
    CGContextClosePath(ctx);
}

static void def_path_75(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 17.95, 27.6);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 28.5, 15.1, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 10.95, 34.1, 10.95, 40.15);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 52, 25.95, 52);
    CGContextAddQuadCurveToPoint(ctx, 34, 52, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.2, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 34.1, 35.9, 29.8);
    CGContextAddLineToPoint(ctx, 33.25, 27.7);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 17.95, 27.6);
    CGContextClosePath(ctx);
}

static void def_path_76(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 33.25, 27.7);
    CGContextAddLineToPoint(ctx, 33.1, 27.6);
    CGContextAddQuadCurveToPoint(ctx, 30.15, 30.4, 25.75, 30.4);
    CGContextAddLineToPoint(ctx, 25.3, 30.4);
    CGContextAddQuadCurveToPoint(ctx, 21.15, 30.25, 18.25, 27.45);
    CGContextAddLineToPoint(ctx, 17.95, 27.6);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 33.25, 27.7);
    CGContextClosePath(ctx);
}

static void def_path_77(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 27.85, 30.25);
    CGContextAddLineToPoint(ctx, 23.15, 30.25);
    CGContextAddLineToPoint(ctx, 23.8, 33.6);
    CGContextAddLineToPoint(ctx, 22.2, 39.65);
    CGContextAddLineToPoint(ctx, 25.45, 43.15);
    CGContextAddLineToPoint(ctx, 28.65, 39.65);
    CGContextAddLineToPoint(ctx, 27.15, 33.6);
    CGContextAddLineToPoint(ctx, 27.85, 30.25);
    CGContextClosePath(ctx);
}

static void def_path_78(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 14.6, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 22.45, 18.75, 25.15, 14.1);
    CGContextAddQuadCurveToPoint(ctx, 29.4, 19.35, 36.65, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 36.65, 15, 33.4, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 30.3, 8.55, 25.6, 8.55);
    CGContextAddLineToPoint(ctx, 25.15, 8.55);
    CGContextAddQuadCurveToPoint(ctx, 20.8, 8.7, 17.8, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 14.6, 15, 14.6, 19.65);
    CGContextClosePath(ctx);
}

static void def_path_79(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 36.65, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 29.4, 19.35, 25.15, 14.1);
    CGContextAddQuadCurveToPoint(ctx, 22.45, 18.75, 14.6, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 14.6, 24.25, 17.8, 27.45);
    CGContextAddLineToPoint(ctx, 18.1, 27.75);
    CGContextAddQuadCurveToPoint(ctx, 21, 30.5, 25.15, 30.65);
    CGContextAddLineToPoint(ctx, 25.6, 30.65);
    CGContextAddQuadCurveToPoint(ctx, 30, 30.65, 33, 27.9);
    CGContextAddLineToPoint(ctx, 33.4, 27.45);
    CGContextAddQuadCurveToPoint(ctx, 36.65, 24.25, 36.65, 19.65);
    CGContextClosePath(ctx);
}

static void def_path_80(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.2, 47.8);
    CGContextAddQuadCurveToPoint(ctx, 42.4, 46.35, 44.35, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 42.35, 47.85, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 33.95, 51.95, 26);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 18.1, 47.85, 11.9);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 9.65, 44.35, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 38.45, 1.7, 30.55, 0.399997);
    CGContextAddLineToPoint(ctx, 25.95, -3.42131e-06);
    CGContextAddLineToPoint(ctx, 21.35, 0.399997);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 1.7, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 15.25, -9.53674e-08, 26);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 36.8, 7.6, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 9.2, 46, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 10.95, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 10.95, 34.1, 15.1, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 28.5, 17.95, 27.6);
    CGContextAddLineToPoint(ctx, 18.1, 27.6);
    CGContextAddLineToPoint(ctx, 17.95, 27.45);
    CGContextAddQuadCurveToPoint(ctx, 14.75, 24.25, 14.75, 19.65);
    CGContextAddLineToPoint(ctx, 14.75, 19.35);
    CGContextAddQuadCurveToPoint(ctx, 14.8, 14.9, 17.95, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 20.95, 8.69999, 25.3, 8.54999);
    CGContextAddLineToPoint(ctx, 25.75, 8.54999);
    CGContextAddQuadCurveToPoint(ctx, 30.4, 8.54999, 33.55, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 36.7, 14.9, 36.75, 19.35);
    CGContextAddLineToPoint(ctx, 36.75, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 36.75, 24.25, 33.55, 27.45);
    CGContextAddLineToPoint(ctx, 33.35, 27.75);
    CGContextAddLineToPoint(ctx, 35.9, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 34.1, 40.2, 40.15);
    CGContextAddLineToPoint(ctx, 40.2, 47.8);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 33.35, 27.75);
    CGContextAddLineToPoint(ctx, 33.1, 27.9);
    CGContextAddLineToPoint(ctx, 33.05, 27.95);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 17.95, 27.6);
    CGContextAddLineToPoint(ctx, 17.95, 37.95);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 33.35, 37.95);
    CGContextAddLineToPoint(ctx, 33.35, 27.75);
    CGContextClosePath(ctx);
}

static void def_path_81(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 14.75, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 14.75, 24.25, 17.95, 27.45);
    CGContextAddLineToPoint(ctx, 18.1, 27.6);
    CGContextAddLineToPoint(ctx, 18.25, 27.75);
    CGContextAddQuadCurveToPoint(ctx, 21.15, 30.5, 25.3, 30.65);
    CGContextAddLineToPoint(ctx, 25.75, 30.65);
    CGContextAddQuadCurveToPoint(ctx, 30.05, 30.65, 33.05, 27.95);
    CGContextAddLineToPoint(ctx, 33.1, 27.9);
    CGContextAddLineToPoint(ctx, 33.35, 27.75);
    CGContextAddLineToPoint(ctx, 33.55, 27.45);
    CGContextAddQuadCurveToPoint(ctx, 36.75, 24.25, 36.75, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 29.55, 19.35, 25.3, 14.1);
    CGContextAddQuadCurveToPoint(ctx, 22.6, 18.75, 14.75, 19.65);
    CGContextClosePath(ctx);
}

static void def_path_82(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 36.75, 19.65);
    CGContextAddLineToPoint(ctx, 36.75, 19.35);
    CGContextAddQuadCurveToPoint(ctx, 36.7, 14.9, 33.55, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 30.4, 8.55, 25.75, 8.55);
    CGContextAddLineToPoint(ctx, 25.3, 8.55);
    CGContextAddQuadCurveToPoint(ctx, 20.95, 8.7, 17.95, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 14.8, 14.9, 14.75, 19.35);
    CGContextAddLineToPoint(ctx, 14.75, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 22.6, 18.75, 25.3, 14.1);
    CGContextAddQuadCurveToPoint(ctx, 29.55, 19.35, 36.75, 19.65);
    CGContextClosePath(ctx);
}

static void def_path_83(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 18.1, 27.6);
    CGContextAddLineToPoint(ctx, 17.95, 27.6);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 33.05, 27.95);
    CGContextAddQuadCurveToPoint(ctx, 30.05, 30.65, 25.75, 30.65);
    CGContextAddLineToPoint(ctx, 25.3, 30.65);
    CGContextAddQuadCurveToPoint(ctx, 21.15, 30.5, 18.25, 27.75);
    CGContextAddLineToPoint(ctx, 18.1, 27.6);
    CGContextClosePath(ctx);
}

static void def_path_84(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 17.95, 27.6);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 28.5, 15.1, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 10.95, 34.1, 10.95, 40.15);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 52, 25.95, 52);
    CGContextAddQuadCurveToPoint(ctx, 34, 52, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.2, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 34.1, 35.9, 29.8);
    CGContextAddLineToPoint(ctx, 33.35, 27.75);
    CGContextAddLineToPoint(ctx, 33.35, 37.95);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 17.95, 37.95);
    CGContextAddLineToPoint(ctx, 17.95, 27.6);
    CGContextClosePath(ctx);
}

static void def_path_85(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 40.2, 47.8);
    CGContextAddQuadCurveToPoint(ctx, 42.4, 46.35, 44.35, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 42.35, 47.85, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 33.95, 51.95, 26);
    CGContextAddQuadCurveToPoint(ctx, 51.95, 18.1, 47.85, 11.9);
    CGContextAddQuadCurveToPoint(ctx, 46.4, 9.65, 44.35, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 38.45, 1.7, 30.55, 0.399997);
    CGContextAddLineToPoint(ctx, 25.95, -3.42131e-06);
    CGContextAddLineToPoint(ctx, 21.35, 0.399997);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 1.7, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 15.25, -9.53674e-08, 26);
    CGContextAddQuadCurveToPoint(ctx, -9.53674e-08, 36.8, 7.6, 44.4);
    CGContextAddQuadCurveToPoint(ctx, 9.2, 46, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 10.95, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 10.95, 34.1, 15.1, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 28.5, 17.95, 27.6);
    CGContextAddLineToPoint(ctx, 18.1, 27.6);
    CGContextAddLineToPoint(ctx, 17.95, 27.45);
    CGContextAddQuadCurveToPoint(ctx, 14.75, 24.25, 14.75, 19.65);
    CGContextAddLineToPoint(ctx, 14.75, 19.35);
    CGContextAddQuadCurveToPoint(ctx, 14.8, 14.9, 17.95, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 20.95, 8.69999, 25.3, 8.54999);
    CGContextAddLineToPoint(ctx, 25.75, 8.54999);
    CGContextAddQuadCurveToPoint(ctx, 30.4, 8.54999, 33.55, 11.75);
    CGContextAddQuadCurveToPoint(ctx, 36.7, 14.9, 36.75, 19.35);
    CGContextAddLineToPoint(ctx, 36.75, 19.65);
    CGContextAddQuadCurveToPoint(ctx, 36.75, 24.25, 33.55, 27.45);
    CGContextAddLineToPoint(ctx, 33.35, 27.75);
    CGContextAddLineToPoint(ctx, 35.9, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 34.1, 40.2, 40.15);
    CGContextAddLineToPoint(ctx, 40.2, 47.8);
    CGContextClosePath(ctx);
}

static void def_path_86(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 10.95, 47.3);
    CGContextAddQuadCurveToPoint(ctx, 17.45, 52, 25.95, 52);
    CGContextAddQuadCurveToPoint(ctx, 34, 52, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.2, 40.15);
    CGContextAddQuadCurveToPoint(ctx, 40.2, 34.1, 35.9, 29.8);
    CGContextAddLineToPoint(ctx, 33.35, 27.75);
    CGContextAddLineToPoint(ctx, 33.1, 27.9);
    CGContextAddLineToPoint(ctx, 33.05, 27.95);
    CGContextAddLineToPoint(ctx, 25.3, 37.95);
    CGContextAddLineToPoint(ctx, 17.95, 27.6);
    CGContextAddQuadCurveToPoint(ctx, 16.4, 28.5, 15.1, 29.8);
    CGContextAddQuadCurveToPoint(ctx, 10.95, 34.1, 10.95, 40.15);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextClosePath(ctx);
}

static void def_path_87(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 26.65, 43);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 42.5, 27.15, 41.7);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 40.9, 26.65, 40.3);
    CGContextAddQuadCurveToPoint(ctx, 26.05, 39.8, 25.25, 39.8);
    CGContextAddQuadCurveToPoint(ctx, 24.45, 39.8, 23.95, 40.3);
    CGContextAddQuadCurveToPoint(ctx, 23.35, 40.9, 23.35, 41.7);
    CGContextAddQuadCurveToPoint(ctx, 23.35, 42.5, 23.95, 43);
    CGContextAddQuadCurveToPoint(ctx, 24.45, 43.6, 25.25, 43.6);
    CGContextAddQuadCurveToPoint(ctx, 26.05, 43.6, 26.65, 43);
    CGContextClosePath(ctx);
}

static void def_path_88(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.25, 49.3);
    CGContextAddQuadCurveToPoint(ctx, 26.05, 49.3, 26.65, 48.7);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 48.2, 27.15, 47.4);
    CGContextAddQuadCurveToPoint(ctx, 27.15, 46.6, 26.65, 46);
    CGContextAddQuadCurveToPoint(ctx, 26.05, 45.5, 25.25, 45.5);
    CGContextAddQuadCurveToPoint(ctx, 24.45, 45.5, 23.95, 46);
    CGContextAddQuadCurveToPoint(ctx, 23.35, 46.6, 23.35, 47.4);
    CGContextAddQuadCurveToPoint(ctx, 23.35, 48.2, 23.95, 48.7);
    CGContextAddQuadCurveToPoint(ctx, 24.45, 49.3, 25.25, 49.3);
    CGContextClosePath(ctx);
}

static void def_path_89(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.8);
    CGContextAddLineToPoint(ctx, 44.35, 7.6);
    CGContextAddLineToPoint(ctx, 44.05, 7.3);
    CGContextAddLineToPoint(ctx, 42.6, 6);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05, 35.1, 1.5);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.7, 30.55, 0.35);
    CGContextAddLineToPoint(ctx, 25.95, -4.82798e-07);
    CGContextAddLineToPoint(ctx, 23.95, 0.0499995);
    CGContextAddLineToPoint(ctx, 21.35, 0.35);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35, 6);
    CGContextAddLineToPoint(ctx, 7.85, 7.3);
    CGContextAddLineToPoint(ctx, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.149998, 19.7, -2.48253e-06, 25.15);
    CGContextAddLineToPoint(ctx, -2.48253e-06, 25.9);
    CGContextAddLineToPoint(ctx, -2.48253e-06, 25.95);
    CGContextAddLineToPoint(ctx, -2.48253e-06, 26.8);
    CGContextAddLineToPoint(ctx, 0.0499975, 27.5);
    CGContextAddLineToPoint(ctx, 0.0499975, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.199998, 30.55, 0.799998, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.45, 42.05);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 46.5, 42.05);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextClosePath(ctx);
}

static void def_path_90(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 23.25, 10.35);
    CGContextAddLineToPoint(ctx, 23.25, 14.9);
    CGContextAddQuadCurveToPoint(ctx, 23.25, 15.7, 23.85, 16.25);
    CGContextAddQuadCurveToPoint(ctx, 24.5, 16.85, 25.3, 16.85);
    CGContextAddQuadCurveToPoint(ctx, 26.2, 16.85, 26.8, 16.25);
    CGContextAddQuadCurveToPoint(ctx, 27.35, 15.7, 27.35, 14.9);
    CGContextAddLineToPoint(ctx, 27.35, 10.35);
    CGContextAddQuadCurveToPoint(ctx, 27.35, 9.5, 26.8, 8.9);
    CGContextAddQuadCurveToPoint(ctx, 26.2, 8.3, 25.3, 8.3);
    CGContextAddQuadCurveToPoint(ctx, 24.5, 8.3, 23.85, 8.9);
    CGContextAddQuadCurveToPoint(ctx, 23.25, 9.5, 23.25, 10.35);
    CGContextClosePath(ctx);
}

static void def_path_91(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 41.65, 13.7);
    CGContextAddQuadCurveToPoint(ctx, 41.65, 13, 41.1, 12.4);
    CGContextAddQuadCurveToPoint(ctx, 40.55, 11.9, 39.85, 11.9);
    CGContextAddLineToPoint(ctx, 12.35, 11.9);
    CGContextAddQuadCurveToPoint(ctx, 11.6, 11.9, 11, 12.4);
    CGContextAddQuadCurveToPoint(ctx, 10.5, 13, 10.5, 13.7);
    CGContextAddQuadCurveToPoint(ctx, 10.5, 14.45, 11, 14.95);
    CGContextAddQuadCurveToPoint(ctx, 11.6, 15.55, 12.35, 15.55);
    CGContextAddLineToPoint(ctx, 39.85, 15.55);
    CGContextAddQuadCurveToPoint(ctx, 40.55, 15.55, 41.1, 14.95);
    CGContextAddQuadCurveToPoint(ctx, 41.65, 14.45, 41.65, 13.7);
    CGContextClosePath(ctx);
}

static void def_path_92(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 29.9, 13.95);
    CGContextAddLineToPoint(ctx, 22.1, 13.95);
    CGContextAddLineToPoint(ctx, 22.1, 39.7);
    CGContextAddLineToPoint(ctx, 29.9, 39.7);
    CGContextAddLineToPoint(ctx, 29.9, 13.95);
    CGContextClosePath(ctx);
}

static void def_path_93(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 22.1, 39.7);
    CGContextAddLineToPoint(ctx, 22.1, 13.95);
    CGContextAddLineToPoint(ctx, 14.3, 13.95);
    CGContextAddQuadCurveToPoint(ctx, 13.2, 13.95, 13.2, 15.05);
    CGContextAddLineToPoint(ctx, 13.2, 38.55);
    CGContextAddQuadCurveToPoint(ctx, 13.2, 39.7, 14.3, 39.7);
    CGContextAddLineToPoint(ctx, 22.1, 39.7);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 29.9, 13.95);
    CGContextAddLineToPoint(ctx, 29.9, 39.7);
    CGContextAddLineToPoint(ctx, 37.8, 39.7);
    CGContextAddQuadCurveToPoint(ctx, 38.95, 39.7, 38.95, 38.55);
    CGContextAddLineToPoint(ctx, 38.95, 15.05);
    CGContextAddQuadCurveToPoint(ctx, 38.95, 13.95, 37.8, 13.95);
    CGContextAddLineToPoint(ctx, 29.9, 13.95);
    CGContextClosePath(ctx);
}

static void def_path_94(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 29.85, 31.35);
    CGContextAddLineToPoint(ctx, 25.95, 38.1);
    CGContextAddLineToPoint(ctx, 22.1, 31.35);
    CGContextAddLineToPoint(ctx, 16.9, 38.25);
    CGContextAddLineToPoint(ctx, 11.6, 33);
    CGContextAddQuadCurveToPoint(ctx, 8.8, 42.4, 16.2, 47);
    CGContextAddQuadCurveToPoint(ctx, 25.4, 51.6, 35.75, 47);
    CGContextAddQuadCurveToPoint(ctx, 43.1, 42.4, 40.35, 33);
    CGContextAddLineToPoint(ctx, 35, 38.25);
    CGContextAddLineToPoint(ctx, 29.85, 31.35);
    CGContextClosePath(ctx);
}

static void def_path_95(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.8);
    CGContextAddLineToPoint(ctx, 44.35, 7.6);
    CGContextAddLineToPoint(ctx, 44.05, 7.3);
    CGContextAddLineToPoint(ctx, 42.6, 6);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05, 35.1, 1.5);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.7, 30.55, 0.35);
    CGContextAddLineToPoint(ctx, 25.95, 4.70877e-07);
    CGContextAddLineToPoint(ctx, 23.95, 0.0500005);
    CGContextAddLineToPoint(ctx, 21.35, 0.35);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35, 6);
    CGContextAddLineToPoint(ctx, 7.85, 7.3);
    CGContextAddLineToPoint(ctx, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.150001, 19.7, 1.33216e-06, 25.15);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.9);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.95);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 26.8);
    CGContextAddLineToPoint(ctx, 0.0500013, 27.5);
    CGContextAddLineToPoint(ctx, 0.0500013, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.200001, 30.55, 0.800001, 32.7);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextClosePath(ctx);
}

static void def_path_96(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 0.8, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 0.8, 32.7);
    CGContextClosePath(ctx);
}

static void def_path_97(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 47, 27.95);
    CGContextAddLineToPoint(ctx, 47, 25.75);
    CGContextAddQuadCurveToPoint(ctx, 47, 23.25, 45.15, 21.5);
    CGContextAddQuadCurveToPoint(ctx, 43.4, 19.7, 40.85, 19.7);
    CGContextAddQuadCurveToPoint(ctx, 38.3, 19.7, 36.55, 21.5);
    CGContextAddQuadCurveToPoint(ctx, 34.75, 23.25, 34.75, 25.75);
    CGContextAddLineToPoint(ctx, 34.75, 27.2);
    CGContextAddLineToPoint(ctx, 34.8, 27.35);
    CGContextAddLineToPoint(ctx, 34.8, 32.7);
    CGContextAddLineToPoint(ctx, 47, 32.7);
    CGContextAddLineToPoint(ctx, 47, 27.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 32.1, 27.8);
    CGContextAddLineToPoint(ctx, 32.1, 25.75);
    CGContextAddQuadCurveToPoint(ctx, 32.1, 23.25, 30.3, 21.5);
    CGContextAddQuadCurveToPoint(ctx, 28.55, 19.7, 25.95, 19.7);
    CGContextAddLineToPoint(ctx, 25.85, 19.7);
    CGContextAddQuadCurveToPoint(ctx, 23.35, 19.75, 21.65, 21.5);
    CGContextAddQuadCurveToPoint(ctx, 19.85, 23.25, 19.85, 25.75);
    CGContextAddLineToPoint(ctx, 19.85, 27.75);
    CGContextAddLineToPoint(ctx, 19.85, 32.7);
    CGContextAddLineToPoint(ctx, 32.1, 32.7);
    CGContextAddLineToPoint(ctx, 32.1, 27.8);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 17.05, 27.8);
    CGContextAddLineToPoint(ctx, 17.05, 25.75);
    CGContextAddQuadCurveToPoint(ctx, 17.05, 23.25, 15.3, 21.45);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 19.7, 11, 19.7);
    CGContextAddLineToPoint(ctx, 10.8, 19.7);
    CGContextAddLineToPoint(ctx, 10.65, 19.7);
    CGContextAddQuadCurveToPoint(ctx, 8.3, 19.85, 6.65, 21.45);
    CGContextAddQuadCurveToPoint(ctx, 4.9, 23.25, 4.9, 25.75);
    CGContextAddLineToPoint(ctx, 4.9, 27.45);
    CGContextAddLineToPoint(ctx, 4.9, 32.7);
    CGContextAddLineToPoint(ctx, 17.05, 32.7);
    CGContextAddLineToPoint(ctx, 17.05, 27.8);
    CGContextClosePath(ctx);
}

static void def_path_98(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 34.8, 32.7);
    CGContextAddLineToPoint(ctx, 34.8, 27.35);
    CGContextAddLineToPoint(ctx, 34.75, 27.2);
    CGContextAddLineToPoint(ctx, 34.45, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 34, 26.4, 33.5, 26.4);
    CGContextAddLineToPoint(ctx, 33.4, 26.4);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 26.4, 32.45, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 32.1, 27.2, 32.1, 27.8);
    CGContextAddLineToPoint(ctx, 32.1, 32.7);
    CGContextAddLineToPoint(ctx, 34.8, 32.7);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 47, 27.95);
    CGContextAddLineToPoint(ctx, 47, 32.7);
    CGContextAddLineToPoint(ctx, 49.75, 32.7);
    CGContextAddLineToPoint(ctx, 49.75, 27.95);
    CGContextAddLineToPoint(ctx, 49.4, 27);
    CGContextAddQuadCurveToPoint(ctx, 48.95, 26.55, 48.4, 26.55);
    CGContextAddQuadCurveToPoint(ctx, 47.85, 26.55, 47.45, 27);
    CGContextAddQuadCurveToPoint(ctx, 47, 27.45, 47, 27.95);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 19.85, 32.7);
    CGContextAddLineToPoint(ctx, 19.85, 27.75);
    CGContextAddLineToPoint(ctx, 19.7, 27.2);
    CGContextAddLineToPoint(ctx, 19.4, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 18.95, 26.4, 18.45, 26.4);
    CGContextAddLineToPoint(ctx, 18.3, 26.4);
    CGContextAddQuadCurveToPoint(ctx, 17.8, 26.5, 17.45, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 17.05, 27.2, 17.05, 27.8);
    CGContextAddLineToPoint(ctx, 17.05, 32.7);
    CGContextAddLineToPoint(ctx, 19.85, 32.7);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 4.9, 32.7);
    CGContextAddLineToPoint(ctx, 4.9, 27.45);
    CGContextAddLineToPoint(ctx, 4.75, 27.15);
    CGContextAddLineToPoint(ctx, 4.65, 27.05);
    CGContextAddLineToPoint(ctx, 4.6, 26.9);
    CGContextAddLineToPoint(ctx, 4.5, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 4.1, 26.4, 3.65, 26.4);
    CGContextAddLineToPoint(ctx, 3.4, 26.4);
    CGContextAddLineToPoint(ctx, 2.55, 26.85);
    CGContextAddQuadCurveToPoint(ctx, 2.2, 27.3, 2.2, 27.8);
    CGContextAddLineToPoint(ctx, 2.2, 32.7);
    CGContextAddLineToPoint(ctx, 4.9, 32.7);
    CGContextClosePath(ctx);
}

static void def_path_99(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 25.95, 0);
    CGContextAddLineToPoint(ctx, 23.95, 0.05);
    CGContextAddLineToPoint(ctx, 21.35, 0.35);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35, 6);
    CGContextAddLineToPoint(ctx, 7.85, 7.3);
    CGContextAddLineToPoint(ctx, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.150001, 19.7, 1.33216e-06, 25.15);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.9);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.95);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 26.8);
    CGContextAddLineToPoint(ctx, 0.0500013, 27.5);
    CGContextAddLineToPoint(ctx, 0.0500013, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.200001, 30.55, 0.800001, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 0);
    CGContextClosePath(ctx);
}

static void def_path_100(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 17.95, 32.75);
    CGContextAddLineToPoint(ctx, 23.65, 32.75);
    CGContextAddQuadCurveToPoint(ctx, 24.45, 32.75, 25, 32.2);
    CGContextAddQuadCurveToPoint(ctx, 25.6, 31.6, 25.6, 30.8);
    CGContextAddQuadCurveToPoint(ctx, 25.6, 30, 25, 29.4);
    CGContextAddQuadCurveToPoint(ctx, 24.45, 28.8, 23.65, 28.8);
    CGContextAddLineToPoint(ctx, 11.15, 28.8);
    CGContextAddLineToPoint(ctx, 11.15, 16.35);
    CGContextAddQuadCurveToPoint(ctx, 11.15, 15.55, 10.55, 14.95);
    CGContextAddQuadCurveToPoint(ctx, 10, 14.35, 9.2, 14.35);
    CGContextAddQuadCurveToPoint(ctx, 8.4, 14.35, 7.8, 14.95);
    CGContextAddQuadCurveToPoint(ctx, 7.2, 15.55, 7.2, 16.35);
    CGContextAddLineToPoint(ctx, 7.2, 30.8);
    CGContextAddQuadCurveToPoint(ctx, 7.2, 31.6, 7.8, 32.2);
    CGContextAddQuadCurveToPoint(ctx, 8.4, 32.75, 9.2, 32.75);
    CGContextAddLineToPoint(ctx, 15.75, 32.75);
    CGContextAddLineToPoint(ctx, 17.95, 32.75);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 37.35, 25.55);
    CGContextAddLineToPoint(ctx, 46.85, 25.55);
    CGContextAddQuadCurveToPoint(ctx, 47.65, 25.55, 48.25, 24.95);
    CGContextAddQuadCurveToPoint(ctx, 48.8, 24.35, 48.8, 23.55);
    CGContextAddQuadCurveToPoint(ctx, 48.8, 22.75, 48.25, 22.2);
    CGContextAddQuadCurveToPoint(ctx, 47.65, 21.6, 46.85, 21.6);
    CGContextAddLineToPoint(ctx, 38, 21.6);
    CGContextAddLineToPoint(ctx, 38, 21.65);
    CGContextAddLineToPoint(ctx, 37.85, 21.6);
    CGContextAddLineToPoint(ctx, 28.65, 21.6);
    CGContextAddLineToPoint(ctx, 25.15, 21.6);
    CGContextAddQuadCurveToPoint(ctx, 24.35, 21.6, 23.8, 22.2);
    CGContextAddQuadCurveToPoint(ctx, 23.2, 22.75, 23.2, 23.55);
    CGContextAddQuadCurveToPoint(ctx, 23.2, 24.35, 23.8, 24.95);
    CGContextAddQuadCurveToPoint(ctx, 24.35, 25.55, 25.15, 25.55);
    CGContextAddLineToPoint(ctx, 35, 25.55);
    CGContextAddLineToPoint(ctx, 37.35, 25.55);
    CGContextClosePath(ctx);
}

static void def_path_101(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 17.95, 32.75);
    CGContextAddLineToPoint(ctx, 15.75, 32.75);
    CGContextAddLineToPoint(ctx, 15.75, 37.8);
    CGContextAddLineToPoint(ctx, 11.6, 37.8);
    CGContextAddQuadCurveToPoint(ctx, 11.15, 37.8, 10.85, 38.15);
    CGContextAddQuadCurveToPoint(ctx, 10.55, 38.45, 10.55, 38.95);
    CGContextAddQuadCurveToPoint(ctx, 10.55, 39.35, 10.85, 39.7);
    CGContextAddLineToPoint(ctx, 11.25, 39.9);
    CGContextAddLineToPoint(ctx, 11.15, 39.9);
    CGContextAddQuadCurveToPoint(ctx, 10.45, 39.9, 9.9, 40.4);
    CGContextAddQuadCurveToPoint(ctx, 9.4, 41, 9.4, 41.65);
    CGContextAddQuadCurveToPoint(ctx, 9.4, 42.4, 9.9, 42.9);
    CGContextAddQuadCurveToPoint(ctx, 10.45, 43.4, 11.15, 43.4);
    CGContextAddQuadCurveToPoint(ctx, 11.8, 43.4, 12.35, 42.9);
    CGContextAddQuadCurveToPoint(ctx, 12.9, 42.4, 12.9, 41.65);
    CGContextAddQuadCurveToPoint(ctx, 12.9, 41, 12.35, 40.4);
    CGContextAddLineToPoint(ctx, 11.6, 40);
    CGContextAddLineToPoint(ctx, 16.4, 40);
    CGContextAddQuadCurveToPoint(ctx, 15.95, 40.15, 15.6, 40.4);
    CGContextAddQuadCurveToPoint(ctx, 15.1, 41, 15.1, 41.65);
    CGContextAddQuadCurveToPoint(ctx, 15.1, 42.4, 15.6, 42.9);
    CGContextAddQuadCurveToPoint(ctx, 16.1, 43.4, 16.85, 43.4);
    CGContextAddQuadCurveToPoint(ctx, 17.5, 43.4, 18.1, 42.9);
    CGContextAddQuadCurveToPoint(ctx, 18.6, 42.4, 18.6, 41.65);
    CGContextAddQuadCurveToPoint(ctx, 18.6, 41, 18.1, 40.4);
    CGContextAddLineToPoint(ctx, 17.3, 40);
    CGContextAddLineToPoint(ctx, 22.1, 40);
    CGContextAddQuadCurveToPoint(ctx, 21.65, 40.15, 21.3, 40.4);
    CGContextAddQuadCurveToPoint(ctx, 20.8, 41, 20.8, 41.65);
    CGContextAddQuadCurveToPoint(ctx, 20.8, 42.4, 21.3, 42.9);
    CGContextAddQuadCurveToPoint(ctx, 21.8, 43.4, 22.55, 43.4);
    CGContextAddQuadCurveToPoint(ctx, 23.25, 43.4, 23.8, 42.9);
    CGContextAddQuadCurveToPoint(ctx, 24.3, 42.4, 24.3, 41.65);
    CGContextAddQuadCurveToPoint(ctx, 24.3, 41, 23.8, 40.4);
    CGContextAddQuadCurveToPoint(ctx, 23.25, 40, 22.7, 39.9);
    CGContextAddLineToPoint(ctx, 23.15, 39.7);
    CGContextAddLineToPoint(ctx, 23.4, 38.95);
    CGContextAddLineToPoint(ctx, 23.15, 38.15);
    CGContextAddQuadCurveToPoint(ctx, 22.75, 37.8, 22.4, 37.8);
    CGContextAddLineToPoint(ctx, 17.95, 37.8);
    CGContextAddLineToPoint(ctx, 17.95, 32.75);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 38, 21.6);
    CGContextAddLineToPoint(ctx, 42.6, 13.55);
    CGContextAddLineToPoint(ctx, 41.6, 13);
    CGContextAddLineToPoint(ctx, 37.35, 20.45);
    CGContextAddLineToPoint(ctx, 28.65, 20.45);
    CGContextAddLineToPoint(ctx, 28.65, 21.6);
    CGContextAddLineToPoint(ctx, 37.85, 21.6);
    CGContextAddLineToPoint(ctx, 38, 21.6);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 35, 25.55);
    CGContextAddLineToPoint(ctx, 35, 40.7);
    CGContextAddLineToPoint(ctx, 30.8, 40.7);
    CGContextAddQuadCurveToPoint(ctx, 30.35, 40.7, 30.05, 41.1);
    CGContextAddQuadCurveToPoint(ctx, 29.75, 41.35, 29.75, 41.9);
    CGContextAddLineToPoint(ctx, 30.05, 42.6);
    CGContextAddQuadCurveToPoint(ctx, 30.35, 42.9, 30.8, 42.9);
    CGContextAddLineToPoint(ctx, 41.6, 42.9);
    CGContextAddLineToPoint(ctx, 42.3, 42.6);
    CGContextAddLineToPoint(ctx, 42.6, 41.9);
    CGContextAddLineToPoint(ctx, 42.3, 41.1);
    CGContextAddQuadCurveToPoint(ctx, 42.05, 40.7, 41.6, 40.7);
    CGContextAddLineToPoint(ctx, 37.35, 40.7);
    CGContextAddLineToPoint(ctx, 37.35, 25.55);
    CGContextAddLineToPoint(ctx, 35, 25.55);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 22.7, 39.9);
    CGContextAddLineToPoint(ctx, 22.4, 40);
    CGContextAddLineToPoint(ctx, 22.1, 40);
    CGContextAddLineToPoint(ctx, 22.55, 39.9);
    CGContextAddLineToPoint(ctx, 22.7, 39.9);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 17.3, 40);
    CGContextAddLineToPoint(ctx, 16.4, 40);
    CGContextAddLineToPoint(ctx, 16.85, 39.9);
    CGContextAddLineToPoint(ctx, 16.9, 39.9);
    CGContextAddLineToPoint(ctx, 17.3, 40);
    CGContextClosePath(ctx);
}

static void def_path_102(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 23.95, 0.05);
    CGContextAddLineToPoint(ctx, 21.35, 0.35);
    CGContextAddQuadCurveToPoint(ctx, 19.05, 0.7, 16.9, 1.5);
    CGContextAddLineToPoint(ctx, 14.35, 2.6);
    CGContextAddQuadCurveToPoint(ctx, 13.5, 3.05, 12.6, 3.65);
    CGContextAddLineToPoint(ctx, 9.35, 6);
    CGContextAddLineToPoint(ctx, 7.85, 7.3);
    CGContextAddLineToPoint(ctx, 7.6, 7.6);
    CGContextAddQuadCurveToPoint(ctx, 7.5, 7.65, 7.35, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 5.7, 9.55, 4.35, 11.45);
    CGContextAddQuadCurveToPoint(ctx, 3.15, 13.2, 2.35, 15.1);
    CGContextAddQuadCurveToPoint(ctx, 0.150001, 19.7, 1.33216e-06, 25.15);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.9);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 25.95);
    CGContextAddLineToPoint(ctx, 1.33216e-06, 26.8);
    CGContextAddLineToPoint(ctx, 0.0500013, 27.5);
    CGContextAddLineToPoint(ctx, 0.0500013, 28.25);
    CGContextAddQuadCurveToPoint(ctx, 0.200001, 30.55, 0.800001, 32.7);
    CGContextAddQuadCurveToPoint(ctx, 1.5, 35.55, 2.9, 38.1);
    CGContextAddQuadCurveToPoint(ctx, 3.85, 40, 5.25, 41.75);
    CGContextAddLineToPoint(ctx, 5.85, 42.45);
    CGContextAddLineToPoint(ctx, 7.6, 44.35);
    CGContextAddLineToPoint(ctx, 7.65, 44.45);
    CGContextAddLineToPoint(ctx, 8.4, 45.1);
    CGContextAddLineToPoint(ctx, 10.05, 46.65);
    CGContextAddLineToPoint(ctx, 10.45, 46.85);
    CGContextAddLineToPoint(ctx, 10.95, 47.3);
    CGContextAddLineToPoint(ctx, 13, 48.6);
    CGContextAddQuadCurveToPoint(ctx, 15.6, 50.15, 18.45, 50.95);
    CGContextAddLineToPoint(ctx, 21.95, 51.65);
    CGContextAddLineToPoint(ctx, 24.9, 51.95);
    CGContextAddLineToPoint(ctx, 25.95, 51.95);
    CGContextAddLineToPoint(ctx, 27.45, 51.95);
    CGContextAddLineToPoint(ctx, 30.35, 51.65);
    CGContextAddLineToPoint(ctx, 33.85, 50.85);
    CGContextAddQuadCurveToPoint(ctx, 37.2, 49.75, 40.2, 47.8);
    CGContextAddLineToPoint(ctx, 40.7, 47.5);
    CGContextAddLineToPoint(ctx, 42.6, 45.95);
    CGContextAddLineToPoint(ctx, 44.3, 44.45);
    CGContextAddLineToPoint(ctx, 44.35, 44.35);
    CGContextAddLineToPoint(ctx, 45.7, 43);
    CGContextAddLineToPoint(ctx, 47, 41.35);
    CGContextAddLineToPoint(ctx, 47.05, 41.25);
    CGContextAddLineToPoint(ctx, 47.85, 40.15);
    CGContextAddLineToPoint(ctx, 49.1, 38.1);
    CGContextAddLineToPoint(ctx, 50.2, 35.6);
    CGContextAddLineToPoint(ctx, 50.25, 35.55);
    CGContextAddLineToPoint(ctx, 50.25, 35.45);
    CGContextAddLineToPoint(ctx, 50.8, 34);
    CGContextAddLineToPoint(ctx, 51.15, 32.7);
    CGContextAddLineToPoint(ctx, 51.9, 28.25);
    CGContextAddLineToPoint(ctx, 51.95, 27.5);
    CGContextAddLineToPoint(ctx, 51.95, 26.8);
    CGContextAddLineToPoint(ctx, 51.95, 25.95);
    CGContextAddLineToPoint(ctx, 51.95, 25.9);
    CGContextAddLineToPoint(ctx, 51.95, 25.15);
    CGContextAddQuadCurveToPoint(ctx, 51.8, 21.35, 50.8, 18);
    CGContextAddLineToPoint(ctx, 49.7, 15.1);
    CGContextAddLineToPoint(ctx, 47.85, 11.9);
    CGContextAddLineToPoint(ctx, 47.55, 11.45);
    CGContextAddLineToPoint(ctx, 47, 10.65);
    CGContextAddLineToPoint(ctx, 44.6, 7.80001);
    CGContextAddLineToPoint(ctx, 44.35, 7.60001);
    CGContextAddLineToPoint(ctx, 44.05, 7.30001);
    CGContextAddLineToPoint(ctx, 42.6, 6.00001);
    CGContextAddQuadCurveToPoint(ctx, 39.1, 3.05001, 35.1, 1.50001);
    CGContextAddQuadCurveToPoint(ctx, 32.9, 0.700012, 30.55, 0.350012);
    CGContextAddLineToPoint(ctx, 25.95, 1.1915e-05);
    CGContextAddLineToPoint(ctx, 23.95, 0.05);
    CGContextClosePath(ctx);
}

static void def_path_103(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 31.5, 18.25);
    CGContextAddQuadCurveToPoint(ctx, 29.35, 16.4, 26.5, 15.95);
    CGContextAddQuadCurveToPoint(ctx, 22.6, 15.25, 19.5, 17);
    CGContextAddLineToPoint(ctx, 14.35, 9.85);
    CGContextAddQuadCurveToPoint(ctx, 13.8, 8.9, 12.75, 8.75);
    CGContextAddQuadCurveToPoint(ctx, 11.65, 8.55, 10.8, 9.2);
    CGContextAddQuadCurveToPoint(ctx, 9.9, 9.75, 9.7, 10.85);
    CGContextAddQuadCurveToPoint(ctx, 9.5, 11.9, 10.05, 12.85);
    CGContextAddLineToPoint(ctx, 15.15, 20);
    CGContextAddQuadCurveToPoint(ctx, 12.45, 22.45, 11.9, 26.25);
    CGContextAddQuadCurveToPoint(ctx, 11.3, 29.2, 12.25, 31.75);
    CGContextAddLineToPoint(ctx, 31.5, 18.25);
    CGContextClosePath(ctx);
}

static void def_path_104(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 31.5, 18.25);
    CGContextAddLineToPoint(ctx, 12.25, 31.75);
    CGContextAddQuadCurveToPoint(ctx, 12.75, 33.1, 13.7, 34.35);
    CGContextAddLineToPoint(ctx, 18.95, 41.9);
    CGContextAddQuadCurveToPoint(ctx, 21.6, 45.55, 26.05, 46.35);
    CGContextAddQuadCurveToPoint(ctx, 30.5, 47.15, 34.15, 44.5);
    CGContextAddLineToPoint(ctx, 36.1, 43.1);
    CGContextAddQuadCurveToPoint(ctx, 39.85, 40.5, 40.65, 36.05);
    CGContextAddQuadCurveToPoint(ctx, 41.35, 31.6, 38.75, 27.95);
    CGContextAddLineToPoint(ctx, 33.5, 20.45);
    CGContextAddLineToPoint(ctx, 31.5, 18.25);
    CGContextClosePath(ctx);
}

static void def_path_105(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 45.7, 34.45);
    CGContextAddQuadCurveToPoint(ctx, 46.05, 32.1, 44.75, 30.2);
    CGContextAddQuadCurveToPoint(ctx, 43.4, 28.4, 41.25, 28);
    CGContextAddQuadCurveToPoint(ctx, 38.95, 27.65, 37.05, 28.95);
    CGContextAddQuadCurveToPoint(ctx, 35.25, 30.3, 34.9, 32.45);
    CGContextAddQuadCurveToPoint(ctx, 34.45, 34.75, 35.75, 36.55);
    CGContextAddQuadCurveToPoint(ctx, 37.05, 38.45, 39.35, 38.9);
    CGContextAddQuadCurveToPoint(ctx, 41.6, 39.25, 43.4, 37.95);
    CGContextAddQuadCurveToPoint(ctx, 45.3, 36.65, 45.7, 34.45);
    CGContextClosePath(ctx);
}

static void draw_main(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.47451, 0.847059, 0.831373, 1);
    def_path_0(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.760784, 0.756863, 1);
    def_path_1(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_2(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_3(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.247059, 1);
    def_path_4(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.894118, 0.882353, 0.847059, 1);
    def_path_5(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.247059, 1);
    def_path_6(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_7(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_8(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_9(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_10(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.462745, 0.32549, 0.6, 1);
    def_path_11(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_12(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_13(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 1, 0.6, 0, 1);
    def_path_14(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_15(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_16(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.894118, 0.882353, 0.847059, 1);
    def_path_17(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_18(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 279.2));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_19(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 279.2));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.768627, 0.745098, 1);
    def_path_20(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 279.2));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.768627, 0.745098, 1);
    def_path_21(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 279.1));
    CGContextSetRGBFillColor(ctx, 0.917647, 0.576471, 0.2, 1);
    def_path_22(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 279.1));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_23(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_24(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_25(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_26(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0, 0.6, 0.8, 1);
    def_path_24(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_27(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_28(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_29(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 279.1));
    CGContextSetRGBFillColor(ctx, 0.964706, 0.690196, 0.588235, 1);
    def_path_30(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.768627, 0.745098, 1);
    def_path_31(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.47451, 0.847059, 0.831373, 1);
    def_path_32(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_33(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.47451, 0.847059, 0.831373, 1);
    def_path_34(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_35(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.47451, 0.847059, 0.831373, 1);
    def_path_36(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 279.2));
    CGContextSetRGBFillColor(ctx, 0.47451, 0.847059, 0.831373, 1);
    def_path_37(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.768627, 0.745098, 1);
    def_path_19(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 176.25));
    CGContextSetRGBFillColor(ctx, 1, 0.4, 0, 1);
    def_path_38(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_39(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 176.25));
    CGContextSetRGBFillColor(ctx, 1, 0.6, 0, 1);
    def_path_40(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 176.25));
    CGContextSetRGBFillColor(ctx, 1, 0.4, 0, 1);
    def_path_41(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 176.25));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_31(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 176.25));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_42(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 176.25));
    CGContextSetRGBFillColor(ctx, 0.894118, 0.882353, 0.847059, 1);
    def_path_43(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 176.25));
    CGContextSetRGBFillColor(ctx, 0.462745, 0.32549, 0.6, 1);
    def_path_19(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 176.25));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_44(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 176.25));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.768627, 0.745098, 1);
    def_path_45(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_46(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 176.25));
    CGContextSetRGBFillColor(ctx, 0.945098, 0.933333, 0.898039, 1);
    def_path_47(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 176.25));
    CGContextSetRGBFillColor(ctx, 0.917647, 0.576471, 0.2, 1);
    def_path_48(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_49(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_50(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.47451, 0.847059, 0.831373, 1);
    def_path_51(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_52(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_53(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_54(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_55(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_56(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_57(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_58(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_59(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.937255, 0.819608, 0.533333, 1);
    def_path_60(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_61(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_62(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.4, 1);
    def_path_63(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.4, 1);
    def_path_64(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 176.25));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_65(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_66(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.266667, 0.266667, 0.266667, 1);
    def_path_67(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_68(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.443137, 0.443137, 0.443137, 1);
    def_path_69(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.294118, 0.294118, 0.294118, 1);
    def_path_70(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.6, 0.6, 0.6, 1);
    def_path_71(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.941176, 0.682353, 0.627451, 1);
    def_path_72(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 176.25));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_73(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 73.3));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_74(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 73.3));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_75(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 73.3));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_76(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 73.3));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_77(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 73.3));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_78(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 19.75, 73.3));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_79(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 73.3));
    CGContextSetRGBFillColor(ctx, 0.462745, 0.32549, 0.6, 1);
    def_path_80(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 73.3));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_81(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 73.3));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_82(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 73.3));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_83(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 96.5, 73.3));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_84(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 0.917647, 0.576471, 0.2, 1);
    def_path_85(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_82(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_81(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 0.294118, 0.705882, 0.819608, 1);
    def_path_86(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_83(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 0.917647, 0.576471, 0.2, 1);
    def_path_87(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 172.55, 73.3));
    CGContextSetRGBFillColor(ctx, 0.917647, 0.576471, 0.2, 1);
    def_path_88(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 73.4));
    CGContextSetRGBFillColor(ctx, 0.239216, 0.768627, 0.745098, 1);
    def_path_89(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 73.4));
    CGContextSetRGBFillColor(ctx, 0.25098, 0.247059, 0.247059, 1);
    def_path_90(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 73.4));
    CGContextSetRGBFillColor(ctx, 0.894118, 0.882353, 0.847059, 1);
    def_path_91(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 73.4));
    CGContextSetRGBFillColor(ctx, 0.992157, 0.984314, 0.968627, 1);
    def_path_92(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 73.4));
    CGContextSetRGBFillColor(ctx, 0.894118, 0.882353, 0.847059, 1);
    def_path_93(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 249.7, 73.4));
    CGContextSetRGBFillColor(ctx, 1, 0.4, 0, 1);
    def_path_94(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_95(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.462745, 0.32549, 0.6, 1);
    def_path_96(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.937255, 0.819608, 0.533333, 1);
    def_path_97(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 325.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.917647, 0.576471, 0.2, 1);
    def_path_98(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.678431, 0.584314, 0.776471, 1);
    def_path_99(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.937255, 0.819608, 0.533333, 1);
    def_path_100(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 401.85, 73.4));
    CGContextSetRGBFillColor(ctx, 0.25098, 0.247059, 0.247059, 1);
    def_path_101(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 73.4));
    CGContextSetRGBFillColor(ctx, 0.964706, 0.690196, 0.588235, 1);
    def_path_102(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 73.4));
    CGContextSetRGBFillColor(ctx, 1, 0.8, 0.6, 1);
    def_path_103(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 73.4));
    CGContextSetRGBFillColor(ctx, 0.878431, 0.364706, 0.254902, 1);
    def_path_104(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 478.75, 73.4));
    CGContextSetRGBFillColor(ctx, 0.980392, 0.968627, 0.933333, 1);
    def_path_105(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

}


