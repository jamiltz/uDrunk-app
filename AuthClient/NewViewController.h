//
//  NewViewController.h
//  AuthClient
//
//  Created by James Nocentini on 13/01/2013.
//  Copyright (c) 2013 nsscreencast. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *measureField;

+ (void)presentToNewViewController:(UIViewController *)viewController;


@end
