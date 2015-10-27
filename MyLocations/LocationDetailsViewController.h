//
//  LocationDetailsViewController.h
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.
#import <UIKit/UIKit.h>
#import "CurrentLocationViewController.h"
#import "CategoryPickerViewController.h"

@class Location;

@interface LocationDetailsViewController : UITableViewController

@property (assign, nonatomic) CLLocationCoordinate2D coordinate;
@property (strong, nonatomic) CLPlacemark *placemark;

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) Location *locationToEdit;

@end
