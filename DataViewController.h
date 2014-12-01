//
//  DataViewController.h
//  SharedDataWithViews
//
//  Created by Charles Konkol on 12/1/14.
//  Copyright (c) 2014 Rock Valley College. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface DataViewController : UIViewController
- (IBAction)btnBack:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *txtData;

@end
