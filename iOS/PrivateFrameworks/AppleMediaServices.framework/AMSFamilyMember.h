//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface AMSFamilyMember : NSObject
{
    _Bool _askToBuyEnabled;
    _Bool _currentSignedInUser;
    _Bool _sharingPurchases;
    NSString *_firstName;
    NSNumber *_iCloudDSID;
    NSString *_iCloudUsername;
    NSNumber *_iTunesDSID;
    NSString *_iTunesUsername;
    NSString *_lastName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSharingPurchases) _Bool sharingPurchases; // @synthesize sharingPurchases=_sharingPurchases;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *iTunesUsername; // @synthesize iTunesUsername=_iTunesUsername;
@property(readonly, nonatomic) NSNumber *iTunesDSID; // @synthesize iTunesDSID=_iTunesDSID;
@property(readonly, nonatomic) NSString *iCloudUsername; // @synthesize iCloudUsername=_iCloudUsername;
@property(readonly, nonatomic) NSNumber *iCloudDSID; // @synthesize iCloudDSID=_iCloudDSID;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic, getter=isCurrentSignedInUser) _Bool currentSignedInUser; // @synthesize currentSignedInUser=_currentSignedInUser;
@property(readonly, nonatomic, getter=isAskToBuyEnabled) _Bool askToBuyEnabled; // @synthesize askToBuyEnabled=_askToBuyEnabled;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

