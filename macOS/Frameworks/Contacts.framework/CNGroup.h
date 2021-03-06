//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSMutableCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSString *_name;
    CNGroup *_snapshot;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_externalIdentifier;
    NSData *_externalRepresentation;
    NSString *_externalModificationTag;
    NSString *_externalUUID;
}

+ (BOOL)supportsSecureCoding;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForGroupsWithIdentifiers:(id)arg1;
+ (id)predicateForGroupsWithNameMatching:(id)arg1;
+ (id)_predicateForNonHiddenGroups;
+ (id)predicateForAllGroups;
- (void).cxx_destruct;
@property(readonly, copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy) NSString *externalUUID; // @synthesize externalUUID=_externalUUID;
@property(readonly, copy) NSString *externalModificationTag; // @synthesize externalModificationTag=_externalModificationTag;
@property(readonly, copy) NSData *externalRepresentation; // @synthesize externalRepresentation=_externalRepresentation;
@property(readonly, copy) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *externalURI;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy, nonatomic) CNGroup *snapshot;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

