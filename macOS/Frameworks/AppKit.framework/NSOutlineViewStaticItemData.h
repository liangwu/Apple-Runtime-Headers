//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>

@class NSMutableArray, NSTableRowView;

__attribute__((visibility("hidden")))
@interface NSOutlineViewStaticItemData : NSObject <NSCoding>
{
    NSMutableArray *_children;
    NSTableRowView *_rowView;
    BOOL _expandable;
    BOOL _expanded;
    BOOL _loadedFromEncoder;
}

@property BOOL loadedFromEncoder; // @synthesize loadedFromEncoder=_loadedFromEncoder;
@property BOOL expanded; // @synthesize expanded=_expanded;
@property BOOL expandable; // @synthesize expandable=_expandable;
@property(retain) NSTableRowView *rowView; // @synthesize rowView=_rowView;
@property(retain) NSMutableArray *children; // @synthesize children=_children;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

