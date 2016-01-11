//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSCoder, NSData, NSDictionary, NSError, NSString, NSURL, NSUserActivity, UIApplication, UIApplicationShortcutItem, UILocalNotification, UIUserNotificationSettings, UIViewController, UIWindow;

@protocol UIApplicationDelegate <NSObject>

@optional
- (_Bool)application:(UIApplication *)arg1 continueUserActivity:(NSUserActivity *)arg2 restorationHandler:(void (^)(NSArray *))arg3;
- (void)application:(UIApplication *)arg1 didChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(UIApplication *)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)application:(UIApplication *)arg1 didDecodeRestorableStateWithCoder:(NSCoder *)arg2;
- (void)application:(UIApplication *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (void)application:(UIApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (_Bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveLocalNotification:(UILocalNotification *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2 fetchCompletionHandler:(void (^)(unsigned long long))arg3;
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterUserNotificationSettings:(UIUserNotificationSettings *)arg2;
- (void)application:(UIApplication *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forLocalNotification:(UILocalNotification *)arg3 completionHandler:(void (^)(void))arg4;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forLocalNotification:(UILocalNotification *)arg3 withResponseInfo:(NSDictionary *)arg4 completionHandler:(void (^)(void))arg5;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forRemoteNotification:(NSDictionary *)arg3 completionHandler:(void (^)(void))arg4;
- (void)application:(UIApplication *)arg1 handleActionWithIdentifier:(NSString *)arg2 forRemoteNotification:(NSDictionary *)arg3 withResponseInfo:(NSDictionary *)arg4 completionHandler:(void (^)(void))arg5;
- (void)application:(UIApplication *)arg1 handleEventsForBackgroundURLSession:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)application:(UIApplication *)arg1 handleOpenURL:(NSURL *)arg2;
- (void)application:(UIApplication *)arg1 handleWatchKitExtensionRequest:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (void)application:(UIApplication *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)application:(UIApplication *)arg1 performFetchWithCompletionHandler:(void (^)(unsigned long long))arg2;
- (_Bool)application:(UIApplication *)arg1 shouldAllowExtensionPointIdentifier:(NSString *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldRestoreApplicationState:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 shouldSaveApplicationState:(NSCoder *)arg2;
- (unsigned long long)application:(UIApplication *)arg1 supportedInterfaceOrientationsForWindow:(UIWindow *)arg2;
- (UIViewController *)application:(UIApplication *)arg1 viewControllerWithRestorationIdentifierPath:(NSArray *)arg2 coder:(NSCoder *)arg3;
- (void)application:(UIApplication *)arg1 willChangeStatusBarFrame:(struct CGRect)arg2;
- (void)application:(UIApplication *)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (_Bool)application:(UIApplication *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (void)application:(UIApplication *)arg1 willEncodeRestorableStateWithCoder:(NSCoder *)arg2;
- (_Bool)application:(UIApplication *)arg1 willFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)applicationDidFinishLaunching:(UIApplication *)arg1;
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)arg1;
- (void)applicationProtectedDataDidBecomeAvailable:(UIApplication *)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(UIApplication *)arg1;
- (void)applicationShouldRequestHealthAuthorization:(UIApplication *)arg1;
- (void)applicationSignificantTimeChange:(UIApplication *)arg1;
- (void)applicationWillEnterForeground:(UIApplication *)arg1;
- (void)applicationWillResignActive:(UIApplication *)arg1;
- (void)applicationWillTerminate:(UIApplication *)arg1;
@property(retain, nonatomic) UIWindow *window;
@end

