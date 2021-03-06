//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccountsDaemon/ACDPluginEntryProtocol-Protocol.h>

@class NSBundle, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol>
{
    id _principalObject;
    NSSet *_supportedAccountTypes;
    NSSet *_supportedDataclasses;
    NSString *_identifier;
    struct {
        unsigned int principalObject:1;
        unsigned int supportedAccountTypes:1;
        unsigned int supportedDataclasses:1;
        unsigned int identifier:1;
    } _fetchedFlags;
    NSBundle *_bundle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (id)debugDescription;
- (id)description;
- (_Bool)principalObjectRespondsToSelector:(SEL)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id principalObject;
@property(readonly, nonatomic) NSSet *supportedDataclasses;
@property(readonly, nonatomic) NSSet *supportedAccountTypes;
- (id)initWithBundle:(id)arg1;
- (id)init;

@end

