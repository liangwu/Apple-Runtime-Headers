//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NCABContactsFilter, NSArray, NSMutableArray, NSRecursiveLock;

@interface NCABModel : NSObject
{
    void *_addressBook;
    CDStruct_e817f9f7 *_sectionLists;
    struct __CFDictionary *_headerSortKeyToHeaderString;
    struct _NSRange _displayedMemberPreparedRange;
    unsigned int _numberOfDisplayedMembers;
    _Bool _displayedMembersAreSearchResults;
    void *_selectedPerson;
    unsigned int _displayOrdering;
    struct __CFArray *_databaseChangeDelegates;
    void *_backgroundAddressBook;
    _Bool _backgroundAddressBookInvalidated;
    NSMutableArray *_cachedModelRecords;
    NSRecursiveLock *_memberLock;
    _Bool _loadingInBackground;
    NSRecursiveLock *_backgroundLoadingLock;
    _Bool _backgroundInvalidated;
    id _delayedNotificationHandler;
    _Bool _autoInvalidateOnDatabaseChange;
    NSArray *_lastSeenSources;
    NSArray *_lastSeenGroups;
    int _meID;
    NCABContactsFilter *_displayedContactsFilter;
    NCABContactsFilter *_selectedContactsFilter;
    NCABContactsFilter *_lastSelectedContactsFilter;
}

+ (unsigned int)sortOrdering;
+ (void)initialize;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(_Bool)arg2;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (struct __CFArray *)_databaseChangeDelegates;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (void)setAutoInvalidateOnDatabaseChange:(_Bool)arg1;
- (void)_updateForMajorAddressBookChange:(_Bool)arg1;
- (void)updateForMajorAddressBookChange;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary *)arg1;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary *)arg1;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(_Bool)arg1 deletedPerson:(_Bool)arg2;
- (int)meID;
- (void)_cacheMeID;
- (id)allGroups;
- (id)allSources;
@property(nonatomic) void *addressBook;
@property(readonly, nonatomic) void *sourceForNewRecords;
@property(readonly, nonatomic) void *groupForNewRecords;
- (void)invalidateDisplayedMembers;
@property(retain, nonatomic) NCABContactsFilter *displayedContactsFilter; // @synthesize displayedContactsFilter=_displayedContactsFilter;
@property(readonly, nonatomic) NCABContactsFilter *selectedContactsFilter; // @synthesize selectedContactsFilter=_selectedContactsFilter;
- (void)setSelectedContactsFilter:(id)arg1;
- (void)invalidateLastSelectedContactsFilter;
- (void)setLastSelectedContactsFilter:(id)arg1;
@property(readonly, nonatomic) NCABContactsFilter *lastSelectedContactsFilter; // @synthesize lastSelectedContactsFilter=_lastSelectedContactsFilter;
- (void *)selectedPerson;
- (void)setSelectedPerson:(void *)arg1;
- (void)prepareDisplayedMembersInRange:(struct _NSRange)arg1;
- (CDStruct_e817f9f7 *)displayedMemberSectionLists;
- (void)copyDisplayedNamePieces:(id *)arg1 isGroup:(_Bool *)arg2 highlightIndex:(int *)arg3 forMemberID:(int *)arg4 atindex:(int)arg5;
- (int)indexForDisplayedMember:(void *)arg1;
- (void *)displayedMemberAtIndex:(int)arg1;
- (id)displayedMembersInRange:(struct _NSRange)arg1;
- (id)_displayedGroupMembersInRange:(struct _NSRange)arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange)arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(_Bool)arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (struct __CFArray *)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange)arg1 inBackground:(_Bool)arg2;
- (void)_cachePeople:(struct __CFArray *)arg1 atEnd:(_Bool)arg2;
- (int)_indexOfMember:(void *)arg1 inDisplayedMembers:(id)arg2;
- (id)_newModelRecordFromRecord:(void *)arg1;
- (unsigned int)numberOfDisplayedMembers;
- (id)allCachedModelRecords;
- (unsigned int)displayedMemberSectionListsCount;
- (void)setFilteredDisplayedMembers:(struct __CFArray *)arg1;
- (void)resetSectionList;
- (long)resetFullSectionList:(struct __CFDictionary *)arg1 maximumSectionCount:(int)arg2;
- (long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary *)arg2;
- (_Bool)shouldUsePartialLoadingForContactsFilter:(id)arg1;
- (struct __CFDictionary *)headerSortKeyToHeaderStringDictionary;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)setDisplayNameOrdering:(unsigned int)arg1;
- (void)setSortOrdering:(unsigned int)arg1;
- (void)_waitUntilBackgroundThreadFinished;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1;

@end

