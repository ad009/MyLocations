//
//  HudView.h
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import <UIKit/UIKit.h>

@interface HudView : UIView

+ (instancetype)hudInView:(UIView *)view animated:(BOOL)animated;

@property (strong, nonatomic) NSString *text;

@end
