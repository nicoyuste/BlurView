//
//  NYViewController.m
//  BlurExample
//
//  Created by Nicolas Yuste Tirados on 10/10/13.
//  Copyright (c) 2013 Nicolas Yuste Tirados. All rights reserved.
//

#import "NYViewController.h"
#import "BLRView.h"

@interface NYViewController ()

@property (nonatomic, retain) BLRView *blurView;

@end

@implementation NYViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	   
    
    
}

- (void) viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    
    BLRView *blurView = [[BLRView alloc] initWithFrame:self.view.frame parent:self.backgroundImageView withSnapshotFrame:self.backgroundImageView.bounds];
    blurView.hidden = YES;
    [blurView blurWithColor:[BLRColorComponents lightEffect]];
    [self.view insertSubview:blurView belowSubview:self.addBlurBUtton];
    [blurView setTranslatesAutoresizingMaskIntoConstraints:NO];
    self.blurView = blurView;
    
}

- (void) viewDidAppear:(BOOL)animated{
    [self.blurView updateBlurView];
}

- (IBAction)addBlurButtonTapped:(id)sender
{
    self.blurView.hidden = !self.blurView.hidden;
}


@end
