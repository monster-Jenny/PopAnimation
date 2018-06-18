//
//  MWDemoViewController.m
//  PopAnimation
//
//  Created by Monster on 2018/6/18.
//  Copyright © 2018年 Monster. All rights reserved.
//

#import "MWDemoViewController.h"

@interface MWDemoViewController ()

@end

@implementation MWDemoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self layoutUI];
}

- (void)layoutUI
{
    self.view.backgroundColor = BG_MAIN;
    UIView * layerView = [[UIView alloc] init];
    layerView.backgroundColor = WHITE_COLOR;
    [self.view addSubview:layerView];
    [layerView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.centerX.mas_equalTo(self.view.mas_centerX);
        make.centerY.mas_equalTo(self.view.mas_centerY);
        make.width.mas_equalTo(100);
        make.height.mas_equalTo(100);
    }];
    
    UIImage * image = [UIImage imageNamed:@"Wifi1"];
    
    CALayer * subLayer = [[CALayer alloc] init];
    subLayer.frame = CGRectMake(25, 25, 50, 50);
    subLayer.backgroundColor = ORANGE_COLOR.CGColor;
    subLayer.contents = (__bridge id)image.CGImage;
    [layerView.layer addSublayer:subLayer];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

