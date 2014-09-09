BlurView
========

![Example](http://nicoyuste.es/gitHubResources/blurView.gif)

With this BlurView you can add the new iOS7 effect to whatever UIView with whatever content in it.

It checks the device iOS version so you can use this class under iOS6 or below and it also checks if the device is enough powerfull for making this kind of effect so it will not do it in iPhone4 and lower.

##Installation

Download the code and add `BLRView` and `UIImage+ImageEffects` to you code.
You also will need the `UIDevice+Hardware` Category added to this repo as submodule.

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
