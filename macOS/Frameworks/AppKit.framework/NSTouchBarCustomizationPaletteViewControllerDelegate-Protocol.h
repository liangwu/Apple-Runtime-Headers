//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSTouchBarCustomizationPaletteViewController, NSTouchBarItem;

@protocol NSTouchBarCustomizationPaletteViewControllerDelegate <NSObject>
- (void)controllerAccessibilityResetTouchBar:(NSTouchBarCustomizationPaletteViewController *)arg1;
- (void)controller:(NSTouchBarCustomizationPaletteViewController *)arg1 accessibilityAddItem:(NSTouchBarItem *)arg2;
- (void)controllerDidEndDragging:(NSTouchBarCustomizationPaletteViewController *)arg1;
- (void)controllerWillBeginDragging:(NSTouchBarCustomizationPaletteViewController *)arg1;
@end

