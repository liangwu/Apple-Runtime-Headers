//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

__attribute__((visibility("hidden")))
@interface SCRFinderApplication : SCRApplication
{
}

- (id)focusedWindowForUpdateChildrenWithRequest;
- (void)elementWasDestroyed:(id)arg1;
- (id)deepFocusedChild;
- (id)deepKeyboardChild;
- (BOOL)isFinderApplication;
- (void)dispatchFocusOutDesktop;
- (void)_focusOutDesktop;
- (void)dispatchFocusOnDesktop;
- (void)_focusOnDesktop;
- (id)desktop;
- (void)applicationDidInitialize;

@end

