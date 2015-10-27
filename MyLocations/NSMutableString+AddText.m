//
//  NSMutableString+AddText.m
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.

#import "NSMutableString+AddText.h"

@implementation NSMutableString (AddText)

- (void)addText:(NSString *)text withSeparator:(NSString *)separator
{
  if (text) {
    if ([self length]) {
      [self appendString:separator];
    }
    
    [self appendString:text];
  }
}

@end
