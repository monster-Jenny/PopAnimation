//
//  ViewController.m
//  PopAnimation
//
//  Created by Monster on 2018/6/15.
//  Copyright © 2018年 Monster. All rights reserved.
//

#import "ViewController.h"
#import "MWSpringAnimationViewController.h"
#import "MWDemoViewController.h"

@interface ViewController ()
<
UITableViewDelegate,
UITableViewDataSource
>

@property (nonatomic, strong) UITableView * tableView;

@property (nonatomic, strong) NSMutableArray * datas;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self initData];
    [self layutUI];
}

#pragma mark - initData
- (void)initData
{
    self.datas = [[NSMutableArray alloc] initWithArray:@[@"Demo",@"弹簧动画",@"衰减效果",@"基本动画",@"自定义动画"]];
}

#pragma mark - layoutUI
- (void)layutUI
{
    self.view.backgroundColor = WHITE_COLOR;
    [self.view addSubview:self.tableView];
    [self.tableView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.edges.mas_equalTo(self.view);
    }];
}


#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.datas.count;
};

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell * cell = [tableView dequeueReusableCellWithIdentifier:@"cell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"cell"];
    }
    cell.textLabel.text = self.datas[indexPath.row];
    return cell;
}

#pragma mark - UITableViewDelegate
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.row == 0)
    {
        MWDemoViewController * ctl = [[MWDemoViewController alloc] init];
        ctl.title = self.datas[0];
        [self.navigationController pushViewController:ctl animated:YES];
    }
    else if (indexPath.row == 1)
    {
        MWSpringAnimationViewController * ctl = [[MWSpringAnimationViewController alloc] init];
        ctl.title = self.datas[1];
        [self.navigationController pushViewController:ctl animated:YES];
    }
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return 50;
}

- (UITableView *)tableView
{
    if(!_tableView)
    {
        _tableView = [[UITableView alloc] init];
        _tableView.dataSource = self;
        _tableView.delegate = self;
        _tableView.estimatedRowHeight = 0;
        _tableView.estimatedSectionFooterHeight = 0;
        _tableView.estimatedSectionHeaderHeight = 0;
    }
    return _tableView;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
