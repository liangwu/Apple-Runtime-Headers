//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPathControl.h>

@class NSObject;
@protocol TPathControlDelegate;

__attribute__((visibility("hidden")))
@interface FI_TPathControl : NSPathControl
{
}

+ (Class)cellClass;
- (void)viewDidChangeBackingProperties;
- (id)menuForEvent:(id)arg1;
@property __weak NSObject<TPathControlDelegate> *delegate; // @dynamic delegate;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;

@end

