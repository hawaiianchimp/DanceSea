//
//  DSAppDelegate.h
//  DanceSea
//
//  Created by Sean Thomas Burke on 4/4/14.
//  Copyright (c) 2014 DanceSea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DSAppDelegate : UIResponder <UIApplicationDelegate> {

UIButton *startButton;

}
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet UIButton *startButton;

- (IBAction)startbutton;


@end
