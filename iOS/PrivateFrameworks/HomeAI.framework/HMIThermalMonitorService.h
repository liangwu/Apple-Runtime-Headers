//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

__attribute__((visibility("hidden")))
@interface HMIThermalMonitorService : HMFObject
{
    struct __IOHIDServiceClient *_service;
}

- (void)dealloc;
- (double)readValue;
- (id)initWithService:(struct __IOHIDServiceClient *)arg1;

@end

