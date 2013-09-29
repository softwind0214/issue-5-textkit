//
//  TKDConfigurationViewController.h
//  TextKitDemo
//
//  Created by Max Seelemann on 29.09.13.
//  Copyright (c) 2013 Max Seelemann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TKDConfigurationViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *singleTextView;
@property (weak, nonatomic) IBOutlet UITextView *firstTextView;
@property (weak, nonatomic) IBOutlet UITextView *secondTextView;


- (IBAction)endEditing:(UIBarButtonItem *)sender;

@end
