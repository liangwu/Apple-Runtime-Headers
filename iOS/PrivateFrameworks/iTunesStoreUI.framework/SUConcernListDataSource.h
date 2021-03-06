//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource
{
    NSArray *_concerns;
    long long _selectedConcernIndex;
    SUTextViewCell *_textViewCell;
}

@property(nonatomic) long long selectedConcernIndex; // @synthesize selectedConcernIndex=_selectedConcernIndex;
@property(retain, nonatomic) NSArray *concerns; // @synthesize concerns=_concerns;
- (id)_titleCellForIndexPath:(id)arg1;
- (long long)tableViewStyle;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
@property(readonly, nonatomic) SUTextViewCell *textViewCell; // @synthesize textViewCell=_textViewCell;
- (void)dealloc;
- (id)init;

@end

