//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/NSCopying-Protocol.h>
#import <ContactsUICore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CNUICoreFamilyMemberContactItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isUnreachable;
    _Bool _hasBeenPersisted;
    NSString *_contactIdentifier;
    NSString *_formattedName;
    NSData *_imageData;
    long long _contactType;
    long long _whitelistStatus;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasBeenPersisted; // @synthesize hasBeenPersisted=_hasBeenPersisted;
@property(readonly, nonatomic) long long whitelistStatus; // @synthesize whitelistStatus=_whitelistStatus;
@property(readonly, nonatomic) long long contactType; // @synthesize contactType=_contactType;
@property(readonly, nonatomic) _Bool isUnreachable; // @synthesize isUnreachable=_isUnreachable;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *formattedName; // @synthesize formattedName=_formattedName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1 formattedName:(id)arg2 imageData:(id)arg3 isUnreachable:(_Bool)arg4 contactType:(long long)arg5 whitelistStatus:(long long)arg6 hasBeenPersisted:(_Bool)arg7;
- (id)initWithContactIdentifier:(id)arg1;
- (id)init;

@end

