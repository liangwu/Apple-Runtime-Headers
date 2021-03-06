//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBHomeEntity, _INPBIntentMetadata;

@protocol _INPBConfigureHomeIntent <NSObject>
+ (Class)entitiesType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
- (_INPBHomeEntity *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBHomeEntity *)arg1;
- (void)clearEntities;
@end

