//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKSharedAppletSubcredentialsManifestItem : NSObject
{
    _Bool _forWatch;
    NSString *_identifier;
    NSString *_name;
    NSString *_groupIdentifier;
    long long _entitlement;
    long long _state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isForWatch) _Bool forWatch; // @synthesize forWatch=_forWatch;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long entitlement; // @synthesize entitlement=_entitlement;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

