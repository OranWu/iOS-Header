//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXAppInstallObserverDelegate-Protocol.h"
#import "NotificationConsumer-Protocol.h"

@class IXAppInstallObserver, JobAgentSupervisor, NSString;

@interface LaunchServicesObserver : NSObject <NotificationConsumer, IXAppInstallObserverDelegate>
{
    JobAgentSupervisor *_supervisor;
    IXAppInstallObserver *_ixObserver;
}

- (void).cxx_destruct;
- (void)_parseRegistrationNotification:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_parseProgressNotification:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_handleRegistrationForBundleIDs:(id)arg1 isPlaceholder:(_Bool)arg2 isUninstalled:(_Bool)arg3;
- (void)_enumerateJobsForBundleIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_copyBundleIDsFromXPCArray:(id)arg1;
- (_Bool)_applicationInstallsDidPrioritize:(id)arg1 hasCoordinator:(_Bool)arg2;
- (void)_applicationInstallsDidCancel:(id)arg1;
- (void)_applicationInstallsDidResume:(id)arg1;
- (void)_applicationInstallsDidPause:(id)arg1;
- (void)registerNotifications:(id)arg1;
- (void)coordinatorShouldResume:(id)arg1;
- (void)coordinatorShouldPause:(id)arg1;
- (void)shouldPrioritizeAppWithBundleID:(id)arg1;
- (void)coordinatorShouldPrioritize:(id)arg1;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (id)initWithJobSupervisor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

