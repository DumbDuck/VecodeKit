
#include <CoreGraphics/CoreGraphics.h>

#ifndef __VKQUARTZPICTURE_STRUCT__
#define __VKQUARTZPICTURE_STRUCT__
typedef struct
{
    CGRect bounds;
    void (*_Nullable drawer)(_Nonnull CGContextRef);
} VKQuartzPicture;
#endif

// MARK: g_picture_tiger
static void draw_main(CGContextRef ctx);
VKQuartzPicture g_picture_tiger = {
    { 112.85, -0.5, 494.8, 510.8 },
    draw_main,
};

/////////////////////////
static void def_path_0(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 173.8, 231.15);
    CGContextAddQuadCurveToPoint(ctx, 174.65, 231.2, 174.55, 229.3);
    CGContextAddQuadCurveToPoint(ctx, 153.8, 177.95, 136, 185.3);
    CGContextAddQuadCurveToPoint(ctx, 148.75, 183.85, 162.25, 207.35);
    CGContextAddQuadCurveToPoint(ctx, 166, 213.8, 170.4, 223.6);
    CGContextAddLineToPoint(ctx, 173.8, 231.15);
    CGContextClosePath(ctx);
}

static void def_path_1(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 176.75, 227.8);
    CGContextAddQuadCurveToPoint(ctx, 177.55, 228.1, 178.1, 226.25);
    CGContextAddQuadCurveToPoint(ctx, 176.05, 170.95, 156.8, 171.8);
    CGContextAddQuadCurveToPoint(ctx, 169.25, 174.85, 173.95, 201.5);
    CGContextAddQuadCurveToPoint(ctx, 175.35, 209.35, 176.1, 219.55);
    CGContextAddLineToPoint(ctx, 176.75, 227.8);
    CGContextClosePath(ctx);
}

static void def_path_2(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 206.75, 270.25);
    CGContextAddQuadCurveToPoint(ctx, 207.2, 269.55, 205.55, 268.6);
    CGContextAddQuadCurveToPoint(ctx, 151.3, 257.55, 147.65, 276.45);
    CGContextAddQuadCurveToPoint(ctx, 153.5, 265.05, 180.5, 266.65);
    CGContextAddQuadCurveToPoint(ctx, 194.05, 267.5, 206.75, 270.25);
    CGContextClosePath(ctx);
}

static void def_path_3(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 178.4, 284.85);
    CGContextAddQuadCurveToPoint(ctx, 185.8, 282.9, 196.2, 281.25);
    CGContextAddLineToPoint(ctx, 204.4, 280);
    CGContextAddQuadCurveToPoint(ctx, 204.6, 279.2, 202.75, 278.8);
    CGContextAddQuadCurveToPoint(ctx, 147.8, 285.45, 150.25, 304.5);
    CGContextAddQuadCurveToPoint(ctx, 152.25, 291.85, 178.4, 284.85);
    CGContextClosePath(ctx);
}

static void def_path_4(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 173.55, 275.75);
    CGContextAddLineToPoint(ctx, 191.75, 274.7);
    CGContextAddLineToPoint(ctx, 200, 274.7);
    CGContextAddQuadCurveToPoint(ctx, 200.3, 273.95, 198.55, 273.3);
    CGContextAddQuadCurveToPoint(ctx, 143.2, 271.85, 142.85, 291.05);
    CGContextAddQuadCurveToPoint(ctx, 146.65, 278.85, 173.55, 275.75);
    CGContextClosePath(ctx);
}

static void def_path_5(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 188.5, 256.95);
    CGContextAddQuadCurveToPoint(ctx, 189.15, 256.45, 187.85, 255.05);
    CGContextAddQuadCurveToPoint(ctx, 138.7, 229.55, 130, 246.7);
    CGContextAddQuadCurveToPoint(ctx, 138.75, 237.35, 164.25, 246.35);
    CGContextAddQuadCurveToPoint(ctx, 171.75, 249, 181, 253.4);
    CGContextAddLineToPoint(ctx, 188.5, 256.95);
    CGContextClosePath(ctx);
}

static void def_path_6(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 121.85, 257.45);
    CGContextAddQuadCurveToPoint(ctx, 129.5, 247.15, 155.9, 253.25);
    CGContextAddQuadCurveToPoint(ctx, 169.15, 256.3, 181.2, 261.05);
    CGContextAddQuadCurveToPoint(ctx, 181.75, 260.5, 180.3, 259.25);
    CGContextAddQuadCurveToPoint(ctx, 128.6, 239.45, 121.85, 257.45);
    CGContextClosePath(ctx);
}

static void def_path_7(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 119.55, 269.5);
    CGContextAddQuadCurveToPoint(ctx, 125.75, 258.3, 152.7, 260.7);
    CGContextAddQuadCurveToPoint(ctx, 166.2, 261.9, 178.8, 265);
    CGContextAddQuadCurveToPoint(ctx, 179.3, 264.35, 177.7, 263.35);
    CGContextAddQuadCurveToPoint(ctx, 123.8, 250.75, 119.55, 269.5);
    CGContextClosePath(ctx);
}

static void def_path_8(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 188.85, 265.9);
    CGContextAddQuadCurveToPoint(ctx, 189.55, 265.5, 188.45, 263.95);
    CGContextAddQuadCurveToPoint(ctx, 143, 232.35, 132.1, 248.2);
    CGContextAddQuadCurveToPoint(ctx, 142.05, 240.05, 166.2, 252.25);
    CGContextAddQuadCurveToPoint(ctx, 173.2, 255.8, 181.9, 261.4);
    CGContextAddLineToPoint(ctx, 188.85, 265.9);
    CGContextClosePath(ctx);
}

static void def_path_9(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 119.85, 202.8);
    CGContextAddQuadCurveToPoint(ctx, 131.75, 198.1, 151.05, 217.1);
    CGContextAddQuadCurveToPoint(ctx, 156.75, 222.75, 163.2, 230.65);
    CGContextAddLineToPoint(ctx, 168.45, 237);
    CGContextAddQuadCurveToPoint(ctx, 169.25, 236.8, 168.65, 235);
    CGContextAddQuadCurveToPoint(ctx, 135.05, 191, 119.85, 202.8);
    CGContextClosePath(ctx);
}

static void def_path_10(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 114.75, 221.05);
    CGContextAddQuadCurveToPoint(ctx, 125.35, 213.85, 148.25, 228.25);
    CGContextAddQuadCurveToPoint(ctx, 155, 232.5, 163.05, 238.85);
    CGContextAddLineToPoint(ctx, 169.6, 244);
    CGContextAddQuadCurveToPoint(ctx, 170.3, 243.6, 169.35, 242);
    CGContextAddQuadCurveToPoint(ctx, 127.05, 206.25, 114.75, 221.05);
    CGContextClosePath(ctx);
}

static void def_path_11(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 112.9, 230.6);
    CGContextAddQuadCurveToPoint(ctx, 122.85, 222.45, 147, 234.65);
    CGContextAddQuadCurveToPoint(ctx, 154, 238.2, 162.7, 243.8);
    CGContextAddLineToPoint(ctx, 169.65, 248.3);
    CGContextAddQuadCurveToPoint(ctx, 170.35, 247.9, 169.25, 246.35);
    CGContextAddQuadCurveToPoint(ctx, 123.8, 214.75, 112.9, 230.6);
    CGContextClosePath(ctx);
}

static void def_path_12(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 367.85, 466.7);
    CGContextAddQuadCurveToPoint(ctx, 380.45, 486.1, 373.45, 458.2);
    CGContextAddQuadCurveToPoint(ctx, 384.65, 466.2, 385.85, 466.2);
    CGContextAddQuadCurveToPoint(ctx, 372.25, 443, 381.05, 447.8);
    CGContextAddQuadCurveToPoint(ctx, 375.85, 437.4, 393.85, 449.4);
    CGContextAddQuadCurveToPoint(ctx, 377.85, 433.4, 395.45, 443);
    CGContextAddQuadCurveToPoint(ctx, 403.45, 449.4, 395.85, 439.4);
    CGContextAddQuadCurveToPoint(ctx, 381.45, 423.4, 403.45, 441.4);
    CGContextAddQuadCurveToPoint(ctx, 414.45, 456.95, 415.75, 460.3);
    CGContextAddQuadCurveToPoint(ctx, 405.85, 431.4, 401.45, 428.6);
    CGContextAddQuadCurveToPoint(ctx, 409.85, 392.2, 451.05, 407.8);
    CGContextAddQuadCurveToPoint(ctx, 457.85, 425, 462.25, 406.6);
    CGContextAddQuadCurveToPoint(ctx, 475.05, 400.2, 486.25, 427.8);
    CGContextAddQuadCurveToPoint(ctx, 490.25, 414.2, 489.45, 411.4);
    CGContextAddQuadCurveToPoint(ctx, 496.25, 412.6, 495.45, 411.4);
    CGContextAddQuadCurveToPoint(ctx, 508.65, 415.8, 509.85, 415);
    CGContextAddQuadCurveToPoint(ctx, 516.65, 421.8, 517.05, 418.2);
    CGContextAddQuadCurveToPoint(ctx, 526.1, 420.95, 524.3, 417.5);
    CGContextAddQuadCurveToPoint(ctx, 533.05, 433, 533.45, 436.6);
    CGContextAddLineToPoint(ctx, 535.85, 422.6);
    CGContextAddLineToPoint(ctx, 537.85, 425.4);
    CGContextAddQuadCurveToPoint(ctx, 539.45, 417.8, 538.65, 416.6);
    CGContextAddQuadCurveToPoint(ctx, 539.6, 416.55, 541.5, 417.45);
    CGContextAddQuadCurveToPoint(ctx, 545.25, 419.2, 548.95, 422.15);
    CGContextAddQuadCurveToPoint(ctx, 560.45, 431.1, 563.45, 444.2);
    CGContextAddLineToPoint(ctx, 565.45, 452.6);
    CGContextAddQuadCurveToPoint(ctx, 571.45, 437.8, 569.85, 433.8);
    CGContextAddQuadCurveToPoint(ctx, 575.05, 434.6, 575.45, 439);
    CGContextAddQuadCurveToPoint(ctx, 579.45, 415.8, 574.65, 409.8);
    CGContextAddQuadCurveToPoint(ctx, 579.05, 409, 580.25, 412.6);
    CGContextAddLineToPoint(ctx, 580.25, 405.4);
    CGContextAddQuadCurveToPoint(ctx, 587.45, 406.2, 587.45, 403.8);
    CGContextAddQuadCurveToPoint(ctx, 591.85, 399.8, 593.85, 404.6);
    CGContextAddQuadCurveToPoint(ctx, 581.45, 369.4, 599.85, 388.6);
    CGContextAddQuadCurveToPoint(ctx, 607.05, 399.4, 603.45, 380.6);
    CGContextAddQuadCurveToPoint(ctx, 602.25, 374.35, 598.9, 363.3);
    CGContextAddQuadCurveToPoint(ctx, 598.25, 361.2, 598.55, 360.55);
    CGContextAddQuadCurveToPoint(ctx, 598.85, 359.95, 600.65, 359.8);
    CGContextAddQuadCurveToPoint(ctx, 601.45, 356.2, 599.45, 354.6);
    CGContextAddQuadCurveToPoint(ctx, 597.45, 353, 600.65, 354.6);
    CGContextAddQuadCurveToPoint(ctx, 605.45, 358.6, 600.25, 336.6);
    CGContextAddQuadCurveToPoint(ctx, 606.65, 338.2, 594.65, 309);
    CGContextAddQuadCurveToPoint(ctx, 597.45, 306.6, 593.45, 298.2);
    CGContextAddQuadCurveToPoint(ctx, 601.45, 302.6, 604.25, 301);
    CGContextAddQuadCurveToPoint(ctx, 603.85, 299.4, 600.65, 295.4);
    CGContextAddQuadCurveToPoint(ctx, 579.05, 240.6, 599.45, 262.6);
    CGContextAddQuadCurveToPoint(ctx, 611.3, 276.15, 604.9, 253.35);
    CGContextAddQuadCurveToPoint(ctx, 595.8, 229.35, 596.55, 225.05);
    CGContextAddLineToPoint(ctx, 167, 248.05);
    CGContextAddQuadCurveToPoint(ctx, 167.95, 259.75, 170.25, 263.8);
    CGContextAddQuadCurveToPoint(ctx, 166.65, 276.2, 175.45, 289.4);
    CGContextAddQuadCurveToPoint(ctx, 175.05, 296.6, 176.65, 299.8);
    CGContextAddQuadCurveToPoint(ctx, 180.65, 308.2, 185.45, 309);
    CGContextAddLineToPoint(ctx, 194.4, 311.2);
    CGContextAddQuadCurveToPoint(ctx, 202.15, 313.3, 207.9, 314.1);
    CGContextAddQuadCurveToPoint(ctx, 225.05, 328.2, 221.85, 341);
    CGContextAddQuadCurveToPoint(ctx, 221.55, 354.1, 219.2, 357.75);
    CGContextAddQuadCurveToPoint(ctx, 228.85, 348.8, 219.85, 364.6);
    CGContextAddLineToPoint(ctx, 215.45, 383.4);
    CGContextAddQuadCurveToPoint(ctx, 241.05, 361.8, 225.45, 380.2);
    CGContextAddLineToPoint(ctx, 215.45, 406.2);
    CGContextAddQuadCurveToPoint(ctx, 235.05, 387.8, 227.85, 396.2);
    CGContextAddLineToPoint(ctx, 224.65, 405);
    CGContextAddQuadCurveToPoint(ctx, 267.85, 377.8, 237.05, 407.4);
    CGContextAddQuadCurveToPoint(ctx, 245.05, 403.8, 249.45, 406.6);
    CGContextAddQuadCurveToPoint(ctx, 256.25, 405.4, 255.45, 407);
    CGContextAddQuadCurveToPoint(ctx, 234.65, 417.4, 231.05, 435.8);
    CGContextAddQuadCurveToPoint(ctx, 239.45, 425.8, 236.25, 436.6);
    CGContextAddLineToPoint(ctx, 236.65, 448.2);
    CGContextAddQuadCurveToPoint(ctx, 240.65, 426.6, 240.25, 464.2);
    CGContextAddQuadCurveToPoint(ctx, 259.45, 446.2, 247.85, 467);
    CGContextAddLineToPoint(ctx, 247.85, 483.8);
    CGContextAddQuadCurveToPoint(ctx, 263.05, 467.4, 256.65, 480.2);
    CGContextAddQuadCurveToPoint(ctx, 266.65, 471.4, 262.65, 486.6);
    CGContextAddQuadCurveToPoint(ctx, 261.85, 497, 266.25, 485.8);
    CGContextAddQuadCurveToPoint(ctx, 282.25, 455.2, 276.25, 481.4);
    CGContextAddQuadCurveToPoint(ctx, 275.45, 500.6, 280.25, 485.8);
    CGContextAddQuadCurveToPoint(ctx, 280.65, 496.2, 289.85, 503.4);
    CGContextAddQuadCurveToPoint(ctx, 288.65, 452.6, 301.45, 488.6);
    CGContextAddLineToPoint(ctx, 305.45, 505);
    CGContextAddQuadCurveToPoint(ctx, 308.25, 495.8, 307.85, 490.6);
    CGContextAddQuadCurveToPoint(ctx, 322.65, 474.2, 315.85, 498.6);
    CGContextAddQuadCurveToPoint(ctx, 331.05, 475.8, 327.85, 489);
    CGContextAddQuadCurveToPoint(ctx, 320.25, 505, 321.85, 509.8);
    CGContextAddQuadCurveToPoint(ctx, 338.65, 475, 339.85, 473.4);
    CGContextAddQuadCurveToPoint(ctx, 337.85, 515.8, 348.65, 479.8);
    CGContextAddQuadCurveToPoint(ctx, 354.25, 491.8, 351.45, 496.2);
    CGContextAddQuadCurveToPoint(ctx, 359.45, 488.2, 358.65, 485);
    CGContextAddQuadCurveToPoint(ctx, 363.25, 476.8, 366.05, 490.4);
    CGContextAddQuadCurveToPoint(ctx, 367.85, 499.8, 369.45, 496.6);
    CGContextAddQuadCurveToPoint(ctx, 373.45, 520.6, 374.65, 497.8);
    CGContextAddQuadCurveToPoint(ctx, 376.25, 484.2, 369.05, 472.6);
    CGContextAddQuadCurveToPoint(ctx, 369.7, 469.9, 367.85, 466.7);
    CGContextClosePath(ctx);
}

static void def_path_13(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 367.85, 466.7);
    CGContextAddLineToPoint(ctx, 367.05, 465.4);
}

static void def_path_14(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 219.2, 357.75);
    CGContextAddLineToPoint(ctx, 217.85, 359);
}

static void def_path_15(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 415.75, 460.3);
    CGContextAddLineToPoint(ctx, 415.85, 460.6);
}

static void def_path_16(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 539.45, 24.2);
    CGContextAddLineToPoint(ctx, 506.65, 25.4);
    CGContextAddLineToPoint(ctx, 499, 19.85);
    CGContextAddQuadCurveToPoint(ctx, 489.75, 13.35, 479.3, 9);
    CGContextAddQuadCurveToPoint(ctx, 445.1, -5.15, 404.25, 5.8);
    CGContextAddQuadCurveToPoint(ctx, 399.05, 7.8, 394.65, 6.6);
    CGContextAddQuadCurveToPoint(ctx, 376.25, -9.4, 327.45, 13.4);
    CGContextAddLineToPoint(ctx, 315.85, 15.4);
    CGContextAddQuadCurveToPoint(ctx, 311.45, 15.4, 303.45, 21.8);
    CGContextAddLineToPoint(ctx, 293.05, 30.6);
    CGContextAddQuadCurveToPoint(ctx, 276.65, 41.8, 271.85, 42.6);
    CGContextAddQuadCurveToPoint(ctx, 260.25, 49, 255.85, 59);
    CGContextAddLineToPoint(ctx, 252.25, 60.2);
    CGContextAddLineToPoint(ctx, 250.25, 68.6);
    CGContextAddQuadCurveToPoint(ctx, 245.45, 72.2, 244.65, 77.8);
    CGContextAddQuadCurveToPoint(ctx, 235.85, 83.8, 236.25, 88.2);
    CGContextAddQuadCurveToPoint(ctx, 234.65, 93.4, 233.85, 98.2);
    CGContextAddQuadCurveToPoint(ctx, 226.65, 103, 227.45, 105.8);
    CGContextAddQuadCurveToPoint(ctx, 219.85, 119.8, 221.05, 126.6);
    CGContextAddQuadCurveToPoint(ctx, 214.65, 126.2, 211.85, 128.6);
    CGContextAddQuadCurveToPoint(ctx, 211.05, 133.4, 209.45, 133.8);
    CGContextAddQuadCurveToPoint(ctx, 206.65, 135, 209.05, 139);
    CGContextAddQuadCurveToPoint(ctx, 207.45, 141.8, 207.05, 143.4);
    CGContextAddQuadCurveToPoint(ctx, 207.85, 146.2, 203.45, 151.8);
    CGContextAddQuadCurveToPoint(ctx, 197.05, 170.6, 199.05, 175.8);
    CGContextAddQuadCurveToPoint(ctx, 199.45, 180.6, 196.65, 182.2);
    CGContextAddQuadCurveToPoint(ctx, 193.05, 181.8, 201.45, 193.8);
    CGContextAddQuadCurveToPoint(ctx, 202.25, 195, 199.05, 197.4);
    CGContextAddQuadCurveToPoint(ctx, 181.85, 201, 179.45, 217.4);
    CGContextAddQuadCurveToPoint(ctx, 165.85, 232.2, 165.85, 237.4);
    CGContextAddLineToPoint(ctx, 166.8, 247.45);
    CGContextAddQuadCurveToPoint(ctx, 166.25, 255.8, 193.85, 256.6);
    CGContextAddQuadCurveToPoint(ctx, 221.45, 257.4, 596.55, 225.25);
    CGContextAddQuadCurveToPoint(ctx, 599, 226, 600.65, 228.2);
    CGContextAddQuadCurveToPoint(ctx, 607.45, 239, 602.25, 220.6);
    CGContextAddQuadCurveToPoint(ctx, 593.05, 191.8, 601.85, 203);
    CGContextAddQuadCurveToPoint(ctx, 607.85, 210.2, 604.65, 196.6);
    CGContextAddQuadCurveToPoint(ctx, 600.8, 180.15, 598.25, 173.8);
    CGContextAddQuadCurveToPoint(ctx, 609.85, 178.6, 583.05, 139);
    CGContextAddLineToPoint(ctx, 591.85, 142.6);
    CGContextAddQuadCurveToPoint(ctx, 572.25, 103, 550.65, 97.8);
    CGContextAddLineToPoint(ctx, 542.65, 91.8);
    CGContextAddQuadCurveToPoint(ctx, 581.05, 53.8, 568.25, 17);
    CGContextAddQuadCurveToPoint(ctx, 561.45, 11.8, 551.85, 21);
    CGContextAddQuadCurveToPoint(ctx, 545.45, 25.8, 539.45, 24.2);
    CGContextClosePath(ctx);
}

static void def_path_17(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 504.1, 184.8);
    CGContextAddQuadCurveToPoint(ctx, 495.7, 186.4, 492.25, 185.4);
    CGContextAddQuadCurveToPoint(ctx, 484, 183, 481.15, 186.8);
    CGContextAddLineToPoint(ctx, 479.5, 189.9);
    CGContextAddQuadCurveToPoint(ctx, 478.8, 191.55, 477.85, 191.8);
    CGContextAddQuadCurveToPoint(ctx, 476.5, 192.15, 454.65, 180.2);
    CGContextAddQuadCurveToPoint(ctx, 432.6, 168.15, 429.05, 168.6);
    CGContextAddQuadCurveToPoint(ctx, 427.2, 168.85, 421.6, 165.8);
    CGContextAddLineToPoint(ctx, 412.6, 161.35);
    CGContextAddQuadCurveToPoint(ctx, 403.1, 158, 412.25, 177.4);
    CGContextAddQuadCurveToPoint(ctx, 417.85, 189.3, 409.6, 197.65);
    CGContextAddQuadCurveToPoint(ctx, 402.55, 204.85, 386.95, 208.35);
    CGContextAddQuadCurveToPoint(ctx, 373.05, 211.4, 358.1, 210.5);
    CGContextAddQuadCurveToPoint(ctx, 343.35, 209.6, 337.05, 205.4);
    CGContextAddQuadCurveToPoint(ctx, 320.25, 194.2, 344.25, 223.8);
    CGContextAddQuadCurveToPoint(ctx, 362.65, 243.8, 328.25, 227);
    CGContextAddQuadCurveToPoint(ctx, 306.85, 219.05, 285.75, 228.7);
    CGContextAddQuadCurveToPoint(ctx, 279.35, 231.65, 272.75, 236.3);
    CGContextAddLineToPoint(ctx, 266.65, 240.6);
    CGContextAddLineToPoint(ctx, 261.35, 242.1);
    CGContextAddQuadCurveToPoint(ctx, 258.35, 242.3, 257.85, 238.2);
    CGContextAddQuadCurveToPoint(ctx, 256.8, 229.6, 249.4, 227.5);
    CGContextAddQuadCurveToPoint(ctx, 238.35, 224.4, 217.85, 241.4);
    CGContextAddQuadCurveToPoint(ctx, 197.85, 258, 184.05, 236);
    CGContextAddLineToPoint(ctx, 181.25, 247.6);
    CGContextAddQuadCurveToPoint(ctx, 156.25, 208.2, 170.65, 264.6);
    CGContextAddQuadCurveToPoint(ctx, 179.45, 299, 309.05, 261.4);
    CGContextAddQuadCurveToPoint(ctx, 477.85, 231, 489.05, 227);
    CGContextAddQuadCurveToPoint(ctx, 500.25, 223, 595.45, 229.4);
    CGContextAddLineToPoint(ctx, 589.85, 212.6);
    CGContextAddQuadCurveToPoint(ctx, 550, 184.05, 521.85, 183.1);
    CGContextAddQuadCurveToPoint(ctx, 514.4, 182.85, 504.1, 184.8);
    CGContextClosePath(ctx);
}

static void def_path_18(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 505.3, 186.45);
    CGContextAddQuadCurveToPoint(ctx, 496.95, 188.15, 493.55, 187.15);
    CGContextAddQuadCurveToPoint(ctx, 485.3, 184.75, 482.45, 188.55);
    CGContextAddLineToPoint(ctx, 480.8, 191.65);
    CGContextAddQuadCurveToPoint(ctx, 480.1, 193.3, 479.15, 193.55);
    CGContextAddQuadCurveToPoint(ctx, 477.8, 193.9, 455.95, 181.95);
    CGContextAddQuadCurveToPoint(ctx, 433.9, 169.9, 430.35, 170.35);
    CGContextAddQuadCurveToPoint(ctx, 428.5, 170.6, 422.9, 167.55);
    CGContextAddLineToPoint(ctx, 413.9, 163.1);
    CGContextAddQuadCurveToPoint(ctx, 404.4, 159.75, 413.55, 179.15);
    CGContextAddQuadCurveToPoint(ctx, 419.35, 191.45, 411.15, 199.95);
    CGContextAddQuadCurveToPoint(ctx, 404.2, 207.2, 388.45, 210.55);
    CGContextAddQuadCurveToPoint(ctx, 374.5, 213.5, 359.45, 212.45);
    CGContextAddQuadCurveToPoint(ctx, 344.7, 211.4, 338.35, 207.15);
    CGContextAddQuadCurveToPoint(ctx, 321.55, 195.95, 345.55, 225.55);
    CGContextAddQuadCurveToPoint(ctx, 363.95, 245.55, 329.55, 228.75);
    CGContextAddQuadCurveToPoint(ctx, 308.15, 220.8, 287.05, 230.45);
    CGContextAddQuadCurveToPoint(ctx, 280.65, 233.4, 274.05, 238.05);
    CGContextAddLineToPoint(ctx, 267.95, 242.35);
    CGContextAddLineToPoint(ctx, 262.65, 243.85);
    CGContextAddQuadCurveToPoint(ctx, 259.65, 244.05, 259.15, 239.95);
    CGContextAddQuadCurveToPoint(ctx, 258.1, 231.4, 250.75, 229.3);
    CGContextAddQuadCurveToPoint(ctx, 239.7, 226.2, 219.15, 243.15);
    CGContextAddQuadCurveToPoint(ctx, 197.9, 260.5, 184.45, 239.05);
    CGContextAddLineToPoint(ctx, 181.25, 249.15);
    CGContextAddQuadCurveToPoint(ctx, 156.25, 209.35, 171.3, 267.65);
    CGContextAddQuadCurveToPoint(ctx, 180.1, 302.05, 310.35, 263.15);
    CGContextAddQuadCurveToPoint(ctx, 479.15, 232.75, 490.35, 228.75);
    CGContextAddQuadCurveToPoint(ctx, 501.55, 224.75, 595.9, 231.05);
    CGContextAddLineToPoint(ctx, 590.35, 213.75);
    CGContextAddQuadCurveToPoint(ctx, 550.5, 185.25, 522.75, 184.55);
    CGContextAddQuadCurveToPoint(ctx, 515.6, 184.35, 505.3, 186.45);
    CGContextClosePath(ctx);
}

static void def_path_19(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 494.85, 188.9);
    CGContextAddQuadCurveToPoint(ctx, 486.6, 186.5, 483.75, 190.3);
    CGContextAddLineToPoint(ctx, 482.1, 193.4);
    CGContextAddQuadCurveToPoint(ctx, 481.4, 195.05, 480.45, 195.3);
    CGContextAddQuadCurveToPoint(ctx, 479.1, 195.65, 457.25, 183.7);
    CGContextAddQuadCurveToPoint(ctx, 435.2, 171.65, 431.65, 172.1);
    CGContextAddQuadCurveToPoint(ctx, 429.9, 172.3, 424.3, 169.25);
    CGContextAddLineToPoint(ctx, 415.45, 164.75);
    CGContextAddQuadCurveToPoint(ctx, 406.1, 161.3, 414.85, 180.9);
    CGContextAddQuadCurveToPoint(ctx, 420.5, 193.5, 412.25, 202.1);
    CGContextAddQuadCurveToPoint(ctx, 405.35, 209.35, 389.6, 212.65);
    CGContextAddQuadCurveToPoint(ctx, 375.75, 215.55, 360.75, 214.3);
    CGContextAddQuadCurveToPoint(ctx, 346.05, 213.15, 339.65, 208.9);
    CGContextAddQuadCurveToPoint(ctx, 322.85, 197.7, 346.85, 227.3);
    CGContextAddQuadCurveToPoint(ctx, 365.25, 247.3, 330.85, 230.5);
    CGContextAddQuadCurveToPoint(ctx, 309.45, 222.55, 288.35, 232.2);
    CGContextAddQuadCurveToPoint(ctx, 281.95, 235.15, 275.35, 239.8);
    CGContextAddLineToPoint(ctx, 269.25, 244.1);
    CGContextAddLineToPoint(ctx, 263.95, 245.6);
    CGContextAddQuadCurveToPoint(ctx, 260.95, 245.8, 260.45, 241.7);
    CGContextAddQuadCurveToPoint(ctx, 259.4, 233.2, 252.1, 231.15);
    CGContextAddQuadCurveToPoint(ctx, 241.1, 228.05, 220.45, 244.9);
    CGContextAddQuadCurveToPoint(ctx, 198, 263, 184.8, 242.05);
    CGContextAddLineToPoint(ctx, 181.2, 250.7);
    CGContextAddQuadCurveToPoint(ctx, 157.4, 211.7, 171.95, 270.7);
    CGContextAddQuadCurveToPoint(ctx, 180.75, 305.1, 311.65, 264.9);
    CGContextAddQuadCurveToPoint(ctx, 480.45, 234.5, 491.65, 230.5);
    CGContextAddQuadCurveToPoint(ctx, 502.85, 226.5, 596.3, 232.75);
    CGContextAddLineToPoint(ctx, 590.85, 214.95);
    CGContextAddQuadCurveToPoint(ctx, 550.95, 186.4, 523.65, 186);
    CGContextAddQuadCurveToPoint(ctx, 516.55, 185.9, 506.45, 188.1);
    CGContextAddQuadCurveToPoint(ctx, 498.25, 189.9, 494.85, 188.9);
    CGContextClosePath(ctx);
}

static void def_path_20(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 496.2, 190.65);
    CGContextAddQuadCurveToPoint(ctx, 487.95, 188.25, 485.1, 192.05);
    CGContextAddLineToPoint(ctx, 483.45, 195.15);
    CGContextAddQuadCurveToPoint(ctx, 482.75, 196.8, 481.8, 197.05);
    CGContextAddQuadCurveToPoint(ctx, 480.45, 197.4, 458.6, 185.45);
    CGContextAddQuadCurveToPoint(ctx, 436.55, 173.4, 433, 173.85);
    CGContextAddQuadCurveToPoint(ctx, 431.25, 174.05, 425.65, 171);
    CGContextAddLineToPoint(ctx, 416.8, 166.5);
    CGContextAddQuadCurveToPoint(ctx, 407.4, 163.05, 416.2, 182.65);
    CGContextAddQuadCurveToPoint(ctx, 422.05, 195.7, 413.8, 204.3);
    CGContextAddQuadCurveToPoint(ctx, 406.8, 211.65, 390.95, 214.75);
    CGContextAddQuadCurveToPoint(ctx, 377.2, 217.45, 361.9, 216.1);
    CGContextAddQuadCurveToPoint(ctx, 347.25, 214.8, 341, 210.65);
    CGContextAddQuadCurveToPoint(ctx, 324.2, 199.45, 348.2, 229.05);
    CGContextAddQuadCurveToPoint(ctx, 366.6, 249.05, 332.2, 232.25);
    CGContextAddQuadCurveToPoint(ctx, 310.8, 224.3, 289.7, 233.95);
    CGContextAddQuadCurveToPoint(ctx, 283.3, 236.9, 276.7, 241.55);
    CGContextAddLineToPoint(ctx, 270.6, 245.85);
    CGContextAddLineToPoint(ctx, 265.3, 247.35);
    CGContextAddQuadCurveToPoint(ctx, 262.3, 247.55, 261.8, 243.45);
    CGContextAddQuadCurveToPoint(ctx, 260.75, 235, 253.5, 232.95);
    CGContextAddQuadCurveToPoint(ctx, 242.5, 229.95, 221.8, 246.65);
    CGContextAddQuadCurveToPoint(ctx, 198.05, 265.45, 185.2, 245.1);
    CGContextAddLineToPoint(ctx, 181.2, 252.25);
    CGContextAddQuadCurveToPoint(ctx, 159.4, 215.45, 172.6, 273.75);
    CGContextAddQuadCurveToPoint(ctx, 181.4, 308.15, 313, 266.65);
    CGContextAddQuadCurveToPoint(ctx, 481.8, 236.25, 493, 232.25);
    CGContextAddQuadCurveToPoint(ctx, 504.2, 228.25, 596.75, 234.4);
    CGContextAddLineToPoint(ctx, 591.4, 216.1);
    CGContextAddQuadCurveToPoint(ctx, 551.55, 187.55, 524.6, 187.45);
    CGContextAddQuadCurveToPoint(ctx, 517.75, 187.4, 507.7, 189.75);
    CGContextAddQuadCurveToPoint(ctx, 499.6, 191.65, 496.2, 190.65);
    CGContextClosePath(ctx);
}

static void def_path_21(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 497.5, 192.4);
    CGContextAddQuadCurveToPoint(ctx, 489.25, 190, 486.4, 193.8);
    CGContextAddLineToPoint(ctx, 484.75, 196.9);
    CGContextAddQuadCurveToPoint(ctx, 484.05, 198.55, 483.1, 198.8);
    CGContextAddQuadCurveToPoint(ctx, 481.75, 199.15, 459.9, 187.2);
    CGContextAddQuadCurveToPoint(ctx, 437.85, 175.15, 434.3, 175.6);
    CGContextAddQuadCurveToPoint(ctx, 432.45, 175.85, 426.95, 172.7);
    CGContextAddLineToPoint(ctx, 418.25, 168.15);
    CGContextAddQuadCurveToPoint(ctx, 409.05, 164.7, 417.5, 184.4);
    CGContextAddQuadCurveToPoint(ctx, 423.35, 198.1, 415.2, 206.85);
    CGContextAddQuadCurveToPoint(ctx, 408.25, 214.35, 392.5, 217.3);
    CGContextAddQuadCurveToPoint(ctx, 378.85, 219.85, 363.5, 218.25);
    CGContextAddQuadCurveToPoint(ctx, 348.8, 216.7, 342.3, 212.4);
    CGContextAddQuadCurveToPoint(ctx, 325.5, 201.2, 349.5, 230.8);
    CGContextAddQuadCurveToPoint(ctx, 367.9, 250.8, 333.5, 234);
    CGContextAddQuadCurveToPoint(ctx, 312.1, 226.05, 291, 235.7);
    CGContextAddQuadCurveToPoint(ctx, 284.6, 238.65, 278, 243.3);
    CGContextAddLineToPoint(ctx, 271.9, 247.6);
    CGContextAddLineToPoint(ctx, 266.6, 249.1);
    CGContextAddQuadCurveToPoint(ctx, 263.6, 249.3, 263.1, 245.2);
    CGContextAddQuadCurveToPoint(ctx, 262.05, 236.7, 254.85, 234.75);
    CGContextAddQuadCurveToPoint(ctx, 243.95, 231.75, 223.1, 248.4);
    CGContextAddQuadCurveToPoint(ctx, 198.15, 267.95, 185.6, 248.15);
    CGContextAddLineToPoint(ctx, 181.2, 253.8);
    CGContextAddQuadCurveToPoint(ctx, 161.4, 219, 173.25, 276.8);
    CGContextAddQuadCurveToPoint(ctx, 182.05, 311.2, 314.3, 268.4);
    CGContextAddQuadCurveToPoint(ctx, 483.1, 238, 494.3, 234);
    CGContextAddQuadCurveToPoint(ctx, 505.5, 230, 597.2, 236.1);
    CGContextAddLineToPoint(ctx, 591.9, 217.25);
    CGContextAddQuadCurveToPoint(ctx, 552.05, 188.7, 525.5, 188.9);
    CGContextAddQuadCurveToPoint(ctx, 518.75, 188.95, 508.85, 191.4);
    CGContextAddQuadCurveToPoint(ctx, 501.05, 193.45, 497.5, 192.4);
    CGContextClosePath(ctx);
}

static void def_path_22(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 504.05, 194.4);
    CGContextAddLineToPoint(ctx, 498.8, 194.15);
    CGContextAddQuadCurveToPoint(ctx, 490.55, 191.75, 487.7, 195.55);
    CGContextAddLineToPoint(ctx, 486.05, 198.65);
    CGContextAddQuadCurveToPoint(ctx, 485.35, 200.3, 484.4, 200.55);
    CGContextAddQuadCurveToPoint(ctx, 483.05, 200.9, 461.2, 188.95);
    CGContextAddQuadCurveToPoint(ctx, 439.15, 176.9, 435.6, 177.35);
    CGContextAddQuadCurveToPoint(ctx, 433.8, 177.55, 428.05, 174.6);
    CGContextAddLineToPoint(ctx, 418.95, 170.2);
    CGContextAddQuadCurveToPoint(ctx, 409.3, 166.95, 418.8, 186.15);
    CGContextAddQuadCurveToPoint(ctx, 425.5, 199.7, 417.5, 208.45);
    CGContextAddQuadCurveToPoint(ctx, 410.7, 215.9, 394.7, 218.9);
    CGContextAddQuadCurveToPoint(ctx, 380.65, 221.5, 365.1, 219.9);
    CGContextAddQuadCurveToPoint(ctx, 350.05, 218.45, 343.6, 214.15);
    CGContextAddQuadCurveToPoint(ctx, 326.8, 202.95, 350.8, 232.55);
    CGContextAddQuadCurveToPoint(ctx, 369.2, 252.55, 334.8, 235.75);
    CGContextAddQuadCurveToPoint(ctx, 313.4, 227.8, 292.3, 237.45);
    CGContextAddQuadCurveToPoint(ctx, 285.9, 240.4, 279.3, 245.05);
    CGContextAddLineToPoint(ctx, 273.2, 249.35);
    CGContextAddLineToPoint(ctx, 267.9, 250.85);
    CGContextAddQuadCurveToPoint(ctx, 264.9, 251.05, 264.4, 246.95);
    CGContextAddQuadCurveToPoint(ctx, 263.35, 238.5, 256.2, 236.55);
    CGContextAddQuadCurveToPoint(ctx, 245.3, 233.65, 224.4, 250.15);
    CGContextAddQuadCurveToPoint(ctx, 198.2, 270.45, 185.95, 251.2);
    CGContextAddLineToPoint(ctx, 181.15, 255.35);
    CGContextAddQuadCurveToPoint(ctx, 163.15, 222.15, 173.9, 279.85);
    CGContextAddQuadCurveToPoint(ctx, 182.7, 314.25, 315.6, 270.15);
    CGContextAddQuadCurveToPoint(ctx, 484.4, 239.75, 495.6, 235.75);
    CGContextAddQuadCurveToPoint(ctx, 506.8, 231.75, 597.65, 237.75);
    CGContextAddLineToPoint(ctx, 592.4, 218.4);
    CGContextAddQuadCurveToPoint(ctx, 552.55, 189.85, 526.4, 190.35);
    CGContextAddQuadCurveToPoint(ctx, 519.9, 190.45, 510.05, 193.05);
    CGContextAddLineToPoint(ctx, 504.05, 194.4);
    CGContextClosePath(ctx);
}

static void def_path_23(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 500.1, 195.85);
    CGContextAddQuadCurveToPoint(ctx, 491.85, 193.45, 489, 197.25);
    CGContextAddLineToPoint(ctx, 487.35, 200.35);
    CGContextAddQuadCurveToPoint(ctx, 486.65, 202, 485.7, 202.25);
    CGContextAddQuadCurveToPoint(ctx, 484.35, 202.6, 462.5, 190.65);
    CGContextAddQuadCurveToPoint(ctx, 440.45, 178.6, 436.9, 179.05);
    CGContextAddQuadCurveToPoint(ctx, 435.15, 179.25, 429.3, 176.3);
    CGContextAddLineToPoint(ctx, 420.1, 172);
    CGContextAddQuadCurveToPoint(ctx, 410.35, 168.75, 420.1, 187.85);
    CGContextAddQuadCurveToPoint(ctx, 427.2, 201.8, 419.3, 210.65);
    CGContextAddQuadCurveToPoint(ctx, 412.6, 218.2, 396.45, 221.05);
    CGContextAddQuadCurveToPoint(ctx, 382.3, 223.55, 366.55, 221.8);
    CGContextAddQuadCurveToPoint(ctx, 351.4, 220.2, 344.9, 215.85);
    CGContextAddQuadCurveToPoint(ctx, 328.1, 204.65, 352.1, 234.25);
    CGContextAddQuadCurveToPoint(ctx, 370.5, 254.25, 336.1, 237.45);
    CGContextAddQuadCurveToPoint(ctx, 314.7, 229.5, 293.6, 239.15);
    CGContextAddQuadCurveToPoint(ctx, 287.2, 242.1, 280.6, 246.75);
    CGContextAddLineToPoint(ctx, 274.5, 251.05);
    CGContextAddLineToPoint(ctx, 269.2, 252.55);
    CGContextAddQuadCurveToPoint(ctx, 266.2, 252.75, 265.7, 248.65);
    CGContextAddQuadCurveToPoint(ctx, 264.65, 240.25, 257.55, 238.35);
    CGContextAddQuadCurveToPoint(ctx, 246.75, 235.45, 225.7, 251.85);
    CGContextAddQuadCurveToPoint(ctx, 198.3, 272.95, 186.35, 254.2);
    CGContextAddLineToPoint(ctx, 181.15, 256.85);
    CGContextAddQuadCurveToPoint(ctx, 165.15, 226.65, 174.6, 282.95);
    CGContextAddQuadCurveToPoint(ctx, 183.4, 317.35, 316.9, 271.85);
    CGContextAddQuadCurveToPoint(ctx, 485.7, 241.45, 496.9, 237.45);
    CGContextAddQuadCurveToPoint(ctx, 508.1, 233.45, 598.05, 239.45);
    CGContextAddLineToPoint(ctx, 592.9, 219.6);
    CGContextAddQuadCurveToPoint(ctx, 553.15, 191.15, 527.3, 191.8);
    CGContextAddQuadCurveToPoint(ctx, 520.9, 191.95, 511.2, 194.65);
    CGContextAddQuadCurveToPoint(ctx, 503.6, 196.9, 500.1, 195.85);
    CGContextClosePath(ctx);
}

static void def_path_24(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 501.4, 197.6);
    CGContextAddQuadCurveToPoint(ctx, 493.15, 195.2, 490.3, 199);
    CGContextAddLineToPoint(ctx, 488.65, 202.1);
    CGContextAddQuadCurveToPoint(ctx, 487.95, 203.75, 487, 204);
    CGContextAddQuadCurveToPoint(ctx, 485.65, 204.35, 463.8, 192.4);
    CGContextAddQuadCurveToPoint(ctx, 441.75, 180.35, 438.2, 180.8);
    CGContextAddQuadCurveToPoint(ctx, 436.4, 181, 430.4, 178.15);
    CGContextAddLineToPoint(ctx, 420.95, 173.95);
    CGContextAddQuadCurveToPoint(ctx, 410.95, 170.85, 421.4, 189.6);
    CGContextAddQuadCurveToPoint(ctx, 429.1, 203.45, 421.25, 212.25);
    CGContextAddQuadCurveToPoint(ctx, 414.7, 219.7, 398.35, 222.65);
    CGContextAddQuadCurveToPoint(ctx, 383.95, 225.15, 368.1, 223.5);
    CGContextAddQuadCurveToPoint(ctx, 352.6, 221.9, 346.2, 217.6);
    CGContextAddQuadCurveToPoint(ctx, 329.4, 206.4, 353.4, 236);
    CGContextAddQuadCurveToPoint(ctx, 371.8, 256, 337.4, 239.2);
    CGContextAddQuadCurveToPoint(ctx, 316, 231.25, 294.9, 240.9);
    CGContextAddQuadCurveToPoint(ctx, 288.5, 243.85, 281.9, 248.5);
    CGContextAddLineToPoint(ctx, 275.8, 252.8);
    CGContextAddLineToPoint(ctx, 270.5, 254.3);
    CGContextAddQuadCurveToPoint(ctx, 267.5, 254.5, 267, 250.4);
    CGContextAddQuadCurveToPoint(ctx, 265.95, 242, 258.9, 240.15);
    CGContextAddQuadCurveToPoint(ctx, 248.1, 237.35, 227, 253.6);
    CGContextAddQuadCurveToPoint(ctx, 198.35, 275.45, 186.7, 257.25);
    CGContextAddLineToPoint(ctx, 181.1, 258.4);
    CGContextAddQuadCurveToPoint(ctx, 166.7, 230, 175.25, 286);
    CGContextAddQuadCurveToPoint(ctx, 184.05, 320.4, 318.2, 273.6);
    CGContextAddQuadCurveToPoint(ctx, 487, 243.2, 498.2, 239.2);
    CGContextAddQuadCurveToPoint(ctx, 509.4, 235.2, 598.5, 241.1);
    CGContextAddLineToPoint(ctx, 593.4, 220.75);
    CGContextAddQuadCurveToPoint(ctx, 553.65, 192.3, 528.2, 193.25);
    CGContextAddQuadCurveToPoint(ctx, 521.85, 193.5, 512.4, 196.3);
    CGContextAddQuadCurveToPoint(ctx, 504.9, 198.65, 501.4, 197.6);
    CGContextClosePath(ctx);
}

static void def_path_25(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 431.75, 179.9);
    CGContextAddQuadCurveToPoint(ctx, 424.45, 176.35, 422.3, 175.7);
    CGContextAddQuadCurveToPoint(ctx, 412.35, 172.6, 422.7, 191.35);
    CGContextAddQuadCurveToPoint(ctx, 430.4, 205.2, 422.55, 214);
    CGContextAddQuadCurveToPoint(ctx, 416, 221.45, 399.65, 224.4);
    CGContextAddQuadCurveToPoint(ctx, 385.25, 226.9, 369.4, 225.25);
    CGContextAddQuadCurveToPoint(ctx, 353.9, 223.65, 347.5, 219.35);
    CGContextAddQuadCurveToPoint(ctx, 330.7, 208.15, 354.7, 237.75);
    CGContextAddQuadCurveToPoint(ctx, 373.1, 257.75, 338.7, 240.95);
    CGContextAddQuadCurveToPoint(ctx, 317.3, 233, 296.2, 242.65);
    CGContextAddQuadCurveToPoint(ctx, 289.8, 245.6, 283.2, 250.25);
    CGContextAddLineToPoint(ctx, 277.1, 254.55);
    CGContextAddLineToPoint(ctx, 271.8, 256.05);
    CGContextAddQuadCurveToPoint(ctx, 268.8, 256.25, 268.3, 252.15);
    CGContextAddQuadCurveToPoint(ctx, 267.25, 243.8, 260.25, 241.95);
    CGContextAddQuadCurveToPoint(ctx, 249.45, 239.15, 228.3, 255.35);
    CGContextAddQuadCurveToPoint(ctx, 198.45, 277.95, 187.1, 260.3);
    CGContextAddLineToPoint(ctx, 181.1, 259.95);
    CGContextAddQuadCurveToPoint(ctx, 167.5, 233.55, 175.9, 289.05);
    CGContextAddQuadCurveToPoint(ctx, 184.7, 323.45, 319.5, 275.35);
    CGContextAddQuadCurveToPoint(ctx, 488.3, 244.95, 499.5, 240.95);
    CGContextAddQuadCurveToPoint(ctx, 510.7, 236.95, 598.95, 242.8);
    CGContextAddLineToPoint(ctx, 593.9, 221.9);
    CGContextAddQuadCurveToPoint(ctx, 554.15, 193.45, 529.1, 194.7);
    CGContextAddQuadCurveToPoint(ctx, 522.8, 195, 513.55, 198);
    CGContextAddQuadCurveToPoint(ctx, 506.25, 200.4, 502.7, 199.35);
    CGContextAddQuadCurveToPoint(ctx, 494.45, 196.95, 491.6, 200.75);
    CGContextAddLineToPoint(ctx, 489.95, 203.85);
    CGContextAddQuadCurveToPoint(ctx, 489.25, 205.5, 488.3, 205.75);
    CGContextAddQuadCurveToPoint(ctx, 486.95, 206.1, 465.1, 194.15);
    CGContextAddQuadCurveToPoint(ctx, 443.05, 182.1, 439.5, 182.55);
    CGContextAddQuadCurveToPoint(ctx, 437.7, 182.8, 431.75, 179.9);
    CGContextClosePath(ctx);
}

static void def_path_26(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 433.15, 181.6);
    CGContextAddLineToPoint(ctx, 423.75, 177.4);
    CGContextAddQuadCurveToPoint(ctx, 413.85, 174.2, 424.05, 193.1);
    CGContextAddQuadCurveToPoint(ctx, 431.75, 207.35, 423.9, 216.25);
    CGContextAddQuadCurveToPoint(ctx, 417.3, 223.85, 401, 226.6);
    CGContextAddQuadCurveToPoint(ctx, 386.8, 229, 370.75, 227.15);
    CGContextAddQuadCurveToPoint(ctx, 355.4, 225.45, 348.85, 221.1);
    CGContextAddQuadCurveToPoint(ctx, 332.05, 209.9, 356.05, 239.5);
    CGContextAddQuadCurveToPoint(ctx, 374.45, 259.5, 340.05, 242.7);
    CGContextAddQuadCurveToPoint(ctx, 318.65, 234.75, 297.55, 244.4);
    CGContextAddQuadCurveToPoint(ctx, 291.15, 247.35, 284.55, 252);
    CGContextAddLineToPoint(ctx, 278.45, 256.3);
    CGContextAddLineToPoint(ctx, 273.15, 257.8);
    CGContextAddQuadCurveToPoint(ctx, 270.15, 258, 269.65, 253.9);
    CGContextAddQuadCurveToPoint(ctx, 268.6, 245.6, 261.65, 243.8);
    CGContextAddQuadCurveToPoint(ctx, 250.9, 241, 229.65, 257.1);
    CGContextAddQuadCurveToPoint(ctx, 198.5, 280.4, 187.5, 263.35);
    CGContextAddLineToPoint(ctx, 181.1, 261.5);
    CGContextAddQuadCurveToPoint(ctx, 168.1, 237.5, 176.55, 292.1);
    CGContextAddQuadCurveToPoint(ctx, 185.35, 326.5, 320.85, 277.1);
    CGContextAddQuadCurveToPoint(ctx, 489.65, 246.7, 500.85, 242.7);
    CGContextAddQuadCurveToPoint(ctx, 512.05, 238.7, 599.4, 244.45);
    CGContextAddLineToPoint(ctx, 594.45, 223.05);
    CGContextAddQuadCurveToPoint(ctx, 554.75, 194.6, 530.05, 196.15);
    CGContextAddQuadCurveToPoint(ctx, 523.8, 196.55, 514.8, 199.65);
    CGContextAddQuadCurveToPoint(ctx, 507.6, 202.15, 504.05, 201.1);
    CGContextAddQuadCurveToPoint(ctx, 495.8, 198.7, 492.95, 202.5);
    CGContextAddLineToPoint(ctx, 491.3, 205.6);
    CGContextAddQuadCurveToPoint(ctx, 490.6, 207.25, 489.65, 207.5);
    CGContextAddQuadCurveToPoint(ctx, 488.3, 207.85, 466.45, 195.9);
    CGContextAddQuadCurveToPoint(ctx, 444.4, 183.85, 440.85, 184.3);
    CGContextAddQuadCurveToPoint(ctx, 439, 184.55, 433.15, 181.6);
    CGContextClosePath(ctx);
}

static void def_path_27(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 434.6, 183.3);
    CGContextAddLineToPoint(ctx, 425.5, 178.9);
    CGContextAddQuadCurveToPoint(ctx, 415.85, 175.65, 425.35, 194.85);
    CGContextAddQuadCurveToPoint(ctx, 432.75, 209.75, 424.9, 218.85);
    CGContextAddQuadCurveToPoint(ctx, 418.3, 226.5, 402, 229.1);
    CGContextAddQuadCurveToPoint(ctx, 387.85, 231.3, 371.95, 229.2);
    CGContextAddQuadCurveToPoint(ctx, 356.65, 227.2, 350.15, 222.85);
    CGContextAddQuadCurveToPoint(ctx, 333.35, 211.65, 357.35, 241.25);
    CGContextAddQuadCurveToPoint(ctx, 375.75, 261.25, 341.35, 244.45);
    CGContextAddQuadCurveToPoint(ctx, 319.95, 236.5, 298.85, 246.15);
    CGContextAddQuadCurveToPoint(ctx, 292.45, 249.1, 285.85, 253.75);
    CGContextAddLineToPoint(ctx, 279.75, 258.05);
    CGContextAddLineToPoint(ctx, 274.45, 259.55);
    CGContextAddQuadCurveToPoint(ctx, 271.45, 259.75, 270.95, 255.65);
    CGContextAddQuadCurveToPoint(ctx, 269.9, 247.4, 263, 245.6);
    CGContextAddQuadCurveToPoint(ctx, 252.35, 242.9, 230.95, 258.85);
    CGContextAddQuadCurveToPoint(ctx, 198.6, 282.9, 187.85, 266.35);
    CGContextAddLineToPoint(ctx, 181.05, 263.05);
    CGContextAddQuadCurveToPoint(ctx, 168.25, 239.85, 177.2, 295.15);
    CGContextAddQuadCurveToPoint(ctx, 186, 329.55, 322.15, 278.85);
    CGContextAddQuadCurveToPoint(ctx, 490.95, 248.45, 502.15, 244.45);
    CGContextAddQuadCurveToPoint(ctx, 513.35, 240.45, 599.8, 246.15);
    CGContextAddLineToPoint(ctx, 594.95, 224.25);
    CGContextAddQuadCurveToPoint(ctx, 555.25, 195.8, 530.95, 197.65);
    CGContextAddQuadCurveToPoint(ctx, 525.2, 198.05, 515.95, 201.3);
    CGContextAddQuadCurveToPoint(ctx, 508.9, 203.9, 505.35, 202.85);
    CGContextAddQuadCurveToPoint(ctx, 497.1, 200.45, 494.25, 204.25);
    CGContextAddLineToPoint(ctx, 492.6, 207.35);
    CGContextAddQuadCurveToPoint(ctx, 491.9, 209, 490.95, 209.25);
    CGContextAddQuadCurveToPoint(ctx, 489.6, 209.6, 467.75, 197.65);
    CGContextAddQuadCurveToPoint(ctx, 445.7, 185.6, 442.15, 186.05);
    CGContextAddQuadCurveToPoint(ctx, 440.35, 186.25, 434.6, 183.3);
    CGContextClosePath(ctx);
}

static void def_path_28(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 427.1, 180.55);
    CGContextAddQuadCurveToPoint(ctx, 417.65, 177.2, 426.65, 196.6);
    CGContextAddQuadCurveToPoint(ctx, 434.35, 213.15, 426.25, 222.4);
    CGContextAddQuadCurveToPoint(ctx, 419.55, 230.2, 402.75, 232.05);
    CGContextAddQuadCurveToPoint(ctx, 388.65, 233.6, 372.35, 230.95);
    CGContextAddQuadCurveToPoint(ctx, 357.25, 228.5, 351.45, 224.6);
    CGContextAddQuadCurveToPoint(ctx, 334.65, 213.4, 358.65, 243);
    CGContextAddQuadCurveToPoint(ctx, 377.05, 263, 342.65, 246.2);
    CGContextAddQuadCurveToPoint(ctx, 321.25, 238.25, 300.15, 247.9);
    CGContextAddQuadCurveToPoint(ctx, 293.75, 250.85, 287.15, 255.5);
    CGContextAddLineToPoint(ctx, 281.05, 259.8);
    CGContextAddLineToPoint(ctx, 275.75, 261.3);
    CGContextAddQuadCurveToPoint(ctx, 272.75, 261.5, 272.25, 257.4);
    CGContextAddQuadCurveToPoint(ctx, 271.2, 249.15, 264.35, 247.4);
    CGContextAddQuadCurveToPoint(ctx, 253.7, 244.7, 232.25, 260.6);
    CGContextAddQuadCurveToPoint(ctx, 198.65, 285.4, 188.25, 269.4);
    CGContextAddLineToPoint(ctx, 181.05, 264.6);
    CGContextAddQuadCurveToPoint(ctx, 168.25, 242.6, 177.85, 298.2);
    CGContextAddQuadCurveToPoint(ctx, 186.65, 332.6, 323.45, 280.6);
    CGContextAddQuadCurveToPoint(ctx, 492.25, 250.2, 503.45, 246.2);
    CGContextAddQuadCurveToPoint(ctx, 514.65, 242.2, 600.25, 247.8);
    CGContextAddLineToPoint(ctx, 595.45, 225.4);
    CGContextAddQuadCurveToPoint(ctx, 555.75, 197, 531.85, 199.1);
    CGContextAddQuadCurveToPoint(ctx, 525.9, 199.65, 517.15, 203);
    CGContextAddQuadCurveToPoint(ctx, 510.25, 205.65, 506.65, 204.6);
    CGContextAddQuadCurveToPoint(ctx, 498.4, 202.2, 495.55, 206);
    CGContextAddLineToPoint(ctx, 493.9, 209.1);
    CGContextAddQuadCurveToPoint(ctx, 493.2, 210.75, 492.25, 211);
    CGContextAddQuadCurveToPoint(ctx, 490.9, 211.35, 469.05, 199.4);
    CGContextAddQuadCurveToPoint(ctx, 447, 187.35, 443.45, 187.8);
    CGContextAddQuadCurveToPoint(ctx, 441.6, 188.05, 436, 185);
    CGContextAddLineToPoint(ctx, 427.1, 180.55);
    CGContextClosePath(ctx);
}

static void def_path_29(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.65, 294.6);
    CGContextAddQuadCurveToPoint(ctx, 197.45, 288.6, 202.25, 294.2);
    CGContextAddQuadCurveToPoint(ctx, 207.05, 299.8, 211.85, 304.2);
    CGContextAddQuadCurveToPoint(ctx, 213.45, 314.6, 219.65, 316.6);
    CGContextAddQuadCurveToPoint(ctx, 237.65, 320.8, 236.25, 319.4);
    CGContextAddQuadCurveToPoint(ctx, 215.45, 306.2, 222.65, 294.6);
    CGContextClosePath(ctx);
}

static void def_path_30(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 379.75, 278.6);
    CGContextAddQuadCurveToPoint(ctx, 377.4, 297.5, 381.45, 302.6);
    CGContextAddQuadCurveToPoint(ctx, 384.65, 306.6, 393.45, 339.8);
    CGContextAddLineToPoint(ctx, 405.45, 303);
    CGContextAddQuadCurveToPoint(ctx, 417.05, 287, 397.05, 268.6);
    CGContextAddQuadCurveToPoint(ctx, 361.85, 239.8, 362.65, 247);
    CGContextAddQuadCurveToPoint(ctx, 380.35, 273.8, 379.75, 278.6);
    CGContextClosePath(ctx);
}

static void def_path_31(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 254.65, 347.8);
    CGContextAddLineToPoint(ctx, 246.65, 350.2);
    CGContextAddQuadCurveToPoint(ctx, 262.1, 323.6, 251.45, 322.2);
    CGContextAddLineToPoint(ctx, 242.65, 321.4);
    CGContextAddQuadCurveToPoint(ctx, 253.85, 328.6, 239.45, 359.8);
    CGContextAddLineToPoint(ctx, 245.85, 357.4);
    CGContextAddQuadCurveToPoint(ctx, 245.05, 368.6, 241.85, 371);
    CGContextAddLineToPoint(ctx, 249.05, 367.8);
    CGContextAddQuadCurveToPoint(ctx, 253.85, 375.8, 249.85, 380.6);
    CGContextAddQuadCurveToPoint(ctx, 266.65, 388.6, 265.85, 395);
    CGContextAddQuadCurveToPoint(ctx, 272.25, 387, 268.25, 380.6);
    CGContextAddQuadCurveToPoint(ctx, 267.1, 378.75, 264.8, 377.2);
    CGContextAddLineToPoint(ctx, 261.25, 374.7);
    CGContextAddQuadCurveToPoint(ctx, 257.35, 371, 257.85, 359.8);
    CGContextAddLineToPoint(ctx, 249.05, 363);
    CGContextAddQuadCurveToPoint(ctx, 254.65, 354.2, 254.65, 347.8);
    CGContextClosePath(ctx);
}

static void def_path_32(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 275.05, 334.6);
    CGContextAddQuadCurveToPoint(ctx, 270.5, 335.9, 256.25, 343.9);
    CGContextAddQuadCurveToPoint(ctx, 238.9, 353.65, 235.05, 359.8);
    CGContextAddQuadCurveToPoint(ctx, 269.45, 335.4, 275.05, 338.2);
    CGContextAddQuadCurveToPoint(ctx, 277.85, 333.8, 275.05, 334.6);
    CGContextClosePath(ctx);
}

static void def_path_33(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 285.45, 342.6);
    CGContextAddQuadCurveToPoint(ctx, 280.9, 343.9, 266.65, 351.9);
    CGContextAddQuadCurveToPoint(ctx, 249.3, 361.65, 245.45, 367.8);
    CGContextAddQuadCurveToPoint(ctx, 279.85, 343.4, 285.45, 346.2);
    CGContextAddQuadCurveToPoint(ctx, 288.25, 341.8, 285.45, 342.6);
    CGContextClosePath(ctx);
}

static void def_path_34(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 298.65, 327.4);
    CGContextAddQuadCurveToPoint(ctx, 294.1, 328.7, 279.85, 336.7);
    CGContextAddQuadCurveToPoint(ctx, 262.5, 346.45, 258.65, 352.6);
    CGContextAddQuadCurveToPoint(ctx, 293.05, 328.2, 298.65, 331);
    CGContextAddQuadCurveToPoint(ctx, 301.45, 326.6, 298.65, 327.4);
    CGContextClosePath(ctx);
}

static void def_path_35(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 272.65, 369.4);
    CGContextAddQuadCurveToPoint(ctx, 268.1, 370.7, 251.45, 380.1);
    CGContextAddQuadCurveToPoint(ctx, 231.7, 391.25, 227.85, 397.4);
    CGContextAddQuadCurveToPoint(ctx, 269.85, 371.8, 275.45, 374.6);
    CGContextAddQuadCurveToPoint(ctx, 275.45, 368.6, 272.65, 369.4);
    CGContextClosePath(ctx);
}

static void def_path_36(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 275.05, 359.8);
    CGContextAddQuadCurveToPoint(ctx, 272.35, 359.8, 259.35, 366.8);
    CGContextAddQuadCurveToPoint(ctx, 244.55, 374.8, 240.65, 381);
    CGContextAddQuadCurveToPoint(ctx, 270.25, 359.4, 276.65, 363.8);
    CGContextAddQuadCurveToPoint(ctx, 277.85, 359, 275.05, 359.8);
    CGContextClosePath(ctx);
}

static void def_path_37(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 291.05, 431);
    CGContextAddQuadCurveToPoint(ctx, 295.05, 423.4, 299.05, 425);
    CGContextAddQuadCurveToPoint(ctx, 305.45, 423, 304.65, 434.6);
    CGContextAddQuadCurveToPoint(ctx, 304.65, 443.25, 304.1, 446.65);
    CGContextAddQuadCurveToPoint(ctx, 309.5, 421.4, 311.85, 421);
    CGContextAddQuadCurveToPoint(ctx, 319.75, 419.8, 324.55, 428.4);
    CGContextAddQuadCurveToPoint(ctx, 320.75, 421.05, 325.45, 423);
    CGContextAddQuadCurveToPoint(ctx, 335.05, 424.4, 338.65, 429.95);
    CGContextAddQuadCurveToPoint(ctx, 333, 419.6, 338.25, 422.6);
    CGContextAddQuadCurveToPoint(ctx, 345.05, 422.6, 346.25, 429);
    CGContextAddQuadCurveToPoint(ctx, 354.65, 450.2, 356.65, 451.8);
    CGContextAddQuadCurveToPoint(ctx, 349.05, 430.2, 350.65, 430.2);
    CGContextAddQuadCurveToPoint(ctx, 348.65, 418.2, 353.85, 433);
    CGContextAddQuadCurveToPoint(ctx, 350.65, 419, 356.25, 419.8);
    CGContextAddQuadCurveToPoint(ctx, 358, 420.05, 364.4, 425.2);
    CGContextAddQuadCurveToPoint(ctx, 369.85, 429.6, 374.65, 428.2);
    CGContextAddQuadCurveToPoint(ctx, 384.25, 433.8, 386.25, 364.6);
    CGContextAddLineToPoint(ctx, 262.25, 411.4);
    CGContextAddLineToPoint(ctx, 252.25, 419);
    CGContextAddQuadCurveToPoint(ctx, 262.65, 411.4, 266.25, 412.6);
    CGContextAddQuadCurveToPoint(ctx, 259.45, 423.8, 258.65, 429);
    CGContextAddQuadCurveToPoint(ctx, 269.05, 416.2, 274.65, 416.6);
    CGContextAddQuadCurveToPoint(ctx, 282.25, 417, 282.25, 427.8);
    CGContextAddQuadCurveToPoint(ctx, 287.85, 417.4, 291.05, 417.8);
    CGContextAddQuadCurveToPoint(ctx, 292.25, 424.2, 291.05, 431);
    CGContextClosePath(ctx);
}

static void def_path_38(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 386.25, 303.8);
    CGContextAddLineToPoint(ctx, 385.45, 302.6);
    CGContextAddLineToPoint(ctx, 375.85, 296.2);
    CGContextAddQuadCurveToPoint(ctx, 370.55, 294.55, 356, 299.15);
    CGContextAddQuadCurveToPoint(ctx, 340.6, 304.05, 335.85, 310.2);
    CGContextAddQuadCurveToPoint(ctx, 329.05, 319, 321.85, 318.6);
    CGContextAddQuadCurveToPoint(ctx, 281.85, 312.6, 267.05, 318.6);
    CGContextAddQuadCurveToPoint(ctx, 270.05, 320.35, 271.2, 336.85);
    CGContextAddLineToPoint(ctx, 272.65, 363.8);
    CGContextAddQuadCurveToPoint(ctx, 273.85, 378.2, 269.45, 386.6);
    CGContextAddQuadCurveToPoint(ctx, 255.45, 401.8, 258.25, 409.8);
    CGContextAddQuadCurveToPoint(ctx, 261.05, 417.8, 290.25, 419.4);
    CGContextAddQuadCurveToPoint(ctx, 315.85, 415.4, 336.65, 419.4);
    CGContextAddQuadCurveToPoint(ctx, 349.75, 421.05, 359.45, 413.3);
    CGContextAddQuadCurveToPoint(ctx, 366.5, 407.65, 375.05, 393.4);
    CGContextAddQuadCurveToPoint(ctx, 381.85, 382.1, 390.8, 354.45);
    CGContextAddQuadCurveToPoint(ctx, 399.4, 328, 399.05, 321.8);
    CGContextAddQuadCurveToPoint(ctx, 398.65, 314.2, 386.25, 303.8);
    CGContextClosePath(ctx);
}

static void def_path_39(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 371.05, 323.8);
    CGContextAddQuadCurveToPoint(ctx, 353.45, 320.6, 289.05, 320.6);
    CGContextAddQuadCurveToPoint(ctx, 297.45, 339, 267.85, 404.2);
    CGContextAddQuadCurveToPoint(ctx, 266, 405.7, 274.65, 408.3);
    CGContextAddQuadCurveToPoint(ctx, 283.75, 411, 290.65, 409.4);
    CGContextAddQuadCurveToPoint(ctx, 301.6, 406.75, 341.85, 411);
    CGContextAddQuadCurveToPoint(ctx, 365.45, 395.4, 378.25, 351);
    CGContextAddQuadCurveToPoint(ctx, 388.65, 327, 371.05, 323.8);
    CGContextClosePath(ctx);
}

static void def_path_40(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 381.25, 338.6);
    CGContextAddQuadCurveToPoint(ctx, 381.6, 330.7, 373.65, 315.8);
    CGContextAddQuadCurveToPoint(ctx, 365.6, 300.6, 362.65, 306.2);
    CGContextAddQuadCurveToPoint(ctx, 351.45, 327, 289.05, 320.6);
    CGContextAddQuadCurveToPoint(ctx, 292.9, 328.95, 287, 351.5);
    CGContextAddLineToPoint(ctx, 303.45, 341.8);
    CGContextAddQuadCurveToPoint(ctx, 318.25, 353, 381.25, 338.6);
    CGContextClosePath(ctx);
}

static void def_path_41(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 340.65, 390.2);
    CGContextAddQuadCurveToPoint(ctx, 343, 389.4, 343.45, 385.4);
    CGContextAddQuadCurveToPoint(ctx, 344, 380.05, 349.05, 375);
    CGContextAddLineToPoint(ctx, 355.45, 366.8);
    CGContextAddQuadCurveToPoint(ctx, 360.25, 360.05, 359.45, 359.8);
    CGContextAddQuadCurveToPoint(ctx, 358.25, 359.4, 291.45, 367.8);
    CGContextAddQuadCurveToPoint(ctx, 293.45, 375, 291.05, 379);
    CGContextAddLineToPoint(ctx, 288.25, 380.2);
    CGContextAddQuadCurveToPoint(ctx, 289.45, 383.8, 295.45, 385.4);
    CGContextAddQuadCurveToPoint(ctx, 297.45, 389.8, 299.85, 390.2);
    CGContextAddLineToPoint(ctx, 304.85, 393.2);
    CGContextAddQuadCurveToPoint(ctx, 308.7, 395.7, 311.05, 395);
    CGContextAddLineToPoint(ctx, 326.25, 389.8);
    CGContextAddQuadCurveToPoint(ctx, 331.85, 386.6, 340.65, 390.2);
    CGContextClosePath(ctx);
}

static void def_path_42(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 369.45, 310.2);
    CGContextAddQuadCurveToPoint(ctx, 365.95, 303.2, 356.75, 302.95);
    CGContextAddQuadCurveToPoint(ctx, 346.05, 302.7, 335.05, 313.4);
    CGContextAddQuadCurveToPoint(ctx, 329.55, 318.75, 325, 319.85);
    CGContextAddLineToPoint(ctx, 316.3, 319.55);
    CGContextAddQuadCurveToPoint(ctx, 308.6, 317.85, 304.95, 317.6);
    CGContextAddQuadCurveToPoint(ctx, 296.75, 317.05, 287.05, 319.4);
    CGContextAddQuadCurveToPoint(ctx, 284.25, 341.8, 287.45, 350.2);
    CGContextAddQuadCurveToPoint(ctx, 289.6, 355.8, 289.75, 359.05);
    CGContextAddQuadCurveToPoint(ctx, 289.85, 360.7, 289.05, 364.6);
    CGContextAddQuadCurveToPoint(ctx, 288.45, 367.65, 291.25, 373.85);
    CGContextAddQuadCurveToPoint(ctx, 294.1, 380.15, 298.25, 384.6);
    CGContextAddLineToPoint(ctx, 310.25, 386.2);
    CGContextAddQuadCurveToPoint(ctx, 325.45, 382.6, 334.65, 385.4);
    CGContextAddQuadCurveToPoint(ctx, 343.65, 386.75, 347.05, 371.8);
    CGContextAddQuadCurveToPoint(ctx, 351.85, 365.4, 359.05, 362.6);
    CGContextAddQuadCurveToPoint(ctx, 364.3, 360.55, 368.45, 338.35);
    CGContextAddQuadCurveToPoint(ctx, 372.55, 316.4, 369.45, 310.2);
    CGContextClosePath(ctx);
}

static void def_path_43(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 250.25, 381.8);
    CGContextAddQuadCurveToPoint(ctx, 260.65, 402.2, 267.45, 405);
    CGContextAddQuadCurveToPoint(ctx, 283.85, 409, 288.65, 394.2);
    CGContextAddQuadCurveToPoint(ctx, 287.85, 392.2, 283.45, 391.8);
    CGContextAddQuadCurveToPoint(ctx, 261.05, 388.2, 252.65, 375.8);
    CGContextAddQuadCurveToPoint(ctx, 245.85, 370.2, 250.25, 381.8);
    CGContextClosePath(ctx);
}

static void def_path_44(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 369.9, 318.5);
    CGContextAddQuadCurveToPoint(ctx, 370.5, 312.35, 369.45, 310.2);
    CGContextAddQuadCurveToPoint(ctx, 364.85, 301.1, 353.9, 302.9);
    CGContextAddQuadCurveToPoint(ctx, 344.1, 304.6, 335.05, 313.4);
    CGContextAddQuadCurveToPoint(ctx, 329.55, 318.75, 325, 319.85);
    CGContextAddLineToPoint(ctx, 316.3, 319.55);
    CGContextAddQuadCurveToPoint(ctx, 308.6, 317.85, 304.95, 317.6);
    CGContextAddQuadCurveToPoint(ctx, 296.75, 317.05, 287.05, 319.4);
    CGContextAddQuadCurveToPoint(ctx, 285.3, 333.35, 286.15, 343.4);
    CGContextAddQuadCurveToPoint(ctx, 323.45, 331.8, 324.25, 337.4);
    CGContextAddQuadCurveToPoint(ctx, 325.85, 334.2, 335.05, 334.2);
    CGContextAddLineToPoint(ctx, 354.65, 333.25);
    CGContextAddQuadCurveToPoint(ctx, 367.55, 332.05, 368.6, 330.25);
    CGContextAddLineToPoint(ctx, 369.9, 318.5);
    CGContextClosePath(ctx);
}

static void def_path_45(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 325.45, 320.2);
    CGContextAddQuadCurveToPoint(ctx, 330.25, 325, 326.65, 334.6);
    CGContextAddQuadCurveToPoint(ctx, 312.25, 350.6, 314.25, 364.6);
}

static void def_path_46(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 281.85, 399);
    CGContextAddQuadCurveToPoint(ctx, 273.05, 392.2, 277.45, 405);
    CGContextAddQuadCurveToPoint(ctx, 278.25, 407.1, 281.45, 405.6);
    CGContextAddQuadCurveToPoint(ctx, 284.15, 404.35, 285.45, 402.6);
    CGContextAddQuadCurveToPoint(ctx, 286.65, 401, 281.85, 399);
    CGContextClosePath(ctx);
}

static void def_path_47(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 288.9, 404.3);
    CGContextAddQuadCurveToPoint(ctx, 290.45, 403.85, 286, 401.4);
    CGContextAddQuadCurveToPoint(ctx, 278.95, 395.95, 282.5, 406.2);
    CGContextAddLineToPoint(ctx, 286.35, 406.4);
    CGContextAddQuadCurveToPoint(ctx, 287.1, 404.75, 288.9, 404.3);
    CGContextClosePath(ctx);
}

static void def_path_48(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 293.7, 404.3);
    CGContextAddQuadCurveToPoint(ctx, 295.2, 403.7, 290.8, 401.4);
    CGContextAddQuadCurveToPoint(ctx, 283.75, 395.95, 287.3, 406.2);
    CGContextAddLineToPoint(ctx, 291.6, 406.4);
    CGContextAddQuadCurveToPoint(ctx, 292.95, 404.55, 293.7, 404.3);
    CGContextClosePath(ctx);
}

static void def_path_49(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 300.3, 404.5);
    CGContextAddQuadCurveToPoint(ctx, 301.8, 403.95, 297.4, 401.6);
    CGContextAddQuadCurveToPoint(ctx, 290.35, 396.15, 293.9, 406.4);
    CGContextAddLineToPoint(ctx, 298.35, 406.5);
    CGContextAddQuadCurveToPoint(ctx, 299.85, 404.65, 300.3, 404.5);
    CGContextClosePath(ctx);
}

static void def_path_50(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 306.75, 404.4);
    CGContextAddQuadCurveToPoint(ctx, 307.75, 403.1, 303.9, 401.5);
    CGContextAddQuadCurveToPoint(ctx, 296.85, 396.1, 300.35, 406.3);
    CGContextAddLineToPoint(ctx, 305.55, 406.55);
    CGContextAddLineToPoint(ctx, 306.75, 404.4);
    CGContextClosePath(ctx);
}

static void def_path_51(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 315.05, 404.6);
    CGContextAddQuadCurveToPoint(ctx, 316.25, 403, 311.45, 401);
    CGContextAddQuadCurveToPoint(ctx, 302.25, 394.6, 307.05, 407);
    CGContextAddQuadCurveToPoint(ctx, 312.1, 408.5, 313.6, 407.3);
    CGContextAddLineToPoint(ctx, 315.05, 404.6);
    CGContextClosePath(ctx);
}

static void def_path_52(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 278.65, 389.8);
    CGContextAddQuadCurveToPoint(ctx, 291.85, 387, 297.85, 390.2);
    CGContextAddQuadCurveToPoint(ctx, 303.85, 391.4, 305.05, 391);
    CGContextAddLineToPoint(ctx, 309.45, 390.2);
}

static void def_path_53(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 312.65, 398.6);
    CGContextAddQuadCurveToPoint(ctx, 324.65, 385, 336.65, 389.4);
    CGContextAddLineToPoint(ctx, 342.35, 389.55);
    CGContextAddLineToPoint(ctx, 344.85, 380.85);
    CGContextAddQuadCurveToPoint(ctx, 346.3, 377.7, 349.45, 375.8);
}

static void def_path_54(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 315.45, 403.8);
    CGContextAddQuadCurveToPoint(ctx, 315.45, 409, 323.85, 408.6);
    CGContextAddQuadCurveToPoint(ctx, 334.65, 408.2, 335.05, 405.4);
    CGContextAddQuadCurveToPoint(ctx, 335.4, 402.8, 334.1, 396.1);
    CGContextAddQuadCurveToPoint(ctx, 332.55, 388.3, 329.85, 382.6);
    CGContextAddQuadCurveToPoint(ctx, 325.85, 371.8, 323.05, 384.6);
    CGContextAddQuadCurveToPoint(ctx, 321.25, 392.75, 318.8, 397.95);
    CGContextAddLineToPoint(ctx, 315.45, 403.8);
    CGContextClosePath(ctx);
}

static void def_path_55(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 343.85, 389.8);
    CGContextAddQuadCurveToPoint(ctx, 347.45, 387.4, 349.85, 388.6);
}

static void def_path_56(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 350.35, 373.4);
    CGContextAddQuadCurveToPoint(ctx, 353.25, 368.5, 358.05, 367.7);
}

static void def_path_57(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 293.85, 413.8);
    CGContextAddQuadCurveToPoint(ctx, 302.25, 411.8, 293.45, 411.8);
    CGContextAddQuadCurveToPoint(ctx, 289.05, 413.4, 271.05, 410.2);
    CGContextAddQuadCurveToPoint(ctx, 261.45, 407, 273.05, 412.6);
    CGContextAddLineToPoint(ctx, 293.85, 413.8);
    CGContextClosePath(ctx);
}

static void def_path_58(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 304.65, 317.8);
    CGContextAddLineToPoint(ctx, 285.05, 317);
    CGContextAddQuadCurveToPoint(ctx, 280.1, 317, 282.65, 318.6);
    CGContextAddQuadCurveToPoint(ctx, 285.85, 320.6, 304.25, 353.4);
    CGContextAddQuadCurveToPoint(ctx, 307.05, 359, 308.25, 356.2);
    CGContextAddQuadCurveToPoint(ctx, 311.85, 348.6, 304.65, 317.8);
    CGContextClosePath(ctx);
}

static void def_path_59(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 229.45, 318.6);
    CGContextAddLineToPoint(ctx, 207.95, 314.3);
    CGContextAddLineToPoint(ctx, 213.05, 326.6);
    CGContextAddQuadCurveToPoint(ctx, 214.4, 329.55, 222.65, 337.8);
    CGContextAddLineToPoint(ctx, 233.45, 347.8);
    CGContextAddQuadCurveToPoint(ctx, 236.4, 350.1, 238, 349.65);
    CGContextAddQuadCurveToPoint(ctx, 239.7, 349.2, 237.45, 345.8);
    CGContextAddQuadCurveToPoint(ctx, 234.25, 341, 229.45, 318.6);
    CGContextClosePath(ctx);
}

static void def_path_60(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 236.6, 322.6);
    CGContextAddQuadCurveToPoint(ctx, 235.6, 320.35, 229.8, 318.8);
    CGContextAddQuadCurveToPoint(ctx, 229.35, 319.2, 230.75, 323.4);
    CGContextAddLineToPoint(ctx, 233.2, 329.25);
    CGContextAddQuadCurveToPoint(ctx, 234.4, 331.4, 235.4, 328.1);
    CGContextAddQuadCurveToPoint(ctx, 237.65, 324.8, 236.6, 322.6);
    CGContextClosePath(ctx);
}

static void def_path_61(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 237.05, 323.8);
    CGContextAddLineToPoint(ctx, 243.85, 324);
    CGContextAddQuadCurveToPoint(ctx, 246.05, 324.45, 248.5, 324);
    CGContextAddLineToPoint(ctx, 258.55, 324.3);
    CGContextAddQuadCurveToPoint(ctx, 261, 324.3, 262.65, 325);
    CGContextAddQuadCurveToPoint(ctx, 264.75, 325.9, 266.85, 325.4);
    CGContextAddQuadCurveToPoint(ctx, 268.95, 324.9, 269.85, 323.4);
    CGContextAddQuadCurveToPoint(ctx, 271.05, 321.4, 275.85, 317.2);
    CGContextAddQuadCurveToPoint(ctx, 263.05, 319, 260.25, 319.8);
    CGContextAddQuadCurveToPoint(ctx, 237.85, 321, 229.85, 318.6);
    CGContextAddQuadCurveToPoint(ctx, 233.45, 323.8, 237.05, 323.8);
    CGContextClosePath(ctx);
}

static void def_path_62(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 267.6, 324.7);
    CGContextAddQuadCurveToPoint(ctx, 267.2, 327.1, 272.85, 330.8);
    CGContextAddQuadCurveToPoint(ctx, 275.6, 335.4, 276.2, 333);
    CGContextAddQuadCurveToPoint(ctx, 276.65, 331.2, 275.8, 325.15);
    CGContextAddQuadCurveToPoint(ctx, 275.05, 319.1, 274.45, 318.8);
    CGContextAddQuadCurveToPoint(ctx, 268, 322.3, 267.6, 324.7);
    CGContextClosePath(ctx);
}

static void def_path_63(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 236.95, 324.25);
    CGContextAddQuadCurveToPoint(ctx, 243.95, 335.45, 244.2, 324.25);
    CGContextAddQuadCurveToPoint(ctx, 244.75, 323, 243, 322.95);
    CGContextAddQuadCurveToPoint(ctx, 240.6, 322.9, 238.2, 321.5);
    CGContextAddQuadCurveToPoint(ctx, 237.75, 321.25, 236.95, 324.25);
    CGContextClosePath(ctx);
}

static void def_path_64(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 251.45, 324.4);
    CGContextAddQuadCurveToPoint(ctx, 251.45, 324.1, 249.7, 323.95);
    CGContextAddQuadCurveToPoint(ctx, 247.9, 323.75, 245.55, 321.95);
    CGContextAddQuadCurveToPoint(ctx, 244.75, 321.4, 244.15, 324.5);
    CGContextAddQuadCurveToPoint(ctx, 252.05, 335.7, 251.45, 324.4);
    CGContextClosePath(ctx);
}

static void def_path_65(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 258.65, 325.5);
    CGContextAddQuadCurveToPoint(ctx, 258.75, 324.25, 257.1, 323.95);
    CGContextAddLineToPoint(ctx, 253.35, 322.25);
    CGContextAddQuadCurveToPoint(ctx, 252.3, 321.75, 251.35, 324.5);
    CGContextAddQuadCurveToPoint(ctx, 259.3, 335.15, 258.65, 325.5);
    CGContextClosePath(ctx);
}

static void def_path_66(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 266.5, 326.4);
    CGContextAddQuadCurveToPoint(ctx, 268.1, 325, 266.4, 324.8);
    CGContextAddQuadCurveToPoint(ctx, 264.5, 324.55, 261.25, 322.5);
    CGContextAddQuadCurveToPoint(ctx, 260, 321.75, 258.25, 324.6);
    CGContextAddQuadCurveToPoint(ctx, 266.15, 336.15, 266.5, 326.4);
    CGContextClosePath(ctx);
}

static void def_path_67(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 214.4, 326.6);
    CGContextAddLineToPoint(ctx, 222.05, 328.15);
    CGContextAddLineToPoint(ctx, 230.9, 328.35);
    CGContextAddLineToPoint(ctx, 228.55, 319.25);
    CGContextAddLineToPoint(ctx, 209.7, 315.45);
    CGContextAddQuadCurveToPoint(ctx, 211.8, 321.6, 214.4, 326.6);
    CGContextClosePath(ctx);
}

static void def_path_68(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 283.5, 318.8);
    CGContextAddLineToPoint(ctx, 287.15, 323.45);
    CGContextAddQuadCurveToPoint(ctx, 295.35, 321.65, 305.4, 323.7);
    CGContextAddLineToPoint(ctx, 304.2, 318.05);
    CGContextAddLineToPoint(ctx, 285.75, 317.3);
    CGContextAddQuadCurveToPoint(ctx, 281.15, 317.3, 283.5, 318.8);
    CGContextClosePath(ctx);
}

static void def_path_69(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 339.85, 86.75);
    CGContextAddQuadCurveToPoint(ctx, 329.8, 86.2, 316.55, 97.85);
    CGContextAddQuadCurveToPoint(ctx, 308.6, 104.85, 304.2, 110.95);
    CGContextAddQuadCurveToPoint(ctx, 303.35, 112.05, 306.25, 132.3);
    CGContextAddLineToPoint(ctx, 310.35, 156.7);
    CGContextAddQuadCurveToPoint(ctx, 311.7, 162.45, 309.05, 188.85);
    CGContextAddQuadCurveToPoint(ctx, 326.15, 184.3, 327.3, 182.15);
    CGContextAddQuadCurveToPoint(ctx, 326.85, 183.3, 340.75, 185.3);
    CGContextAddQuadCurveToPoint(ctx, 358.95, 187.95, 377.95, 169.7);
    CGContextAddQuadCurveToPoint(ctx, 384.9, 163.05, 390.25, 155);
    CGContextAddQuadCurveToPoint(ctx, 395, 147.95, 395.75, 143.95);
    CGContextAddQuadCurveToPoint(ctx, 397.5, 134.3, 387.35, 122.4);
    CGContextAddQuadCurveToPoint(ctx, 388.3, 120.15, 385.4, 111.45);
    CGContextAddQuadCurveToPoint(ctx, 382.5, 102.9, 378.55, 96);
    CGContextAddQuadCurveToPoint(ctx, 375.15, 90, 363.75, 88.25);
    CGContextAddLineToPoint(ctx, 339.85, 86.75);
    CGContextClosePath(ctx);
}

static void def_path_70(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 339.95, 87.85);
    CGContextAddQuadCurveToPoint(ctx, 330.1, 87.3, 317.05, 98.75);
    CGContextAddQuadCurveToPoint(ctx, 310, 105, 304.95, 111.6);
    CGContextAddQuadCurveToPoint(ctx, 304.05, 112.75, 306.95, 132.55);
    CGContextAddLineToPoint(ctx, 311, 156.55);
    CGContextAddQuadCurveToPoint(ctx, 312.3, 162.15, 309.7, 188.05);
    CGContextAddQuadCurveToPoint(ctx, 326, 183.6, 327.25, 181.5);
    CGContextAddQuadCurveToPoint(ctx, 327.2, 182.65, 340.8, 184.6);
    CGContextAddQuadCurveToPoint(ctx, 358.7, 187.15, 377.3, 169.3);
    CGContextAddQuadCurveToPoint(ctx, 384.3, 162.6, 389.4, 154.85);
    CGContextAddQuadCurveToPoint(ctx, 394.05, 147.9, 394.8, 144);
    CGContextAddQuadCurveToPoint(ctx, 396.5, 134.5, 386.6, 122.85);
    CGContextAddQuadCurveToPoint(ctx, 387.55, 120.6, 384.65, 112.1);
    CGContextAddQuadCurveToPoint(ctx, 381.85, 103.75, 377.95, 96.9);
    CGContextAddQuadCurveToPoint(ctx, 374.55, 90.95, 363.45, 89.3);
    CGContextAddLineToPoint(ctx, 339.95, 87.85);
    CGContextClosePath(ctx);
}

static void def_path_71(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 340, 88.95);
    CGContextAddQuadCurveToPoint(ctx, 330.45, 88.4, 317.55, 99.6);
    CGContextAddQuadCurveToPoint(ctx, 310.65, 105.7, 305.65, 112.25);
    CGContextAddQuadCurveToPoint(ctx, 304.75, 113.4, 307.65, 132.85);
    CGContextAddLineToPoint(ctx, 311.6, 156.35);
    CGContextAddQuadCurveToPoint(ctx, 312.85, 161.85, 310.35, 187.3);
    CGContextAddQuadCurveToPoint(ctx, 320.25, 184.4, 324.55, 182.35);
    CGContextAddQuadCurveToPoint(ctx, 326.8, 181.3, 327.35, 180.7);
    CGContextAddLineToPoint(ctx, 329.2, 181.5);
    CGContextAddQuadCurveToPoint(ctx, 332.55, 182.75, 340.85, 183.9);
    CGContextAddQuadCurveToPoint(ctx, 358.4, 186.4, 376.7, 168.85);
    CGContextAddQuadCurveToPoint(ctx, 383.5, 162.35, 388.55, 154.7);
    CGContextAddQuadCurveToPoint(ctx, 393.1, 148, 393.85, 144.05);
    CGContextAddQuadCurveToPoint(ctx, 395.55, 134.75, 385.8, 123.3);
    CGContextAddQuadCurveToPoint(ctx, 386.7, 121.05, 383.9, 112.75);
    CGContextAddQuadCurveToPoint(ctx, 381.05, 104.45, 377.3, 97.85);
    CGContextAddQuadCurveToPoint(ctx, 374, 92.05, 363.05, 90.4);
    CGContextAddLineToPoint(ctx, 340, 88.95);
    CGContextClosePath(ctx);
}

static void def_path_72(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 340.1, 90);
    CGContextAddQuadCurveToPoint(ctx, 330.65, 89.5, 318.05, 100.5);
    CGContextAddQuadCurveToPoint(ctx, 310.45, 107.15, 306.4, 112.9);
    CGContextAddQuadCurveToPoint(ctx, 305.55, 113.95, 308.35, 133.1);
    CGContextAddLineToPoint(ctx, 312.2, 156.15);
    CGContextAddQuadCurveToPoint(ctx, 313.45, 161.6, 310.95, 186.55);
    CGContextAddQuadCurveToPoint(ctx, 320.15, 183.65, 324.3, 181.6);
    CGContextAddLineToPoint(ctx, 327.1, 180);
    CGContextAddLineToPoint(ctx, 329.25, 180.8);
    CGContextAddQuadCurveToPoint(ctx, 332.85, 182.05, 340.9, 183.2);
    CGContextAddQuadCurveToPoint(ctx, 358.15, 185.65, 376.1, 168.45);
    CGContextAddQuadCurveToPoint(ctx, 382.7, 162.1, 387.7, 154.55);
    CGContextAddQuadCurveToPoint(ctx, 392.15, 147.8, 392.9, 144.1);
    CGContextAddQuadCurveToPoint(ctx, 394.6, 134.95, 385, 123.7);
    CGContextAddQuadCurveToPoint(ctx, 385.9, 121.6, 383.15, 113.4);
    CGContextAddQuadCurveToPoint(ctx, 380.45, 105.25, 376.7, 98.75);
    CGContextAddQuadCurveToPoint(ctx, 373.45, 93.05, 362.7, 91.4);
    CGContextAddLineToPoint(ctx, 340.1, 90);
    CGContextClosePath(ctx);
}

static void def_path_73(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 340.15, 91.1);
    CGContextAddQuadCurveToPoint(ctx, 330.9, 90.6, 318.55, 101.4);
    CGContextAddQuadCurveToPoint(ctx, 310.95, 108.05, 307.1, 113.55);
    CGContextAddQuadCurveToPoint(ctx, 306.3, 114.6, 309, 133.4);
    CGContextAddLineToPoint(ctx, 312.85, 156);
    CGContextAddQuadCurveToPoint(ctx, 314.05, 161.3, 311.6, 185.75);
    CGContextAddQuadCurveToPoint(ctx, 320.4, 182.9, 324.3, 180.9);
    CGContextAddLineToPoint(ctx, 327.1, 179.4);
    CGContextAddLineToPoint(ctx, 329.45, 180.15);
    CGContextAddLineToPoint(ctx, 341, 182.5);
    CGContextAddQuadCurveToPoint(ctx, 357.9, 184.95, 375.45, 168.05);
    CGContextAddQuadCurveToPoint(ctx, 381.95, 161.8, 386.85, 154.45);
    CGContextAddQuadCurveToPoint(ctx, 391.25, 147.95, 392, 144.15);
    CGContextAddQuadCurveToPoint(ctx, 393.6, 135.2, 384.25, 124.15);
    CGContextAddQuadCurveToPoint(ctx, 385.15, 122, 382.4, 114);
    CGContextAddQuadCurveToPoint(ctx, 379.8, 106.2, 376.05, 99.7);
    CGContextAddQuadCurveToPoint(ctx, 372.85, 94.05, 362.35, 92.5);
    CGContextAddLineToPoint(ctx, 340.15, 91.1);
    CGContextClosePath(ctx);
}

static void def_path_74(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 340.25, 92.2);
    CGContextAddQuadCurveToPoint(ctx, 331.2, 91.7, 319.1, 102.3);
    CGContextAddQuadCurveToPoint(ctx, 312.3, 108.3, 307.85, 114.2);
    CGContextAddQuadCurveToPoint(ctx, 307.05, 115.25, 309.75, 133.65);
    CGContextAddLineToPoint(ctx, 313.45, 155.8);
    CGContextAddQuadCurveToPoint(ctx, 314.65, 161, 312.25, 185);
    CGContextAddQuadCurveToPoint(ctx, 320.15, 182.35, 323.9, 180.35);
    CGContextAddLineToPoint(ctx, 326.75, 178.8);
    CGContextAddLineToPoint(ctx, 329.45, 179.55);
    CGContextAddLineToPoint(ctx, 341.05, 181.8);
    CGContextAddQuadCurveToPoint(ctx, 357.65, 184.15, 374.9, 167.65);
    CGContextAddQuadCurveToPoint(ctx, 381.45, 161.35, 386.1, 154.25);
    CGContextAddQuadCurveToPoint(ctx, 390.4, 147.8, 391.05, 144.2);
    CGContextAddQuadCurveToPoint(ctx, 392.65, 135.4, 383.45, 124.6);
    CGContextAddQuadCurveToPoint(ctx, 384.35, 122.55, 381.7, 114.7);
    CGContextAddQuadCurveToPoint(ctx, 379.1, 107, 375.45, 100.6);
    CGContextAddQuadCurveToPoint(ctx, 372.35, 95.15, 362, 93.55);
    CGContextAddLineToPoint(ctx, 340.25, 92.2);
    CGContextClosePath(ctx);
}

static void def_path_75(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 348.05, 153.8);
    CGContextAddQuadCurveToPoint(ctx, 332.25, 147.2, 323.45, 169);
    CGContextAddQuadCurveToPoint(ctx, 319.85, 176.2, 317.85, 178.2);
    CGContextAddQuadCurveToPoint(ctx, 315.85, 180.2, 387.45, 147.8);
    CGContextAddQuadCurveToPoint(ctx, 359.65, 155.4, 348.05, 153.8);
    CGContextClosePath(ctx);
}

static void def_path_76(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 327.45, 167.4);
    CGContextAddQuadCurveToPoint(ctx, 319.05, 176.6, 315.85, 178.2);
    CGContextAddQuadCurveToPoint(ctx, 315.45, 179.8, 321.85, 175.8);
    CGContextAddLineToPoint(ctx, 332.25, 181);
    CGContextAddQuadCurveToPoint(ctx, 347.05, 190.6, 356.65, 174.6);
    CGContextAddQuadCurveToPoint(ctx, 360.65, 163.4, 360.65, 161.4);
    CGContextAddQuadCurveToPoint(ctx, 360.65, 160.15, 371.45, 156.8);
    CGContextAddLineToPoint(ctx, 383.45, 153.4);
    CGContextAddQuadCurveToPoint(ctx, 385.2, 152.95, 388.1, 150.55);
    CGContextAddQuadCurveToPoint(ctx, 391.5, 147.7, 391.25, 145.6);
    CGContextAddQuadCurveToPoint(ctx, 362.25, 157.8, 352.25, 157.4);
    CGContextAddQuadCurveToPoint(ctx, 335.85, 152.8, 327.45, 167.4);
    CGContextClosePath(ctx);
}

static void def_path_77(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 333.65, 178.75);
    CGContextAddQuadCurveToPoint(ctx, 338.3, 181.5, 343.85, 181.5);
    CGContextAddQuadCurveToPoint(ctx, 348.9, 181.5, 352.6, 178.15);
    CGContextAddQuadCurveToPoint(ctx, 356.3, 174.85, 356.3, 170.2);
    CGContextAddQuadCurveToPoint(ctx, 356.3, 165.45, 352.6, 162.15);
    CGContextAddQuadCurveToPoint(ctx, 348.95, 158.9, 343.85, 158.9);
    CGContextAddQuadCurveToPoint(ctx, 338.6, 158.9, 333.65, 162.75);
    CGContextAddQuadCurveToPoint(ctx, 328.6, 166.75, 328.6, 171.4);
    CGContextAddQuadCurveToPoint(ctx, 328.6, 175.75, 333.65, 178.75);
    CGContextClosePath(ctx);
}

static void def_path_78(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 330.35, 166.85);
    CGContextAddQuadCurveToPoint(ctx, 335.4, 165.55, 340.25, 164.85);
    CGContextAddQuadCurveToPoint(ctx, 348.85, 163.55, 354.15, 163.85);
    CGContextAddQuadCurveToPoint(ctx, 350.5, 158.9, 343.85, 158.9);
    CGContextAddQuadCurveToPoint(ctx, 339.5, 158.9, 335.55, 161.1);
    CGContextAddQuadCurveToPoint(ctx, 331.45, 163.4, 330.35, 166.85);
    CGContextClosePath(ctx);
}

static void def_path_79(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 347.85, 163.6);
    CGContextAddQuadCurveToPoint(ctx, 351.45, 168, 352.25, 164.6);
    CGContextAddQuadCurveToPoint(ctx, 347.85, 161.4, 347.85, 163.6);
    CGContextClosePath(ctx);
}

static void def_path_80(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 339.05, 171.35);
    CGContextAddQuadCurveToPoint(ctx, 340.35, 172.75, 342.25, 172.75);
    CGContextAddQuadCurveToPoint(ctx, 344.1, 172.75, 345.4, 171.35);
    CGContextAddQuadCurveToPoint(ctx, 346.8, 170.05, 346.8, 168.2);
    CGContextAddQuadCurveToPoint(ctx, 346.8, 166.3, 345.4, 165);
    CGContextAddQuadCurveToPoint(ctx, 344.1, 163.7, 342.25, 163.7);
    CGContextAddQuadCurveToPoint(ctx, 340.35, 163.7, 339.05, 165);
    CGContextAddQuadCurveToPoint(ctx, 337.75, 166.3, 337.75, 168.2);
    CGContextAddQuadCurveToPoint(ctx, 337.75, 170.05, 339.05, 171.35);
    CGContextClosePath(ctx);
}

static void def_path_81(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 221.85, 127.4);
    CGContextAddQuadCurveToPoint(ctx, 214.25, 127, 212.65, 129);
    CGContextAddQuadCurveToPoint(ctx, 211.45, 134.2, 210.25, 134.6);
    CGContextAddQuadCurveToPoint(ctx, 207.45, 137, 209.45, 139.8);
    CGContextAddQuadCurveToPoint(ctx, 207.45, 142.2, 207.85, 146.2);
    CGContextAddLineToPoint(ctx, 215.45, 150.2);
    CGContextAddQuadCurveToPoint(ctx, 217.45, 164.6, 228.25, 169.8);
    CGContextAddQuadCurveToPoint(ctx, 233.85, 172.55, 238.25, 159.4);
    CGContextAddQuadCurveToPoint(ctx, 235.05, 138.2, 237.45, 133.8);
    CGContextAddQuadCurveToPoint(ctx, 248.25, 123.8, 247.85, 120.2);
    CGContextAddQuadCurveToPoint(ctx, 247.45, 102.2, 246.25, 101.4);
    CGContextAddQuadCurveToPoint(ctx, 236.9, 95.15, 231.45, 101);
    CGContextAddQuadCurveToPoint(ctx, 221.05, 119, 221.85, 125.4);
    CGContextAddLineToPoint(ctx, 221.85, 127.4);
    CGContextClosePath(ctx);
}

static void def_path_82(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.5, 126.95);
    CGContextAddLineToPoint(ctx, 222.5, 128.75);
    CGContextAddQuadCurveToPoint(ctx, 215.65, 128.4, 214.2, 130.2);
    CGContextAddQuadCurveToPoint(ctx, 213.15, 134.9, 212.05, 135.25);
    CGContextAddQuadCurveToPoint(ctx, 209.55, 137.4, 211.35, 139.9);
    CGContextAddQuadCurveToPoint(ctx, 209.55, 142.1, 209.9, 145.7);
    CGContextAddLineToPoint(ctx, 216.75, 149.3);
    CGContextAddQuadCurveToPoint(ctx, 218.55, 162.25, 228.25, 166.9);
    CGContextAddQuadCurveToPoint(ctx, 233.3, 169.35, 237.25, 157.55);
    CGContextAddQuadCurveToPoint(ctx, 234.35, 138.5, 236.55, 134.5);
    CGContextAddQuadCurveToPoint(ctx, 246.25, 125.5, 245.9, 122.3);
    CGContextAddQuadCurveToPoint(ctx, 245.55, 106.1, 244.45, 105.35);
    CGContextAddQuadCurveToPoint(ctx, 235.9, 99.9, 231.15, 105);
    CGContextAddQuadCurveToPoint(ctx, 221.75, 121.2, 222.5, 126.95);
    CGContextClosePath(ctx);
}

static void def_path_83(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222, 127.75);
    CGContextAddQuadCurveToPoint(ctx, 214.6, 127.35, 213.05, 129.3);
    CGContextAddQuadCurveToPoint(ctx, 211.85, 134.35, 210.7, 134.75);
    CGContextAddQuadCurveToPoint(ctx, 207.95, 137.1, 209.9, 139.85);
    CGContextAddQuadCurveToPoint(ctx, 207.95, 142.15, 208.35, 146.05);
    CGContextAddLineToPoint(ctx, 215.75, 149.95);
    CGContextAddQuadCurveToPoint(ctx, 217.7, 164, 228.25, 169.1);
    CGContextAddQuadCurveToPoint(ctx, 233.75, 171.75, 238, 158.95);
    CGContextAddQuadCurveToPoint(ctx, 234.9, 138.25, 237.2, 134);
    CGContextAddQuadCurveToPoint(ctx, 247.75, 124.25, 247.35, 120.7);
    CGContextAddQuadCurveToPoint(ctx, 246.95, 103.15, 245.8, 102.4);
    CGContextAddQuadCurveToPoint(ctx, 237.2, 95.75, 231.35, 102);
    CGContextAddQuadCurveToPoint(ctx, 221.25, 119.55, 222, 125.8);
    CGContextAddLineToPoint(ctx, 222, 127.75);
    CGContextClosePath(ctx);
}

static void def_path_84(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.15, 128.1);
    CGContextAddQuadCurveToPoint(ctx, 214.95, 127.7, 213.45, 129.6);
    CGContextAddQuadCurveToPoint(ctx, 212.3, 134.55, 211.15, 134.9);
    CGContextAddQuadCurveToPoint(ctx, 208.5, 137.2, 210.4, 139.85);
    CGContextAddQuadCurveToPoint(ctx, 208.5, 142.15, 208.85, 145.95);
    CGContextAddLineToPoint(ctx, 216.1, 149.75);
    CGContextAddQuadCurveToPoint(ctx, 218, 163.4, 228.25, 168.35);
    CGContextAddQuadCurveToPoint(ctx, 233.6, 170.9, 237.75, 158.5);
    CGContextAddQuadCurveToPoint(ctx, 234.7, 138.35, 237, 134.15);
    CGContextAddQuadCurveToPoint(ctx, 247.25, 124.65, 246.85, 121.25);
    CGContextAddQuadCurveToPoint(ctx, 246.5, 104.15, 245.35, 103.4);
    CGContextAddQuadCurveToPoint(ctx, 243.35, 101.4, 240.05, 100.5);
    CGContextAddQuadCurveToPoint(ctx, 234.9, 99.15, 231.3, 103);
    CGContextAddQuadCurveToPoint(ctx, 221.4, 120.1, 222.15, 126.2);
    CGContextAddLineToPoint(ctx, 222.15, 128.1);
    CGContextClosePath(ctx);
}

static void def_path_85(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.35, 126.55);
    CGContextAddLineToPoint(ctx, 222.35, 128.4);
    CGContextAddQuadCurveToPoint(ctx, 215.3, 128.05, 213.8, 129.9);
    CGContextAddQuadCurveToPoint(ctx, 212.7, 134.7, 211.6, 135.1);
    CGContextAddQuadCurveToPoint(ctx, 209, 137.3, 210.85, 139.9);
    CGContextAddQuadCurveToPoint(ctx, 209, 142.1, 209.4, 145.8);
    CGContextAddLineToPoint(ctx, 216.4, 149.5);
    CGContextAddQuadCurveToPoint(ctx, 218.25, 162.85, 228.25, 167.65);
    CGContextAddQuadCurveToPoint(ctx, 233.45, 170.15, 237.5, 158);
    CGContextAddQuadCurveToPoint(ctx, 234.55, 138.4, 236.75, 134.35);
    CGContextAddQuadCurveToPoint(ctx, 246.75, 125.1, 246.4, 121.75);
    CGContextAddQuadCurveToPoint(ctx, 246, 105.1, 244.9, 104.35);
    CGContextAddQuadCurveToPoint(ctx, 243.25, 102.55, 239.75, 101.6);
    CGContextAddQuadCurveToPoint(ctx, 234.7, 100.25, 231.2, 104);
    CGContextAddQuadCurveToPoint(ctx, 221.6, 120.65, 222.35, 126.55);
    CGContextClosePath(ctx);
}

static void def_path_86(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.5, 126.95);
    CGContextAddLineToPoint(ctx, 222.5, 128.75);
    CGContextAddQuadCurveToPoint(ctx, 215.65, 128.4, 214.2, 130.2);
    CGContextAddQuadCurveToPoint(ctx, 213.15, 134.9, 212.05, 135.25);
    CGContextAddQuadCurveToPoint(ctx, 209.55, 137.4, 211.35, 139.9);
    CGContextAddQuadCurveToPoint(ctx, 209.55, 142.1, 209.9, 145.7);
    CGContextAddLineToPoint(ctx, 216.75, 149.3);
    CGContextAddQuadCurveToPoint(ctx, 218.55, 162.25, 228.25, 166.9);
    CGContextAddQuadCurveToPoint(ctx, 233.3, 169.35, 237.25, 157.45);
    CGContextAddQuadCurveToPoint(ctx, 234.35, 138.5, 236.55, 134.5);
    CGContextAddQuadCurveToPoint(ctx, 246.25, 125.5, 245.9, 122.3);
    CGContextAddQuadCurveToPoint(ctx, 245.55, 106.1, 244.45, 105.35);
    CGContextAddQuadCurveToPoint(ctx, 243.15, 103.55, 239.5, 102.55);
    CGContextAddQuadCurveToPoint(ctx, 234.6, 101.3, 231.15, 105);
    CGContextAddQuadCurveToPoint(ctx, 221.75, 121.2, 222.5, 126.95);
    CGContextClosePath(ctx);
}

static void def_path_87(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 221.55, 148.4);
    CGContextAddLineToPoint(ctx, 234.15, 151.2);
    CGContextAddQuadCurveToPoint(ctx, 212.65, 141.05, 211.65, 140.2);
    CGContextAddQuadCurveToPoint(ctx, 220.75, 148.4, 221.55, 148.4);
    CGContextClosePath(ctx);
}

static void def_path_88(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 229.85, 167.8);
    CGContextAddQuadCurveToPoint(ctx, 235.45, 169.4, 235.45, 153);
    CGContextAddQuadCurveToPoint(ctx, 235.45, 148.6, 217.05, 145);
    CGContextAddQuadCurveToPoint(ctx, 220.85, 147.85, 223.3, 157.75);
    CGContextAddQuadCurveToPoint(ctx, 225.5, 166.55, 229.85, 167.8);
    CGContextClosePath(ctx);
}

static void def_path_89(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 235.6, 158.65);
    CGContextAddQuadCurveToPoint(ctx, 236.25, 155.15, 235.45, 153);
    CGContextAddQuadCurveToPoint(ctx, 234.45, 150.25, 225.45, 148.8);
    CGContextAddQuadCurveToPoint(ctx, 224.6, 153.75, 226.25, 158.9);
    CGContextAddQuadCurveToPoint(ctx, 228.05, 164.65, 231.25, 164);
    CGContextAddQuadCurveToPoint(ctx, 234.75, 163.3, 235.6, 158.65);
    CGContextClosePath(ctx);
}

static void def_path_90(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 392.85, 145.6);
    CGContextAddQuadCurveToPoint(ctx, 390.25, 145.2, 384.65, 152.2);
    CGContextAddQuadCurveToPoint(ctx, 386.15, 152.1, 388.6, 154.25);
    CGContextAddQuadCurveToPoint(ctx, 391.15, 156.5, 392.25, 156.6);
    CGContextAddQuadCurveToPoint(ctx, 393.65, 156.7, 395.45, 155.4);
    CGContextAddLineToPoint(ctx, 398.05, 153.6);
    CGContextAddQuadCurveToPoint(ctx, 399.65, 153, 402.45, 158.8);
    CGContextAddQuadCurveToPoint(ctx, 402.85, 161.4, 397.25, 166.2);
    CGContextAddQuadCurveToPoint(ctx, 396.85, 170.8, 395.25, 169.2);
    CGContextAddQuadCurveToPoint(ctx, 391.9, 168.55, 390.05, 177);
    CGContextAddQuadCurveToPoint(ctx, 389.05, 181.6, 384.85, 182);
    CGContextAddQuadCurveToPoint(ctx, 383.25, 189.4, 382.05, 186.4);
    CGContextAddQuadCurveToPoint(ctx, 381.85, 180.8, 375.85, 186.6);
    CGContextAddQuadCurveToPoint(ctx, 374.65, 188.6, 370.05, 186.4);
    CGContextAddQuadCurveToPoint(ctx, 363.25, 184.4, 365.65, 182.4);
    CGContextAddQuadCurveToPoint(ctx, 367.45, 180.2, 378.65, 182.4);
    CGContextAddQuadCurveToPoint(ctx, 380.85, 180.8, 372.85, 176.8);
    CGContextAddQuadCurveToPoint(ctx, 372.25, 175, 373.25, 170.6);
    CGContextAddQuadCurveToPoint(ctx, 374.45, 167.4, 381.25, 161.8);
    CGContextAddQuadCurveToPoint(ctx, 390.65, 160.6, 387.85, 159);
    CGContextAddQuadCurveToPoint(ctx, 381.65, 153.8, 375.85, 161.4);
    CGContextAddQuadCurveToPoint(ctx, 373.65, 167.6, 356.25, 182.6);
    CGContextAddQuadCurveToPoint(ctx, 353.8, 184.35, 352.85, 182.6);
    CGContextAddQuadCurveToPoint(ctx, 352, 180.95, 350.05, 182.6);
    CGContextAddQuadCurveToPoint(ctx, 346.05, 186, 325.45, 177);
    CGContextAddQuadCurveToPoint(ctx, 318.8, 176.3, 313.5, 183.4);
    CGContextAddLineToPoint(ctx, 310.2, 187.75);
    CGContextAddQuadCurveToPoint(ctx, 308.75, 189.45, 307.65, 188.45);
    CGContextAddQuadCurveToPoint(ctx, 313.05, 196.95, 311.45, 191.35);
    CGContextAddQuadCurveToPoint(ctx, 311.15, 190.2, 311.85, 189.8);
    CGContextAddLineToPoint(ctx, 314.05, 189.2);
    CGContextAddQuadCurveToPoint(ctx, 328.2, 184.95, 329.05, 182.2);
    CGContextAddQuadCurveToPoint(ctx, 329.85, 179.6, 343.05, 184);
    CGContextAddLineToPoint(ctx, 349.25, 187.4);
    CGContextAddQuadCurveToPoint(ctx, 354.05, 188.6, 360.65, 189);
    CGContextAddQuadCurveToPoint(ctx, 363.05, 190, 366.45, 192.8);
    CGContextAddQuadCurveToPoint(ctx, 381.05, 203, 393.45, 195.8);
    CGContextAddQuadCurveToPoint(ctx, 413.45, 189.2, 407.45, 172);
    CGContextAddQuadCurveToPoint(ctx, 404.45, 163, 407.65, 159.6);
    CGContextAddQuadCurveToPoint(ctx, 407.85, 155.8, 415.05, 162.2);
    CGContextAddQuadCurveToPoint(ctx, 417.65, 166.4, 418.45, 171.4);
    CGContextAddQuadCurveToPoint(ctx, 426.45, 182.6, 423.05, 164.8);
    CGContextAddLineToPoint(ctx, 420.45, 159);
    CGContextAddQuadCurveToPoint(ctx, 420.45, 157.8, 418.65, 154.4);
    CGContextAddQuadCurveToPoint(ctx, 415.65, 151, 418.05, 144);
    CGContextAddQuadCurveToPoint(ctx, 419.85, 130.2, 417.65, 132);
    CGContextAddQuadCurveToPoint(ctx, 416.45, 130.2, 407.25, 140.2);
    CGContextAddQuadCurveToPoint(ctx, 405.05, 143.6, 399.05, 145.2);
    CGContextAddQuadCurveToPoint(ctx, 396.25, 147, 392.85, 145.6);
    CGContextClosePath(ctx);
}

static void def_path_91(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 541.45, 23.8);
    CGContextAddLineToPoint(ctx, 506.25, 25);
    CGContextAddQuadCurveToPoint(ctx, 480.65, 33, 477.85, 51.8);
    CGContextAddQuadCurveToPoint(ctx, 475.45, 74.6, 495.85, 92.2);
    CGContextAddQuadCurveToPoint(ctx, 496.25, 98.6, 498.25, 101.8);
    CGContextAddQuadCurveToPoint(ctx, 496.65, 106.6, 515.45, 99);
    CGContextAddLineToPoint(ctx, 542.65, 90.6);
    CGContextAddQuadCurveToPoint(ctx, 549.05, 88.2, 554.25, 79.4);
    CGContextAddLineToPoint(ctx, 559.55, 70.95);
    CGContextAddQuadCurveToPoint(ctx, 563.6, 64.45, 565.95, 59.15);
    CGContextAddQuadCurveToPoint(ctx, 573.35, 42.6, 571.05, 26.6);
    CGContextAddQuadCurveToPoint(ctx, 572.25, 15.4, 566.25, 15);
    CGContextAddQuadCurveToPoint(ctx, 557.85, 13.4, 550.65, 21);
    CGContextAddQuadCurveToPoint(ctx, 543.85, 24.2, 541.45, 23.8);
    CGContextClosePath(ctx);
}

static void def_path_92(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 558.15, 19.9);
    CGContextAddQuadCurveToPoint(ctx, 551.1, 25.65, 543.6, 25.65);
    CGContextAddQuadCurveToPoint(ctx, 529.1, 27.85, 524.7, 41.05);
    CGContextAddQuadCurveToPoint(ctx, 520.75, 67.9, 528.65, 73.6);
    CGContextAddQuadCurveToPoint(ctx, 533.5, 81.1, 540.55, 74.5);
    CGContextAddQuadCurveToPoint(ctx, 546.65, 68.75, 554.1, 51.85);
    CGContextAddQuadCurveToPoint(ctx, 562.35, 33.3, 560.85, 24);
    CGContextAddQuadCurveToPoint(ctx, 562.95, 15.1, 558.15, 19.9);
    CGContextClosePath(ctx);
}

static void def_path_93(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 557.85, 20.4);
    CGContextAddQuadCurveToPoint(ctx, 550.9, 26, 543.6, 26);
    CGContextAddQuadCurveToPoint(ctx, 529.3, 28.15, 525, 41.1);
    CGContextAddQuadCurveToPoint(ctx, 521.1, 67.45, 528.9, 73.1);
    CGContextAddQuadCurveToPoint(ctx, 533.65, 80.4, 540.55, 73.95);
    CGContextAddQuadCurveToPoint(ctx, 546.55, 68.3, 553.9, 51.7);
    CGContextAddQuadCurveToPoint(ctx, 561.95, 33.6, 560.5, 24.35);
    CGContextAddQuadCurveToPoint(ctx, 562.6, 15.6, 557.85, 20.4);
    CGContextClosePath(ctx);
}

static void def_path_94(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 557.55, 20.85);
    CGContextAddQuadCurveToPoint(ctx, 550.75, 26.35, 543.55, 26.35);
    CGContextAddQuadCurveToPoint(ctx, 529.55, 28.45, 525.3, 41.2);
    CGContextAddQuadCurveToPoint(ctx, 521.5, 67.05, 529.15, 72.55);
    CGContextAddQuadCurveToPoint(ctx, 533.8, 79.75, 540.6, 73.4);
    CGContextAddQuadCurveToPoint(ctx, 546.5, 67.75, 553.65, 51.55);
    CGContextAddQuadCurveToPoint(ctx, 561.55, 33.75, 560.1, 24.75);
    CGContextAddQuadCurveToPoint(ctx, 562.2, 16.15, 557.55, 20.85);
    CGContextClosePath(ctx);
}

static void def_path_95(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 557.25, 21.3);
    CGContextAddQuadCurveToPoint(ctx, 550.6, 26.7, 543.5, 26.7);
    CGContextAddQuadCurveToPoint(ctx, 529.8, 28.8, 525.65, 41.25);
    CGContextAddQuadCurveToPoint(ctx, 521.9, 66.65, 529.35, 72.05);
    CGContextAddQuadCurveToPoint(ctx, 533.95, 79.1, 540.6, 72.85);
    CGContextAddQuadCurveToPoint(ctx, 546.35, 67.45, 553.4, 51.45);
    CGContextAddQuadCurveToPoint(ctx, 561.2, 33.95, 559.75, 25.1);
    CGContextAddQuadCurveToPoint(ctx, 561.8, 16.7, 557.25, 21.3);
    CGContextClosePath(ctx);
}

static void def_path_96(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 556.95, 21.75);
    CGContextAddQuadCurveToPoint(ctx, 550.4, 27.05, 543.5, 27.05);
    CGContextAddQuadCurveToPoint(ctx, 530, 29.1, 525.95, 41.35);
    CGContextAddQuadCurveToPoint(ctx, 522.25, 66.2, 529.6, 71.5);
    CGContextAddQuadCurveToPoint(ctx, 534.1, 78.45, 540.65, 72.35);
    CGContextAddQuadCurveToPoint(ctx, 546.35, 66.95, 553.15, 51.3);
    CGContextAddQuadCurveToPoint(ctx, 560.8, 34.1, 559.4, 25.45);
    CGContextAddQuadCurveToPoint(ctx, 561.45, 17.25, 556.95, 21.75);
    CGContextClosePath(ctx);
}

static void def_path_97(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 556.65, 22.2);
    CGContextAddQuadCurveToPoint(ctx, 550.25, 27.4, 543.45, 27.4);
    CGContextAddQuadCurveToPoint(ctx, 530.25, 29.4, 526.25, 41.4);
    CGContextAddQuadCurveToPoint(ctx, 522.65, 65.8, 529.85, 71);
    CGContextAddQuadCurveToPoint(ctx, 534.25, 77.8, 540.65, 71.8);
    CGContextAddQuadCurveToPoint(ctx, 546.15, 66.65, 552.95, 51.2);
    CGContextAddQuadCurveToPoint(ctx, 560.4, 34.35, 559, 25.8);
    CGContextAddQuadCurveToPoint(ctx, 561.05, 17.8, 556.65, 22.2);
    CGContextClosePath(ctx);
}

static void def_path_98(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 345.25, 226.7);
    CGContextAddQuadCurveToPoint(ctx, 343.6, 224.65, 330, 211.6);
    CGContextAddQuadCurveToPoint(ctx, 317.45, 199.65, 317.45, 199);
    CGContextAddQuadCurveToPoint(ctx, 317.45, 197, 307.45, 187);
    CGContextAddQuadCurveToPoint(ctx, 304.45, 184, 314.15, 179.4);
    CGContextAddQuadCurveToPoint(ctx, 305.9, 182.7, 283.05, 181.8);
    CGContextAddQuadCurveToPoint(ctx, 274.65, 181, 252.25, 189);
    CGContextAddQuadCurveToPoint(ctx, 244.6, 191.05, 235.25, 197.65);
    CGContextAddQuadCurveToPoint(ctx, 230.8, 200.1, 228.25, 203);
    CGContextAddLineToPoint(ctx, 235.25, 197.65);
    CGContextAddQuadCurveToPoint(ctx, 249.05, 190.1, 281.45, 187.4);
    CGContextAddQuadCurveToPoint(ctx, 295.45, 187, 301.05, 197);
    CGContextAddQuadCurveToPoint(ctx, 307.05, 200.4, 308.35, 202.3);
    CGContextAddQuadCurveToPoint(ctx, 309.65, 204.15, 305.45, 202.2);
    CGContextAddQuadCurveToPoint(ctx, 300.25, 199.8, 285.85, 196.6);
    CGContextAddQuadCurveToPoint(ctx, 265.45, 193.8, 251.85, 202.6);
    CGContextAddQuadCurveToPoint(ctx, 237.05, 209.8, 233.05, 224.2);
    CGContextAddQuadCurveToPoint(ctx, 245.85, 197.8, 276.25, 200.2);
    CGContextAddQuadCurveToPoint(ctx, 284.85, 198.5, 301.95, 203.25);
    CGContextAddQuadCurveToPoint(ctx, 291.55, 201.35, 274.25, 205);
    CGContextAddQuadCurveToPoint(ctx, 255.85, 211, 251.85, 225.8);
    CGContextAddLineToPoint(ctx, 254.65, 221);
    CGContextAddQuadCurveToPoint(ctx, 264.25, 207, 281.05, 207);
    CGContextAddQuadCurveToPoint(ctx, 292.7, 204, 312.4, 207.7);
    CGContextAddQuadCurveToPoint(ctx, 289.15, 204, 273.25, 219.4);
    CGContextAddQuadCurveToPoint(ctx, 288.35, 205.45, 319.05, 209);
    CGContextAddQuadCurveToPoint(ctx, 327.05, 209.8, 347.45, 229);
    CGContextAddLineToPoint(ctx, 345.25, 226.7);
    CGContextClosePath(ctx);
}

static void def_path_99(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 485.85, 423);
    CGContextAddQuadCurveToPoint(ctx, 487.35, 421, 487.35, 411);
    CGContextAddQuadCurveToPoint(ctx, 483.85, 393, 457.85, 377);
    CGContextAddQuadCurveToPoint(ctx, 470.35, 386.5, 485.85, 423);
    CGContextClosePath(ctx);
}

static void def_path_100(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 536.85, 421);
    CGContextAddLineToPoint(ctx, 536.35, 415.5);
    CGContextAddQuadCurveToPoint(ctx, 531.35, 389, 487.85, 351.5);
    CGContextAddQuadCurveToPoint(ctx, 506.35, 375.5, 532.85, 430.5);
    CGContextAddQuadCurveToPoint(ctx, 533.35, 427.5, 533.85, 418.5);
    CGContextAddLineToPoint(ctx, 536.85, 421);
    CGContextClosePath(ctx);
}

static void def_path_101(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 589.35, 382);
    CGContextAddQuadCurveToPoint(ctx, 538.1, 333.2, 527.9, 322.75);
    CGContextAddQuadCurveToPoint(ctx, 585.9, 386.15, 588.85, 393.5);
    CGContextAddQuadCurveToPoint(ctx, 586.85, 384.5, 589.35, 382);
    CGContextClosePath(ctx);
}

static void def_path_102(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 453.85, 409);
    CGContextAddQuadCurveToPoint(ctx, 454.35, 406, 439.35, 396);
    CGContextAddQuadCurveToPoint(ctx, 420.35, 373.5, 400.85, 425.5);
    CGContextAddQuadCurveToPoint(ctx, 412.85, 400, 431.85, 403);
    CGContextAddQuadCurveToPoint(ctx, 449.85, 402.5, 453.85, 409);
    CGContextClosePath(ctx);
}

static void def_path_103(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 541.65, 271.65);
    CGContextAddLineToPoint(ctx, 559.75, 282.9);
    CGContextAddQuadCurveToPoint(ctx, 590.6, 301.75, 593.35, 307.5);
    CGContextAddQuadCurveToPoint(ctx, 595.35, 305, 591.35, 298);
    CGContextAddQuadCurveToPoint(ctx, 546.35, 269.5, 538.85, 268);
    CGContextAddQuadCurveToPoint(ctx, 534.95, 267.2, 541.65, 271.65);
    CGContextClosePath(ctx);
}

static void def_path_104(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 512.05, 96.25);
    CGContextAddQuadCurveToPoint(ctx, 510.05, 97.5, 510.15, 98.7);
    CGContextAddQuadCurveToPoint(ctx, 510.25, 100.05, 513.05, 100.6);
    CGContextAddQuadCurveToPoint(ctx, 521.05, 102.2, 529.85, 112.2);
    CGContextAddLineToPoint(ctx, 525.05, 110.6);
    CGContextAddQuadCurveToPoint(ctx, 510.65, 104.2, 529.45, 124.6);
    CGContextAddQuadCurveToPoint(ctx, 532.9, 131.5, 541.05, 145.4);
    CGContextAddQuadCurveToPoint(ctx, 520.65, 127.8, 541.85, 161);
    CGContextAddQuadCurveToPoint(ctx, 541.85, 161.4, 535.45, 157);
    CGContextAddQuadCurveToPoint(ctx, 529.05, 152.6, 535.85, 166.6);
    CGContextAddLineToPoint(ctx, 531.45, 163);
    CGContextAddQuadCurveToPoint(ctx, 524.25, 158.2, 535.85, 185.8);
    CGContextAddQuadCurveToPoint(ctx, 539.05, 189, 543.45, 201.4);
    CGContextAddQuadCurveToPoint(ctx, 528.25, 190.6, 533.85, 207.8);
    CGContextAddQuadCurveToPoint(ctx, 538.25, 210.6, 541.85, 225.8);
    CGContextAddQuadCurveToPoint(ctx, 528.65, 213.8, 539.85, 237.8);
    CGContextAddQuadCurveToPoint(ctx, 535.65, 233.9, 532.95, 234.7);
    CGContextAddQuadCurveToPoint(ctx, 530.25, 235.5, 533.85, 239.4);
    CGContextAddQuadCurveToPoint(ctx, 536.8, 242.6, 539.2, 255.7);
    CGContextAddLineToPoint(ctx, 541.85, 271.4);
    CGContextAddQuadCurveToPoint(ctx, 543.05, 275.8, 541.05, 298.6);
    CGContextAddQuadCurveToPoint(ctx, 519.45, 284.2, 545.45, 332.2);
    CGContextAddQuadCurveToPoint(ctx, 549.85, 339, 544.25, 332.6);
    CGContextAddQuadCurveToPoint(ctx, 521.7, 306.85, 532.25, 337);
    CGContextAddQuadCurveToPoint(ctx, 523.85, 329, 526.25, 344.6);
    CGContextAddQuadCurveToPoint(ctx, 519.05, 337.8, 519.85, 349.4);
    CGContextAddQuadCurveToPoint(ctx, 506.25, 335.4, 507.05, 343.4);
    CGContextAddQuadCurveToPoint(ctx, 507.85, 351.4, 493.45, 366.2);
    CGContextAddLineToPoint(ctx, 489.85, 361);
    CGContextAddLineToPoint(ctx, 472.25, 399.4);
    CGContextAddLineToPoint(ctx, 467.85, 395.8);
    CGContextAddQuadCurveToPoint(ctx, 461.05, 402.6, 440.65, 404.6);
    CGContextAddQuadCurveToPoint(ctx, 451.05, 409, 481.05, 403);
    CGContextAddQuadCurveToPoint(ctx, 482.25, 397, 482.65, 409.4);
    CGContextAddLineToPoint(ctx, 494.25, 393);
    CGContextAddQuadCurveToPoint(ctx, 499.05, 376.6, 511.05, 389);
    CGContextAddQuadCurveToPoint(ctx, 511.7, 383.35, 515.05, 391);
    CGContextAddQuadCurveToPoint(ctx, 519, 400.05, 520.25, 399);
    CGContextAddQuadCurveToPoint(ctx, 525.1, 394.85, 529.45, 383);
    CGContextAddQuadCurveToPoint(ctx, 532.25, 375.4, 535.45, 392.2);
    CGContextAddQuadCurveToPoint(ctx, 535.45, 401, 538.65, 390.2);
    CGContextAddQuadCurveToPoint(ctx, 541.85, 381.4, 543.05, 373.4);
    CGContextAddQuadCurveToPoint(ctx, 541.45, 359, 556.25, 381.8);
    CGContextAddQuadCurveToPoint(ctx, 559.45, 385.4, 560.65, 384.2);
    CGContextAddQuadCurveToPoint(ctx, 561.15, 380.85, 558.1, 370.4);
    CGContextAddLineToPoint(ctx, 550.6, 344.85);
    CGContextAddQuadCurveToPoint(ctx, 550.3, 343.2, 555.85, 349);
    CGContextAddQuadCurveToPoint(ctx, 561.6, 355, 561.5, 351.15);
    CGContextAddQuadCurveToPoint(ctx, 561.45, 348.15, 559.05, 343.4);
    CGContextAddQuadCurveToPoint(ctx, 547.05, 319.45, 551.05, 312.2);
    CGContextAddQuadCurveToPoint(ctx, 553.85, 307.1, 554.25, 290.35);
    CGContextAddQuadCurveToPoint(ctx, 554.5, 279.15, 553.85, 270.6);
    CGContextAddQuadCurveToPoint(ctx, 553.45, 265.4, 555.05, 249.4);
    CGContextAddQuadCurveToPoint(ctx, 546.25, 232.2, 562.65, 237.4);
    CGContextAddQuadCurveToPoint(ctx, 549.05, 207.8, 569.45, 229.8);
    CGContextAddLineToPoint(ctx, 563.85, 215.4);
    CGContextAddQuadCurveToPoint(ctx, 557.85, 202.2, 569.05, 214.2);
    CGContextAddLineToPoint(ctx, 563.85, 205.4);
    CGContextAddLineToPoint(ctx, 568.25, 207.4);
    CGContextAddQuadCurveToPoint(ctx, 563.85, 198.6, 561.85, 198.2);
    CGContextAddQuadCurveToPoint(ctx, 559.85, 197.8, 542.65, 174.2);
    CGContextAddQuadCurveToPoint(ctx, 531.45, 152.2, 555.85, 177);
    CGContextAddLineToPoint(ctx, 549.05, 160.6);
    CGContextAddQuadCurveToPoint(ctx, 534.2, 135, 552.65, 153.4);
    CGContextAddQuadCurveToPoint(ctx, 547.85, 144.6, 553.85, 137.4);
    CGContextAddQuadCurveToPoint(ctx, 561.05, 137.8, 546.65, 123.8);
    CGContextAddQuadCurveToPoint(ctx, 540.85, 116.1, 559.3, 122.9);
    CGContextAddQuadCurveToPoint(ctx, 554.8, 120.25, 543.85, 104.2);
    CGContextAddQuadCurveToPoint(ctx, 528.25, 96.5999, 521.85, 94.5999);
    CGContextAddQuadCurveToPoint(ctx, 516.95, 93.05, 512.05, 96.25);
    CGContextClosePath(ctx);
}

static void def_path_105(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 503.35, 25.75);
    CGContextAddQuadCurveToPoint(ctx, 494.9, 26.95, 492.05, 26);
    CGContextAddLineToPoint(ctx, 475.35, 19.25);
    CGContextAddQuadCurveToPoint(ctx, 460, 13.1, 456.45, 12.4);
    CGContextAddQuadCurveToPoint(ctx, 439.65, 5.8, 451.65, 7.8);
    CGContextAddQuadCurveToPoint(ctx, 487.45, 11.6, 505.65, 24.8);
    CGContextAddQuadCurveToPoint(ctx, 498.45, 16.4, 480.05, 9.4);
    CGContextAddQuadCurveToPoint(ctx, 457.85, -3.2, 422.65, 1.8);
    CGContextAddQuadCurveToPoint(ctx, 404.85, 5, 397.05, 6.8);
    CGContextAddLineToPoint(ctx, 393.85, 5.8);
    CGContextAddQuadCurveToPoint(ctx, 390.45, 3.25, 383.95, 1.8);
    CGContextAddQuadCurveToPoint(ctx, 371.15, -0.999998, 353.85, 3.4);
    CGContextAddQuadCurveToPoint(ctx, 336.85, 8, 328.25, 12.8);
    CGContextAddQuadCurveToPoint(ctx, 313.05, 14, 309.45, 17.2);
    CGContextAddQuadCurveToPoint(ctx, 290.85, 31.8, 288.85, 32.6);
    CGContextAddLineToPoint(ctx, 274.65, 41.4);
    CGContextAddQuadCurveToPoint(ctx, 299.25, 34.8, 301.65, 32.4);
    CGContextAddQuadCurveToPoint(ctx, 303.4, 30.65, 312.75, 29.15);
    CGContextAddLineToPoint(ctx, 323.85, 28.8);
    CGContextAddQuadCurveToPoint(ctx, 325, 29.45, 328.95, 29.8);
    CGContextAddLineToPoint(ctx, 325.05, 30.2);
    CGContextAddQuadCurveToPoint(ctx, 400.65, 45, 401.45, 47);
    CGContextAddQuadCurveToPoint(ctx, 402.25, 49, 406.25, 47.8);
    CGContextAddQuadCurveToPoint(ctx, 394.65, 39.8, 390.65, 40.2);
    CGContextAddQuadCurveToPoint(ctx, 389.85, 40.3, 390.75, 39.95);
    CGContextAddLineToPoint(ctx, 393.9, 39.4);
    CGContextAddQuadCurveToPoint(ctx, 400.35, 38.65, 408.1, 39.4);
    CGContextAddQuadCurveToPoint(ctx, 433.85, 41.85, 459.45, 59);
    CGContextAddQuadCurveToPoint(ctx, 464.25, 61.8, 467.85, 61.4);
    CGContextAddQuadCurveToPoint(ctx, 471.05, 63.8, 468.25, 67.4);
    CGContextAddQuadCurveToPoint(ctx, 459.45, 77, 470.65, 88.2);
    CGContextAddQuadCurveToPoint(ctx, 489.05, 95, 483.45, 86.2);
    CGContextAddQuadCurveToPoint(ctx, 494.25, 90.2, 496.65, 94.2);
    CGContextAddQuadCurveToPoint(ctx, 499.05, 98.2, 497.85, 94.2);
    CGContextAddQuadCurveToPoint(ctx, 491.45, 87, 485.45, 81.8);
    CGContextAddQuadCurveToPoint(ctx, 480.25, 79.8, 477.45, 71.4);
    CGContextAddQuadCurveToPoint(ctx, 472.25, 55.75, 475.55, 50.95);
    CGContextAddQuadCurveToPoint(ctx, 472.75, 53.6, 473.45, 50.2);
    CGContextAddQuadCurveToPoint(ctx, 474, 47.45, 476.15, 44.85);
    CGContextAddQuadCurveToPoint(ctx, 478.05, 42.55, 479.45, 42.2);
    CGContextAddLineToPoint(ctx, 489.9, 33.9);
    CGContextAddQuadCurveToPoint(ctx, 499.1, 26.7, 503.35, 25.75);
    CGContextClosePath(ctx);
}

static void def_path_106(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 465.45, 31.2);
    CGContextAddQuadCurveToPoint(ctx, 467.45, 31.2, 477.65, 38.6);
    CGContextAddQuadCurveToPoint(ctx, 483.65, 36, 483.25, 34.4);
    CGContextAddQuadCurveToPoint(ctx, 485.05, 31.8, 479.25, 28.8);
    CGContextAddQuadCurveToPoint(ctx, 478.85, 27, 470.05, 24.8);
    CGContextAddQuadCurveToPoint(ctx, 466.85, 25.8, 455.65, 22.6);
    CGContextAddQuadCurveToPoint(ctx, 449.45, 16.4, 440.25, 13.8);
    CGContextAddQuadCurveToPoint(ctx, 433.05, 10.2, 412.85, 14.4);
    CGContextAddQuadCurveToPoint(ctx, 412.45, 15, 406.05, 17.2);
    CGContextAddQuadCurveToPoint(ctx, 402.45, 18, 403.05, 20);
    CGContextAddQuadCurveToPoint(ctx, 419.8, 15, 433.65, 17.75);
    CGContextAddQuadCurveToPoint(ctx, 437.2, 18.45, 442.05, 20.15);
    CGContextAddQuadCurveToPoint(ctx, 445.75, 21.5, 446.85, 21.4);
    CGContextAddQuadCurveToPoint(ctx, 449.3, 21.15, 456.95, 26.15);
    CGContextAddQuadCurveToPoint(ctx, 464.85, 31.2, 465.45, 31.2);
    CGContextClosePath(ctx);
}

static void def_path_107(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 448.85, 28.85);
    CGContextAddLineToPoint(ctx, 448.45, 29.15);
    CGContextAddLineToPoint(ctx, 444, 27.75);
    CGContextAddQuadCurveToPoint(ctx, 442.1, 27.1, 440.8, 27.95);
    CGContextAddLineToPoint(ctx, 440.45, 27.65);
    CGContextAddLineToPoint(ctx, 437.8, 28.05);
    CGContextAddLineToPoint(ctx, 435.25, 28.4);
    CGContextAddLineToPoint(ctx, 430.4, 26.05);
    CGContextAddLineToPoint(ctx, 429.25, 25.95);
    CGContextAddLineToPoint(ctx, 422, 22.45);
    CGContextAddLineToPoint(ctx, 421.65, 22.8);
    CGContextAddQuadCurveToPoint(ctx, 421.25, 22.15, 420.05, 22.5);
    CGContextAddLineToPoint(ctx, 416.15, 22.7);
    CGContextAddQuadCurveToPoint(ctx, 413.65, 22.7, 412.5, 23.3);
    CGContextAddQuadCurveToPoint(ctx, 410.35, 24.4, 406.05, 24.7);
    CGContextAddQuadCurveToPoint(ctx, 401.55, 25.1, 399.65, 26);
    CGContextAddLineToPoint(ctx, 404.2, 26.3);
    CGContextAddLineToPoint(ctx, 408.8, 26.6);
    CGContextAddLineToPoint(ctx, 413.25, 28);
    CGContextAddLineToPoint(ctx, 418.1, 28.1);
    CGContextAddLineToPoint(ctx, 418.85, 28.75);
    CGContextAddLineToPoint(ctx, 419.25, 28.45);
    CGContextAddLineToPoint(ctx, 424.8, 29.3);
    CGContextAddLineToPoint(ctx, 429.2, 30.9);
    CGContextAddLineToPoint(ctx, 434.05, 33.25);
    CGContextAddLineToPoint(ctx, 441.25, 34.8);
    CGContextAddQuadCurveToPoint(ctx, 442.65, 36.15, 445.6, 36.8);
    CGContextAddLineToPoint(ctx, 450.45, 37.95);
    CGContextAddLineToPoint(ctx, 450.8, 37.65);
    CGContextAddLineToPoint(ctx, 454.05, 38.35);
    CGContextAddQuadCurveToPoint(ctx, 456.15, 38.55, 457.25, 39.2);
    CGContextAddLineToPoint(ctx, 462.4, 39);
    CGContextAddLineToPoint(ctx, 464, 39.1);
    CGContextAddLineToPoint(ctx, 465.6, 38.8);
    CGContextAddLineToPoint(ctx, 467.25, 38.75);
    CGContextAddLineToPoint(ctx, 467.6, 38.05);
    CGContextAddLineToPoint(ctx, 466.45, 37.15);
    CGContextAddLineToPoint(ctx, 452.05, 30.05);
    CGContextAddLineToPoint(ctx, 451.65, 30.4);
    CGContextAddQuadCurveToPoint(ctx, 451.35, 29.85, 448.85, 28.85);
    CGContextClosePath(ctx);
}

static void def_path_108(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 394, 16.4);
    CGContextAddQuadCurveToPoint(ctx, 393.65, 15.9, 393.25, 16);
    CGContextAddLineToPoint(ctx, 393.6, 15.25);
    CGContextAddQuadCurveToPoint(ctx, 392.1, 13.65, 389.2, 12.5);
    CGContextAddQuadCurveToPoint(ctx, 388, 12.05, 385.85, 11.95);
    CGContextAddLineToPoint(ctx, 382.45, 11.55);
    CGContextAddLineToPoint(ctx, 381.65, 10.85);
    CGContextAddLineToPoint(ctx, 376.45, 10.2);
    CGContextAddQuadCurveToPoint(ctx, 373.35, 10, 371.25, 11.15);
    CGContextAddQuadCurveToPoint(ctx, 370.9, 11.35, 370.45, 10.8);
    CGContextAddLineToPoint(ctx, 368.05, 12);
    CGContextAddLineToPoint(ctx, 377.6, 15.65);
    CGContextAddLineToPoint(ctx, 380.5, 17.55);
    CGContextAddLineToPoint(ctx, 381.2, 17.65);
    CGContextAddLineToPoint(ctx, 388.55, 22.25);
    CGContextAddQuadCurveToPoint(ctx, 389.6, 22.95, 390.7, 20.75);
    CGContextAddLineToPoint(ctx, 391.25, 19.6);
    CGContextAddQuadCurveToPoint(ctx, 391.15, 20, 391.65, 20.4);
    CGContextAddLineToPoint(ctx, 392.05, 18.45);
    CGContextAddQuadCurveToPoint(ctx, 392.15, 17.35, 392.9, 16.9);
    CGContextAddQuadCurveToPoint(ctx, 393.25, 16.65, 392.75, 17.15);
    CGContextAddQuadCurveToPoint(ctx, 392.55, 17.75, 393.25, 17.65);
    CGContextAddLineToPoint(ctx, 394, 17.2);
    CGContextAddLineToPoint(ctx, 394, 16.4);
    CGContextClosePath(ctx);
}

static void def_path_109(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 365.65, 29.2);
    CGContextAddQuadCurveToPoint(ctx, 365.75, 28.8, 365.25, 28.4);
    CGContextAddQuadCurveToPoint(ctx, 355.75, 23.9, 352.05, 22.9);
    CGContextAddLineToPoint(ctx, 349.65, 21.2);
    CGContextAddLineToPoint(ctx, 348.4, 21.2);
    CGContextAddQuadCurveToPoint(ctx, 347.7, 21.3, 347.25, 20.8);
    CGContextAddLineToPoint(ctx, 346.85, 21.15);
    CGContextAddLineToPoint(ctx, 346.45, 20.85);
    CGContextAddLineToPoint(ctx, 346.05, 21.15);
    CGContextAddLineToPoint(ctx, 345.65, 20.85);
    CGContextAddQuadCurveToPoint(ctx, 344.4, 20.75, 344, 21.15);
    CGContextAddQuadCurveToPoint(ctx, 343.75, 21.4, 343.25, 20.8);
    CGContextAddLineToPoint(ctx, 342.85, 21.15);
    CGContextAddLineToPoint(ctx, 342.45, 20.85);
    CGContextAddLineToPoint(ctx, 335.25, 22);
    CGContextAddLineToPoint(ctx, 336.75, 22.95);
    CGContextAddLineToPoint(ctx, 338.45, 23.7);
    CGContextAddLineToPoint(ctx, 339.25, 24.35);
    CGContextAddLineToPoint(ctx, 341.3, 24.65);
    CGContextAddLineToPoint(ctx, 343.1, 25.35);
    CGContextAddQuadCurveToPoint(ctx, 345.3, 27.45, 346.45, 27.95);
    CGContextAddLineToPoint(ctx, 346.85, 27.65);
    CGContextAddLineToPoint(ctx, 368.85, 32.3);
    CGContextAddQuadCurveToPoint(ctx, 369.45, 31.95, 369.2, 31.6);
    CGContextAddQuadCurveToPoint(ctx, 368.7, 30.8, 366.4, 29.25);
    CGContextAddLineToPoint(ctx, 365.65, 29.2);
    CGContextClosePath(ctx);
}

static void def_path_110(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 349.9, 73.35);
    CGContextAddLineToPoint(ctx, 346.05, 70.8);
    CGContextAddLineToPoint(ctx, 340.75, 68.55);
    CGContextAddLineToPoint(ctx, 339.25, 68.05);
    CGContextAddQuadCurveToPoint(ctx, 338.65, 68.45, 338.9, 68.8);
    CGContextAddLineToPoint(ctx, 343.25, 75.25);
    CGContextAddLineToPoint(ctx, 350.45, 77.6);
    CGContextAddQuadCurveToPoint(ctx, 350.65, 77.15, 351.5, 77.15);
    CGContextAddQuadCurveToPoint(ctx, 352.3, 77.25, 352.3, 76.8);
    CGContextAddQuadCurveToPoint(ctx, 352.3, 74.85, 349.9, 73.35);
    CGContextClosePath(ctx);
}

static void def_path_111(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 305.85, 25);
    CGContextAddLineToPoint(ctx, 313.65, 22.8);
    CGContextAddLineToPoint(ctx, 321.8, 21.6);
    CGContextAddLineToPoint(ctx, 314.65, 21.25);
    CGContextAddLineToPoint(ctx, 305.85, 25);
    CGContextClosePath(ctx);
}

static void def_path_112(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 336.2, 44.5);
    CGContextAddLineToPoint(ctx, 335.15, 45.1);
    CGContextAddLineToPoint(ctx, 332.65, 46);
    CGContextAddQuadCurveToPoint(ctx, 330.05, 46.8, 325.45, 42.8);
    CGContextAddQuadCurveToPoint(ctx, 319.85, 38.2, 311.05, 41.8);
    CGContextAddQuadCurveToPoint(ctx, 280.45, 54.4, 278.45, 55);
    CGContextAddQuadCurveToPoint(ctx, 274.85, 57.8, 272.45, 61.4);
    CGContextAddQuadCurveToPoint(ctx, 266.65, 65.8, 263.65, 67.2);
    CGContextAddLineToPoint(ctx, 249.65, 80.2);
    CGContextAddQuadCurveToPoint(ctx, 246.4, 85.15, 245.55, 85.75);
    CGContextAddQuadCurveToPoint(ctx, 251.85, 82, 253.85, 80);
    CGContextAddQuadCurveToPoint(ctx, 267.85, 70, 273.25, 69.2);
    CGContextAddQuadCurveToPoint(ctx, 277.65, 66.2, 278.45, 64.8);
    CGContextAddQuadCurveToPoint(ctx, 292.85, 55.6, 297.05, 55.6);
    CGContextAddQuadCurveToPoint(ctx, 306.25, 60.8, 308.65, 53.8);
    CGContextAddQuadCurveToPoint(ctx, 314.45, 52, 320.05, 53.2);
    CGContextAddQuadCurveToPoint(ctx, 323.25, 50.6, 322.45, 48.4);
    CGContextAddQuadCurveToPoint(ctx, 324.05, 46.6, 325.05, 50.4);
    CGContextAddQuadCurveToPoint(ctx, 328.45, 54, 333.25, 52);
    CGContextAddQuadCurveToPoint(ctx, 337.25, 51.8, 335.25, 54.2);
    CGContextAddQuadCurveToPoint(ctx, 330.85, 58, 319.05, 58.2);
    CGContextAddQuadCurveToPoint(ctx, 306.65, 58.8, 290.25, 66.4);
    CGContextAddQuadCurveToPoint(ctx, 260.45, 76.8, 251.25, 87.2);
    CGContextAddQuadCurveToPoint(ctx, 244.85, 96, 239.45, 97.2);
    CGContextAddQuadCurveToPoint(ctx, 233.65, 98, 227.65, 105.4);
    CGContextAddQuadCurveToPoint(ctx, 237.45, 99.6, 246.45, 99.6);
    CGContextAddQuadCurveToPoint(ctx, 250.45, 97.2, 246.65, 100.8);
    CGContextAddQuadCurveToPoint(ctx, 243.05, 108.4, 244.65, 113.8);
    CGContextAddQuadCurveToPoint(ctx, 244.05, 119, 243.25, 120.6);
    CGContextAddQuadCurveToPoint(ctx, 235.45, 133.4, 235.45, 135.8);
    CGContextAddLineToPoint(ctx, 237.05, 148.6);
    CGContextAddLineToPoint(ctx, 237.15, 148.3);
    CGContextAddQuadCurveToPoint(ctx, 237.95, 148.2, 239.85, 149.4);
    CGContextAddQuadCurveToPoint(ctx, 245.35, 152.9, 246.85, 155.3);
    CGContextAddLineToPoint(ctx, 246.5, 154.3);
    CGContextAddLineToPoint(ctx, 245.05, 149);
    CGContextAddLineToPoint(ctx, 242.85, 143.5);
    CGContextAddQuadCurveToPoint(ctx, 241, 139, 241.45, 137.6);
    CGContextAddLineToPoint(ctx, 243.15, 139.9);
    CGContextAddQuadCurveToPoint(ctx, 242.7, 139.1, 243.25, 135.8);
    CGContextAddQuadCurveToPoint(ctx, 244.05, 130.6, 245.45, 127.4);
    CGContextAddLineToPoint(ctx, 249.25, 119.6);
    CGContextAddLineToPoint(ctx, 249.75, 116.3);
    CGContextAddQuadCurveToPoint(ctx, 250.2, 114.05, 251.05, 115.6);
    CGContextAddLineToPoint(ctx, 254.45, 118.2);
    CGContextAddQuadCurveToPoint(ctx, 251.65, 115.6, 253.85, 113.4);
    CGContextAddQuadCurveToPoint(ctx, 252.85, 107.8, 254.65, 105.2);
    CGContextAddQuadCurveToPoint(ctx, 261.65, 96.8, 263.25, 95.8);
    CGContextAddQuadCurveToPoint(ctx, 264.85, 94.8, 263.45, 95.2);
    CGContextAddQuadCurveToPoint(ctx, 269.45, 91, 263.65, 92.6);
    CGContextAddQuadCurveToPoint(ctx, 259.65, 94.2, 256.65, 94.2);
    CGContextAddQuadCurveToPoint(ctx, 249.05, 96.2, 253.05, 92);
    CGContextAddQuadCurveToPoint(ctx, 256.05, 88.85, 262, 85.65);
    CGContextAddQuadCurveToPoint(ctx, 268.05, 82.45, 270.85, 82.6);
    CGContextAddLineToPoint(ctx, 271.65, 84.2);
    CGContextAddLineToPoint(ctx, 282.85, 81.8);
    CGContextAddLineToPoint(ctx, 281.85, 82.5);
    CGContextAddLineToPoint(ctx, 285.65, 82);
    CGContextAddLineToPoint(ctx, 292.4, 82.1);
    CGContextAddQuadCurveToPoint(ctx, 296.2, 82.3, 297.05, 81.2);
    CGContextAddQuadCurveToPoint(ctx, 298.1, 79.85, 299.9, 79.3);
    CGContextAddQuadCurveToPoint(ctx, 301.75, 78.75, 301.45, 79.8);
    CGContextAddLineToPoint(ctx, 300.85, 83.2);
    CGContextAddQuadCurveToPoint(ctx, 305.85, 77.4, 305.25, 79.6);
    CGContextAddQuadCurveToPoint(ctx, 305.1, 80.15, 300.45, 84.9);
    CGContextAddQuadCurveToPoint(ctx, 295.85, 89.6, 295.05, 93.2);
    CGContextAddLineToPoint(ctx, 309.05, 82);
    CGContextAddQuadCurveToPoint(ctx, 312.65, 84.2, 312.85, 82.6);
    CGContextAddQuadCurveToPoint(ctx, 313, 81.4, 315.45, 78.3);
    CGContextAddQuadCurveToPoint(ctx, 318, 75.25, 318.85, 75.4);
    CGContextAddLineToPoint(ctx, 320.85, 74.5);
    CGContextAddQuadCurveToPoint(ctx, 321.95, 73.9, 321.85, 75.4);
    CGContextAddQuadCurveToPoint(ctx, 321.65, 78, 329.25, 83.4);
    CGContextAddQuadCurveToPoint(ctx, 332.45, 81.6, 333.85, 83);
    CGContextAddQuadCurveToPoint(ctx, 335.25, 84.4, 339.45, 63.2);
    CGContextAddLineToPoint(ctx, 364.45, 52.6);
    CGContextAddLineToPoint(ctx, 408.05, 49.2);
    CGContextAddLineToPoint(ctx, 391.05, 42.4);
    CGContextAddLineToPoint(ctx, 330.05, 31);
    CGContextAddQuadCurveToPoint(ctx, 315.25, 32.8, 310.85, 34);
    CGContextAddLineToPoint(ctx, 297.3, 39.1);
    CGContextAddQuadCurveToPoint(ctx, 287, 43.35, 284.85, 44.8);
    CGContextAddQuadCurveToPoint(ctx, 271.45, 50.2, 254.45, 70.2);
    CGContextAddQuadCurveToPoint(ctx, 262.05, 66.8, 264.25, 64);
    CGContextAddQuadCurveToPoint(ctx, 277.85, 51.4, 277.65, 54);
    CGContextAddQuadCurveToPoint(ctx, 289.85, 45.4, 289.25, 47.6);
    CGContextAddQuadCurveToPoint(ctx, 313.65, 36.4, 311.65, 39.6);
    CGContextAddQuadCurveToPoint(ctx, 333.25, 35, 332.25, 37);
    CGContextAddQuadCurveToPoint(ctx, 351.05, 41.4, 348.25, 41.6);
    CGContextAddQuadCurveToPoint(ctx, 342.45, 42.8, 348.85, 46.4);
    CGContextAddQuadCurveToPoint(ctx, 345.45, 50.8, 340.05, 46.8);
    CGContextAddQuadCurveToPoint(ctx, 336.75, 44.35, 336.2, 44.5);
    CGContextClosePath(ctx);
}

static void def_path_113(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 348.25, 230);
    CGContextAddQuadCurveToPoint(ctx, 333.25, 213.2, 324.85, 210.6);
    CGContextAddQuadCurveToPoint(ctx, 311.45, 203.8, 286.85, 211.6);
}

static void def_path_114(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 321.65, 209.2);
    CGContextAddQuadCurveToPoint(ctx, 296.45, 201.2, 281.05, 205.4);
    CGContextAddQuadCurveToPoint(ctx, 262.65, 207.4, 254.25, 221.2);
}

static void def_path_115(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 318.05, 208);
    CGContextAddQuadCurveToPoint(ctx, 301.05, 200.8, 286.25, 198.6);
    CGContextAddQuadCurveToPoint(ctx, 269.65, 196, 253.05, 203.2);
    CGContextAddQuadCurveToPoint(ctx, 240.85, 209.2, 235.45, 219.4);
}

static void def_path_116(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 319.05, 208.4);
    CGContextAddQuadCurveToPoint(ctx, 303.65, 197.4, 302.65, 196);
    CGContextAddQuadCurveToPoint(ctx, 295.65, 185, 282.65, 184.6);
    CGContextAddQuadCurveToPoint(ctx, 261.25, 185.4, 244.05, 193.4);
}

static void def_path_117(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 505.85, 137);
    CGContextAddQuadCurveToPoint(ctx, 486.25, 137.4, 497.05, 126.6);
    CGContextAddQuadCurveToPoint(ctx, 503.05, 127, 501.45, 124.6);
    CGContextAddQuadCurveToPoint(ctx, 496.25, 123.4, 486.65, 117);
    CGContextAddQuadCurveToPoint(ctx, 482.65, 113.4, 486.25, 114.2);
    CGContextAddQuadCurveToPoint(ctx, 503.05, 115.4, 474.25, 104.2);
    CGContextAddQuadCurveToPoint(ctx, 482.25, 104.2, 464.25, 93.8);
    CGContextAddQuadCurveToPoint(ctx, 462.25, 92.2, 459.05, 84.6);
    CGContextAddQuadCurveToPoint(ctx, 453.05, 79.4, 448.25, 72.6);
    CGContextAddQuadCurveToPoint(ctx, 447.85, 68.2, 443.05, 63.4);
    CGContextAddQuadCurveToPoint(ctx, 431.45, 49.8, 425.85, 50.2);
    CGContextAddQuadCurveToPoint(ctx, 411.05, 46.6, 405.85, 47.4);
    CGContextAddLineToPoint(ctx, 353.05, 51.8);
    CGContextAddQuadCurveToPoint(ctx, 326.65, 64.6, 334.45, 85.6);
    CGContextAddQuadCurveToPoint(ctx, 340.85, 94, 350.05, 90.2);
    CGContextAddQuadCurveToPoint(ctx, 354.65, 84, 366.25, 86.2);
    CGContextAddQuadCurveToPoint(ctx, 386.65, 89.4, 384.05, 85.8);
    CGContextAddQuadCurveToPoint(ctx, 382.6, 83, 373.8, 78.6);
    CGContextAddLineToPoint(ctx, 365.25, 74.4);
    CGContextAddQuadCurveToPoint(ctx, 365.05, 73.8, 356.25, 70.4);
    CGContextAddQuadCurveToPoint(ctx, 353.25, 69.2, 348.85, 60);
    CGContextAddQuadCurveToPoint(ctx, 345.65, 56.6, 361.45, 62.4);
    CGContextAddQuadCurveToPoint(ctx, 360.25, 63.4, 367.65, 67.4);
    CGContextAddQuadCurveToPoint(ctx, 385.05, 66.4, 395.65, 77.2);
    CGContextAddQuadCurveToPoint(ctx, 406.45, 93.8, 406.65, 85.6);
    CGContextAddQuadCurveToPoint(ctx, 409.45, 76.2, 397.65, 55);
    CGContextAddQuadCurveToPoint(ctx, 398.05, 53, 406.25, 59.6);
    CGContextAddQuadCurveToPoint(ctx, 407.65, 57.6, 408.45, 63.4);
    CGContextAddQuadCurveToPoint(ctx, 408.65, 65.8, 412.45, 73.8);
    CGContextAddQuadCurveToPoint(ctx, 415.25, 86.8, 418.85, 79.4);
    CGContextAddLineToPoint(ctx, 423.45, 88.8);
    CGContextAddQuadCurveToPoint(ctx, 424.85, 91.4, 418.85, 99);
    CGContextAddLineToPoint(ctx, 418.35, 102.3);
    CGContextAddQuadCurveToPoint(ctx, 417.65, 104.05, 413.85, 109.2);
    CGContextAddQuadCurveToPoint(ctx, 408.25, 116.8, 411.65, 121.2);
    CGContextAddQuadCurveToPoint(ctx, 410.25, 127.8, 419.05, 127.4);
    CGContextAddQuadCurveToPoint(ctx, 421.65, 129.6, 425.05, 129.6);
    CGContextAddQuadCurveToPoint(ctx, 426.85, 131.6, 429.25, 131);
    CGContextAddQuadCurveToPoint(ctx, 430.85, 127.2, 437.05, 129.2);
    CGContextAddQuadCurveToPoint(ctx, 438.45, 126.8, 446.65, 126.4);
    CGContextAddQuadCurveToPoint(ctx, 448.3, 122.15, 451.45, 121.6);
    CGContextAddQuadCurveToPoint(ctx, 454.85, 121, 430.25, 78);
    CGContextAddQuadCurveToPoint(ctx, 436.65, 77.2, 428.45, 64.8);
    CGContextAddQuadCurveToPoint(ctx, 427.15, 60.85, 432.5, 66.5);
    CGContextAddLineToPoint(ctx, 439.85, 74.2);
    CGContextAddQuadCurveToPoint(ctx, 441.5, 75.25, 442.05, 76.5);
    CGContextAddQuadCurveToPoint(ctx, 442.7, 77.75, 441.45, 77.6);
    CGContextAddQuadCurveToPoint(ctx, 440.3, 77.45, 439.3, 78.55);
    CGContextAddQuadCurveToPoint(ctx, 438.4, 79.65, 439.45, 79.8);
    CGContextAddQuadCurveToPoint(ctx, 440.95, 80, 447.6, 88.75);
    CGContextAddQuadCurveToPoint(ctx, 455, 98.45, 457.25, 105.2);
    CGContextAddQuadCurveToPoint(ctx, 459.45, 111.8, 464, 116.85);
    CGContextAddLineToPoint(ctx, 472.85, 125.4);
    CGContextAddQuadCurveToPoint(ctx, 479.05, 131.4, 478.25, 155.6);
    CGContextAddQuadCurveToPoint(ctx, 477.85, 164.4, 483.85, 175);
    CGContextAddQuadCurveToPoint(ctx, 485.85, 178.8, 481.65, 197);
    CGContextAddQuadCurveToPoint(ctx, 479.65, 199.2, 481.05, 200);
    CGContextAddQuadCurveToPoint(ctx, 482.05, 201.2, 488.85, 214.4);
    CGContextAddQuadCurveToPoint(ctx, 487.05, 214.2, 490.65, 217.8);
    CGContextAddQuadCurveToPoint(ctx, 495.85, 223.8, 489.45, 220.8);
    CGContextAddQuadCurveToPoint(ctx, 483.45, 219.2, 490.45, 229);
    CGContextAddQuadCurveToPoint(ctx, 491.65, 230.8, 482.65, 226.2);
    CGContextAddQuadCurveToPoint(ctx, 473.45, 225.6, 485.05, 232.8);
    CGContextAddQuadCurveToPoint(ctx, 493.65, 240, 482.25, 235.6);
    CGContextAddQuadCurveToPoint(ctx, 477.65, 233.8, 480.85, 240.6);
    CGContextAddLineToPoint(ctx, 501.25, 249.2);
    CGContextAddQuadCurveToPoint(ctx, 501.65, 253, 498.65, 258);
    CGContextAddQuadCurveToPoint(ctx, 499.05, 262, 496.85, 265.4);
    CGContextAddQuadCurveToPoint(ctx, 495.65, 273.6, 495.05, 274.4);
    CGContextAddQuadCurveToPoint(ctx, 490.85, 274.6, 483.45, 288.4);
    CGContextAddQuadCurveToPoint(ctx, 481.65, 291, 471.45, 303);
    CGContextAddQuadCurveToPoint(ctx, 469.45, 310, 451.45, 302.8);
    CGContextAddQuadCurveToPoint(ctx, 444.85, 306.2, 446.85, 302.8);
    CGContextAddQuadCurveToPoint(ctx, 446.45, 300.6, 451.25, 294.6);
    CGContextAddQuadCurveToPoint(ctx, 458.25, 292, 455.65, 281.2);
    CGContextAddQuadCurveToPoint(ctx, 457.95, 280.4, 453.55, 278.4);
    CGContextAddQuadCurveToPoint(ctx, 448.6, 276.2, 448.65, 275.8);
    CGContextAddQuadCurveToPoint(ctx, 448.85, 274.6, 454.65, 273.2);
    CGContextAddQuadCurveToPoint(ctx, 462.65, 271.2, 458.25, 268.8);
    CGContextAddQuadCurveToPoint(ctx, 457.65, 264.8, 460.65, 259.2);
    CGContextAddQuadCurveToPoint(ctx, 472.25, 258.4, 460.65, 242.2);
    CGContextAddQuadCurveToPoint(ctx, 449.85, 234.6, 448.85, 228.8);
    CGContextAddQuadCurveToPoint(ctx, 456.65, 223.7, 455.8, 214.95);
    CGContextAddLineToPoint(ctx, 453.45, 204.6);
    CGContextAddLineToPoint(ctx, 454.85, 179.4);
    CGContextAddQuadCurveToPoint(ctx, 452.85, 173.2, 449.85, 159.6);
    CGContextAddQuadCurveToPoint(ctx, 452.05, 154.4, 459.45, 141.8);
    CGContextAddLineToPoint(ctx, 466, 135.35);
    CGContextAddQuadCurveToPoint(ctx, 470.15, 131.55, 468.85, 129.8);
    CGContextAddQuadCurveToPoint(ctx, 466.65, 126.8, 458.85, 128.6);
    CGContextAddQuadCurveToPoint(ctx, 451.05, 127.2, 451.65, 132.4);
    CGContextAddQuadCurveToPoint(ctx, 450.05, 133.4, 449.25, 138.4);
    CGContextAddQuadCurveToPoint(ctx, 448.55, 146.35, 439.65, 152.6);
    CGContextAddQuadCurveToPoint(ctx, 428.45, 158.8, 437.65, 162.8);
    CGContextAddQuadCurveToPoint(ctx, 443.65, 169.4, 433.85, 169.6);
    CGContextAddQuadCurveToPoint(ctx, 422.85, 167.8, 431.05, 178);
    CGContextAddQuadCurveToPoint(ctx, 441.85, 190.8, 438.85, 193.6);
    CGContextAddQuadCurveToPoint(ctx, 428.9, 194.55, 440.65, 203.35);
    CGContextAddQuadCurveToPoint(ctx, 440.5, 201.95, 441.25, 203.8);
    CGContextAddLineToPoint(ctx, 440.65, 203.35);
    CGContextAddLineToPoint(ctx, 440.65, 203.6);
    CGContextAddLineToPoint(ctx, 444.65, 211.6);
    CGContextAddQuadCurveToPoint(ctx, 445.45, 213.6, 441.45, 213.8);
    CGContextAddQuadCurveToPoint(ctx, 442.05, 223.4, 426.65, 219.2);
    CGContextAddLineToPoint(ctx, 425.05, 219.4);
    CGContextAddLineToPoint(ctx, 417.3, 218.9);
    CGContextAddQuadCurveToPoint(ctx, 410.25, 218.05, 406.45, 216.6);
    CGContextAddQuadCurveToPoint(ctx, 400.65, 214.4, 393.85, 214.4);
    CGContextAddQuadCurveToPoint(ctx, 389.85, 216.2, 382.25, 216);
    CGContextAddQuadCurveToPoint(ctx, 374.65, 215.8, 366.65, 218.6);
    CGContextAddQuadCurveToPoint(ctx, 362.25, 218.2, 371.05, 214);
    CGContextAddQuadCurveToPoint(ctx, 376.85, 208.6, 368.85, 209.2);
    CGContextAddQuadCurveToPoint(ctx, 347.05, 210.85, 336.25, 200.6);
    CGContextAddQuadCurveToPoint(ctx, 334.25, 199.2, 331.65, 196.4);
    CGContextAddQuadCurveToPoint(ctx, 321.65, 194.4, 333.05, 208.8);
    CGContextAddQuadCurveToPoint(ctx, 334.25, 210.2, 332.85, 211.2);
    CGContextAddQuadCurveToPoint(ctx, 332.05, 209.6, 324.25, 204.2);
    CGContextAddQuadCurveToPoint(ctx, 321.55, 203.25, 318.2, 199.9);
    CGContextAddLineToPoint(ctx, 346.25, 229.8);
    CGContextAddQuadCurveToPoint(ctx, 381.45, 266.4, 353.45, 232.2);
    CGContextAddQuadCurveToPoint(ctx, 345.85, 227.4, 336.65, 208.6);
    CGContextAddQuadCurveToPoint(ctx, 335.45, 205.8, 350.65, 215.8);
    CGContextAddQuadCurveToPoint(ctx, 354.65, 216.6, 368.25, 235.8);
    CGContextAddQuadCurveToPoint(ctx, 361.45, 233.4, 366.25, 240.6);
    CGContextAddLineToPoint(ctx, 389.45, 258.2);
    CGContextAddQuadCurveToPoint(ctx, 393.05, 262.2, 397.05, 263.8);
    CGContextAddQuadCurveToPoint(ctx, 411.05, 258.6, 404.65, 271.8);
    CGContextAddQuadCurveToPoint(ctx, 407.05, 278.6, 412.65, 267);
    CGContextAddQuadCurveToPoint(ctx, 423.85, 250.2, 407.45, 252.6);
    CGContextAddQuadCurveToPoint(ctx, 377.45, 255.4, 370.65, 239.4);
    CGContextAddQuadCurveToPoint(ctx, 368.25, 237, 377.05, 239.4);
    CGContextAddQuadCurveToPoint(ctx, 385.45, 241.4, 369.85, 227);
    CGContextAddQuadCurveToPoint(ctx, 372.25, 227, 381.45, 233.8);
    CGContextAddQuadCurveToPoint(ctx, 391.85, 243, 393.85, 241);
    CGContextAddQuadCurveToPoint(ctx, 411.85, 232.2, 422.25, 239.8);
    CGContextAddQuadCurveToPoint(ctx, 423.15, 240.55, 421.4, 245.25);
    CGContextAddQuadCurveToPoint(ctx, 419.4, 250.65, 420.25, 253.4);
    CGContextAddQuadCurveToPoint(ctx, 421.85, 258.6, 426.65, 271);
    CGContextAddQuadCurveToPoint(ctx, 424.25, 272.6, 424.65, 283.4);
    CGContextAddQuadCurveToPoint(ctx, 441.45, 306.6, 431.85, 304.6);
    CGContextAddQuadCurveToPoint(ctx, 416.25, 304.2, 431.05, 311.8);
    CGContextAddQuadCurveToPoint(ctx, 434.25, 313.8, 443.05, 321);
    CGContextAddQuadCurveToPoint(ctx, 440.25, 319.8, 438.65, 325);
    CGContextAddQuadCurveToPoint(ctx, 443.45, 329, 440.65, 333.8);
    CGContextAddQuadCurveToPoint(ctx, 434.65, 335, 433.45, 339);
    CGContextAddQuadCurveToPoint(ctx, 440.25, 347, 430.25, 347.4);
    CGContextAddQuadCurveToPoint(ctx, 433.85, 351.8, 429.05, 363.8);
    CGContextAddQuadCurveToPoint(ctx, 424.25, 363.8, 417.85, 369.4);
    CGContextAddQuadCurveToPoint(ctx, 420.25, 374.2, 409.85, 379.8);
    CGContextAddQuadCurveToPoint(ctx, 401.45, 381.4, 404.25, 388.2);
    CGContextAddQuadCurveToPoint(ctx, 396.25, 394.2, 393.85, 410.2);
    CGContextAddLineToPoint(ctx, 392.6, 420.65);
    CGContextAddQuadCurveToPoint(ctx, 392.55, 423.1, 395.85, 421.8);
    CGContextAddQuadCurveToPoint(ctx, 401.05, 419.8, 400.25, 407.4);
    CGContextAddQuadCurveToPoint(ctx, 395.45, 391.8, 438.25, 375.8);
    CGContextAddQuadCurveToPoint(ctx, 442.25, 374.2, 443.05, 369);
    CGContextAddQuadCurveToPoint(ctx, 445.05, 369.4, 453.85, 377);
    CGContextAddQuadCurveToPoint(ctx, 461.45, 388.2, 461.85, 379);
    CGContextAddQuadCurveToPoint(ctx, 463.05, 375.4, 461.45, 369.4);
    CGContextAddQuadCurveToPoint(ctx, 467.45, 347.8, 453.45, 341.4);
    CGContextAddQuadCurveToPoint(ctx, 443.45, 307.8, 457.45, 316.2);
    CGContextAddQuadCurveToPoint(ctx, 460.25, 321.8, 471.05, 327);
    CGContextAddLineToPoint(ctx, 474.65, 324.6);
    CGContextAddQuadCurveToPoint(ctx, 473.05, 319.8, 481.45, 313.8);
    CGContextAddQuadCurveToPoint(ctx, 484.25, 320.2, 490.25, 312.2);
    CGContextAddQuadCurveToPoint(ctx, 493.85, 287.8, 506.25, 302.2);
    CGContextAddQuadCurveToPoint(ctx, 510.25, 303.4, 511.45, 296.6);
    CGContextAddQuadCurveToPoint(ctx, 515.05, 286.2, 511.45, 272.6);
    CGContextAddQuadCurveToPoint(ctx, 515.05, 272.2, 524.65, 278.2);
    CGContextAddQuadCurveToPoint(ctx, 526.1, 276.3, 523, 266.95);
    CGContextAddQuadCurveToPoint(ctx, 520.4, 259.1, 522.25, 260.2);
    CGContextAddQuadCurveToPoint(ctx, 526.25, 262.6, 530.65, 264.2);
    CGContextAddQuadCurveToPoint(ctx, 531.45, 262.2, 521.45, 249.8);
    CGContextAddQuadCurveToPoint(ctx, 517.05, 247, 511.85, 226.6);
    CGContextAddQuadCurveToPoint(ctx, 519.05, 230.2, 509.05, 215);
    CGContextAddQuadCurveToPoint(ctx, 509.05, 211.8, 515.05, 200.6);
    CGContextAddQuadCurveToPoint(ctx, 514.25, 193.8, 515.05, 194.2);
    CGContextAddQuadCurveToPoint(ctx, 518.4, 195.65, 520.65, 195.25);
    CGContextAddQuadCurveToPoint(ctx, 523.5, 194.8, 519.05, 190.6);
    CGContextAddQuadCurveToPoint(ctx, 512.25, 184.2, 519.85, 179.4);
    CGContextAddQuadCurveToPoint(ctx, 524.25, 176.6, 510.65, 177);
    CGContextAddQuadCurveToPoint(ctx, 505.45, 172.6, 505.85, 168.6);
    CGContextAddQuadCurveToPoint(ctx, 510.8, 169.85, 505.35, 162.7);
    CGContextAddLineToPoint(ctx, 497.05, 152.6);
    CGContextAddQuadCurveToPoint(ctx, 494.65, 149, 504.25, 143.8);
    CGContextAddQuadCurveToPoint(ctx, 517.45, 140.2, 505.85, 137);
    CGContextClosePath(ctx);
}

static void def_path_118(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 294.2, 188);
    CGContextAddQuadCurveToPoint(ctx, 299.55, 190.8, 303.25, 196.6);
    CGContextAddLineToPoint(ctx, 316.65, 206.6);
    CGContextAddQuadCurveToPoint(ctx, 319.25, 208.4, 324.65, 210.4);
    CGContextAddQuadCurveToPoint(ctx, 310.65, 199, 308.05, 196.2);
    CGContextAddQuadCurveToPoint(ctx, 305.5, 193.45, 294.2, 188);
    CGContextClosePath(ctx);
}

static void def_path_119(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 235.45, 153.2);
    CGContextAddQuadCurveToPoint(ctx, 234.45, 150.45, 225.45, 149);
    CGContextAddLineToPoint(ctx, 225.25, 153.6);
    CGContextAddQuadCurveToPoint(ctx, 230.15, 159.1, 235.85, 156.6);
    CGContextAddQuadCurveToPoint(ctx, 236.55, 156.3, 235.45, 153.2);
    CGContextClosePath(ctx);
}

static void def_path_120(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 235.6, 155);
    CGContextAddLineToPoint(ctx, 235.65, 153.2);
    CGContextAddQuadCurveToPoint(ctx, 234.65, 150.45, 225.45, 148.9);
    CGContextAddLineToPoint(ctx, 225.25, 153.5);
    CGContextAddQuadCurveToPoint(ctx, 229.55, 158.6, 235.85, 156.4);
    CGContextAddLineToPoint(ctx, 235.6, 155);
    CGContextClosePath(ctx);
}

static void def_path_121(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 230.3, 154);
    CGContextAddQuadCurveToPoint(ctx, 230.3, 156.55, 231.45, 156.55);
    CGContextAddQuadCurveToPoint(ctx, 232.6, 156.55, 232.6, 154);
    CGContextAddQuadCurveToPoint(ctx, 232.6, 151.45, 231.45, 151.45);
    CGContextAddQuadCurveToPoint(ctx, 230.3, 151.45, 230.3, 154);
    CGContextClosePath(ctx);
}

static void def_path_122(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 256.05, 242.1);
    CGContextAddQuadCurveToPoint(ctx, 259.25, 240.5, 256.45, 240.5);
    CGContextAddQuadCurveToPoint(ctx, 253.65, 240.5, 249.05, 251);
    CGContextAddQuadCurveToPoint(ctx, 240.65, 261, 233.85, 259.4);
    CGContextAddLineToPoint(ctx, 221.45, 255);
    CGContextAddQuadCurveToPoint(ctx, 219.05, 257.4, 205.05, 258.6);
    CGContextAddQuadCurveToPoint(ctx, 180.25, 264.6, 185.85, 254.6);
    CGContextAddQuadCurveToPoint(ctx, 175, 268.55, 190.95, 283.1);
    CGContextAddQuadCurveToPoint(ctx, 201.25, 296, 211.05, 299.4);
    CGContextAddQuadCurveToPoint(ctx, 221.2, 302.9, 221.05, 299);
    CGContextAddLineToPoint(ctx, 227.85, 287.4);
    CGContextAddQuadCurveToPoint(ctx, 235.85, 281, 225.05, 281.4);
    CGContextAddQuadCurveToPoint(ctx, 222.65, 279, 213.85, 281.4);
    CGContextAddQuadCurveToPoint(ctx, 212.5, 275.55, 228.65, 274.6);
    CGContextAddQuadCurveToPoint(ctx, 244.65, 273.8, 249.85, 253.8);
    CGContextAddQuadCurveToPoint(ctx, 249.45, 252.2, 256.05, 242.1);
    CGContextClosePath(ctx);
}

static void def_path_123(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 187.85, 276.05);
    CGContextAddQuadCurveToPoint(ctx, 192.1, 282.5, 195.85, 286.6);
    CGContextAddQuadCurveToPoint(ctx, 199.1, 290.15, 204.1, 294);
    CGContextAddQuadCurveToPoint(ctx, 209, 297.8, 210.25, 297.8);
    CGContextAddLineToPoint(ctx, 213.5, 299.3);
    CGContextAddQuadCurveToPoint(ctx, 215.9, 300.65, 217.05, 300.2);
    CGContextAddQuadCurveToPoint(ctx, 221.8, 298.3, 222.25, 294.6);
    CGContextAddQuadCurveToPoint(ctx, 222.65, 291.4, 219.85, 289);
    CGContextAddQuadCurveToPoint(ctx, 215.05, 286.6, 211.05, 279.4);
    CGContextAddQuadCurveToPoint(ctx, 210.65, 274.6, 223.85, 273);
    CGContextAddQuadCurveToPoint(ctx, 235.45, 274.6, 242.65, 261);
    CGContextAddLineToPoint(ctx, 234.6, 260.55);
    CGContextAddLineToPoint(ctx, 226.25, 258.6);
    CGContextAddQuadCurveToPoint(ctx, 223.85, 257.8, 219.45, 257.8);
    CGContextAddQuadCurveToPoint(ctx, 183.95, 267.85, 184.55, 259.25);
    CGContextAddLineToPoint(ctx, 183.45, 267);
    CGContextAddQuadCurveToPoint(ctx, 183.15, 268.95, 187.85, 276.05);
    CGContextClosePath(ctx);
}

static void def_path_124(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 193.05, 273.05);
    CGContextAddQuadCurveToPoint(ctx, 191.9, 272, 193.05, 274.6);
    CGContextAddQuadCurveToPoint(ctx, 196.15, 281.55, 198.65, 282.2);
    CGContextAddQuadCurveToPoint(ctx, 199.45, 282.4, 199.55, 283.1);
    CGContextAddLineToPoint(ctx, 197.45, 283.4);
    CGContextAddQuadCurveToPoint(ctx, 193.9, 282.8, 190.75, 280.25);
    CGContextAddQuadCurveToPoint(ctx, 193.4, 283.9, 195.85, 286.6);
    CGContextAddQuadCurveToPoint(ctx, 199.1, 290.15, 204.1, 294);
    CGContextAddQuadCurveToPoint(ctx, 209, 297.8, 210.25, 297.8);
    CGContextAddLineToPoint(ctx, 213.5, 299.3);
    CGContextAddQuadCurveToPoint(ctx, 215.9, 300.65, 217.05, 300.2);
    CGContextAddQuadCurveToPoint(ctx, 221.8, 298.3, 222.25, 294.6);
    CGContextAddQuadCurveToPoint(ctx, 222.65, 291.4, 219.85, 289);
    CGContextAddQuadCurveToPoint(ctx, 216.2, 287.15, 212.45, 281.65);
    CGContextAddQuadCurveToPoint(ctx, 212.65, 284.2, 207.45, 283.4);
    CGContextAddQuadCurveToPoint(ctx, 198.15, 281.95, 195.45, 276.6);
    CGContextAddLineToPoint(ctx, 193.05, 273.05);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 190.75, 280.25);
    CGContextAddLineToPoint(ctx, 187.85, 276.05);
    CGContextAddLineToPoint(ctx, 187.85, 277.4);
    CGContextAddLineToPoint(ctx, 190.75, 280.25);
    CGContextClosePath(ctx);
}

static void def_path_125(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 239.3, 157.8);
    CGContextAddLineToPoint(ctx, 238.35, 159.3);
    CGContextAddQuadCurveToPoint(ctx, 237.3, 161.5, 237.1, 162.95);
    CGContextAddQuadCurveToPoint(ctx, 234.3, 167.6, 229.05, 173.2);
    CGContextAddQuadCurveToPoint(ctx, 224.05, 181.8, 218.85, 184.8);
    CGContextAddQuadCurveToPoint(ctx, 201.7, 194.7, 200.45, 198.6);
    CGContextAddQuadCurveToPoint(ctx, 197.9, 206.75, 194.05, 209.8);
    CGContextAddQuadCurveToPoint(ctx, 189.5, 213.45, 188.85, 219);
    CGContextAddQuadCurveToPoint(ctx, 187.65, 223, 186.25, 224.2);
    CGContextAddQuadCurveToPoint(ctx, 184.65, 225.55, 184.65, 230.6);
    CGContextAddLineToPoint(ctx, 183.65, 234.05);
    CGContextAddQuadCurveToPoint(ctx, 182.75, 236.55, 182.85, 237.8);
    CGContextAddQuadCurveToPoint(ctx, 183.65, 256.8, 183.25, 258.8);
    CGContextAddLineToPoint(ctx, 185.25, 255);
    CGContextAddQuadCurveToPoint(ctx, 187.05, 241.4, 188.25, 237.4);
    CGContextAddQuadCurveToPoint(ctx, 187.45, 230.6, 189.85, 226.4);
    CGContextAddLineToPoint(ctx, 200.45, 203.65);
    CGContextAddQuadCurveToPoint(ctx, 202.05, 200.55, 204.45, 199.6);
    CGContextAddQuadCurveToPoint(ctx, 206.6, 198.75, 211.3, 193.75);
    CGContextAddQuadCurveToPoint(ctx, 216, 188.85, 217.25, 188.4);
    CGContextAddQuadCurveToPoint(ctx, 220.05, 187.4, 219.85, 188.2);
    CGContextAddQuadCurveToPoint(ctx, 225.85, 175.15, 237.1, 176.75);
    CGContextAddQuadCurveToPoint(ctx, 225.75, 173.6, 239.85, 165.2);
    CGContextAddQuadCurveToPoint(ctx, 236.55, 165.95, 237.1, 162.95);
    CGContextAddLineToPoint(ctx, 238.6, 160.05);
    CGContextAddLineToPoint(ctx, 239.3, 157.8);
    CGContextClosePath(ctx);
}

static void def_path_126(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 170.25, 264.2);
    CGContextAddQuadCurveToPoint(ctx, 177.55, 297.2, 177.55, 298.6);
    CGContextAddQuadCurveToPoint(ctx, 178.65, 296.5, 177.35, 289.3);
    CGContextAddQuadCurveToPoint(ctx, 176.05, 282.1, 175.15, 269.4);
    CGContextAddLineToPoint(ctx, 176.65, 259.6);
    CGContextAddQuadCurveToPoint(ctx, 174.65, 258.2, 170.25, 264.2);
    CGContextClosePath(ctx);
}

static void def_path_127(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 178.4, 222.75);
    CGContextAddQuadCurveToPoint(ctx, 177.3, 228.25, 177.85, 229);
    CGContextAddQuadCurveToPoint(ctx, 179.05, 230.6, 180.25, 256.2);
    CGContextAddLineToPoint(ctx, 181.05, 231.4);
    CGContextAddQuadCurveToPoint(ctx, 180.65, 202.2, 198.25, 199);
    CGContextAddQuadCurveToPoint(ctx, 202.75, 196.2, 197.05, 198.5);
    CGContextAddQuadCurveToPoint(ctx, 181.65, 203.7, 179.85, 218.1);
    CGContextAddQuadCurveToPoint(ctx, 177.15, 220.4, 168.55, 232.1);
    CGContextAddQuadCurveToPoint(ctx, 166.65, 234.9, 166.45, 237.1);
    CGContextAddQuadCurveToPoint(ctx, 165.35, 243.5, 169.95, 256.1);
    CGContextAddQuadCurveToPoint(ctx, 172.95, 260.7, 171.45, 257.4);
    CGContextAddQuadCurveToPoint(ctx, 163.45, 236.2, 177.45, 222.2);
    CGContextAddLineToPoint(ctx, 178.65, 220.45);
    CGContextAddLineToPoint(ctx, 178.4, 222.75);
    CGContextClosePath(ctx);
}

static void def_path_128(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 335.7, 109.55);
    CGContextAddLineToPoint(ctx, 335.6, 108.65);
    CGContextAddQuadCurveToPoint(ctx, 335.6, 108.15, 335.25, 108.1);
    CGContextAddQuadCurveToPoint(ctx, 332.8, 107.85, 332.65, 108.45);
    CGContextAddQuadCurveToPoint(ctx, 332.1, 110.9, 334.05, 116);
    CGContextAddQuadCurveToPoint(ctx, 333.4, 116.55, 333.75, 118.4);
    CGContextAddQuadCurveToPoint(ctx, 334.25, 120.85, 332.5, 128.8);
    CGContextAddLineToPoint(ctx, 332.8, 129.2);
    CGContextAddQuadCurveToPoint(ctx, 330.9, 133.25, 328.3, 136.7);
    CGContextAddLineToPoint(ctx, 326.2, 139.65);
    CGContextAddQuadCurveToPoint(ctx, 325.4, 141.3, 325.65, 142.4);
    CGContextAddQuadCurveToPoint(ctx, 323.05, 144.5, 317.35, 152.85);
    CGContextAddQuadCurveToPoint(ctx, 316.4, 154.3, 317.75, 155.05);
    CGContextAddQuadCurveToPoint(ctx, 318.85, 155.6, 319.95, 153.55);
    CGContextAddLineToPoint(ctx, 321.2, 151.55);
    CGContextAddLineToPoint(ctx, 321.3, 150.85);
    CGContextAddLineToPoint(ctx, 328.05, 143.2);
    CGContextAddQuadCurveToPoint(ctx, 329.7, 142.9, 333.3, 140.85);
    CGContextAddLineToPoint(ctx, 334.4, 140.75);
    CGContextAddQuadCurveToPoint(ctx, 336.05, 139.65, 336.25, 135.6);
    CGContextAddQuadCurveToPoint(ctx, 336.4, 133.45, 337.65, 132.8);
    CGContextAddLineToPoint(ctx, 338.25, 131.95);
    CGContextAddLineToPoint(ctx, 338.9, 131.3);
    CGContextAddQuadCurveToPoint(ctx, 339.4, 131.15, 340.7, 129.1);
    CGContextAddLineToPoint(ctx, 342.35, 124.75);
    CGContextAddQuadCurveToPoint(ctx, 342.85, 123.55, 342.35, 122.45);
    CGContextAddLineToPoint(ctx, 338.3, 113.25);
    CGContextAddLineToPoint(ctx, 335.7, 109.55);
    CGContextClosePath(ctx);
}

static void def_path_129(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 325.65, 110.4);
    CGContextAddLineToPoint(ctx, 326, 110.8);
    CGContextAddLineToPoint(ctx, 325.35, 111.6);
    CGContextAddLineToPoint(ctx, 324.85, 113.8);
    CGContextAddQuadCurveToPoint(ctx, 324.6, 115.1, 325, 115.95);
    CGContextAddLineToPoint(ctx, 327.25, 121.2);
    CGContextAddQuadCurveToPoint(ctx, 326.75, 122.05, 326.4, 124.45);
    CGContextAddQuadCurveToPoint(ctx, 326.2, 126.65, 325.3, 127.65);
    CGContextAddLineToPoint(ctx, 325.3, 128.4);
    CGContextAddLineToPoint(ctx, 326.5, 129.55);
    CGContextAddLineToPoint(ctx, 327.25, 129.55);
    CGContextAddLineToPoint(ctx, 328.8, 128.35);
    CGContextAddLineToPoint(ctx, 328.9, 127.6);
    CGContextAddLineToPoint(ctx, 329.6, 126.8);
    CGContextAddLineToPoint(ctx, 329.7, 126.05);
    CGContextAddQuadCurveToPoint(ctx, 333, 122.6, 331.25, 117.6);
    CGContextAddQuadCurveToPoint(ctx, 332.85, 116.65, 331.9, 114.85);
    CGContextAddLineToPoint(ctx, 329.9, 109.7);
    CGContextAddQuadCurveToPoint(ctx, 328, 106.7, 326.15, 108.5);
    CGContextAddQuadCurveToPoint(ctx, 325.25, 109.3, 325.65, 110.4);
    CGContextClosePath(ctx);
}

static void def_path_130(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 391.3, 91.2);
    CGContextAddLineToPoint(ctx, 389.6, 89.7);
    CGContextAddQuadCurveToPoint(ctx, 387.6, 88.6, 387.75, 91.6);
    CGContextAddQuadCurveToPoint(ctx, 388.2, 92.05, 388.05, 92.4);
    CGContextAddLineToPoint(ctx, 387.7, 92.8);
    CGContextAddLineToPoint(ctx, 388.05, 93.2);
    CGContextAddLineToPoint(ctx, 385.4, 95.65);
    CGContextAddQuadCurveToPoint(ctx, 384.75, 98, 386.05, 100.85);
    CGContextAddLineToPoint(ctx, 388.7, 105.7);
    CGContextAddQuadCurveToPoint(ctx, 389.35, 106.85, 387.8, 109.3);
    CGContextAddQuadCurveToPoint(ctx, 387.15, 110.3, 387.75, 111.95);
    CGContextAddQuadCurveToPoint(ctx, 388.3, 113.75, 391.6, 118);
    CGContextAddQuadCurveToPoint(ctx, 394.55, 121.75, 391.25, 124);
    CGContextAddQuadCurveToPoint(ctx, 391.55, 126.05, 393.6, 125.8);
    CGContextAddLineToPoint(ctx, 397.25, 124.8);
    CGContextAddQuadCurveToPoint(ctx, 397.15, 124.4, 397.65, 124.05);
    CGContextAddLineToPoint(ctx, 399, 123.5);
    CGContextAddLineToPoint(ctx, 400.45, 123.2);
    CGContextAddLineToPoint(ctx, 403.15, 119.55);
    CGContextAddQuadCurveToPoint(ctx, 405.95, 113.65, 401.7, 108.35);
    CGContextAddLineToPoint(ctx, 401.6, 107.2);
    CGContextAddQuadCurveToPoint(ctx, 401, 105.5, 396.85, 104);
    CGContextAddLineToPoint(ctx, 393.25, 92.4);
    CGContextAddQuadCurveToPoint(ctx, 392.35, 92.25, 391.3, 91.2);
    CGContextClosePath(ctx);
}

static void def_path_131(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 338.5, 98.9);
    CGContextAddQuadCurveToPoint(ctx, 337.4, 99.5, 335, 102.5);
    CGContextAddLineToPoint(ctx, 334.2, 104.75);
    CGContextAddQuadCurveToPoint(ctx, 334.3, 106.25, 335.35, 106.6);
    CGContextAddQuadCurveToPoint(ctx, 336.2, 106.9, 337.8, 105.8);
    CGContextAddQuadCurveToPoint(ctx, 339.45, 104.65, 340.45, 104.85);
    CGContextAddQuadCurveToPoint(ctx, 340.95, 105.2, 340.85, 105.6);
    CGContextAddLineToPoint(ctx, 341.65, 105.2);
    CGContextAddLineToPoint(ctx, 344.6, 107.45);
    CGContextAddLineToPoint(ctx, 348.35, 108.9);
    CGContextAddQuadCurveToPoint(ctx, 348.95, 109.5, 349.6, 111.7);
    CGContextAddQuadCurveToPoint(ctx, 350.15, 113.7, 351.25, 114.4);
    CGContextAddLineToPoint(ctx, 349.7, 118.4);
    CGContextAddQuadCurveToPoint(ctx, 349.2, 120.85, 351.65, 120.75);
    CGContextAddQuadCurveToPoint(ctx, 352.8, 120.65, 353.65, 118.8);
    CGContextAddLineToPoint(ctx, 354.35, 119.6);
    CGContextAddLineToPoint(ctx, 352.4, 126.4);
    CGContextAddLineToPoint(ctx, 351.65, 126.8);
    CGContextAddQuadCurveToPoint(ctx, 351.35, 129.35, 348.85, 132);
    CGContextAddLineToPoint(ctx, 344.6, 136.5);
    CGContextAddQuadCurveToPoint(ctx, 343.65, 137.7, 344.6, 138.65);
    CGContextAddQuadCurveToPoint(ctx, 345.25, 139.3, 349.65, 138);
    CGContextAddQuadCurveToPoint(ctx, 350, 135.8, 352.05, 135.9);
    CGContextAddLineToPoint(ctx, 352.85, 135.25);
    CGContextAddLineToPoint(ctx, 354, 135.15);
    CGContextAddLineToPoint(ctx, 358.9, 131.65);
    CGContextAddLineToPoint(ctx, 359.65, 131.55);
    CGContextAddLineToPoint(ctx, 360.45, 130.85);
    CGContextAddQuadCurveToPoint(ctx, 360.8, 130.65, 361.25, 131.2);
    CGContextAddLineToPoint(ctx, 360, 132.7);
    CGContextAddLineToPoint(ctx, 358, 133.95);
    CGContextAddLineToPoint(ctx, 356.95, 134.05);
    CGContextAddLineToPoint(ctx, 351.75, 139.5);
    CGContextAddQuadCurveToPoint(ctx, 350.6, 141.55, 352.5, 142.75);
    CGContextAddLineToPoint(ctx, 353.2, 142.75);
    CGContextAddQuadCurveToPoint(ctx, 356.05, 140.6, 359.7, 139.7);
    CGContextAddQuadCurveToPoint(ctx, 360.05, 140.15, 360.45, 140);
    CGContextAddLineToPoint(ctx, 363, 139.2);
    CGContextAddQuadCurveToPoint(ctx, 364.55, 138.75, 365.25, 138);
    CGContextAddQuadCurveToPoint(ctx, 369.65, 138.25, 375.95, 135.8);
    CGContextAddLineToPoint(ctx, 379.6, 134.3);
    CGContextAddQuadCurveToPoint(ctx, 381.55, 133.45, 383.3, 131.65);
    CGContextAddLineToPoint(ctx, 384.05, 131.6);
    CGContextAddLineToPoint(ctx, 384.45, 130.65);
    CGContextAddLineToPoint(ctx, 385.2, 130);
    CGContextAddLineToPoint(ctx, 385.3, 129.25);
    CGContextAddQuadCurveToPoint(ctx, 388.85, 126.6, 387.2, 123.25);
    CGContextAddLineToPoint(ctx, 386.1, 121.55);
    CGContextAddLineToPoint(ctx, 384.45, 121.1);
    CGContextAddLineToPoint(ctx, 382.85, 121.2);
    CGContextAddLineToPoint(ctx, 382.25, 121.65);
    CGContextAddLineToPoint(ctx, 381.6, 121.85);
    CGContextAddLineToPoint(ctx, 378.5, 122.15);
    CGContextAddLineToPoint(ctx, 374.5, 123.4);
    CGContextAddQuadCurveToPoint(ctx, 373.4, 123.35, 373.25, 124);
    CGContextAddLineToPoint(ctx, 372.85, 123.65);
    CGContextAddQuadCurveToPoint(ctx, 369.65, 124.35, 368.4, 125.95);
    CGContextAddLineToPoint(ctx, 367.7, 126.05);
    CGContextAddLineToPoint(ctx, 365.25, 128.75);
    CGContextAddLineToPoint(ctx, 364.5, 128.85);
    CGContextAddLineToPoint(ctx, 362.8, 130.35);
    CGContextAddLineToPoint(ctx, 362.15, 130);
    CGContextAddQuadCurveToPoint(ctx, 362.65, 125.1, 362.45, 124.4);
    CGContextAddLineToPoint(ctx, 368.85, 117.2);
    CGContextAddLineToPoint(ctx, 369.45, 110.8);
    CGContextAddLineToPoint(ctx, 369, 109.55);
    CGContextAddLineToPoint(ctx, 369.05, 108.15);
    CGContextAddQuadCurveToPoint(ctx, 369.25, 107.3, 368.75, 106.9);
    CGContextAddQuadCurveToPoint(ctx, 366.8, 105.2, 365.25, 108);
    CGContextAddLineToPoint(ctx, 359.75, 107.85);
    CGContextAddLineToPoint(ctx, 357.4, 105.1);
    CGContextAddQuadCurveToPoint(ctx, 356.7, 104.2, 356.8, 100.8);
    CGContextAddLineToPoint(ctx, 356.5, 100.4);
    CGContextAddLineToPoint(ctx, 356.85, 100);
    CGContextAddLineToPoint(ctx, 355.95, 98.8);
    CGContextAddLineToPoint(ctx, 354.85, 98);
    CGContextAddQuadCurveToPoint(ctx, 355.3, 96.25, 353.6, 95.7);
    CGContextAddQuadCurveToPoint(ctx, 352.45, 95.3, 350.75, 96.05);
    CGContextAddLineToPoint(ctx, 348.05, 97);
    CGContextAddLineToPoint(ctx, 347.25, 96.45);
    CGContextAddLineToPoint(ctx, 346.4, 95.65);
    CGContextAddLineToPoint(ctx, 344.9, 95.7);
    CGContextAddLineToPoint(ctx, 342.9, 96.5);
    CGContextAddLineToPoint(ctx, 338.5, 98.9);
    CGContextClosePath(ctx);
}

static void def_path_132(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 299.35, 87.9);
    CGContextAddLineToPoint(ctx, 299.05, 87);
    CGContextAddQuadCurveToPoint(ctx, 289.8, 84.15, 278.65, 109.8);
    CGContextAddQuadCurveToPoint(ctx, 276.25, 115, 273.85, 117);
    CGContextAddLineToPoint(ctx, 265.9, 121.05);
    CGContextAddQuadCurveToPoint(ctx, 259.45, 124.25, 258.25, 126.6);
    CGContextAddLineToPoint(ctx, 247.85, 142.6);
    CGContextAddQuadCurveToPoint(ctx, 262.65, 126.6, 265.85, 124.2);
    CGContextAddQuadCurveToPoint(ctx, 273.85, 115.8, 270.65, 122.6);
    CGContextAddQuadCurveToPoint(ctx, 256.65, 133.4, 257.85, 142.6);
    CGContextAddLineToPoint(ctx, 251.45, 159);
    CGContextAddQuadCurveToPoint(ctx, 267.45, 127, 269.85, 125.8);
    CGContextAddQuadCurveToPoint(ctx, 273.7, 123.9, 272.25, 128.2);
    CGContextAddLineToPoint(ctx, 270.65, 139.8);
    CGContextAddLineToPoint(ctx, 269.85, 145.1);
    CGContextAddQuadCurveToPoint(ctx, 275.75, 129.4, 275.05, 126.6);
    CGContextAddQuadCurveToPoint(ctx, 278.25, 123, 280.65, 128.2);
    CGContextAddLineToPoint(ctx, 279.45, 144.2);
    CGContextAddLineToPoint(ctx, 283.85, 156.2);
    CGContextAddQuadCurveToPoint(ctx, 281.45, 145, 283.05, 129.4);
    CGContextAddQuadCurveToPoint(ctx, 281.05, 119, 285.05, 124.6);
    CGContextAddQuadCurveToPoint(ctx, 286.15, 126.15, 293.35, 133.1);
    CGContextAddQuadCurveToPoint(ctx, 296.65, 136.25, 297.9, 138.55);
    CGContextAddQuadCurveToPoint(ctx, 292.8, 123.05, 284.25, 118.6);
    CGContextAddLineToPoint(ctx, 280.25, 124.6);
    CGContextAddLineToPoint(ctx, 279.05, 122.6);
    CGContextAddQuadCurveToPoint(ctx, 275.45, 121.8, 279.85, 115);
    CGContextAddQuadCurveToPoint(ctx, 284.25, 108.2, 283.85, 107.4);
    CGContextAddQuadCurveToPoint(ctx, 290.25, 114.6, 291.85, 114.6);
    CGContextAddQuadCurveToPoint(ctx, 305.05, 107, 306.25, 131.4);
    CGContextAddQuadCurveToPoint(ctx, 313.05, 117, 303.85, 110.2);
    CGContextAddQuadCurveToPoint(ctx, 289.05, 108.2, 290.25, 103);
    CGContextAddLineToPoint(ctx, 297.45, 90.6);
    CGContextAddLineToPoint(ctx, 299.35, 87.9);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 299.35, 87.9);
    CGContextAddLineToPoint(ctx, 299.45, 88.2);
    CGContextAddQuadCurveToPoint(ctx, 300.5, 86.4, 299.35, 87.9);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 269.85, 145.1);
    CGContextAddLineToPoint(ctx, 267.85, 150.2);
    CGContextAddQuadCurveToPoint(ctx, 268.95, 149.4, 269.85, 145.1);
    CGContextClosePath(ctx);
}

static void def_path_133(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 255.85, 118.2);
    CGContextAddQuadCurveToPoint(ctx, 273.05, 108.2, 277.05, 107);
    CGContextAddQuadCurveToPoint(ctx, 281.05, 105.8, 279.05, 103.4);
    CGContextAddQuadCurveToPoint(ctx, 266.25, 103.4, 263.05, 108.6);
    CGContextAddLineToPoint(ctx, 255.85, 118.2);
    CGContextClosePath(ctx);
}

static void def_path_134(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 236.65, 113.8);
    CGContextAddQuadCurveToPoint(ctx, 236.5, 114.9, 235.2, 116.8);
    CGContextAddQuadCurveToPoint(ctx, 234.2, 118.25, 234.65, 119.8);
    CGContextAddQuadCurveToPoint(ctx, 235.35, 122.2, 236.35, 122.95);
    CGContextAddQuadCurveToPoint(ctx, 237.45, 123.75, 237.45, 121);
    CGContextAddQuadCurveToPoint(ctx, 237.45, 117.4, 239.85, 113.8);
    CGContextAddLineToPoint(ctx, 240.95, 110.75);
    CGContextAddQuadCurveToPoint(ctx, 241.15, 108.75, 239.05, 109.8);
    CGContextAddQuadCurveToPoint(ctx, 237.05, 111, 236.65, 113.8);
    CGContextClosePath(ctx);
}

static void def_path_135(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 215.45, 162.75);
    CGContextAddQuadCurveToPoint(ctx, 213.2, 164.75, 211.05, 164.6);
    CGContextAddQuadCurveToPoint(ctx, 205.2, 164.15, 206.25, 148.2);
    CGContextAddLineToPoint(ctx, 202.25, 155.8);
    CGContextAddQuadCurveToPoint(ctx, 201.05, 170.2, 209.05, 167.8);
    CGContextAddLineToPoint(ctx, 212.9, 167.65);
    CGContextAddQuadCurveToPoint(ctx, 214.05, 168.3, 212.65, 169);
    CGContextAddQuadCurveToPoint(ctx, 212.05, 169.3, 214.5, 170.1);
    CGContextAddQuadCurveToPoint(ctx, 217, 170.9, 215.45, 171.8);
    CGContextAddQuadCurveToPoint(ctx, 214.75, 172.2, 216, 172.05);
    CGContextAddLineToPoint(ctx, 219.9, 171.9);
    CGContextAddQuadCurveToPoint(ctx, 226.1, 172.3, 224.65, 178.6);
    CGContextAddLineToPoint(ctx, 230.25, 171);
    CGContextAddQuadCurveToPoint(ctx, 221.85, 167, 218.65, 163.4);
    CGContextAddQuadCurveToPoint(ctx, 216.9, 161.45, 215.45, 162.75);
    CGContextClosePath(ctx);
}

static void def_path_136(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 196.05, 185.6);
    CGContextAddQuadCurveToPoint(ctx, 198.25, 188.6, 199.45, 189);
    CGContextAddQuadCurveToPoint(ctx, 204.85, 190.2, 204.25, 191);
    CGContextAddLineToPoint(ctx, 201.25, 195.2);
    CGContextAddLineToPoint(ctx, 217.65, 185.4);
    CGContextAddQuadCurveToPoint(ctx, 202.25, 189.8, 198.65, 180.2);
    CGContextAddQuadCurveToPoint(ctx, 193.85, 182.6, 196.05, 185.6);
    CGContextClosePath(ctx);
}

static void def_path_137(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 442.75, 247.05);
    CGContextAddLineToPoint(ctx, 441.1, 247.15);
    CGContextAddQuadCurveToPoint(ctx, 440.05, 247.05, 439.8, 247.65);
    CGContextAddLineToPoint(ctx, 439.25, 249.2);
    CGContextAddLineToPoint(ctx, 438.05, 249.6);
    CGContextAddQuadCurveToPoint(ctx, 437, 248.7, 435.75, 248.85);
    CGContextAddQuadCurveToPoint(ctx, 434.55, 249.1, 434.1, 250.4);
    CGContextAddQuadCurveToPoint(ctx, 433.7, 251.45, 434.45, 251.55);
    CGContextAddLineToPoint(ctx, 434.85, 251.2);
    CGContextAddLineToPoint(ctx, 434.1, 252);
    CGContextAddQuadCurveToPoint(ctx, 433.9, 252.35, 434.4, 252.8);
    CGContextAddQuadCurveToPoint(ctx, 435.25, 256.1, 432.45, 257.2);
    CGContextAddQuadCurveToPoint(ctx, 432.25, 258.45, 433.5, 261.25);
    CGContextAddLineToPoint(ctx, 434.05, 264);
    CGContextAddLineToPoint(ctx, 435.65, 265.2);
    CGContextAddQuadCurveToPoint(ctx, 436.85, 263.9, 438.8, 265.05);
    CGContextAddLineToPoint(ctx, 442.05, 267.2);
    CGContextAddQuadCurveToPoint(ctx, 445.55, 266, 446.05, 263.6);
    CGContextAddQuadCurveToPoint(ctx, 451.15, 262.4, 450.2, 259.15);
    CGContextAddLineToPoint(ctx, 451.25, 258.75);
    CGContextAddQuadCurveToPoint(ctx, 451.8, 258.35, 451.6, 258);
    CGContextAddLineToPoint(ctx, 450.1, 256.3);
    CGContextAddQuadCurveToPoint(ctx, 449.3, 255.4, 449.7, 254.4);
    CGContextAddLineToPoint(ctx, 450.65, 253.65);
    CGContextAddLineToPoint(ctx, 451.45, 253.2);
    CGContextAddQuadCurveToPoint(ctx, 451.55, 251.4, 450.7, 250.1);
    CGContextAddQuadCurveToPoint(ctx, 449.2, 247.9, 445.95, 246.15);
    CGContextAddQuadCurveToPoint(ctx, 444.85, 245.5, 442.75, 247.05);
    CGContextClosePath(ctx);
}

static void def_path_138(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 436.05, 278);
    CGContextAddQuadCurveToPoint(ctx, 435.35, 279, 435.8, 280.55);
    CGContextAddLineToPoint(ctx, 436.45, 283.2);
    CGContextAddLineToPoint(ctx, 436.3, 285.9);
    CGContextAddLineToPoint(ctx, 435.25, 290.4);
    CGContextAddLineToPoint(ctx, 438.85, 291.6);
    CGContextAddLineToPoint(ctx, 439.9, 288.55);
    CGContextAddQuadCurveToPoint(ctx, 440.5, 286.85, 441.65, 286);
    CGContextAddQuadCurveToPoint(ctx, 441.1, 285.6, 441.4, 284.9);
    CGContextAddLineToPoint(ctx, 441.85, 284);
    CGContextAddQuadCurveToPoint(ctx, 441.9, 282.35, 439.9, 280.7);
    CGContextAddLineToPoint(ctx, 436.85, 278);
    CGContextAddLineToPoint(ctx, 436.45, 278.35);
    CGContextAddLineToPoint(ctx, 436.05, 278);
    CGContextClosePath(ctx);
}

static void def_path_139(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 341.85, 241);
    CGContextAddQuadCurveToPoint(ctx, 337.6, 238.5, 330.7, 239.55);
    CGContextAddLineToPoint(ctx, 322.25, 241.4);
    CGContextAddQuadCurveToPoint(ctx, 319.7, 241.7, 300.25, 248.2);
    CGContextAddQuadCurveToPoint(ctx, 296.65, 249.4, 286.25, 253.8);
    CGContextAddQuadCurveToPoint(ctx, 276.25, 259.4, 267.45, 269);
    CGContextAddQuadCurveToPoint(ctx, 253.4, 284.35, 270.25, 274.2);
    CGContextAddQuadCurveToPoint(ctx, 271.45, 272.2, 279.45, 265.8);
    CGContextAddQuadCurveToPoint(ctx, 284.9, 261.45, 287.3, 261.35);
    CGContextAddQuadCurveToPoint(ctx, 289.35, 261.25, 288.25, 263.8);
    CGContextAddLineToPoint(ctx, 286.4, 266.55);
    CGContextAddQuadCurveToPoint(ctx, 285.75, 267.35, 286.65, 267.8);
    CGContextAddQuadCurveToPoint(ctx, 287.55, 268.25, 293.65, 262.45);
    CGContextAddLineToPoint(ctx, 301.85, 255);
    CGContextAddQuadCurveToPoint(ctx, 305.05, 253, 319.85, 248.6);
    CGContextAddQuadCurveToPoint(ctx, 322.95, 246.95, 329.15, 245.7);
    CGContextAddQuadCurveToPoint(ctx, 334.95, 244.55, 336.65, 243.4);
    CGContextAddQuadCurveToPoint(ctx, 340.25, 241, 356.65, 249.4);
    CGContextAddLineToPoint(ctx, 341.85, 241);
    CGContextClosePath(ctx);
}

static void def_path_140(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 352.4, 246.2);
    CGContextAddQuadCurveToPoint(ctx, 342.15, 242.1, 341.7, 243.1);
    CGContextAddLineToPoint(ctx, 331.5, 242.9);
    CGContextAddQuadCurveToPoint(ctx, 319.15, 243.1, 307.95, 248.4);
    CGContextAddLineToPoint(ctx, 298.5, 250.7);
    CGContextAddQuadCurveToPoint(ctx, 295.75, 252.7, 287.55, 256.85);
    CGContextAddQuadCurveToPoint(ctx, 279.05, 255.2, 277.65, 268.25);
    CGContextAddQuadCurveToPoint(ctx, 287.75, 258.55, 290.3, 258.65);
    CGContextAddQuadCurveToPoint(ctx, 291.75, 258.7, 297.3, 255.65);
    CGContextAddLineToPoint(ctx, 304.75, 251.5);
    CGContextAddQuadCurveToPoint(ctx, 312.4, 247.55, 326.1, 245.9);
    CGContextAddQuadCurveToPoint(ctx, 338.65, 244.35, 345.55, 245.7);
    CGContextAddQuadCurveToPoint(ctx, 351.65, 246.9, 359.25, 250.3);
    CGContextAddLineToPoint(ctx, 365.45, 253.2);
    CGContextAddQuadCurveToPoint(ctx, 362.95, 250.35, 352.4, 246.2);
    CGContextClosePath(ctx);
}

static void def_path_141(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 347.05, 263);
    CGContextAddQuadCurveToPoint(ctx, 346.8, 264.55, 331.35, 268.75);
    CGContextAddLineToPoint(ctx, 313.85, 273);
    CGContextAddQuadCurveToPoint(ctx, 311.05, 273.4, 297.45, 282.6);
    CGContextAddQuadCurveToPoint(ctx, 293.45, 287.8, 275.45, 289.8);
    CGContextAddQuadCurveToPoint(ctx, 258.65, 291.4, 273.85, 293.8);
    CGContextAddQuadCurveToPoint(ctx, 284.65, 293.8, 289.45, 292.6);
    CGContextAddQuadCurveToPoint(ctx, 291.45, 292.1, 300.25, 287.6);
    CGContextAddQuadCurveToPoint(ctx, 308.75, 283.25, 312.25, 282.6);
    CGContextAddQuadCurveToPoint(ctx, 316, 281.9, 333.8, 273.25);
    CGContextAddLineToPoint(ctx, 352.65, 264.2);
    CGContextAddQuadCurveToPoint(ctx, 357.5, 262.8, 354.65, 261.4);
    CGContextAddQuadCurveToPoint(ctx, 353.2, 260.65, 350.4, 261);
    CGContextAddQuadCurveToPoint(ctx, 347.3, 261.35, 347.05, 263);
    CGContextClosePath(ctx);
}

static void def_path_142(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 345.95, 261.65);
    CGContextAddQuadCurveToPoint(ctx, 328.45, 267.25, 328.25, 268.65);
    CGContextAddQuadCurveToPoint(ctx, 328.1, 269.4, 320.9, 271.55);
    CGContextAddLineToPoint(ctx, 312.65, 273.75);
    CGContextAddQuadCurveToPoint(ctx, 311.2, 273.95, 304.25, 278.65);
    CGContextAddQuadCurveToPoint(ctx, 302.2, 281.35, 293.4, 284.75);
    CGContextAddQuadCurveToPoint(ctx, 284.8, 285.55, 293.35, 286.4);
    CGContextAddQuadCurveToPoint(ctx, 297.7, 284.4, 300.15, 283.8);
    CGContextAddLineToPoint(ctx, 311.85, 278.65);
    CGContextAddLineToPoint(ctx, 331.75, 270.75);
    CGContextAddLineToPoint(ctx, 350.3, 262.85);
    CGContextAddQuadCurveToPoint(ctx, 355.4, 260.5, 363.3, 259.55);
    CGContextAddQuadCurveToPoint(ctx, 368.25, 258.95, 366.95, 258);
    CGContextAddQuadCurveToPoint(ctx, 364, 255.9, 345.95, 261.65);
    CGContextClosePath(ctx);
}

static void def_path_143(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 289.45, 289.8);
    CGContextAddQuadCurveToPoint(ctx, 290.65, 288.2, 285.45, 288.6);
    CGContextAddLineToPoint(ctx, 285.85, 290.6);
    CGContextAddQuadCurveToPoint(ctx, 288.25, 291.4, 289.45, 289.8);
    CGContextClosePath(ctx);
}

static void def_path_144(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 278.25, 290.2);
    CGContextAddLineToPoint(ctx, 278.65, 292.2);
    CGContextAddQuadCurveToPoint(ctx, 281.05, 293, 282.25, 291.4);
    CGContextAddQuadCurveToPoint(ctx, 283.45, 289.8, 278.25, 290.2);
    CGContextClosePath(ctx);
}

static void def_path_145(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 271.85, 293);
    CGContextAddQuadCurveToPoint(ctx, 273.05, 291.4, 267.85, 291.8);
    CGContextAddLineToPoint(ctx, 268.25, 293.8);
    CGContextAddQuadCurveToPoint(ctx, 270.65, 294.6, 271.85, 293);
    CGContextClosePath(ctx);
}

static void def_path_146(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 264.25, 293.8);
    CGContextAddQuadCurveToPoint(ctx, 265.45, 292.2, 260.25, 292.6);
    CGContextAddLineToPoint(ctx, 260.65, 294.6);
    CGContextAddQuadCurveToPoint(ctx, 263.05, 295.4, 264.25, 293.8);
    CGContextClosePath(ctx);
}

static void def_path_147(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 301.85, 254.6);
    CGContextAddQuadCurveToPoint(ctx, 303.05, 253, 298.65, 253);
    CGContextAddLineToPoint(ctx, 297.45, 255.8);
    CGContextAddQuadCurveToPoint(ctx, 300.65, 256.2, 301.85, 254.6);
    CGContextClosePath(ctx);
}

static void def_path_148(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 292.65, 259.8);
    CGContextAddQuadCurveToPoint(ctx, 295.15, 256.45, 288.65, 258.6);
    CGContextAddLineToPoint(ctx, 289.05, 260.6);
    CGContextAddQuadCurveToPoint(ctx, 291.45, 261.4, 292.65, 259.8);
    CGContextClosePath(ctx);
}

static void def_path_149(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 277.45, 263.4);
    CGContextAddLineToPoint(ctx, 277.85, 265.4);
    CGContextAddQuadCurveToPoint(ctx, 280.25, 266.2, 281.45, 264.6);
    CGContextAddQuadCurveToPoint(ctx, 282.65, 263, 277.45, 263.4);
    CGContextClosePath(ctx);
}

static void def_path_150(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 273.85, 270.6);
    CGContextAddQuadCurveToPoint(ctx, 275.05, 269, 269.85, 269.4);
    CGContextAddLineToPoint(ctx, 270.25, 271.4);
    CGContextAddQuadCurveToPoint(ctx, 272.65, 272.2, 273.85, 270.6);
    CGContextClosePath(ctx);
}

static void def_path_151(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 267.05, 275.4);
    CGContextAddQuadCurveToPoint(ctx, 268.25, 273.8, 263.05, 274.2);
    CGContextAddLineToPoint(ctx, 263.45, 276.2);
    CGContextAddQuadCurveToPoint(ctx, 265.85, 277, 267.05, 275.4);
    CGContextClosePath(ctx);
}

static void def_path_152(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 307.45, 282.2);
    CGContextAddQuadCurveToPoint(ctx, 309.05, 280.05, 302.15, 280.6);
    CGContextAddLineToPoint(ctx, 302.65, 283.25);
    CGContextAddQuadCurveToPoint(ctx, 305.85, 284.35, 307.45, 282.2);
    CGContextClosePath(ctx);
}

static void def_path_153(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 317.85, 277.4);
    CGContextAddQuadCurveToPoint(ctx, 319.45, 275.25, 312.55, 275.8);
    CGContextAddLineToPoint(ctx, 313.05, 278.45);
    CGContextAddQuadCurveToPoint(ctx, 316.25, 279.55, 317.85, 277.4);
    CGContextClosePath(ctx);
}

static void def_path_154(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 323.35, 271.4);
    CGContextAddLineToPoint(ctx, 323.85, 274.05);
    CGContextAddQuadCurveToPoint(ctx, 327.05, 275.1, 328.65, 273);
    CGContextAddQuadCurveToPoint(ctx, 330.25, 270.85, 323.35, 271.4);
    CGContextClosePath(ctx);
}

static void def_path_155(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 339.05, 268.2);
    CGContextAddQuadCurveToPoint(ctx, 340.65, 266.05, 333.75, 266.6);
    CGContextAddLineToPoint(ctx, 334.25, 269.25);
    CGContextAddQuadCurveToPoint(ctx, 337.45, 270.35, 339.05, 268.2);
    CGContextClosePath(ctx);
}

static void def_path_156(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 311.45, 250.2);
    CGContextAddQuadCurveToPoint(ctx, 313.05, 248.05, 306.15, 248.6);
    CGContextAddLineToPoint(ctx, 305.85, 252.05);
    CGContextAddQuadCurveToPoint(ctx, 309.85, 252.35, 311.45, 250.2);
    CGContextClosePath(ctx);
}

static void def_path_157(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 321.45, 247);
    CGContextAddQuadCurveToPoint(ctx, 323.05, 244.85, 316.15, 245.4);
    CGContextAddLineToPoint(ctx, 315.45, 248.85);
    CGContextAddQuadCurveToPoint(ctx, 319.85, 249.1, 321.45, 247);
    CGContextClosePath(ctx);
}

static void def_path_158(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 297.45, 286.6);
    CGContextAddQuadCurveToPoint(ctx, 298.65, 285, 293.45, 285.4);
    CGContextAddLineToPoint(ctx, 293.85, 287.4);
    CGContextAddQuadCurveToPoint(ctx, 296.25, 288.2, 297.45, 286.6);
    CGContextClosePath(ctx);
}

static void def_path_159(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 220.25, 186.2);
    CGContextAddQuadCurveToPoint(ctx, 218.65, 185.4, 217.45, 187.4);
    CGContextAddQuadCurveToPoint(ctx, 216.25, 189.4, 215.45, 198.2);
    CGContextAddQuadCurveToPoint(ctx, 215.85, 195, 220.25, 186.2);
    CGContextClosePath(ctx);
}

static void def_path_160(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 198.25, 204.6);
    CGContextAddQuadCurveToPoint(ctx, 197.85, 205.8, 199.05, 217.15);
    CGContextAddQuadCurveToPoint(ctx, 198.8, 213.95, 201.85, 200.2);
    CGContextAddQuadCurveToPoint(ctx, 198.65, 203.4, 198.25, 204.6);
    CGContextClosePath(ctx);
}

static void def_path_161(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.45, 128.8);
    CGContextAddLineToPoint(ctx, 220.25, 129);
    CGContextAddQuadCurveToPoint(ctx, 234.45, 141.6, 235.05, 149.2);
    CGContextAddQuadCurveToPoint(ctx, 235.85, 141, 222.65, 125.6);
    CGContextAddLineToPoint(ctx, 222.45, 128.8);
    CGContextClosePath(ctx);
}

static void def_path_162(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 235.8, 109.2);
    CGContextAddQuadCurveToPoint(ctx, 235.85, 108.7, 233.9, 108.4);
    CGContextAddQuadCurveToPoint(ctx, 233.3, 108.3, 233.2, 109.4);
    CGContextAddLineToPoint(ctx, 231.65, 110.45);
    CGContextAddLineToPoint(ctx, 230.4, 111.7);
    CGContextAddLineToPoint(ctx, 229.45, 112.95);
    CGContextAddQuadCurveToPoint(ctx, 228.55, 113.75, 228.45, 115.9);
    CGContextAddQuadCurveToPoint(ctx, 228.35, 118.25, 227.7, 119.05);
    CGContextAddLineToPoint(ctx, 226.75, 121.65);
    CGContextAddLineToPoint(ctx, 227.1, 124.15);
    CGContextAddQuadCurveToPoint(ctx, 227.2, 124.5, 226.3, 124.85);
    CGContextAddQuadCurveToPoint(ctx, 225.6, 125.2, 226, 125.45);
    CGContextAddLineToPoint(ctx, 226.65, 126.85);
    CGContextAddQuadCurveToPoint(ctx, 227.45, 127.65, 227.1, 129.35);
    CGContextAddQuadCurveToPoint(ctx, 226.85, 130.35, 229, 132.9);
    CGContextAddQuadCurveToPoint(ctx, 229.2, 133.1, 228.25, 134);
    CGContextAddQuadCurveToPoint(ctx, 230.4, 136.35, 231.75, 136.95);
    CGContextAddQuadCurveToPoint(ctx, 232.4, 138.15, 232.4, 139.25);
    CGContextAddLineToPoint(ctx, 233.25, 141.55);
    CGContextAddLineToPoint(ctx, 234.3, 146.3);
    CGContextAddQuadCurveToPoint(ctx, 234.6, 147.45, 237.1, 148.35);
    CGContextAddLineToPoint(ctx, 235.65, 145.95);
    CGContextAddQuadCurveToPoint(ctx, 235.25, 144.7, 235, 141.1);
    CGContextAddQuadCurveToPoint(ctx, 234.9, 138.55, 233.75, 136.9);
    CGContextAddQuadCurveToPoint(ctx, 234.15, 136.2, 233.95, 134.65);
    CGContextAddLineToPoint(ctx, 231.15, 125.15);
    CGContextAddLineToPoint(ctx, 231.45, 124.9);
    CGContextAddQuadCurveToPoint(ctx, 231.9, 118.35, 232.8, 116.6);
    CGContextAddQuadCurveToPoint(ctx, 233.4, 115.25, 233.1, 114.7);
    CGContextAddQuadCurveToPoint(ctx, 235.7, 111.25, 235.8, 109.2);
    CGContextClosePath(ctx);
}

static void def_path_163(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 221.55, 127);
    CGContextAddQuadCurveToPoint(ctx, 216.75, 126.9, 215.65, 127.7);
    CGContextAddQuadCurveToPoint(ctx, 216.65, 131.8, 216.65, 134.6);
    CGContextAddQuadCurveToPoint(ctx, 216.65, 136.5, 220.65, 139.05);
    CGContextAddQuadCurveToPoint(ctx, 224.3, 141.4, 225.85, 141.4);
    CGContextAddQuadCurveToPoint(ctx, 226.75, 141.4, 221.45, 137);
    CGContextAddQuadCurveToPoint(ctx, 219.05, 135, 221.85, 134.6);
    CGContextAddQuadCurveToPoint(ctx, 220.65, 135.4, 223.85, 136.6);
    CGContextAddLineToPoint(ctx, 226.95, 137.85);
    CGContextAddLineToPoint(ctx, 225.85, 137);
    CGContextAddQuadCurveToPoint(ctx, 223.45, 135.4, 223.05, 128.6);
    CGContextAddQuadCurveToPoint(ctx, 222.95, 127.7, 221.55, 127);
    CGContextClosePath(ctx);
}

static void def_path_164(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 222.25, 147.2);
    CGContextAddQuadCurveToPoint(ctx, 214.6, 144.7, 198.85, 147.2);
    CGContextAddLineToPoint(ctx, 223.05, 148);
    CGContextAddQuadCurveToPoint(ctx, 233.35, 149.25, 222.25, 147.2);
    CGContextClosePath(ctx);
}

static void def_path_165(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 198.85, 147.2);
    CGContextAddLineToPoint(ctx, 195.25, 147.8);
}

static void def_path_166(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 200.9, 145.1);
    CGContextAddQuadCurveToPoint(ctx, 209.8, 144.8, 225.1, 148);
    CGContextAddQuadCurveToPoint(ctx, 235.25, 150.15, 224.35, 147.15);
    CGContextAddQuadCurveToPoint(ctx, 216.9, 143.95, 200.9, 145.1);
    CGContextClosePath(ctx);
}

static void def_path_167(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 200.9, 145.1);
    CGContextAddLineToPoint(ctx, 197.4, 145.4);
}

static void def_path_168(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 200.9, 145.1);
    CGContextAddQuadCurveToPoint(ctx, 209.8, 144.8, 225.1, 148);
    CGContextAddQuadCurveToPoint(ctx, 235.25, 150.15, 224.35, 147.15);
    CGContextAddQuadCurveToPoint(ctx, 216.9, 143.95, 200.9, 145.1);
}

static void def_path_169(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 202.8, 143.5);
    CGContextAddQuadCurveToPoint(ctx, 211.7, 143.8, 226.8, 148.15);
    CGContextAddQuadCurveToPoint(ctx, 236.75, 151.05, 226.15, 147.2);
    CGContextAddQuadCurveToPoint(ctx, 218.9, 143.5, 202.8, 143.5);
    CGContextClosePath(ctx);
}

static void def_path_170(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 202.8, 143.5);
    CGContextAddLineToPoint(ctx, 199.4, 143.5);
}

static void def_path_171(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 207.05, 142.3);
    CGContextAddQuadCurveToPoint(ctx, 214.95, 143.3, 227.95, 148.3);
    CGContextAddQuadCurveToPoint(ctx, 236.65, 151.65, 227.4, 147.45);
    CGContextAddQuadCurveToPoint(ctx, 221.3, 143.6, 207.05, 142.3);
    CGContextClosePath(ctx);
}

static void def_path_172(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 207.05, 142.3);
    CGContextAddLineToPoint(ctx, 203.7, 142.05);
}

static void def_path_173(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 341.95, 157.4);
    CGContextAddQuadCurveToPoint(ctx, 341.75, 158.6, 342.7, 157.95);
    CGContextAddQuadCurveToPoint(ctx, 343.75, 156.55, 374, 143.3);
    CGContextAddQuadCurveToPoint(ctx, 371.6, 143.1, 356.7, 149.8);
    CGContextAddQuadCurveToPoint(ctx, 342.1, 156.35, 341.95, 157.4);
    CGContextClosePath(ctx);
}

static void def_path_174(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 338.55, 158.1);
    CGContextAddQuadCurveToPoint(ctx, 338.4, 159.3, 339.3, 158.6);
    CGContextAddQuadCurveToPoint(ctx, 340.25, 157.1, 369.35, 141.55);
    CGContextAddQuadCurveToPoint(ctx, 366.9, 141.55, 352.6, 149.35);
    CGContextAddQuadCurveToPoint(ctx, 338.65, 157.1, 338.55, 158.1);
    CGContextClosePath(ctx);
}

static void def_path_175(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 335.2, 159.55);
    CGContextAddQuadCurveToPoint(ctx, 335.2, 160.75, 336, 160);
    CGContextAddQuadCurveToPoint(ctx, 346.85, 149.1, 364.9, 141);
    CGContextAddQuadCurveToPoint(ctx, 358.5, 142.2, 346.35, 150.5);
    CGContextAddQuadCurveToPoint(ctx, 335.2, 158.15, 335.2, 159.55);
    CGContextClosePath(ctx);
}

static void def_path_176(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 332.45, 161.45);
    CGContextAddQuadCurveToPoint(ctx, 332.4, 162.55, 333.15, 161.85);
    CGContextAddQuadCurveToPoint(ctx, 342.9, 152.05, 359.15, 144.75);
    CGContextAddQuadCurveToPoint(ctx, 353.3, 145.85, 342.45, 153.3);
    CGContextAddQuadCurveToPoint(ctx, 332.45, 160.25, 332.45, 161.45);
    CGContextClosePath(ctx);
}

static void def_path_177(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 352.15, 286.55);
    CGContextAddLineToPoint(ctx, 341.45, 289);
    CGContextAddQuadCurveToPoint(ctx, 338.65, 289.4, 325.05, 298.6);
    CGContextAddQuadCurveToPoint(ctx, 321.05, 303.8, 303.05, 305.8);
    CGContextAddQuadCurveToPoint(ctx, 286.25, 307.4, 301.45, 309.8);
    CGContextAddQuadCurveToPoint(ctx, 312.25, 309.8, 317.05, 308.6);
    CGContextAddQuadCurveToPoint(ctx, 319.05, 308.1, 327.85, 303.6);
    CGContextAddQuadCurveToPoint(ctx, 336.35, 299.25, 339.85, 298.6);
    CGContextAddQuadCurveToPoint(ctx, 343.7, 297.9, 355.2, 293.85);
    CGContextAddLineToPoint(ctx, 367.85, 289.4);
    CGContextAddQuadCurveToPoint(ctx, 369.8, 288.85, 370.1, 284);
    CGContextAddQuadCurveToPoint(ctx, 370.4, 279.25, 369.05, 278.6);
    CGContextAddQuadCurveToPoint(ctx, 367.75, 277.95, 364.6, 279.4);
    CGContextAddQuadCurveToPoint(ctx, 361.35, 280.9, 361.05, 282.6);
    CGContextAddQuadCurveToPoint(ctx, 360.8, 284.15, 352.15, 286.55);
    CGContextClosePath(ctx);
}

static void def_path_178(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 351.45, 290.75);
    CGContextAddQuadCurveToPoint(ctx, 361.8, 287.2, 362.85, 286.2);
    CGContextAddQuadCurveToPoint(ctx, 374.8, 275.35, 374.45, 272.4);
    CGContextAddQuadCurveToPoint(ctx, 371.45, 274, 370.25, 276.6);
    CGContextAddQuadCurveToPoint(ctx, 363.85, 287.2, 349.65, 290.4);
    CGContextAddQuadCurveToPoint(ctx, 326.65, 299.4, 318.85, 301.4);
    CGContextAddQuadCurveToPoint(ctx, 305.45, 306.4, 298.05, 305.6);
    CGContextAddQuadCurveToPoint(ctx, 291.05, 305.8, 297.25, 307.4);
    CGContextAddQuadCurveToPoint(ctx, 317.45, 305.4, 320.85, 303.6);
    CGContextAddQuadCurveToPoint(ctx, 336.45, 298.4, 339.45, 295.8);
    CGContextAddQuadCurveToPoint(ctx, 341, 294.5, 351.45, 290.75);
    CGContextClosePath(ctx);
}

static void def_path_179(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 319.8, 305.25);
    CGContextAddQuadCurveToPoint(ctx, 320.95, 303.7, 315.75, 303.9);
    CGContextAddLineToPoint(ctx, 316.2, 305.9);
    CGContextAddQuadCurveToPoint(ctx, 318.65, 306.8, 319.8, 305.25);
    CGContextClosePath(ctx);
}

static void def_path_180(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 312.6, 306.6);
    CGContextAddQuadCurveToPoint(ctx, 313.75, 305.05, 308.55, 305.25);
    CGContextAddLineToPoint(ctx, 309, 307.25);
    CGContextAddQuadCurveToPoint(ctx, 311.45, 308.15, 312.6, 306.6);
    CGContextClosePath(ctx);
}

static void def_path_181(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 302.2, 307.85);
    CGContextAddQuadCurveToPoint(ctx, 303.35, 306.3, 298.1, 306.5);
    CGContextAddLineToPoint(ctx, 298.6, 308.5);
    CGContextAddQuadCurveToPoint(ctx, 301, 309.4, 302.2, 307.85);
    CGContextClosePath(ctx);
}

static void def_path_182(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 294.55, 308.4);
    CGContextAddQuadCurveToPoint(ctx, 295.7, 306.85, 290.45, 307.05);
    CGContextAddLineToPoint(ctx, 290.95, 309.05);
    CGContextAddQuadCurveToPoint(ctx, 293.4, 309.95, 294.55, 308.4);
    CGContextClosePath(ctx);
}

static void def_path_183(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 332.9, 299.15);
    CGContextAddQuadCurveToPoint(ctx, 336.15, 300.35, 337.7, 298.25);
    CGContextAddQuadCurveToPoint(ctx, 339.25, 296.2, 332.25, 296.5);
    CGContextAddLineToPoint(ctx, 332.9, 299.15);
    CGContextClosePath(ctx);
}

static void def_path_184(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 348, 293.85);
    CGContextAddQuadCurveToPoint(ctx, 348.55, 288.8, 342.6, 292.1);
    CGContextAddLineToPoint(ctx, 343.2, 294.75);
    CGContextAddQuadCurveToPoint(ctx, 347.75, 296.4, 348, 293.85);
    CGContextClosePath(ctx);
}

static void def_path_185(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 357.15, 291.05);
    CGContextAddQuadCurveToPoint(ctx, 358.85, 285.55, 351.7, 289.25);
    CGContextAddLineToPoint(ctx, 352.35, 291.95);
    CGContextAddQuadCurveToPoint(ctx, 356.35, 293.5, 357.15, 291.05);
    CGContextClosePath(ctx);
}

static void def_path_186(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 361.25, 284.45);
    CGContextAddLineToPoint(ctx, 361.85, 287.1);
    CGContextAddQuadCurveToPoint(ctx, 367.05, 288.75, 366.65, 286.2);
    CGContextAddQuadCurveToPoint(ctx, 365.6, 279.55, 361.25, 284.45);
    CGContextClosePath(ctx);
}

static void def_path_187(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 324.15, 303);
    CGContextAddQuadCurveToPoint(ctx, 326.6, 303.85, 327.75, 302.3);
    CGContextAddQuadCurveToPoint(ctx, 328.9, 300.75, 323.7, 301);
    CGContextAddLineToPoint(ctx, 324.15, 303);
    CGContextClosePath(ctx);
}

static void def_path_188(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 358.55, 179.2);
    CGContextAddQuadCurveToPoint(ctx, 358.55, 180.25, 359.3, 179.6);
    CGContextAddQuadCurveToPoint(ctx, 368.8, 170.2, 384.9, 163.5);
    CGContextAddQuadCurveToPoint(ctx, 379.15, 164.35, 368.35, 171.4);
    CGContextAddQuadCurveToPoint(ctx, 358.55, 177.95, 358.55, 179.2);
    CGContextClosePath(ctx);
}

static void def_path_189(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 362.25, 243.4);
    CGContextAddQuadCurveToPoint(ctx, 343.85, 231, 361.05, 245.4);
    CGContextAddQuadCurveToPoint(ctx, 372.35, 254.85, 380.05, 265);
    CGContextAddQuadCurveToPoint(ctx, 386.3, 273.2, 385.85, 275);
    CGContextAddQuadCurveToPoint(ctx, 385.45, 276.6, 382.25, 274.6);
    CGContextAddQuadCurveToPoint(ctx, 375.85, 274.3, 384.25, 284.2);
    CGContextAddQuadCurveToPoint(ctx, 395.45, 268.2, 392.25, 293.4);
    CGContextAddQuadCurveToPoint(ctx, 395.45, 314.2, 398.65, 306.6);
    CGContextAddQuadCurveToPoint(ctx, 402.65, 280.6, 393.45, 269.4);
    CGContextAddQuadCurveToPoint(ctx, 384.25, 265.8, 362.25, 243.4);
    CGContextClosePath(ctx);
}

static void def_path_190(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 433.05, 312.2);
    CGContextAddQuadCurveToPoint(ctx, 413.4, 297.25, 358.05, 288);
    CGContextAddQuadCurveToPoint(ctx, 342.1, 285.3, 321.65, 282.95);
    CGContextAddLineToPoint(ctx, 305.45, 281.2);
    CGContextAddQuadCurveToPoint(ctx, 303.65, 280.4, 303.85, 282.2);
    CGContextAddQuadCurveToPoint(ctx, 387.85, 289, 433.05, 312.2);
    CGContextClosePath(ctx);
}

static void def_path_191(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 388.65, 281.05);
    CGContextAddQuadCurveToPoint(ctx, 365.85, 278.65, 338.55, 277.55);
    CGContextAddLineToPoint(ctx, 315.85, 276.8);
    CGContextAddQuadCurveToPoint(ctx, 314.05, 276, 314.25, 277.8);
    CGContextAddQuadCurveToPoint(ctx, 455.85, 283.8, 477.85, 309);
    CGContextAddQuadCurveToPoint(ctx, 463.15, 288.85, 388.65, 281.05);
    CGContextClosePath(ctx);
}

static void def_path_192(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 327.45, 272.8);
    CGContextAddQuadCurveToPoint(ctx, 325.65, 272, 325.85, 273.8);
    CGContextAddQuadCurveToPoint(ctx, 461.35, 269.25, 505.5, 280.85);
    CGContextAddQuadCurveToPoint(ctx, 520.95, 285.75, 526.25, 293);
    CGContextAddQuadCurveToPoint(ctx, 523.45, 285.6, 505.5, 280.85);
    CGContextAddQuadCurveToPoint(ctx, 478.05, 272.2, 418.65, 271.05);
    CGContextAddQuadCurveToPoint(ctx, 389.9, 270.5, 355.9, 271.7);
    CGContextAddLineToPoint(ctx, 327.45, 272.8);
    CGContextClosePath(ctx);
}

static void def_path_193(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 485.05, 262.6);
    CGContextAddQuadCurveToPoint(ctx, 483, 258.8, 478.05, 256.35);
    CGContextAddQuadCurveToPoint(ctx, 482.4, 258.95, 485.05, 262.6);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 478.05, 256.35);
    CGContextAddQuadCurveToPoint(ctx, 458.2, 244.5, 403.05, 253.45);
    CGContextAddQuadCurveToPoint(ctx, 382.45, 256.8, 357.9, 262.9);
    CGContextAddLineToPoint(ctx, 337.45, 268);
    CGContextAddQuadCurveToPoint(ctx, 335.65, 267.2, 335.85, 269);
    CGContextAddQuadCurveToPoint(ctx, 450.75, 242.75, 478.05, 256.35);
    CGContextClosePath(ctx);
}

static void def_path_194(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 485.05, 262.6);
    CGContextAddQuadCurveToPoint(ctx, 483, 258.8, 478.05, 256.35);
    CGContextAddQuadCurveToPoint(ctx, 482.4, 258.95, 485.05, 262.6);
    CGContextClosePath(ctx);
}

static void def_path_195(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 478.05, 256.35);
    CGContextAddQuadCurveToPoint(ctx, 450.75, 242.75, 335.85, 269);
    CGContextAddQuadCurveToPoint(ctx, 335.65, 267.2, 337.45, 268);
    CGContextAddLineToPoint(ctx, 357.9, 262.9);
    CGContextAddQuadCurveToPoint(ctx, 382.45, 256.8, 403.05, 253.45);
    CGContextAddQuadCurveToPoint(ctx, 458.2, 244.5, 478.05, 256.35);
}

static void def_path_196(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 279.45, 290.8);
    CGContextAddQuadCurveToPoint(ctx, 277.65, 290, 277.85, 291.8);
    CGContextAddQuadCurveToPoint(ctx, 293.85, 290.6, 301.05, 332.6);
    CGContextAddQuadCurveToPoint(ctx, 299.8, 308.15, 290.15, 297.45);
    CGContextAddQuadCurveToPoint(ctx, 287.05, 294, 283.3, 292.15);
    CGContextAddLineToPoint(ctx, 279.45, 290.8);
    CGContextClosePath(ctx);
}

static void def_path_197(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 270.65, 292.4);
    CGContextAddQuadCurveToPoint(ctx, 268.85, 291.6, 269.05, 293.4);
    CGContextAddQuadCurveToPoint(ctx, 285.05, 292.2, 283.85, 327.4);
    CGContextAddQuadCurveToPoint(ctx, 285.6, 303, 278.95, 295.65);
    CGContextAddQuadCurveToPoint(ctx, 276.85, 293.3, 273.85, 292.7);
    CGContextAddLineToPoint(ctx, 270.65, 292.4);
    CGContextClosePath(ctx);
}

static void def_path_198(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 262.65, 292.8);
    CGContextAddQuadCurveToPoint(ctx, 260.85, 292, 261.05, 293.8);
    CGContextAddQuadCurveToPoint(ctx, 277.05, 292.6, 267.45, 316.6);
    CGContextAddQuadCurveToPoint(ctx, 275.25, 302.5, 270.35, 296.6);
    CGContextAddQuadCurveToPoint(ctx, 268.85, 294.75, 265.9, 293.65);
    CGContextAddLineToPoint(ctx, 262.65, 292.8);
    CGContextClosePath(ctx);
}

static void def_path_199(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 346.7, 209);
    CGContextAddQuadCurveToPoint(ctx, 379.35, 176.55, 413.7, 173.1);
    CGContextAddQuadCurveToPoint(ctx, 375.35, 161, 308.4, 249.45);
    CGContextAddQuadCurveToPoint(ctx, 307.95, 251.45, 309.5, 250.25);
    CGContextAddQuadCurveToPoint(ctx, 313.4, 247.1, 324.65, 233.6);
    CGContextAddQuadCurveToPoint(ctx, 338.1, 217.55, 346.7, 209);
    CGContextClosePath(ctx);
}

static void def_path_200(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 465.9, 180.1);
    CGContextAddQuadCurveToPoint(ctx, 439.75, 180.6, 382.8, 210);
    CGContextAddQuadCurveToPoint(ctx, 362.2, 220.65, 339.3, 234.2);
    CGContextAddLineToPoint(ctx, 320.1, 245.85);
    CGContextAddQuadCurveToPoint(ctx, 318.2, 246.45, 319.6, 247.65);
    CGContextAddQuadCurveToPoint(ctx, 431.5, 182, 465.9, 180.1);
    CGContextClosePath(ctx);
}

static void def_path_201(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 465.9, 180.1);
    CGContextAddLineToPoint(ctx, 473.7, 180.7);
}

static void def_path_202(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 465.9, 180.1);
    CGContextAddQuadCurveToPoint(ctx, 431.5, 182, 319.6, 247.65);
    CGContextAddQuadCurveToPoint(ctx, 318.2, 246.45, 320.1, 245.85);
    CGContextAddLineToPoint(ctx, 339.3, 234.2);
    CGContextAddQuadCurveToPoint(ctx, 362.2, 220.65, 382.8, 210);
    CGContextAddQuadCurveToPoint(ctx, 439.75, 180.6, 465.9, 180.1);
}

static void def_path_203(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 315, 221.1);
    CGContextAddQuadCurveToPoint(ctx, 329.7, 191.55, 356.1, 190.8);
    CGContextAddQuadCurveToPoint(ctx, 323.7, 176.1, 298.75, 253.75);
    CGContextAddQuadCurveToPoint(ctx, 298.25, 255.35, 299.95, 254.4);
    CGContextAddQuadCurveToPoint(ctx, 302.45, 252.9, 306.3, 242.4);
    CGContextAddQuadCurveToPoint(ctx, 312.2, 226.7, 315, 221.1);
    CGContextClosePath(ctx);
}

static void def_path_204(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 279.7, 265.85);
    CGContextAddQuadCurveToPoint(ctx, 282.65, 265.45, 289.6, 258.65);
    CGContextAddQuadCurveToPoint(ctx, 300.25, 248.4, 304.9, 244.65);
    CGContextAddQuadCurveToPoint(ctx, 328.95, 225.25, 355.8, 228.3);
    CGContextAddQuadCurveToPoint(ctx, 323.8, 213.95, 278.8, 264.8);
    CGContextAddQuadCurveToPoint(ctx, 277.75, 266.1, 279.7, 265.85);
    CGContextClosePath(ctx);
}

static void def_path_205(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 291.1, 259.5);
    CGContextAddQuadCurveToPoint(ctx, 293.95, 258.5, 299.45, 250.55);
    CGContextAddQuadCurveToPoint(ctx, 308.3, 237.95, 311.75, 233.85);
    CGContextAddQuadCurveToPoint(ctx, 331.65, 210.2, 358.6, 208.1);
    CGContextAddQuadCurveToPoint(ctx, 324.45, 200.15, 290.05, 258.65);
    CGContextAddQuadCurveToPoint(ctx, 289.25, 260.15, 291.1, 259.5);
    CGContextClosePath(ctx);
}

static void def_path_206(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 272.5, 270.75);
    CGContextAddQuadCurveToPoint(ctx, 274.9, 270.4, 280.55, 264.9);
    CGContextAddQuadCurveToPoint(ctx, 289.85, 256, 292.9, 253.55);
    CGContextAddQuadCurveToPoint(ctx, 312.35, 237.85, 334.1, 240.35);
    CGContextAddQuadCurveToPoint(ctx, 308.2, 228.75, 271.75, 269.9);
    CGContextAddQuadCurveToPoint(ctx, 270.9, 270.95, 272.5, 270.75);
    CGContextClosePath(ctx);
}

static void def_path_207(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 264.75, 276.75);
    CGContextAddQuadCurveToPoint(ctx, 265.75, 276.65, 272.2, 271.6);
    CGContextAddQuadCurveToPoint(ctx, 280.35, 265.3, 286, 261.85);
    CGContextAddQuadCurveToPoint(ctx, 306.7, 249.35, 318.05, 258.85);
    CGContextAddQuadCurveToPoint(ctx, 306, 240.15, 264.15, 275.8);
    CGContextAddQuadCurveToPoint(ctx, 263.15, 276.85, 264.75, 276.75);
    CGContextClosePath(ctx);
}

static void def_path_208(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 487.15, 195.35);
    CGContextAddQuadCurveToPoint(ctx, 461.1, 192.65, 401.2, 214.55);
    CGContextAddQuadCurveToPoint(ctx, 380.15, 222.2, 354.95, 233.05);
    CGContextAddLineToPoint(ctx, 334.45, 242.15);
    CGContextAddQuadCurveToPoint(ctx, 332.5, 242.55, 333.7, 243.9);
    CGContextAddQuadCurveToPoint(ctx, 452.65, 193.1, 487.15, 195.35);
    CGContextClosePath(ctx);
}

static void def_path_209(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 487.15, 195.35);
    CGContextAddQuadCurveToPoint(ctx, 491.6, 195.75, 495.05, 196.95);
}

static void def_path_210(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 487.15, 195.35);
    CGContextAddQuadCurveToPoint(ctx, 452.65, 193.1, 333.7, 243.9);
    CGContextAddQuadCurveToPoint(ctx, 332.5, 242.55, 334.45, 242.15);
    CGContextAddLineToPoint(ctx, 354.95, 233.05);
    CGContextAddQuadCurveToPoint(ctx, 380.15, 222.2, 401.2, 214.55);
    CGContextAddQuadCurveToPoint(ctx, 461.1, 192.65, 487.15, 195.35);
}

static void def_path_211(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 301.85, 307.2);
    CGContextAddQuadCurveToPoint(ctx, 300.05, 306.4, 300.25, 308.2);
    CGContextAddQuadCurveToPoint(ctx, 316.25, 307, 306.65, 331);
    CGContextAddQuadCurveToPoint(ctx, 314.45, 316.9, 309.55, 311);
    CGContextAddQuadCurveToPoint(ctx, 308.05, 309.15, 305.1, 308.05);
    CGContextAddLineToPoint(ctx, 301.85, 307.2);
    CGContextClosePath(ctx);
}

static void def_path_212(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 312.25, 305.6);
    CGContextAddQuadCurveToPoint(ctx, 310.45, 304.8, 310.65, 306.6);
    CGContextAddQuadCurveToPoint(ctx, 326.65, 305.4, 333.85, 347.4);
    CGContextAddQuadCurveToPoint(ctx, 332.6, 322.95, 322.95, 312.25);
    CGContextAddQuadCurveToPoint(ctx, 319.85, 308.8, 316.1, 306.95);
    CGContextAddLineToPoint(ctx, 312.25, 305.6);
    CGContextClosePath(ctx);
}

static void def_path_213(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 335.85, 310.45);
    CGContextAddQuadCurveToPoint(ctx, 330, 307.3, 324.25, 305.45);
    CGContextAddLineToPoint(ctx, 319.05, 304);
    CGContextAddQuadCurveToPoint(ctx, 317.25, 303.2, 317.45, 305);
    CGContextAddQuadCurveToPoint(ctx, 333.45, 303.8, 369.05, 340.6);
    CGContextAddQuadCurveToPoint(ctx, 354.25, 320.3, 335.85, 310.45);
    CGContextClosePath(ctx);
}

static void def_path_214(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 326.55, 301.75);
    CGContextAddQuadCurveToPoint(ctx, 324.65, 301.2, 325.05, 302.95);
    CGContextAddQuadCurveToPoint(ctx, 340.75, 299.65, 386.95, 334.6);
    CGContextAddQuadCurveToPoint(ctx, 363.1, 313.2, 343.1, 305.5);
    CGContextAddQuadCurveToPoint(ctx, 336.9, 303.1, 331.35, 302.2);
    CGContextAddLineToPoint(ctx, 326.55, 301.75);
    CGContextClosePath(ctx);
}

static void def_path_215(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 336.95, 297.35);
    CGContextAddQuadCurveToPoint(ctx, 335.05, 296.8, 335.5, 298.55);
    CGContextAddQuadCurveToPoint(ctx, 351.15, 295.25, 425.35, 337.4);
    CGContextAddQuadCurveToPoint(ctx, 392.95, 315.5, 362.4, 304.4);
    CGContextAddQuadCurveToPoint(ctx, 352.95, 300.95, 344.2, 298.85);
    CGContextAddLineToPoint(ctx, 336.95, 297.35);
    CGContextClosePath(ctx);
}

static void def_path_216(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 382.25, 316.2);
    CGContextAddQuadCurveToPoint(ctx, 363.3, 299.5, 328.7, 291.35);
    CGContextAddQuadCurveToPoint(ctx, 318.3, 288.9, 306.45, 287.25);
    CGContextAddLineToPoint(ctx, 296.65, 286);
    CGContextAddQuadCurveToPoint(ctx, 294.85, 285.2, 295.05, 287);
    CGContextAddQuadCurveToPoint(ctx, 347.35, 291.45, 382.25, 316.2);
    CGContextClosePath(ctx);
}

static void def_path_217(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 286.65, 290);
    CGContextAddQuadCurveToPoint(ctx, 284.85, 289.2, 285.05, 291);
    CGContextAddQuadCurveToPoint(ctx, 301.05, 289.8, 336.65, 326.6);
    CGContextAddQuadCurveToPoint(ctx, 321.85, 306.3, 303.45, 296.45);
    CGContextAddQuadCurveToPoint(ctx, 297.6, 293.3, 291.85, 291.45);
    CGContextAddLineToPoint(ctx, 286.65, 290);
    CGContextClosePath(ctx);
}

static void def_path_218(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 347.7, 292.65);
    CGContextAddQuadCurveToPoint(ctx, 345.8, 292.25, 346.35, 293.95);
    CGContextAddQuadCurveToPoint(ctx, 361.15, 291.7, 438.85, 326.1);
    CGContextAddQuadCurveToPoint(ctx, 404.85, 306.6, 373.65, 297.8);
    CGContextAddQuadCurveToPoint(ctx, 364.05, 295.1, 355.1, 293.6);
    CGContextAddLineToPoint(ctx, 347.7, 292.65);
    CGContextClosePath(ctx);
}

static void def_path_219(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 356.1, 290.25);
    CGContextAddQuadCurveToPoint(ctx, 354.2, 289.85, 354.75, 291.55);
    CGContextAddQuadCurveToPoint(ctx, 370.15, 288.9, 447.25, 323.7);
    CGContextAddQuadCurveToPoint(ctx, 413.25, 304.2, 382.05, 295.4);
    CGContextAddQuadCurveToPoint(ctx, 372.45, 292.7, 363.5, 291.2);
    CGContextAddLineToPoint(ctx, 356.1, 290.25);
    CGContextClosePath(ctx);
}

static void def_path_220(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 374.9, 286.65);
    CGContextAddLineToPoint(ctx, 365.7, 285.25);
    CGContextAddQuadCurveToPoint(ctx, 363.8, 284.85, 364.35, 286.55);
    CGContextAddQuadCurveToPoint(ctx, 379.75, 283.9, 500.45, 324.3);
    CGContextAddQuadCurveToPoint(ctx, 444.1, 302.8, 400.1, 292);
    CGContextAddLineToPoint(ctx, 374.9, 286.65);
    CGContextClosePath(ctx);
}

static void def_path_221(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 257.05, 294.6);
    CGContextAddQuadCurveToPoint(ctx, 258.25, 293, 253.05, 293.4);
    CGContextAddLineToPoint(ctx, 253.45, 295.4);
    CGContextAddQuadCurveToPoint(ctx, 255.85, 296.2, 257.05, 294.6);
    CGContextClosePath(ctx);
}

static void def_path_222(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 287.85, 308.6);
    CGContextAddQuadCurveToPoint(ctx, 289.05, 307, 283.85, 307.4);
    CGContextAddLineToPoint(ctx, 284.25, 309.4);
    CGContextAddQuadCurveToPoint(ctx, 286.65, 310.2, 287.85, 308.6);
    CGContextClosePath(ctx);
}

static void def_path_223(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 279.05, 308.2);
    CGContextAddQuadCurveToPoint(ctx, 280.25, 306.6, 275.05, 307);
    CGContextAddLineToPoint(ctx, 275.45, 309);
    CGContextAddQuadCurveToPoint(ctx, 277.85, 309.8, 279.05, 308.2);
    CGContextClosePath(ctx);
}

static void def_path_224(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 179.4, 297.2);
    CGContextAddQuadCurveToPoint(ctx, 181.4, 298.75, 183.05, 297.6);
    CGContextAddQuadCurveToPoint(ctx, 184.75, 296.5, 179.7, 295.2);
    CGContextAddLineToPoint(ctx, 179.4, 297.2);
    CGContextClosePath(ctx);
}

static void def_path_225(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 185.05, 288);
    CGContextAddQuadCurveToPoint(ctx, 186.75, 286.9, 181.7, 285.6);
    CGContextAddLineToPoint(ctx, 181.4, 287.6);
    CGContextAddQuadCurveToPoint(ctx, 183.4, 289.15, 185.05, 288);
    CGContextClosePath(ctx);
}

static void def_path_226(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 177.85, 283.6);
    CGContextAddQuadCurveToPoint(ctx, 179.55, 282.5, 174.5, 281.2);
    CGContextAddLineToPoint(ctx, 174.2, 283.2);
    CGContextAddQuadCurveToPoint(ctx, 176.2, 284.75, 177.85, 283.6);
    CGContextClosePath(ctx);
}

static void def_path_227(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 229.85, 371.8);
    CGContextAddQuadCurveToPoint(ctx, 242.25, 362.2, 254.25, 356.2);
    CGContextAddQuadCurveToPoint(ctx, 252.65, 356.2, 248.65, 358.2);
    CGContextAddQuadCurveToPoint(ctx, 245.9, 358.2, 240.6, 361.25);
    CGContextAddQuadCurveToPoint(ctx, 233.45, 365.35, 229.85, 371.8);
    CGContextClosePath(ctx);
}

static void def_path_228(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 337.05, 438.2);
    CGContextAddLineToPoint(ctx, 336.2, 439.2);
    CGContextAddQuadCurveToPoint(ctx, 336, 442.35, 336.25, 443.55);
    CGContextAddQuadCurveToPoint(ctx, 336.45, 444.6, 337.7, 444.6);
    CGContextAddQuadCurveToPoint(ctx, 338.95, 444.7, 339.65, 443.6);
    CGContextAddLineToPoint(ctx, 341.95, 448.85);
    CGContextAddQuadCurveToPoint(ctx, 342.15, 449.55, 342.45, 449.55);
    CGContextAddQuadCurveToPoint(ctx, 344.3, 449.7, 344.2, 449.25);
    CGContextAddQuadCurveToPoint(ctx, 342.35, 439.95, 338.35, 438.2);
    CGContextAddLineToPoint(ctx, 337.05, 438.2);
    CGContextClosePath(ctx);
}

static void def_path_229(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 335.1, 455.65);
    CGContextAddLineToPoint(ctx, 332.5, 449.55);
    CGContextAddLineToPoint(ctx, 332.4, 448.45);
    CGContextAddQuadCurveToPoint(ctx, 331.35, 446.25, 329.25, 446.8);
    CGContextAddQuadCurveToPoint(ctx, 327.9, 449.55, 330.8, 452.85);
    CGContextAddLineToPoint(ctx, 330.9, 453.6);
    CGContextAddLineToPoint(ctx, 331.6, 455.8);
    CGContextAddQuadCurveToPoint(ctx, 332.05, 457.05, 332.9, 457.4);
    CGContextAddLineToPoint(ctx, 334.4, 457);
    CGContextAddQuadCurveToPoint(ctx, 335.4, 456.4, 335.1, 455.65);
    CGContextClosePath(ctx);
}

static void def_path_230(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 290.2, 443.75);
    CGContextAddLineToPoint(ctx, 289.05, 445.7);
    CGContextAddLineToPoint(ctx, 287.7, 449.3);
    CGContextAddQuadCurveToPoint(ctx, 286.65, 450.25, 286.9, 451.8);
    CGContextAddQuadCurveToPoint(ctx, 286.75, 462, 287, 461.75);
    CGContextAddLineToPoint(ctx, 291.1, 449.4);
    CGContextAddLineToPoint(ctx, 291.3, 448.4);
    CGContextAddLineToPoint(ctx, 291.3, 447.25);
    CGContextAddQuadCurveToPoint(ctx, 292.55, 444.85, 292.3, 444.05);
    CGContextAddQuadCurveToPoint(ctx, 291.75, 442.45, 290.2, 443.75);
    CGContextClosePath(ctx);
}

static void def_path_231(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 270.65, 432.45);
    CGContextAddQuadCurveToPoint(ctx, 270.5, 431.7, 269.55, 431.9);
    CGContextAddLineToPoint(ctx, 268.55, 432.8);
    CGContextAddQuadCurveToPoint(ctx, 267.55, 437.35, 263.15, 441.5);
    CGContextAddQuadCurveToPoint(ctx, 261.8, 442.75, 260.2, 446.5);
    CGContextAddLineToPoint(ctx, 258.85, 450.4);
    CGContextAddLineToPoint(ctx, 265.65, 441.6);
    CGContextAddQuadCurveToPoint(ctx, 271.1, 436.45, 270.65, 432.45);
    CGContextClosePath(ctx);
}

static void def_path_232(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 248.45, 438);
    CGContextAddLineToPoint(ctx, 247.45, 442.95);
    CGContextAddLineToPoint(ctx, 249.65, 438.75);
    CGContextAddLineToPoint(ctx, 252.05, 435.65);
    CGContextAddQuadCurveToPoint(ctx, 252.6, 435.25, 252.5, 434.45);
    CGContextAddQuadCurveToPoint(ctx, 254.75, 431, 254.8, 430);
    CGContextAddQuadCurveToPoint(ctx, 254.4, 429.4, 254.05, 429.65);
    CGContextAddLineToPoint(ctx, 253.35, 430.1);
    CGContextAddQuadCurveToPoint(ctx, 251.25, 432.65, 248.45, 438);
    CGContextClosePath(ctx);
}

static void def_path_233(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 270.7, 452.2);
    CGContextAddQuadCurveToPoint(ctx, 270.5, 450.3, 270.15, 450.55);
    CGContextAddLineToPoint(ctx, 267.25, 452.75);
    CGContextAddQuadCurveToPoint(ctx, 265.35, 454.95, 265.2, 458.65);
    CGContextAddLineToPoint(ctx, 266.65, 457.6);
    CGContextAddLineToPoint(ctx, 269.95, 453.65);
    CGContextAddLineToPoint(ctx, 270.7, 452.2);
    CGContextClosePath(ctx);
}

static void def_path_234(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 287.5, 429.5);
    CGContextAddLineToPoint(ctx, 286.45, 431.2);
    CGContextAddQuadCurveToPoint(ctx, 285.65, 430.15, 284.6, 430.75);
    CGContextAddLineToPoint(ctx, 282.85, 431.95);
    CGContextAddLineToPoint(ctx, 282.45, 431.65);
    CGContextAddLineToPoint(ctx, 280.95, 432.65);
    CGContextAddLineToPoint(ctx, 279.6, 433.95);
    CGContextAddLineToPoint(ctx, 278.9, 434.05);
    CGContextAddLineToPoint(ctx, 277.75, 434.8);
    CGContextAddLineToPoint(ctx, 277, 435.65);
    CGContextAddLineToPoint(ctx, 274.2, 440);
    CGContextAddQuadCurveToPoint(ctx, 272, 443.45, 270.85, 448);
    CGContextAddQuadCurveToPoint(ctx, 271.05, 448.5, 273.3, 444.9);
    CGContextAddLineToPoint(ctx, 275.85, 440.65);
    CGContextAddQuadCurveToPoint(ctx, 276.25, 440.05, 276.8, 440.9);
    CGContextAddQuadCurveToPoint(ctx, 277.45, 441.95, 278.1, 441.65);
    CGContextAddLineToPoint(ctx, 278.45, 442);
    CGContextAddLineToPoint(ctx, 279.25, 441.6);
    CGContextAddLineToPoint(ctx, 279.3, 440.5);
    CGContextAddLineToPoint(ctx, 280.4, 438.9);
    CGContextAddLineToPoint(ctx, 281.25, 437.2);
    CGContextAddLineToPoint(ctx, 283.25, 438);
    CGContextAddLineToPoint(ctx, 283.95, 437.6);
    CGContextAddLineToPoint(ctx, 284.8, 437.55);
    CGContextAddQuadCurveToPoint(ctx, 286, 436.8, 286.35, 435.95);
    CGContextAddLineToPoint(ctx, 289.25, 429.6);
    CGContextAddLineToPoint(ctx, 287.5, 429.5);
    CGContextClosePath(ctx);
}

static void def_path_235(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 346.05, 460.8);
    CGContextAddQuadCurveToPoint(ctx, 350.45, 472, 343.05, 492.4);
    CGContextAddQuadCurveToPoint(ctx, 344.45, 491, 348.45, 478.2);
    CGContextAddQuadCurveToPoint(ctx, 352.45, 483.2, 352.85, 493.6);
    CGContextAddQuadCurveToPoint(ctx, 357.45, 482.4, 346.05, 460.8);
    CGContextClosePath(ctx);
}

static void def_path_236(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 325.65, 462.6);
    CGContextAddQuadCurveToPoint(ctx, 324.85, 483, 318.05, 494);
    CGContextAddQuadCurveToPoint(ctx, 332.25, 473.8, 328.25, 489.8);
    CGContextAddQuadCurveToPoint(ctx, 333.65, 481, 325.65, 462.6);
    CGContextClosePath(ctx);
}

static void def_path_237(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 304.45, 491);
    CGContextAddQuadCurveToPoint(ctx, 317.55, 480.1, 318.25, 486.4);
    CGContextAddQuadCurveToPoint(ctx, 318.05, 467.7, 318.45, 464.8);
    CGContextAddQuadCurveToPoint(ctx, 314.65, 481.4, 304.45, 491);
    CGContextClosePath(ctx);
}

static void def_path_238(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 308.65, 455.8);
    CGContextAddQuadCurveToPoint(ctx, 308.85, 465.2, 306.25, 468.6);
    CGContextAddQuadCurveToPoint(ctx, 310.75, 475.15, 305.45, 486.3);
    CGContextAddQuadCurveToPoint(ctx, 314.4, 468.85, 308.65, 455.8);
    CGContextClosePath(ctx);
}

static void def_path_239(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 290.25, 469.6);
    CGContextAddQuadCurveToPoint(ctx, 288.45, 471.8, 289.45, 487.4);
    CGContextAddQuadCurveToPoint(ctx, 291.85, 457.4, 301.85, 487.6);
    CGContextAddQuadCurveToPoint(ctx, 302.05, 481.2, 298.45, 475.8);
    CGContextAddQuadCurveToPoint(ctx, 295.65, 471.2, 294.25, 463.4);
    CGContextAddQuadCurveToPoint(ctx, 294.05, 456, 290.05, 462.2);
    CGContextAddQuadCurveToPoint(ctx, 290.45, 463.2, 290.25, 469.6);
    CGContextClosePath(ctx);
}

static void def_path_240(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 279.85, 469);
    CGContextAddQuadCurveToPoint(ctx, 276.05, 483.4, 277.45, 489.6);
    CGContextAddQuadCurveToPoint(ctx, 279.25, 470.6, 285.85, 459.8);
    CGContextAddQuadCurveToPoint(ctx, 284.05, 453.6, 279.85, 469);
    CGContextClosePath(ctx);
}

static void def_path_241(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 270.45, 469.2);
    CGContextAddQuadCurveToPoint(ctx, 274.05, 453.4, 267.65, 462);
    CGContextAddQuadCurveToPoint(ctx, 267.85, 470, 259.65, 477.4);
    CGContextAddQuadCurveToPoint(ctx, 264.45, 475, 264.05, 479.6);
    CGContextAddQuadCurveToPoint(ctx, 269.05, 474.2, 270.45, 469.2);
    CGContextClosePath(ctx);
}

static void def_path_242(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 262.45, 456.4);
    CGContextAddQuadCurveToPoint(ctx, 264.25, 453, 261.45, 456.2);
    CGContextAddQuadCurveToPoint(ctx, 252.65, 475.4, 248.65, 482);
    CGContextAddQuadCurveToPoint(ctx, 256.65, 472.8, 258.25, 474.6);
    CGContextAddQuadCurveToPoint(ctx, 261.65, 457.2, 262.45, 456.4);
    CGContextClosePath(ctx);
}

static void def_path_243(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 252.45, 458);
    CGContextAddQuadCurveToPoint(ctx, 264.05, 435.6, 242.25, 461.4);
    CGContextAddQuadCurveToPoint(ctx, 253.25, 451.6, 252.45, 458);
    CGContextClosePath(ctx);
}

static void def_path_244(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 246.05, 426.4);
    CGContextAddQuadCurveToPoint(ctx, 252.65, 415.8, 244.45, 424.8);
    CGContextAddQuadCurveToPoint(ctx, 241.85, 424.6, 237.05, 443.4);
    CGContextAddQuadCurveToPoint(ctx, 239.95, 436.45, 240.65, 445.25);
    CGContextAddQuadCurveToPoint(ctx, 240.25, 435.7, 246.05, 426.4);
    CGContextClosePath(ctx);
}

static void def_path_245(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 566.35, 444);
    CGContextAddQuadCurveToPoint(ctx, 568.85, 436.5, 567.35, 432);
    CGContextAddQuadCurveToPoint(ctx, 555.95, 422.5, 553.15, 418.9);
    CGContextAddQuadCurveToPoint(ctx, 566.35, 437.05, 566.35, 444);
    CGContextClosePath(ctx);
}

static void def_path_246(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 572.85, 410);
    CGContextAddQuadCurveToPoint(ctx, 563.9, 403.6, 558.15, 398.6);
    CGContextAddQuadCurveToPoint(ctx, 574.85, 417.95, 574.85, 421.5);
    CGContextAddQuadCurveToPoint(ctx, 575.35, 412.5, 572.85, 410);
    CGContextClosePath(ctx);
    CGContextMoveToPoint(ctx, 558.15, 398.6);
    CGContextAddLineToPoint(ctx, 548.35, 387.5);
    CGContextAddQuadCurveToPoint(ctx, 550.35, 391.8, 558.15, 398.6);
    CGContextClosePath(ctx);
}

static void def_path_247(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 589.85, 256);
    CGContextAddQuadCurveToPoint(ctx, 577.85, 248, 576.35, 250);
    CGContextAddQuadCurveToPoint(ctx, 586.85, 256.5, 589.35, 265);
    CGContextAddQuadCurveToPoint(ctx, 587.85, 256, 589.85, 256);
    CGContextClosePath(ctx);
}

static void def_path_248(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 580.85, 324.5);
    CGContextAddQuadCurveToPoint(ctx, 598.9, 340.65, 600.25, 345.1);
    CGContextAddLineToPoint(ctx, 598.35, 336.5);
    CGContextAddLineToPoint(ctx, 580.85, 324.5);
    CGContextClosePath(ctx);
}

static void def_path_249(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 207.6, 314);
    CGContextAddLineToPoint(ctx, 229.6, 318.75);
}

static void def_path_250(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 257.85, 476);
    CGContextAddQuadCurveToPoint(ctx, 257.35, 472.5, 248.35, 483);
}

static void def_path_251(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 263.35, 481);
    CGContextAddQuadCurveToPoint(ctx, 265.35, 474.5, 258.85, 479);
}

static void def_path_252(CGContextRef ctx)
{
    CGContextMoveToPoint(ctx, 317.35, 489.5);
    CGContextAddQuadCurveToPoint(ctx, 318.85, 478.5, 307.35, 491.5);
}

static void draw_main(CGContextRef ctx)
{
    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_0(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_1(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_2(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_3(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_4(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_5(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_6(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_7(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_8(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_9(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_10(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_11(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_12(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_13(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_14(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_15(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_16(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_17(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.909804, 0.498039, 0.227451, 1);
    def_path_18(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.917647, 0.54902, 0.305882, 1);
    def_path_19(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.929412, 0.6, 0.380392, 1);
    def_path_20(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.937255, 0.65098, 0.458824, 1);
    def_path_21(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.945098, 0.701961, 0.537255, 1);
    def_path_22(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.956863, 0.74902, 0.615686, 1);
    def_path_23(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.964706, 0.8, 0.690196, 1);
    def_path_24(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.972549, 0.85098, 0.768627, 1);
    def_path_25(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.980392, 0.901961, 0.847059, 1);
    def_path_26(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.992157, 0.94902, 0.921569, 1);
    def_path_27(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_28(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_29(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_30(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_31(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_32(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_33(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_34(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_35(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_36(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_37(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_38(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.901961, 0.4, 0.54902, 1);
    def_path_39(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.701961, 0.2, 0.34902, 1);
    def_path_40(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.65098, 0.14902, 0.298039, 1);
    def_path_41(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 0.45098, 0.498039, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_42(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_43(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.25098, 0.298039, 1);
    def_path_44(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.65098, 0.101961, 0.14902, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_45(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_46(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_47(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_48(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_49(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_50(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_51(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.65098, 0.14902, 0.298039, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_52(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.65098, 0.14902, 0.298039, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_53(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_54(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.65098, 0.14902, 0.298039, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_55(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.65098, 0.14902, 0.298039, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_56(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.698039, 0.698039, 0.698039, 1);
    def_path_57(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_58(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_59(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_60(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_61(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_62(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_63(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_64(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_65(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 0.8, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_66(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.901961, 0.901961, 0.701961, 1);
    def_path_67(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.901961, 0.901961, 0.701961, 1);
    def_path_68(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_69(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.921569, 0.560784, 0.321569, 1);
    def_path_70(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.941176, 0.670588, 0.490196, 1);
    def_path_71(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.960784, 0.780392, 0.658824, 1);
    def_path_72(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.980392, 0.890196, 0.831373, 1);
    def_path_73(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_74(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_75(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_76(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.2, 1);
    def_path_77(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.4, 0.6, 0, 1);
    def_path_78(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_79(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_80(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_81(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_82(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.92549, 0.588235, 0.364706, 1);
    def_path_83(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.94902, 0.72549, 0.576471, 1);
    def_path_84(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.976471, 0.862745, 0.788235, 1);
    def_path_85(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_86(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_87(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_88(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.2, 1);
    def_path_89(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_90(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_91(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_92(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.2, 0.2, 0.2, 1);
    def_path_93(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.4, 0.4, 0.4, 1);
    def_path_94(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.6, 0.6, 0.6, 1);
    def_path_95(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_96(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_97(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.603922, 0.152941, 0, 1);
    def_path_98(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_99(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_100(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_101(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_102(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_103(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_104(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_105(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_106(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_107(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_108(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_109(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_110(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.45098, 0.14902, 1);
    def_path_111(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_112(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.298039, 0, 0, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_113(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.298039, 0, 0, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_114(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.298039, 0, 0, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_115(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0.298039, 0, 0, 1);
    CGContextSetLineWidth(ctx, 2);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_116(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_117(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.298039, 0, 0, 1);
    def_path_118(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.6, 0.8, 0.2, 1);
    def_path_119(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.4, 0.6, 0, 1);
    def_path_120(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_121(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_122(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.901961, 0.6, 0.6, 1);
    def_path_123(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.701961, 0.4, 0.4, 1);
    def_path_124(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.603922, 0.152941, 0, 1);
    def_path_125(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_126(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.603922, 0.152941, 0, 1);
    def_path_127(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_128(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_129(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_130(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_131(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_132(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_133(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_134(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_135(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_136(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_137(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_138(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_139(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_140(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_141(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_142(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_143(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_144(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_145(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_146(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_147(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_148(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_149(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_150(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_151(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_152(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_153(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_154(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_155(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_156(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_157(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_158(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.603922, 0.152941, 0, 1);
    def_path_159(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.603922, 0.152941, 0, 1);
    def_path_160(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_161(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_162(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_163(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_164(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_165(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_166(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_167(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_168(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_169(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_170(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_171(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_172(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_173(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_174(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_175(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_176(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_177(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_178(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_179(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_180(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_181(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_182(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_183(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_184(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_185(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_186(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_187(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_188(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_189(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_190(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_191(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_192(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_193(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_194(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_195(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_196(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_197(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_198(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_199(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_200(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_201(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_202(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_203(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_204(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_205(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_206(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_207(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    def_path_208(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_209(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_210(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_211(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_212(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_213(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_214(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_215(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_216(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_217(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_218(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_219(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 1, 1, 1, 1);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);
    def_path_220(ctx);
    CGContextDrawPath(ctx, kCGPathEOFillStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_221(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_222(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_223(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_224(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_225(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0, 0, 0, 1);
    def_path_226(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_227(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_228(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_229(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_230(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_231(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_232(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_233(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_234(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_235(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_236(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_237(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_238(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_239(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_240(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_241(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_242(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_243(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_244(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_245(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_246(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_247(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0.8, 1);
    def_path_248(ctx);
    CGContextDrawPath(ctx, kCGPathEOFill);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_249(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_250(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_251(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

    CGContextSaveGState(ctx);
    CGContextSetRGBStrokeColor(ctx, 0, 0, 0, 1);
    CGContextSetLineWidth(ctx, 1);
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinBevel);
    def_path_252(ctx);
    CGContextDrawPath(ctx, kCGPathStroke);
    CGContextRestoreGState(ctx);

}


