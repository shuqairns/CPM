//
//  SignUpViewController.h
//  Track It
//
//  Created by Nazir Shuqair on 2/8/15.
//  Copyright (c) 2015 Me Time Studios. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface SignUpInViewController : UIViewController{
    
    Boolean goodEmail;
    Boolean goodUsername;
    Boolean goodPassword;
}

@property (strong, nonatomic) IBOutlet UITextField *signUpEmail;
@property (strong, nonatomic) IBOutlet UITextField *signUpUsername;
@property (strong, nonatomic) IBOutlet UITextField *signUpPass;
@property (strong, nonatomic) IBOutlet UITextField *signInUsername;
@property (strong, nonatomic) IBOutlet UITextField *signInPass;

-(IBAction)onSignUP:(id)sender;
-(IBAction)onSignIn:(id)sender;

@end