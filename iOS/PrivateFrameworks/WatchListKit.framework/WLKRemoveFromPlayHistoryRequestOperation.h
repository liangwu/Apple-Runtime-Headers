//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation
{
    NSString *_deleteID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *deleteID; // @synthesize deleteID=_deleteID;
- (id)initWithDeleteID:(id)arg1 caller:(id)arg2 isContinueWatching:(_Bool)arg3;

@end

