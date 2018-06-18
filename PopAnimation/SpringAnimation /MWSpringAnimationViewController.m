//
//  MWSpringAnimationViewController.m
//  PopAnimation
//
//  Created by Monster on 2018/6/15.
//  Copyright © 2018年 Monster. All rights reserved.
//

#import "MWSpringAnimationViewController.h"

@interface MWSpringAnimationViewController ()

@property (nonatomic, strong) UIView * animationLayerView;

@end

@implementation MWSpringAnimationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self layoutUI];
    [self startAnimation];
}

#pragma mark - layoutUI
- (void)layoutUI
{
    self.view.backgroundColor = WHITE_COLOR;
    [self.view addSubview:self.animationLayerView];
    [self.animationLayerView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self.view.mas_centerX);
        make.width.mas_equalTo(100);
        make.height.mas_equalTo(100);
        make.centerY.mas_equalTo(self.view.mas_centerY).mas_offset(-100);
    }];
}

- (void)startAnimation
{
    POPSpringAnimation * anim = [POPSpringAnimation animationWithPropertyNamed:kPOPLayerBounds];
    anim.fromValue = @(5);
    anim.toValue = @(300);
    anim.springSpeed = 2.0f;
    anim.springBounciness = 10.0f;
    anim.dynamicsMass = 10;
    anim.beginTime = CACurrentMediaTime() + 1.0;
//    anim.repeatForever = YES;
    [self.animationLayerView.layer pop_addAnimation:anim forKey:@"ScaleXY"];
}

- (UIView *)animationLayerView
{
    if (!_animationLayerView) {
        _animationLayerView = [[UIView alloc] init];
        _animationLayerView.backgroundColor = SDK_COLOR_C114;
    }
    return _animationLayerView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
