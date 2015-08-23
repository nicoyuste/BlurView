BlurView
========

![Example](http://nicoyuste.es/gitHubResources/blurView.gif)

iOS7 introduced a new effect into the iOS world. Use this library to create blur effects in a really easy way. You can create a Blur View out of any <code>UIView</code>.

This library checks the device iOS version. You can use this in iOS6 or below with no problem, it will just create a black alpha view. It also checks if the device is powerfull enough to create this kind of effect, It will not do it in iPhone4 and lower.

##Installation

You can install <code>NYBlurView</code> using CocoaPods.

    pod 'NYBlurView'

##Use

- 1. Create de `NYBlurView` as a normal `UIView`.
- 2. Set the `parent` to the `NYBlurView`. 
- 3. Give the `frame` which the `NYBlurView` should use to create the blur effect out of the `parentView`.
- 3. Give the `BLRColorComponents` you want to apply.

```Objective-C
    BLRView *blurView = [[BLRView alloc] initWithFrame:self.view.frame parent:self.backgroundImageView withSnapshotFrame:self.backgroundImageView.bounds];
    [blurView blurWithColor:[BLRColorComponents lightEffect]];
    [self.view addSubView:blurView];
```


##License

The MIT License (MIT)

Copyright (c) 2015 Nicolas Yuste

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.



