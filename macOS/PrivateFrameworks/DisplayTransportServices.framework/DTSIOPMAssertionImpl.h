//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DisplayTransportServices/DTSIOPMAssertion-Protocol.h>

@class NSString;

@interface DTSIOPMAssertionImpl : NSObject <DTSIOPMAssertion>
{
    unsigned int _assertionID;
}

@property(readonly, nonatomic) unsigned int assertionID; // @synthesize assertionID=_assertionID;
- (void)dealloc;
- (id)initWithAssertion:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

