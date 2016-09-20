
import CoreGraphics

// MARK: g_picture_all_test
public let g_picture_all_test = VKQuartzPicture(bounds: CGRect(x: 0, y: 0, width: 550, height: 400), drawer: draw_main)

/////////////////////////
private func draw_gradient_0(_ ctx: CGContext)
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
    let gradient = CGGradient(colorSpace: colorSpace, colorComponents: colors, locations: locations, count: 2)!
    let options : CGGradientDrawingOptions = [.drawsBeforeStartLocation, .drawsAfterEndLocation]
    ctx.drawRadialGradient(gradient, startCenter: CGPoint(x: 0, y: 0), startRadius: 0, endCenter: CGPoint(x: 0, y: 0), endRadius: 819.2, options: options);
}

private func def_path_0(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 528.95, y: 193))
    ctx.addLine(to: CGPoint(x: 528.95, y: 59))
    ctx.addLine(to: CGPoint(x: 409.95, y: 59))
    ctx.addLine(to: CGPoint(x: 409.95, y: 193))
    ctx.addLine(to: CGPoint(x: 528.95, y: 193))
    ctx.closePath()
}

private func draw_gradient_1(_ ctx: CGContext)
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
    let gradient = CGGradient(colorSpace: colorSpace, colorComponents: colors, locations: locations, count: 7)!
    let options : CGGradientDrawingOptions = [.drawsBeforeStartLocation, .drawsAfterEndLocation]
    ctx.drawLinearGradient(gradient, start: CGPoint(x: -819.2, y: 0), end: CGPoint(x: 819.2, y: 0), options: options)
}

private func def_path_1(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 421.95, y: 245))
    ctx.addLine(to: CGPoint(x: 421.95, y: 359.95))
    ctx.addLine(to: CGPoint(x: 538.95, y: 359.95))
    ctx.addLine(to: CGPoint(x: 538.95, y: 245))
    ctx.addLine(to: CGPoint(x: 421.95, y: 245))
    ctx.closePath()
}

private func def_path_2(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 58.75, y: 160.95))
    ctx.addLine(to: CGPoint(x: 14, y: 175.45))
    ctx.addLine(to: CGPoint(x: 14, y: 222.5))
    ctx.addLine(to: CGPoint(x: 58.75, y: 237))
    ctx.addLine(to: CGPoint(x: 86.35, y: 199))
    ctx.addLine(to: CGPoint(x: 58.75, y: 160.95))
    ctx.closePath()
}

private func def_path_3(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 528.95, y: 193))
    ctx.addLine(to: CGPoint(x: 409.95, y: 193))
    ctx.addLine(to: CGPoint(x: 409.95, y: 59))
    ctx.addLine(to: CGPoint(x: 528.95, y: 59))
    ctx.addLine(to: CGPoint(x: 528.95, y: 193))
}

private func def_path_4(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 421.95, y: 245))
    ctx.addLine(to: CGPoint(x: 538.95, y: 245))
    ctx.addLine(to: CGPoint(x: 538.95, y: 359.95))
    ctx.addLine(to: CGPoint(x: 421.95, y: 359.95))
    ctx.addLine(to: CGPoint(x: 421.95, y: 245))
}


private typealias TKColorTransform = [CGFloat]
private func TKColorApplyColorTransform(_ color: inout [CGFloat], _ index: Int, _ transform: TKColorTransform?)
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

private func draw_gradient_2(_ ctx: CGContext, _ colorTrans: TKColorTransform?)
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
    let gradient = CGGradient(colorSpace: colorSpace, colorComponents: colors, locations: locations, count: 7)!
    let options : CGGradientDrawingOptions = [.drawsBeforeStartLocation, .drawsAfterEndLocation]
    ctx.drawLinearGradient(gradient, start: CGPoint(x: -819.2, y: 0), end: CGPoint(x: 819.2, y: 0), options: options)
}

private func def_path_5(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 78.85, y: 0))
    ctx.addLine(to: CGPoint(x: -1.52588e-06, y: 54))
    ctx.addLine(to: CGPoint(x: 27.05, y: 145.7))
    ctx.addLine(to: CGPoint(x: 122.6, y: 148.3))
    ctx.addLine(to: CGPoint(x: 154.65, y: 58.25))
    ctx.addLine(to: CGPoint(x: 78.85, y: 0))
    ctx.closePath()
}


private func TKSetRGBStrokeColor(_ ctx: CGContext, _ r: CGFloat, _ g: CGFloat, _ b : CGFloat, _ a : CGFloat, _ transform: TKColorTransform?)
{
    var color : [CGFloat] = [ r, g, b, a ];
    TKColorApplyColorTransform(&color, 0, transform);
    ctx.setStrokeColor(red: color[0], green: color[1], blue: color[2], alpha: color[3])
}

private func draw_shape_2(_ ctx: CGContext, _ colorTrans: TKColorTransform?)
{
    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 0, ty: 0))
    def_path_5(ctx)
    ctx.clip(using: .evenOdd)
    ctx.concatenate(CGAffineTransform(a: 0.0943909, b: 0, c: 0, d: 0.0905151, tx: 77.3, ty: 74.15))
    draw_gradient_2(ctx, colorTrans)
    ctx.restoreGState()

    ctx.saveGState()
    TKSetRGBStrokeColor(ctx, 0.2, 1, 0.4, 1, colorTrans)
    ctx.setLineWidth(1)
    ctx.setLineCap(.round)
    ctx.setLineJoin(.round)
    def_path_5(ctx)
    ctx.drawPath(using: .stroke)
    ctx.restoreGState()

}

private func draw_gradient_3(_ ctx: CGContext, _ colorTrans: TKColorTransform?)
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
    let gradient = CGGradient(colorSpace: colorSpace, colorComponents: colors, locations: locations, count: 2)!
    let options : CGGradientDrawingOptions = [.drawsBeforeStartLocation, .drawsAfterEndLocation]
    ctx.drawRadialGradient(gradient, startCenter: CGPoint(x: 0, y: 0), startRadius: 0, endCenter: CGPoint(x: 0, y: 0), endRadius: 819.2, options: options);
}

private func def_path_6(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 144, y: 76))
    ctx.addQuadCurve(to: CGPoint(x: 122.9, y: 22.25), control: CGPoint(x: 144, y: 44.5))
    ctx.addQuadCurve(to: CGPoint(x: 72, y: 0), control: CGPoint(x: 101.8, y: 0))
    ctx.addQuadCurve(to: CGPoint(x: 21.1, y: 22.25), control: CGPoint(x: 42.2, y: 0))
    ctx.addQuadCurve(to: CGPoint(x: 3.8147e-07, y: 76), control: CGPoint(x: 3.8147e-07, y: 44.5))
    ctx.addQuadCurve(to: CGPoint(x: 21.1, y: 129.75), control: CGPoint(x: 3.8147e-07, y: 107.5))
    ctx.addQuadCurve(to: CGPoint(x: 72, y: 152), control: CGPoint(x: 42.2, y: 152))
    ctx.addQuadCurve(to: CGPoint(x: 122.9, y: 129.75), control: CGPoint(x: 101.8, y: 152))
    ctx.addQuadCurve(to: CGPoint(x: 144, y: 76), control: CGPoint(x: 144, y: 107.5))
    ctx.closePath()
}

private func draw_shape_4(_ ctx: CGContext, _ colorTrans: TKColorTransform?)
{
    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 0, ty: 0))
    def_path_6(ctx)
    ctx.clip(using: .evenOdd)
    ctx.concatenate(CGAffineTransform(a: 0.0935059, b: 0, c: 0, d: 0.0935059, tx: 72, ty: 76))
    draw_gradient_3(ctx, colorTrans)
    ctx.restoreGState()

    ctx.saveGState()
    TKSetRGBStrokeColor(ctx, 0.2, 1, 0.4, 1, colorTrans)
    ctx.setLineWidth(1)
    ctx.setLineCap(.round)
    ctx.setLineJoin(.round)
    def_path_6(ctx)
    ctx.drawPath(using: .stroke)
    ctx.restoreGState()

}

private func def_path_7(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 306, y: -616))
    ctx.addQuadCurve(to: CGPoint(x: 522, y: -368), control: CGPoint(x: 526.5, y: -620))
    ctx.addQuadCurve(to: CGPoint(x: 306, y: -122), control: CGPoint(x: 527, y: -118))
    ctx.addLine(to: CGPoint(x: 224, y: -122))
    ctx.addLine(to: CGPoint(x: 224, y: -616))
    ctx.addLine(to: CGPoint(x: 306, y: -616))
    ctx.closePath()
    ctx.move(to: CGPoint(x: 318, y: 0))
    ctx.addQuadCurve(to: CGPoint(x: 692, y: -368), control: CGPoint(x: 688.5, y: -1.5))
    ctx.addQuadCurve(to: CGPoint(x: 318, y: -738), control: CGPoint(x: 688.5, y: -737.5))
    ctx.addLine(to: CGPoint(x: 66, y: -738))
    ctx.addLine(to: CGPoint(x: 66, y: 0))
    ctx.addLine(to: CGPoint(x: 318, y: 0))
    ctx.closePath()
}

private func def_path_8(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 560, y: 0))
    ctx.addLine(to: CGPoint(x: 554, y: -92))
    ctx.addLine(to: CGPoint(x: 554, y: -514))
    ctx.addLine(to: CGPoint(x: 400, y: -514))
    ctx.addLine(to: CGPoint(x: 400, y: -204))
    ctx.addQuadCurve(to: CGPoint(x: 308, y: -86), control: CGPoint(x: 392, y: -94))
    ctx.addQuadCurve(to: CGPoint(x: 216, y: -204), control: CGPoint(x: 219, y: -85.5))
    ctx.addLine(to: CGPoint(x: 216, y: -514))
    ctx.addLine(to: CGPoint(x: 62, y: -514))
    ctx.addLine(to: CGPoint(x: 62, y: -180))
    ctx.addQuadCurve(to: CGPoint(x: 72, y: -98), control: CGPoint(x: 62.5, y: -137))
    ctx.addQuadCurve(to: CGPoint(x: 242, y: 13), control: CGPoint(x: 105.5, y: -2))
    ctx.addQuadCurve(to: CGPoint(x: 400, y: -62), control: CGPoint(x: 348, y: 13.5))
    ctx.addLine(to: CGPoint(x: 406, y: 0))
    ctx.addLine(to: CGPoint(x: 560, y: 0))
    ctx.closePath()
}

private func def_path_9(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 68, y: -514))
    ctx.addLine(to: CGPoint(x: 68, y: 0))
    ctx.addLine(to: CGPoint(x: 222, y: 0))
    ctx.addLine(to: CGPoint(x: 222, y: -308))
    ctx.addQuadCurve(to: CGPoint(x: 314, y: -426), control: CGPoint(x: 229, y: -418.5))
    ctx.addQuadCurve(to: CGPoint(x: 406, y: -308), control: CGPoint(x: 403.5, y: -426.5))
    ctx.addLine(to: CGPoint(x: 406, y: 0))
    ctx.addLine(to: CGPoint(x: 560, y: 0))
    ctx.addLine(to: CGPoint(x: 560, y: -308))
    ctx.addQuadCurve(to: CGPoint(x: 652, y: -426), control: CGPoint(x: 567, y: -418.5))
    ctx.addQuadCurve(to: CGPoint(x: 744, y: -308), control: CGPoint(x: 741.5, y: -426.5))
    ctx.addLine(to: CGPoint(x: 744, y: 0))
    ctx.addLine(to: CGPoint(x: 898, y: 0))
    ctx.addLine(to: CGPoint(x: 898, y: -308))
    ctx.addQuadCurve(to: CGPoint(x: 897.5, y: -350), control: CGPoint(x: 898, y: -329))
    ctx.addQuadCurve(to: CGPoint(x: 895, y: -380.5), control: CGPoint(x: 896.5, y: -365))
    ctx.addQuadCurve(to: CGPoint(x: 882, y: -432), control: CGPoint(x: 891.5, y: -409))
    ctx.addQuadCurve(to: CGPoint(x: 718, y: -528), control: CGPoint(x: 838, y: -516))
    ctx.addQuadCurve(to: CGPoint(x: 544, y: -432), control: CGPoint(x: 612, y: -531.5))
    ctx.addQuadCurve(to: CGPoint(x: 380, y: -528), control: CGPoint(x: 500, y: -516))
    ctx.addQuadCurve(to: CGPoint(x: 222, y: -452), control: CGPoint(x: 274.5, y: -528.5))
    ctx.addLine(to: CGPoint(x: 220, y: -452))
    ctx.addLine(to: CGPoint(x: 220, y: -514))
    ctx.addLine(to: CGPoint(x: 68, y: -514))
    ctx.closePath()
}

private func def_path_10(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 314, y: -426))
    ctx.addQuadCurve(to: CGPoint(x: 424, y: -256), control: CGPoint(x: 427, y: -427.5))
    ctx.addQuadCurve(to: CGPoint(x: 314, y: -86), control: CGPoint(x: 427, y: -84.5))
    ctx.addQuadCurve(to: CGPoint(x: 204, y: -256), control: CGPoint(x: 212.5, y: -92))
    ctx.addQuadCurve(to: CGPoint(x: 314, y: -426), control: CGPoint(x: 212.5, y: -420))
    ctx.closePath()
    ctx.move(to: CGPoint(x: 46, y: 0))
    ctx.addLine(to: CGPoint(x: 198, y: 0))
    ctx.addLine(to: CGPoint(x: 202, y: -72))
    ctx.addLine(to: CGPoint(x: 204, y: -72))
    ctx.addQuadCurve(to: CGPoint(x: 362, y: 13), control: CGPoint(x: 253, y: 12))
    ctx.addQuadCurve(to: CGPoint(x: 520.5, y: -60), control: CGPoint(x: 465, y: 7))
    ctx.addQuadCurve(to: CGPoint(x: 584, y: -256), control: CGPoint(x: 576, y: -127))
    ctx.addQuadCurve(to: CGPoint(x: 344, y: -528), control: CGPoint(x: 566.5, y: -514.5))
    ctx.addQuadCurve(to: CGPoint(x: 206, y: -454), control: CGPoint(x: 258, y: -524))
    ctx.addLine(to: CGPoint(x: 204, y: -454))
    ctx.addLine(to: CGPoint(x: 204, y: -738))
    ctx.addLine(to: CGPoint(x: 50, y: -738))
    ctx.addLine(to: CGPoint(x: 50, y: -102))
    ctx.addLine(to: CGPoint(x: 46, y: 0))
    ctx.closePath()
}

private func def_path_11(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 262, y: -528))
    ctx.addQuadCurve(to: CGPoint(x: 32, y: -256), control: CGPoint(x: 49.5, y: -514.5))
    ctx.addQuadCurve(to: CGPoint(x: 98, y: -60.5), control: CGPoint(x: 40.5, y: -128))
    ctx.addQuadCurve(to: CGPoint(x: 262, y: 13), control: CGPoint(x: 155.5, y: 6.5))
    ctx.addQuadCurve(to: CGPoint(x: 490, y: -186), control: CGPoint(x: 478, y: 10.5))
    ctx.addLine(to: CGPoint(x: 340, y: -186))
    ctx.addQuadCurve(to: CGPoint(x: 262, y: -86), control: CGPoint(x: 333, y: -87.5))
    ctx.addQuadCurve(to: CGPoint(x: 193.5, y: -245.5), control: CGPoint(x: 200, y: -84.5))
    ctx.addQuadCurve(to: CGPoint(x: 192, y: -264), control: CGPoint(x: 193, y: -254.5))
    ctx.addQuadCurve(to: CGPoint(x: 192.5, y: -273.5), control: CGPoint(x: 192, y: -269))
    ctx.addQuadCurve(to: CGPoint(x: 260, y: -426), control: CGPoint(x: 198.5, y: -426))
    ctx.addQuadCurve(to: CGPoint(x: 338, y: -332), control: CGPoint(x: 332, y: -425))
    ctx.addLine(to: CGPoint(x: 490, y: -332))
    ctx.addQuadCurve(to: CGPoint(x: 262, y: -528), control: CGPoint(x: 479.5, y: -518))
    ctx.closePath()
}

private func def_path_12(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 68, y: -738))
    ctx.addLine(to: CGPoint(x: 68, y: 0))
    ctx.addLine(to: CGPoint(x: 222, y: 0))
    ctx.addLine(to: CGPoint(x: 222, y: -278))
    ctx.addLine(to: CGPoint(x: 224, y: -280))
    ctx.addLine(to: CGPoint(x: 378, y: 0))
    ctx.addLine(to: CGPoint(x: 558, y: 0))
    ctx.addLine(to: CGPoint(x: 368, y: -294))
    ctx.addLine(to: CGPoint(x: 546, y: -520))
    ctx.addLine(to: CGPoint(x: 374, y: -520))
    ctx.addLine(to: CGPoint(x: 224, y: -304))
    ctx.addLine(to: CGPoint(x: 222, y: -306))
    ctx.addLine(to: CGPoint(x: 222, y: -738))
    ctx.addLine(to: CGPoint(x: 68, y: -738))
    ctx.closePath()
}

private func def_path_13(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 456, y: 0))
    ctx.addLine(to: CGPoint(x: 728, y: -738))
    ctx.addLine(to: CGPoint(x: 572, y: -738))
    ctx.addLine(to: CGPoint(x: 378, y: -156))
    ctx.addLine(to: CGPoint(x: 376, y: -156))
    ctx.addLine(to: CGPoint(x: 184, y: -738))
    ctx.addLine(to: CGPoint(x: 10, y: -738))
    ctx.addLine(to: CGPoint(x: 282, y: 0))
    ctx.addLine(to: CGPoint(x: 456, y: 0))
    ctx.closePath()
}

private func def_path_14(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 538, y: -249))
    ctx.addLine(to: CGPoint(x: 537, y: -273))
    ctx.addLine(to: CGPoint(x: 534, y: -314))
    ctx.addQuadCurve(to: CGPoint(x: 508, y: -406), control: CGPoint(x: 528, y: -363.5))
    ctx.addQuadCurve(to: CGPoint(x: 288, y: -528), control: CGPoint(x: 449, y: -529))
    ctx.addQuadCurve(to: CGPoint(x: 42, y: -256), control: CGPoint(x: 55, y: -515.5))
    ctx.addQuadCurve(to: CGPoint(x: 288, y: 13), control: CGPoint(x: 39, y: 15.5))
    ctx.addQuadCurve(to: CGPoint(x: 522, y: -152), control: CGPoint(x: 503, y: 12.5))
    ctx.addLine(to: CGPoint(x: 384, y: -152))
    ctx.addQuadCurve(to: CGPoint(x: 288, y: -86), control: CGPoint(x: 363, y: -83.5))
    ctx.addQuadCurve(to: CGPoint(x: 200, y: -216), control: CGPoint(x: 195.5, y: -83))
    ctx.addLine(to: CGPoint(x: 538, y: -216))
    ctx.addLine(to: CGPoint(x: 538, y: -249))
    ctx.closePath()
    ctx.move(to: CGPoint(x: 288, y: -426))
    ctx.addQuadCurve(to: CGPoint(x: 378, y: -318), control: CGPoint(x: 380.5, y: -427))
    ctx.addLine(to: CGPoint(x: 200, y: -318))
    ctx.addQuadCurve(to: CGPoint(x: 288, y: -426), control: CGPoint(x: 202.5, y: -427))
    ctx.closePath()
}

private func def_path_15(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 312, y: -528))
    ctx.addQuadCurve(to: CGPoint(x: 44, y: -256), control: CGPoint(x: 55.5, y: -517))
    ctx.addQuadCurve(to: CGPoint(x: 312, y: 13), control: CGPoint(x: 55, y: 2.5))
    ctx.addQuadCurve(to: CGPoint(x: 580, y: -256), control: CGPoint(x: 569, y: 2.5))
    ctx.addQuadCurve(to: CGPoint(x: 312, y: -528), control: CGPoint(x: 568.5, y: -517))
    ctx.closePath()
    ctx.move(to: CGPoint(x: 312, y: -426))
    ctx.addQuadCurve(to: CGPoint(x: 422, y: -256), control: CGPoint(x: 424, y: -427))
    ctx.addQuadCurve(to: CGPoint(x: 312, y: -86), control: CGPoint(x: 424, y: -85))
    ctx.addQuadCurve(to: CGPoint(x: 202, y: -256), control: CGPoint(x: 200, y: -85))
    ctx.addQuadCurve(to: CGPoint(x: 312, y: -426), control: CGPoint(x: 200, y: -427))
    ctx.closePath()
}

private func def_path_16(_ ctx: CGContext)
{
    ctx.move(to: CGPoint(x: 310, y: -426))
    ctx.addQuadCurve(to: CGPoint(x: 420, y: -256), control: CGPoint(x: 411.5, y: -420))
    ctx.addQuadCurve(to: CGPoint(x: 310, y: -86), control: CGPoint(x: 411.5, y: -92))
    ctx.addQuadCurve(to: CGPoint(x: 198, y: -256), control: CGPoint(x: 194.5, y: -84.5))
    ctx.addQuadCurve(to: CGPoint(x: 310, y: -426), control: CGPoint(x: 194.5, y: -427.5))
    ctx.closePath()
    ctx.move(to: CGPoint(x: 418, y: -454))
    ctx.addQuadCurve(to: CGPoint(x: 280, y: -528), control: CGPoint(x: 366, y: -524))
    ctx.addQuadCurve(to: CGPoint(x: 40, y: -256), control: CGPoint(x: 56.5, y: -515.5))
    ctx.addQuadCurve(to: CGPoint(x: 103, y: -60), control: CGPoint(x: 47.5, y: -127))
    ctx.addQuadCurve(to: CGPoint(x: 262, y: 13), control: CGPoint(x: 158.5, y: 7))
    ctx.addQuadCurve(to: CGPoint(x: 418, y: -72), control: CGPoint(x: 372, y: 12))
    ctx.addLine(to: CGPoint(x: 420, y: -72))
    ctx.addLine(to: CGPoint(x: 424, y: 0))
    ctx.addLine(to: CGPoint(x: 578, y: 0))
    ctx.addLine(to: CGPoint(x: 574, y: -102))
    ctx.addLine(to: CGPoint(x: 574, y: -738))
    ctx.addLine(to: CGPoint(x: 420, y: -738))
    ctx.addLine(to: CGPoint(x: 420, y: -454))
    ctx.addLine(to: CGPoint(x: 418, y: -454))
    ctx.closePath()
}

private func draw_main(_ ctx: CGContext)
{
    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 0, ty: 0))
    def_path_0(ctx)
    ctx.clip(using: .evenOdd)
    ctx.concatenate(CGAffineTransform(a: 0.109375, b: 0, c: 0, d: 0.109375, tx: 469.45, ty: 126))
    draw_gradient_0(ctx)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 0, ty: 0))
    def_path_1(ctx)
    ctx.clip(using: .evenOdd)
    ctx.concatenate(CGAffineTransform(a: 0.0714111, b: 0, c: 0, d: 0.0701599, tx: 480.45, ty: 302.45))
    draw_gradient_1(ctx)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.setFillColor(red: 0.8, green: 0.2, blue: 0.6, alpha: 1)
    def_path_2(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.setStrokeColor(red: 0.2, green: 1, blue: 0.4, alpha: 1)
    ctx.setLineWidth(1)
    ctx.setLineCap(.round)
    ctx.setLineJoin(.round)
    def_path_3(ctx)
    ctx.drawPath(using: .stroke)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.setStrokeColor(red: 0.2, green: 1, blue: 0.4, alpha: 1)
    ctx.setLineWidth(1)
    ctx.setLineCap(.round)
    ctx.setLineJoin(.round)
    def_path_4(ctx)
    ctx.drawPath(using: .stroke)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 39.35, ty: 16.75))
    draw_shape_2(ctx, nil)
    ctx.restoreGState()

    do
    {
        ctx.saveGState()
        ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 217.65, ty: 16.75))
        let colorTrans : TKColorTransform = [ 0.462745, 0.462745, 0.462745, 1.00392, 0, 0, 0, 0 ];
        draw_shape_2(ctx, colorTrans)
        ctx.restoreGState()
    }
    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 94.55, ty: 165.05))
    draw_shape_4(ctx, nil)
    ctx.restoreGState()

    do
    {
        ctx.saveGState()
        ctx.concatenate(CGAffineTransform(a: 1, b: 0, c: 0, d: 1, tx: 238.55, ty: 181))
        let colorTrans : TKColorTransform = [ 0.239216, 0.239216, 0.239216, 1.00392, 0.698039, 0.0588235, 0.760784, 0 ];
        draw_shape_4(ctx, colorTrans)
        ctx.restoreGState()
    }
    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 26.55, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.2, blue: 0.6, alpha: 1)
    def_path_7(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 52.45, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.2, blue: 0.6, alpha: 1)
    def_path_8(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 74.35, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.2, blue: 0.6, alpha: 1)
    def_path_9(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 108.3, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.2, blue: 0.6, alpha: 1)
    def_path_10(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 140.15, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.8, blue: 0, alpha: 1)
    def_path_7(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 166.05, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.8, blue: 0, alpha: 1)
    def_path_8(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 187.95, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.8, blue: 0, alpha: 1)
    def_path_11(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 205.95, ty: 371.85))
    ctx.setFillColor(red: 0.8, green: 0.8, blue: 0, alpha: 1)
    def_path_12(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 235.85, ty: 371.85))
    ctx.setFillColor(red: 1, green: 0.2, blue: 0, alpha: 1)
    def_path_13(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 261.75, ty: 371.85))
    ctx.setFillColor(red: 1, green: 0.2, blue: 0, alpha: 1)
    def_path_14(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 281.7, ty: 371.85))
    ctx.setFillColor(red: 1, green: 0.2, blue: 0, alpha: 1)
    def_path_11(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 299.7, ty: 371.85))
    ctx.setFillColor(red: 1, green: 0.2, blue: 0, alpha: 1)
    def_path_15(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 321.6, ty: 371.85))
    ctx.setFillColor(red: 1, green: 0.2, blue: 0, alpha: 1)
    def_path_16(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

    ctx.saveGState()
    ctx.concatenate(CGAffineTransform(a: 0.0351562, b: 0, c: 0, d: 0.0351562, tx: 343.5, ty: 371.85))
    ctx.setFillColor(red: 1, green: 0.2, blue: 0, alpha: 1)
    def_path_14(ctx)
    ctx.drawPath(using: .eoFill)
    ctx.restoreGState()

}


