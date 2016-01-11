//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccount, NSArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface ICDeviceListRequest : NSObject
{
    NSArray *_devices;
    ACAccount *_account;
    NSObject<OS_dispatch_semaphore> *_workSemaphore;
    NSString *_name;
    NSString *_model;
    NSString *_modelDisplayName;
    NSString *_softwareVersion;
}

+ (id)filteredDevices:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (_Bool)anyDeviceNeedsUpgrade;
- (_Bool)anyDeviceNotUpgradable;
- (_Bool)anyOSXDeviceNotUpgraded;
@property(retain) NSArray *devices; // @synthesize devices=_devices;
- (void)fetchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccount:(id)arg1;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(retain) NSObject<OS_dispatch_semaphore> *workSemaphore; // @synthesize workSemaphore=_workSemaphore;
- (_Bool)waitForFetchWithTimeout:(double)arg1;

@end
