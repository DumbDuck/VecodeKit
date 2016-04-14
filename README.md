## Introduction

<image src="./images/vecode_icon.png" width="200" height="200"/>

Vecode is a blending word which combines <b>Vector</b> and <b>Code</b>. It helps developers and designers turn vector images to drawing codes or svg images.

For now, Vecode is able to import:

* swf vector format

Able to export:

* Quartz code (Objective-C)
* Quartz code (Swift)
* Android graphics code
* svg image
* png image

FYI Quartz code is a drawing code for iOS and OS X. Android graphics code, AKA the drawing code on Android platform. 

After turning vector image to drawing code, then add the drawing code into the project and compile. During runtime, the image will be redrawn and rescale size without distortion.

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

## Version History

### v1.1
* Support exportation of Android graphics code.

### v1.0.1
* Fix Bug: There was a display issue of the exported svg in Adobe Illustrator.

### v1.0
* Support swf importation.
* Support exportation of Quartz code (Objective-C)、Quartz code (Swift).
* Support exportation of svg and png image.
* 2 UI themes: Day light & Dark Night.