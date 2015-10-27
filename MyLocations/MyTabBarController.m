//
//  MyTabBarController.m
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.


#import "MyTabBarController.h"

@interface MyTabBarController ()

@end

@implementation MyTabBarController

- (UIStatusBarStyle)preferredStatusBarStyle
{
  return UIStatusBarStyleLightContent;
}

- (UIViewController *)childViewControllerForStatusBarStyle
{
  return nil;
}

@end
