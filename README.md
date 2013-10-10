BlurView
========

![Example](http://nicoyuste.es/gitHubResources/blurView.gif)

With this BlurView you can add the new iOS7 effect to whatever UIView with whatever content in it.

It checks the device iOS version so you can use this class under iOS7 and it also checks the device is enough powerfull for making this kind of effect so it will not do this effect in iPhone4 and less.

##Installation

Download the code and add `BLRView` and `UIImage+ImageEffects` to you code.
You also will need the `UIDevice+Hardware` Category added to this repo as submodule.

Other way is to add this repo as a submodule of yours which I recommend.

##Use

- 1. Create de `BLRView` as a normal `UIView`.
- 2. Set the `parent` to the `BLRView` and give to it the `frame` where it should make the blur effect in the `parentView`.
- 3. Give to it the `BLRColorComponents` you want to apply.

```Objective-C

    BLRView *blurView = [[BLRView alloc] initWithFrame:self.view.frame parent:self.backgroundImageView withSnapshotFrame:self.backgroundImageView.bounds];
    [blurView blurWithColor:[BLRColorComponents lightEffect]];
    [self.view addSubView:blurView];

````

##Thanks

- Justin M Fischer for the BlurView(modified by me) (https://github.com/justinmfischer/7blur)
- Inder Kumar Rathore for the Device+Hardware category (https://github.com/InderKumarRathore/UIDevice-Hardware)

## License

MIT License

    Copyright (c) 2013 Kent Sutherland
    
    Permission is hereby granted, free of charge, to any person obtaining a copy of
    this software and associated documentation files (the "Software"), to deal in
    the Software without restriction, including without limitation the rights to use,
    copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the
    Software, and to permit persons to whom the Software is furnished to do so,
    subject to the following conditions:
    
    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.
    
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
    FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
    COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
    IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
    CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
