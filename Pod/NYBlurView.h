//
// Copyright (c) 2013 Justin M Fischer
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//  BLRView.h
//  7blur
//
//  Created by JUSTIN M FISCHER on 9/02/13.
//  Copyright (c) 2013 Justin M Fischer. All rights reserved.
//
//  Modified by NICOLAS YUSTE on 10/19/13

typedef enum {
    KBlurUndefined = 0,
    KStaticBlur = 1,
    KLiveBlur = 2
} BlurType;


@class BLRColorComponents;

/// A UIView subclass that supports live real time and static blurs. See https://github.com/justinmfischer/7blur
///
@interface NYBlurView : UIView


- (id) initWithFrame:(CGRect)frame parent:(UIView *) parentView withSnapshotFrame:(CGRect) snapShotFrame;
- (id) initWithFrame:(CGRect)frame parent:(UIView *) parentView;
- (void) setParentFrameSnapshot:(CGRect) snapshotFrame;
- (void) setParentView:(UIView *) parentView;

- (void) updateBlurView;

- (void) blurWithColor:(BLRColorComponents *) components;
- (void) blurWithColor:(BLRColorComponents *) components updateInterval:(float) interval;

@end

/// Blur color components.
///
@interface BLRColorComponents : NSObject

@property(nonatomic, assign) CGFloat radius;
@property(nonatomic, strong) UIColor *tintColor;
@property(nonatomic, assign) CGFloat saturationDeltaFactor;
@property(nonatomic, strong) UIImage *maskImage;

///Light color effect.
///
+ (BLRColorComponents *) lightEffect;

///Dark color effect.
///
+ (BLRColorComponents *) darkEffect;

///Coral color effect.
///
+ (BLRColorComponents *) coralEffect;

///Neon color effect.
///
+ (BLRColorComponents *) neonEffect;

///Sky color effect.
///
+ (BLRColorComponents *) skyEffect;

@end