//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSSpringBoardUtility : NSObject
{
}

+ (id)_stateCache;
+ (void)_setApplicationState:(unsigned int)arg1 forClientID:(id)arg2;
+ (_Bool)_getProcessID:(int *)arg1 forApplicationIdentifier:(id)arg2;
+ (id)_getApplicationInfoForIdentifier:(id)arg1 key:(id)arg2;
+ (id)_dispatchQueueSpringBoard;
+ (id)_dispatchQueueNotifications;
+ (id)_dispatchQueue;
+ (id)_applicationStateMonitor;
+ (void)wakeAppUsingRequest:(id)arg1;
+ (_Bool)launchApplicationWithIdentifier:(id)arg1 options:(id)arg2 error:(id *)arg3;

@end

