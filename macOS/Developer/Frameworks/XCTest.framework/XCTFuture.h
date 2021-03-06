//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableSet, XCTPromise, XCTWaiter;

@interface XCTFuture : NSObject
{
    BOOL _canceled;
    BOOL _hasWaited;
    BOOL _hasFinished;
    id _value;
    NSError *_error;
    double _executionTime;
    double _startTime;
    double _deadline;
    XCTPromise *_promise;
    XCTWaiter *_waiter;
    NSMutableSet *_cancelationExpectations;
}

+ (id)futureWithDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)futureWithTimeout:(double)arg1 description:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *cancelationExpectations; // @synthesize cancelationExpectations=_cancelationExpectations;
@property BOOL hasFinished; // @synthesize hasFinished=_hasFinished;
@property BOOL hasWaited; // @synthesize hasWaited=_hasWaited;
@property(readonly) XCTWaiter *waiter; // @synthesize waiter=_waiter;
@property(readonly) XCTPromise *promise; // @synthesize promise=_promise;
@property(readonly) double deadline; // @synthesize deadline=_deadline;
@property(readonly) double startTime; // @synthesize startTime=_startTime;
@property(readonly) double executionTime; // @synthesize executionTime=_executionTime;
@property(readonly, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)addCancelationExpectation:(id)arg1;
- (void)_waitForFulfillment;
- (id)initWithTimeout:(double)arg1 promise:(id)arg2;

@end

