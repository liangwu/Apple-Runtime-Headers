//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/SYServiceDelegate-Protocol.h>
#import <MapsSupport/SYSessionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, SYService;
@protocol OS_dispatch_queue;

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate>
{
    SYService *_service;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_bookmarks;
    NSMutableDictionary *_bookmarksMap;
    NSMutableArray *_bookmarksForDisplay;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    NSMutableArray *_history;
    NSMutableDictionary *_historyMap;
    _Bool _resetSyncRequested;
    NSMutableArray *_pendingSyncItems;
}

+ (_Bool)_bookmarkIsDisplayable:(id)arg1;
- (void).cxx_destruct;
- (void)completedPreparingSync;
- (void)completedSync;
- (void)writeHistory:(id)arg1;
- (void)writePins:(id)arg1;
- (void)writeBookmarks:(id)arg1;
- (id)readHistory;
- (id)readPins;
- (id)readBookmarks;
- (void)notifyObservers;
- (void)updateHistoryItem:(id)arg1;
- (id)history;
- (void)setDroppedPin:(id)arg1;
- (id)pins;
- (id)displayableBookmarks;
- (id)bookmarks;
- (void)_removeHistoryItem:(id)arg1;
- (void)_removePin:(id)arg1;
- (void)_removeBookmark:(id)arg1;
- (void)_updateHistoryItem:(id)arg1;
- (void)_updatePin:(id)arg1;
- (void)_updateBookmark:(id)arg1;
- (void)_addHistoryItem:(id)arg1;
- (void)_addPin:(id)arg1;
- (void)_addBookmark:(id)arg1;
- (id)_wrapHistoryItem:(id)arg1 changeType:(long long)arg2;
- (id)_wrapPin:(id)arg1 changeType:(long long)arg2;
- (id)_wrapBookmark:(id)arg1 changeType:(long long)arg2;
- (void)_updateFromDisk;
- (void)_findDisplayableBookmarks;
- (void)_notifyObservers;
- (void)_applyDeleteItem:(id)arg1;
- (void)_applyUpdateItem:(id)arg1;
- (void)_applyAddItem:(id)arg1;
- (void)_clearAllNanoPersistableData;
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;
- (void)_setHasChangesAvailable;
- (void)setNeedsFullSync;
- (void)_resumeSyncService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

