//
//  AppDelegate.h
//  SharedDataWithViews
//
//  Created by Charles Konkol on 12/1/14.
//  Copyright (c) 2014 Rock Valley College. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

NSString *Name;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

