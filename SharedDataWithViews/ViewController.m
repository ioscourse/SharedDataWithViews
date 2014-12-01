//
//  ViewController.m
//  SharedDataWithViews
//
//  Created by Charles Konkol on 12/1/14.
//  Copyright (c) 2014 Rock Valley College. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)btnSubmit:(id)sender {
    Name = self.txtData.text;
}
@end
