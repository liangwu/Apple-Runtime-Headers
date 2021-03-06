//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject
{
    NSPersistentHistoryToken *_migratedToken;
    id <STPersistenceControllerProtocol> _persistenceController;
}

+ (id)mirroredEntityNames;
+ (id)cloudToLocalMapping;
+ (id)localToCloudMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
- (BOOL)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id *)arg4;
- (id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2;
- (void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2;
- (void)newResolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2;
- (BOOL)migrateWithError:(id *)arg1;
- (BOOL)areLocalChangesInterestingWithError:(id *)arg1;
- (id)initWithPersistenceController:(id)arg1;

@end

