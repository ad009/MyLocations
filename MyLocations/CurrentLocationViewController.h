//
//  CurrentLocationViewController.h
//  MyLocations
//
//  Created by Aditya Bantwal on 25/12/14.
//  Copyright (c) 2014 Aditya Bantwal. All rights reserved.


@interface CurrentLocationViewController : UIViewController <CLLocationManagerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
