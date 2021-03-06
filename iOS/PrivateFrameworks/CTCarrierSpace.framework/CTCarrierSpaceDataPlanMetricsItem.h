//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding>
{
    _Bool _capacityValid;
    NSNumber *_capacityBytes;
    long long _units;
    unsigned long long _capacity;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) long long units; // @synthesize units=_units;
@property(nonatomic) _Bool capacityValid; // @synthesize capacityValid=_capacityValid;
@property(retain, nonatomic) NSNumber *capacityBytes; // @synthesize capacityBytes=_capacityBytes;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

