//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject
{
    FCChannelMembershipRecordSource *_recordSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FCChannelMembershipRecordSource *recordSource; // @synthesize recordSource=_recordSource;
- (id)cachedChannelMembershipsForIDs:(id)arg1;
- (id)channelMembershipsFromHeldRecords:(id)arg1;
- (void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithChannelMembershipRecordSource:(id)arg1;

@end

