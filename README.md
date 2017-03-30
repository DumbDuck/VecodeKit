## Introduction

<image src="./images/vecode_icon.png" width="200" height="200"/>

Vecode is a blending word which combines <b>Vector</b> and <b>Code</b>. It helps developers and designers turn vector images to drawing codes or svg images. You can download it on [Mac AppStore](https://itunes.apple.com/WebObjects/MZStore.woa/wa/viewSoftware?id=1084265083&mt=12).

For now, Vecode is able to import:

* swf vector format

Able to export:

* Quartz code (Swift)
* Quartz code (Objective-C)
* Android graphics code
* svg image
* png image

FYI Quartz code is a drawing code for iOS and OS X. Android graphics code, AKA the drawing code on Android platform. 

After turning vector image to drawing code, then add the drawing code into the project and compile. During runtime, the image will be redrawn and rescale size without distortion.

See More:

* [中文文档](http://dumbduck.github.io/VecodeKit/cn/home.html)
* [English Doucment](http://dumbduck.github.io/VecodeKit/en/home.html)

## VecodeKit
We've coded project example VecodeKit, showing how to use the exported drawing codes.

VecodeKit includes sub-directories as follows:

* iOS_Mac
* Android
* test_swf

<a id="mac_example_anchor"></a>
<b>iOS_Mac</b> directory includes an iOS and a Mac example, showing you how to use Quartz Code under Swift and Object-C accordingly.

<img src="./images/example_mac.png" width="600"></td>

<a id="android_example_anchor"></a>
<b>Android</b> directory includes an Android Studio project example, showing you how to use the exported Android graphics code.

<img src="./images/example_android.png" width="300"></td>

In the <b>test_swf</b> directory you can find some swf files for test.

