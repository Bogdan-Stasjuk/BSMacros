//
//  BSMacros.h
//
//  Created by Bogdan Stasiuk on 3/18/15.
//  Copyright (c) 2015 Bogdan Stasiuk. All rights reserved.
//

#pragma mark - Logging

#ifdef DEBUG
  #define BSLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
  #define BSDDLogVerbose(fmt, ...) DDLogVerbose((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
  #define BSDDLogWarn(fmt, ...) DDLogWarn((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
  #define BSLog(fmt, ...)
  #define BSDDLogVerbose(fmt, ...)
  #define BSDDLogWarn(fmt, ...)
#endif

#define BSLogCap(fmt, ...)
#define BSDDLogError(fmt, ...) DDLogError((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#pragma mark - UIApplication

#define BSAppDelegate [UIApplication sharedApplication].delegate

#pragma mark - NSFileManager

#define BSDefaultFileManager [NSFileManager defaultManager]

#pragma mark - UIScreen

#define BSScreenBounds [UIScreen mainScreen].bounds
#define BSScreenSize [UIScreen mainScreen].bounds.size

#pragma mark - Orientations

#define BSInterfaceOrientation [UIApplication sharedApplication].statusBarOrientation
#define BSDeviceOrientation [UIDevice currentDevice].orientation

#pragma mark - Sys Ver

#define IsSysVerLess8 ([[[UIDevice currentDevice] systemVersion] compare:@"8.0" options:NSNumericSearch] == NSOrderedAscending)

#pragma mark - Others

#define BSEmptyString @""
#define BSStandardUserDefaults [NSUserDefaults standardUserDefaults]
#define BSDefaultNotificationCenter [NSNotificationCenter defaultCenter]
