//
//  QuizAppDelegate.h
//  Quiz
//
//  Created by Craig Cottingham on 2012-04-17.
//  Copyright (c) 2012 HRWorX LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QuizViewController;

@interface QuizAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) QuizViewController *viewController;

@end
