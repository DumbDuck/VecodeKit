
import CoreGraphics

// MARK: g_picture_all_test
public let g_picture_all_test = VKQuartzPicture(bounds: CGRectMake(0, 0, 550, 400), drawer: draw_main)

/////////////////////////
private func draw_gradient_0(ctx: CGContextRef)
{
    let colors : [CGFloat] = [
        0, 0, 1, 1,
        0, 0, 0, 1
    ]
    let locations : [CGFloat] = [
        0,
        1
    ]
    let colorSpace = CGColorSpaceCreateDeviceRGB()
    let gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2)
    let options : CGGradientDrawingOptions = [.DrawsBeforeStartLocation, .DrawsAfterEndLocation]
    CGContextDrawRadialGradient(ctx, gradient, CGPointMake(0, 0), 0, CGPointMake(0, 0), 819.2, options);
}

private func def_path_0(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 528.95, 193)
    CGContextAddLineToPoint(ctx, 528.95, 59)
    CGContextAddLineToPoint(ctx, 409.95, 59)
    CGContextAddLineToPoint(ctx, 409.95, 193)
    CGContextAddLineToPoint(ctx, 528.95, 193)
    CGContextClosePath(ctx)
}

private func draw_gradient_1(ctx: CGContextRef)
{
    let colors : [CGFloat] = [
        1, 0, 0, 1,
        1, 1, 0, 1,
        0, 1, 0, 1,
        0, 1, 1, 1,
        0, 0, 1, 1,
        1, 0, 1, 1,
        1, 0, 0, 1
    ]
    let locations : [CGFloat] = [
        0,
        0.164706,
        0.364706,
        0.498039,
        0.666667,
        0.831373,
        1
    ]
    let colorSpace = CGColorSpaceCreateDeviceRGB()
    let gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 7)
    let options : CGGradientDrawingOptions = [.DrawsBeforeStartLocation, .DrawsAfterEndLocation]
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
}

private func def_path_1(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 421.95, 245)
    CGContextAddLineToPoint(ctx, 421.95, 359.95)
    CGContextAddLineToPoint(ctx, 538.95, 359.95)
    CGContextAddLineToPoint(ctx, 538.95, 245)
    CGContextAddLineToPoint(ctx, 421.95, 245)
    CGContextClosePath(ctx)
}

private func def_path_2(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 58.75, 160.95)
    CGContextAddLineToPoint(ctx, 14, 175.45)
    CGContextAddLineToPoint(ctx, 14, 222.5)
    CGContextAddLineToPoint(ctx, 58.75, 237)
    CGContextAddLineToPoint(ctx, 86.35, 199)
    CGContextAddLineToPoint(ctx, 58.75, 160.95)
    CGContextClosePath(ctx)
}

private func def_path_3(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 528.95, 193)
    CGContextAddLineToPoint(ctx, 409.95, 193)
    CGContextAddLineToPoint(ctx, 409.95, 59)
    CGContextAddLineToPoint(ctx, 528.95, 59)
    CGContextAddLineToPoint(ctx, 528.95, 193)
}

private func def_path_4(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 421.95, 245)
    CGContextAddLineToPoint(ctx, 538.95, 245)
    CGContextAddLineToPoint(ctx, 538.95, 359.95)
    CGContextAddLineToPoint(ctx, 421.95, 359.95)
    CGContextAddLineToPoint(ctx, 421.95, 245)
}


private typealias TKColorTransform = [CGFloat]
private func TKColorApplyColorTransform(inout color: [CGFloat], _ index: Int, _ transform: TKColorTransform?)
{
    if let transform = transform
    {
        assert(transform.count == 8);
        color[index + 0] = transform[0] * color[index + 0] + transform[4];
        color[index + 1] = transform[1] * color[index + 1] + transform[5];
        color[index + 2] = transform[2] * color[index + 2] + transform[6];
        color[index + 3] = transform[3] * color[index + 3] + transform[7];
    }
}

private func draw_gradient_2(ctx: CGContextRef, _ colorTrans: TKColorTransform?)
{
    var colors : [CGFloat] = [
        1, 0, 0, 1,
        1, 1, 0, 1,
        0, 1, 0, 1,
        0, 1, 1, 1,
        0, 0, 1, 1,
        1, 0, 1, 1,
        1, 0, 0, 1
    ]
    TKColorApplyColorTransform(&colors, 0, colorTrans)
    TKColorApplyColorTransform(&colors, 4, colorTrans)
    TKColorApplyColorTransform(&colors, 8, colorTrans)
    TKColorApplyColorTransform(&colors, 12, colorTrans)
    TKColorApplyColorTransform(&colors, 16, colorTrans)
    TKColorApplyColorTransform(&colors, 20, colorTrans)
    TKColorApplyColorTransform(&colors, 24, colorTrans)
    let locations : [CGFloat] = [
        0,
        0.164706,
        0.364706,
        0.498039,
        0.666667,
        0.831373,
        1
    ]
    let colorSpace = CGColorSpaceCreateDeviceRGB()
    let gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 7)
    let options : CGGradientDrawingOptions = [.DrawsBeforeStartLocation, .DrawsAfterEndLocation]
    CGContextDrawLinearGradient(ctx, gradient, CGPointMake(-819.2, 0), CGPointMake(819.2, 0), options);
}

private func def_path_5(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 78.85, 0)
    CGContextAddLineToPoint(ctx, -1.52588e-06, 54)
    CGContextAddLineToPoint(ctx, 27.05, 145.7)
    CGContextAddLineToPoint(ctx, 122.6, 148.3)
    CGContextAddLineToPoint(ctx, 154.65, 58.25)
    CGContextAddLineToPoint(ctx, 78.85, 0)
    CGContextClosePath(ctx)
}


private func TKSetRGBStrokeColor(ctx: CGContextRef, _ r: CGFloat, _ g: CGFloat, _ b : CGFloat, _ a : CGFloat, _ transform: TKColorTransform?)
{
    var color : [CGFloat] = [ r, g, b, a ];
    TKColorApplyColorTransform(&color, 0, transform);
    CGContextSetRGBStrokeColor(ctx, color[0], color[1], color[2], color[3]);
}

private func draw_shape_2(ctx: CGContextRef, _ colorTrans: TKColorTransform?)
{
    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 0, 0))
    def_path_5(ctx)
    CGContextEOClip(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0943909, 0, 0, 0.0905151, 77.3, 74.15))
    draw_gradient_2(ctx, colorTrans)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    TKSetRGBStrokeColor(ctx, 0.2, 1, 0.4, 1, colorTrans)
    CGContextSetLineWidth(ctx, 1)
    CGContextSetLineCap(ctx, .Round)
    CGContextSetLineJoin(ctx, .Round)
    def_path_5(ctx)
    CGContextDrawPath(ctx, .Stroke)
    CGContextRestoreGState(ctx)

}

private func draw_gradient_3(ctx: CGContextRef, _ colorTrans: TKColorTransform?)
{
    var colors : [CGFloat] = [
        0, 1, 0, 1,
        0, 0, 0, 1
    ]
    TKColorApplyColorTransform(&colors, 0, colorTrans)
    TKColorApplyColorTransform(&colors, 4, colorTrans)
    let locations : [CGFloat] = [
        0,
        1
    ]
    let colorSpace = CGColorSpaceCreateDeviceRGB()
    let gradient = CGGradientCreateWithColorComponents(colorSpace, colors, locations, 2)
    let options : CGGradientDrawingOptions = [.DrawsBeforeStartLocation, .DrawsAfterEndLocation]
    CGContextDrawRadialGradient(ctx, gradient, CGPointMake(0, 0), 0, CGPointMake(0, 0), 819.2, options);
}

private func def_path_6(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 144, 76)
    CGContextAddQuadCurveToPoint(ctx, 144, 44.5, 122.9, 22.25)
    CGContextAddQuadCurveToPoint(ctx, 101.8, 0, 72, 0)
    CGContextAddQuadCurveToPoint(ctx, 42.2, 0, 21.1, 22.25)
    CGContextAddQuadCurveToPoint(ctx, 3.8147e-07, 44.5, 3.8147e-07, 76)
    CGContextAddQuadCurveToPoint(ctx, 3.8147e-07, 107.5, 21.1, 129.75)
    CGContextAddQuadCurveToPoint(ctx, 42.2, 152, 72, 152)
    CGContextAddQuadCurveToPoint(ctx, 101.8, 152, 122.9, 129.75)
    CGContextAddQuadCurveToPoint(ctx, 144, 107.5, 144, 76)
    CGContextClosePath(ctx)
}

private func draw_shape_4(ctx: CGContextRef, _ colorTrans: TKColorTransform?)
{
    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 0, 0))
    def_path_6(ctx)
    CGContextEOClip(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0935059, 0, 0, 0.0935059, 72, 76))
    draw_gradient_3(ctx, colorTrans)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    TKSetRGBStrokeColor(ctx, 0.2, 1, 0.4, 1, colorTrans)
    CGContextSetLineWidth(ctx, 1)
    CGContextSetLineCap(ctx, .Round)
    CGContextSetLineJoin(ctx, .Round)
    def_path_6(ctx)
    CGContextDrawPath(ctx, .Stroke)
    CGContextRestoreGState(ctx)

}

private func def_path_7(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 306, -616)
    CGContextAddQuadCurveToPoint(ctx, 526.5, -620, 522, -368)
    CGContextAddQuadCurveToPoint(ctx, 527, -118, 306, -122)
    CGContextAddLineToPoint(ctx, 224, -122)
    CGContextAddLineToPoint(ctx, 224, -616)
    CGContextAddLineToPoint(ctx, 306, -616)
    CGContextClosePath(ctx)
    CGContextMoveToPoint(ctx, 318, 0)
    CGContextAddQuadCurveToPoint(ctx, 688.5, -1.5, 692, -368)
    CGContextAddQuadCurveToPoint(ctx, 688.5, -737.5, 318, -738)
    CGContextAddLineToPoint(ctx, 66, -738)
    CGContextAddLineToPoint(ctx, 66, 0)
    CGContextAddLineToPoint(ctx, 318, 0)
    CGContextClosePath(ctx)
}

private func def_path_8(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 560, 0)
    CGContextAddLineToPoint(ctx, 554, -92)
    CGContextAddLineToPoint(ctx, 554, -514)
    CGContextAddLineToPoint(ctx, 400, -514)
    CGContextAddLineToPoint(ctx, 400, -204)
    CGContextAddQuadCurveToPoint(ctx, 392, -94, 308, -86)
    CGContextAddQuadCurveToPoint(ctx, 219, -85.5, 216, -204)
    CGContextAddLineToPoint(ctx, 216, -514)
    CGContextAddLineToPoint(ctx, 62, -514)
    CGContextAddLineToPoint(ctx, 62, -180)
    CGContextAddQuadCurveToPoint(ctx, 62.5, -137, 72, -98)
    CGContextAddQuadCurveToPoint(ctx, 105.5, -2, 242, 13)
    CGContextAddQuadCurveToPoint(ctx, 348, 13.5, 400, -62)
    CGContextAddLineToPoint(ctx, 406, 0)
    CGContextAddLineToPoint(ctx, 560, 0)
    CGContextClosePath(ctx)
}

private func def_path_9(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 68, -514)
    CGContextAddLineToPoint(ctx, 68, 0)
    CGContextAddLineToPoint(ctx, 222, 0)
    CGContextAddLineToPoint(ctx, 222, -308)
    CGContextAddQuadCurveToPoint(ctx, 229, -418.5, 314, -426)
    CGContextAddQuadCurveToPoint(ctx, 403.5, -426.5, 406, -308)
    CGContextAddLineToPoint(ctx, 406, 0)
    CGContextAddLineToPoint(ctx, 560, 0)
    CGContextAddLineToPoint(ctx, 560, -308)
    CGContextAddQuadCurveToPoint(ctx, 567, -418.5, 652, -426)
    CGContextAddQuadCurveToPoint(ctx, 741.5, -426.5, 744, -308)
    CGContextAddLineToPoint(ctx, 744, 0)
    CGContextAddLineToPoint(ctx, 898, 0)
    CGContextAddLineToPoint(ctx, 898, -308)
    CGContextAddQuadCurveToPoint(ctx, 898, -329, 897.5, -350)
    CGContextAddQuadCurveToPoint(ctx, 896.5, -365, 895, -380.5)
    CGContextAddQuadCurveToPoint(ctx, 891.5, -409, 882, -432)
    CGContextAddQuadCurveToPoint(ctx, 838, -516, 718, -528)
    CGContextAddQuadCurveToPoint(ctx, 612, -531.5, 544, -432)
    CGContextAddQuadCurveToPoint(ctx, 500, -516, 380, -528)
    CGContextAddQuadCurveToPoint(ctx, 274.5, -528.5, 222, -452)
    CGContextAddLineToPoint(ctx, 220, -452)
    CGContextAddLineToPoint(ctx, 220, -514)
    CGContextAddLineToPoint(ctx, 68, -514)
    CGContextClosePath(ctx)
}

private func def_path_10(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 314, -426)
    CGContextAddQuadCurveToPoint(ctx, 427, -427.5, 424, -256)
    CGContextAddQuadCurveToPoint(ctx, 427, -84.5, 314, -86)
    CGContextAddQuadCurveToPoint(ctx, 212.5, -92, 204, -256)
    CGContextAddQuadCurveToPoint(ctx, 212.5, -420, 314, -426)
    CGContextClosePath(ctx)
    CGContextMoveToPoint(ctx, 46, 0)
    CGContextAddLineToPoint(ctx, 198, 0)
    CGContextAddLineToPoint(ctx, 202, -72)
    CGContextAddLineToPoint(ctx, 204, -72)
    CGContextAddQuadCurveToPoint(ctx, 253, 12, 362, 13)
    CGContextAddQuadCurveToPoint(ctx, 465, 7, 520.5, -60)
    CGContextAddQuadCurveToPoint(ctx, 576, -127, 584, -256)
    CGContextAddQuadCurveToPoint(ctx, 566.5, -514.5, 344, -528)
    CGContextAddQuadCurveToPoint(ctx, 258, -524, 206, -454)
    CGContextAddLineToPoint(ctx, 204, -454)
    CGContextAddLineToPoint(ctx, 204, -738)
    CGContextAddLineToPoint(ctx, 50, -738)
    CGContextAddLineToPoint(ctx, 50, -102)
    CGContextAddLineToPoint(ctx, 46, 0)
    CGContextClosePath(ctx)
}

private func def_path_11(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 262, -528)
    CGContextAddQuadCurveToPoint(ctx, 49.5, -514.5, 32, -256)
    CGContextAddQuadCurveToPoint(ctx, 40.5, -128, 98, -60.5)
    CGContextAddQuadCurveToPoint(ctx, 155.5, 6.5, 262, 13)
    CGContextAddQuadCurveToPoint(ctx, 478, 10.5, 490, -186)
    CGContextAddLineToPoint(ctx, 340, -186)
    CGContextAddQuadCurveToPoint(ctx, 333, -87.5, 262, -86)
    CGContextAddQuadCurveToPoint(ctx, 200, -84.5, 193.5, -245.5)
    CGContextAddQuadCurveToPoint(ctx, 193, -254.5, 192, -264)
    CGContextAddQuadCurveToPoint(ctx, 192, -269, 192.5, -273.5)
    CGContextAddQuadCurveToPoint(ctx, 198.5, -426, 260, -426)
    CGContextAddQuadCurveToPoint(ctx, 332, -425, 338, -332)
    CGContextAddLineToPoint(ctx, 490, -332)
    CGContextAddQuadCurveToPoint(ctx, 479.5, -518, 262, -528)
    CGContextClosePath(ctx)
}

private func def_path_12(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 68, -738)
    CGContextAddLineToPoint(ctx, 68, 0)
    CGContextAddLineToPoint(ctx, 222, 0)
    CGContextAddLineToPoint(ctx, 222, -278)
    CGContextAddLineToPoint(ctx, 224, -280)
    CGContextAddLineToPoint(ctx, 378, 0)
    CGContextAddLineToPoint(ctx, 558, 0)
    CGContextAddLineToPoint(ctx, 368, -294)
    CGContextAddLineToPoint(ctx, 546, -520)
    CGContextAddLineToPoint(ctx, 374, -520)
    CGContextAddLineToPoint(ctx, 224, -304)
    CGContextAddLineToPoint(ctx, 222, -306)
    CGContextAddLineToPoint(ctx, 222, -738)
    CGContextAddLineToPoint(ctx, 68, -738)
    CGContextClosePath(ctx)
}

private func def_path_13(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 456, 0)
    CGContextAddLineToPoint(ctx, 728, -738)
    CGContextAddLineToPoint(ctx, 572, -738)
    CGContextAddLineToPoint(ctx, 378, -156)
    CGContextAddLineToPoint(ctx, 376, -156)
    CGContextAddLineToPoint(ctx, 184, -738)
    CGContextAddLineToPoint(ctx, 10, -738)
    CGContextAddLineToPoint(ctx, 282, 0)
    CGContextAddLineToPoint(ctx, 456, 0)
    CGContextClosePath(ctx)
}

private func def_path_14(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 538, -249)
    CGContextAddLineToPoint(ctx, 537, -273)
    CGContextAddLineToPoint(ctx, 534, -314)
    CGContextAddQuadCurveToPoint(ctx, 528, -363.5, 508, -406)
    CGContextAddQuadCurveToPoint(ctx, 449, -529, 288, -528)
    CGContextAddQuadCurveToPoint(ctx, 55, -515.5, 42, -256)
    CGContextAddQuadCurveToPoint(ctx, 39, 15.5, 288, 13)
    CGContextAddQuadCurveToPoint(ctx, 503, 12.5, 522, -152)
    CGContextAddLineToPoint(ctx, 384, -152)
    CGContextAddQuadCurveToPoint(ctx, 363, -83.5, 288, -86)
    CGContextAddQuadCurveToPoint(ctx, 195.5, -83, 200, -216)
    CGContextAddLineToPoint(ctx, 538, -216)
    CGContextAddLineToPoint(ctx, 538, -249)
    CGContextClosePath(ctx)
    CGContextMoveToPoint(ctx, 288, -426)
    CGContextAddQuadCurveToPoint(ctx, 380.5, -427, 378, -318)
    CGContextAddLineToPoint(ctx, 200, -318)
    CGContextAddQuadCurveToPoint(ctx, 202.5, -427, 288, -426)
    CGContextClosePath(ctx)
}

private func def_path_15(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 312, -528)
    CGContextAddQuadCurveToPoint(ctx, 55.5, -517, 44, -256)
    CGContextAddQuadCurveToPoint(ctx, 55, 2.5, 312, 13)
    CGContextAddQuadCurveToPoint(ctx, 569, 2.5, 580, -256)
    CGContextAddQuadCurveToPoint(ctx, 568.5, -517, 312, -528)
    CGContextClosePath(ctx)
    CGContextMoveToPoint(ctx, 312, -426)
    CGContextAddQuadCurveToPoint(ctx, 424, -427, 422, -256)
    CGContextAddQuadCurveToPoint(ctx, 424, -85, 312, -86)
    CGContextAddQuadCurveToPoint(ctx, 200, -85, 202, -256)
    CGContextAddQuadCurveToPoint(ctx, 200, -427, 312, -426)
    CGContextClosePath(ctx)
}

private func def_path_16(ctx: CGContextRef)
{
    CGContextMoveToPoint(ctx, 310, -426)
    CGContextAddQuadCurveToPoint(ctx, 411.5, -420, 420, -256)
    CGContextAddQuadCurveToPoint(ctx, 411.5, -92, 310, -86)
    CGContextAddQuadCurveToPoint(ctx, 194.5, -84.5, 198, -256)
    CGContextAddQuadCurveToPoint(ctx, 194.5, -427.5, 310, -426)
    CGContextClosePath(ctx)
    CGContextMoveToPoint(ctx, 418, -454)
    CGContextAddQuadCurveToPoint(ctx, 366, -524, 280, -528)
    CGContextAddQuadCurveToPoint(ctx, 56.5, -515.5, 40, -256)
    CGContextAddQuadCurveToPoint(ctx, 47.5, -127, 103, -60)
    CGContextAddQuadCurveToPoint(ctx, 158.5, 7, 262, 13)
    CGContextAddQuadCurveToPoint(ctx, 372, 12, 418, -72)
    CGContextAddLineToPoint(ctx, 420, -72)
    CGContextAddLineToPoint(ctx, 424, 0)
    CGContextAddLineToPoint(ctx, 578, 0)
    CGContextAddLineToPoint(ctx, 574, -102)
    CGContextAddLineToPoint(ctx, 574, -738)
    CGContextAddLineToPoint(ctx, 420, -738)
    CGContextAddLineToPoint(ctx, 420, -454)
    CGContextAddLineToPoint(ctx, 418, -454)
    CGContextClosePath(ctx)
}

private func draw_main(ctx: CGContextRef)
{
    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 0, 0))
    def_path_0(ctx)
    CGContextEOClip(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.109375, 0, 0, 0.109375, 469.45, 126))
    draw_gradient_0(ctx)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 0, 0))
    def_path_1(ctx)
    CGContextEOClip(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0714111, 0, 0, 0.0701599, 480.45, 302.45))
    draw_gradient_1(ctx)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextSetRGBFillColor(ctx, 0.8, 0.2, 0.6, 1)
    def_path_2(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextSetRGBStrokeColor(ctx, 0.2, 1, 0.4, 1)
    CGContextSetLineWidth(ctx, 1)
    CGContextSetLineCap(ctx, .Round)
    CGContextSetLineJoin(ctx, .Round)
    def_path_3(ctx)
    CGContextDrawPath(ctx, .Stroke)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextSetRGBStrokeColor(ctx, 0.2, 1, 0.4, 1)
    CGContextSetLineWidth(ctx, 1)
    CGContextSetLineCap(ctx, .Round)
    CGContextSetLineJoin(ctx, .Round)
    def_path_4(ctx)
    CGContextDrawPath(ctx, .Stroke)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 39.35, 16.75))
    draw_shape_2(ctx, nil)
    CGContextRestoreGState(ctx)

    do
    {
        CGContextSaveGState(ctx)
        CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 217.65, 16.75))
        let colorTrans : TKColorTransform = [ 0.462745, 0.462745, 0.462745, 1.00392, 0, 0, 0, 0 ];
        draw_shape_2(ctx, colorTrans)
        CGContextRestoreGState(ctx)
    }
    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 94.55, 165.05))
    draw_shape_4(ctx, nil)
    CGContextRestoreGState(ctx)

    do
    {
        CGContextSaveGState(ctx)
        CGContextConcatCTM(ctx, CGAffineTransformMake(1, 0, 0, 1, 238.55, 181))
        let colorTrans : TKColorTransform = [ 0.239216, 0.239216, 0.239216, 1.00392, 0.698039, 0.0588235, 0.760784, 0 ];
        draw_shape_4(ctx, colorTrans)
        CGContextRestoreGState(ctx)
    }
    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 26.55, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.2, 0.6, 1)
    def_path_7(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 52.45, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.2, 0.6, 1)
    def_path_8(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 74.35, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.2, 0.6, 1)
    def_path_9(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 108.3, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.2, 0.6, 1)
    def_path_10(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 140.15, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0, 1)
    def_path_7(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 166.05, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0, 1)
    def_path_8(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 187.95, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0, 1)
    def_path_11(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 205.95, 371.85))
    CGContextSetRGBFillColor(ctx, 0.8, 0.8, 0, 1)
    def_path_12(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 235.85, 371.85))
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0, 1)
    def_path_13(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 261.75, 371.85))
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0, 1)
    def_path_14(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 281.7, 371.85))
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0, 1)
    def_path_11(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 299.7, 371.85))
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0, 1)
    def_path_15(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 321.6, 371.85))
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0, 1)
    def_path_16(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

    CGContextSaveGState(ctx)
    CGContextConcatCTM(ctx, CGAffineTransformMake(0.0351562, 0, 0, 0.0351562, 343.5, 371.85))
    CGContextSetRGBFillColor(ctx, 1, 0.2, 0, 1)
    def_path_14(ctx)
    CGContextDrawPath(ctx, .EOFill)
    CGContextRestoreGState(ctx)

}


