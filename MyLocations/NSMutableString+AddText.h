//
//  NSMutableString+AddText.h
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import <Foundation/Foundation.h>

@interface NSMutableString (AddText)

- (void)addText:(NSString *)text withSeparator:(NSString *)separator;

@end
