//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CDRemoveEventsConsumer : NSObject
{
    _Bool _historyDone;
    NSString *_identifier;
    CDUnknownBlockType _consumer;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSObject<OS_dispatch_queue> *_consumer_q;
    NSString *_volume;
    struct fsid _fsid;
    unsigned long long _since;
}

- (void).cxx_destruct;
@property unsigned long long since; // @synthesize since=_since;
@property struct fsid fsid; // @synthesize fsid=_fsid;
@property _Bool historyDone; // @synthesize historyDone=_historyDone;
@property(retain, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *consumer_q; // @synthesize consumer_q=_consumer_q;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property struct __FSEventStream *stream; // @synthesize stream=_stream;
@property(copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)consumeStream:(struct __FSEventStream *)arg1 forVolume:(id)arg2;
- (void)callback:(id)arg1;
- (void)dealloc;
- (id)initWithConsumer:(CDUnknownBlockType)arg1 identifier:(id)arg2;

@end

