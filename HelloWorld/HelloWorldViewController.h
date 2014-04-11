//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Kensuke Nagae on 4/11/14.
//  Copyright (c) 2014 Kensuke Nagae. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;
@end
