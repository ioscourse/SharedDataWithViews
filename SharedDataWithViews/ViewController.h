//
//  ViewController.h
//  SharedDataWithViews
//
//  Created by Charles Konkol on 12/1/14.
//  Copyright (c) 2014 Rock Valley College. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *txtData;
- (IBAction)btnSubmit:(id)sender;


@end

