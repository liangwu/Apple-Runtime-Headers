//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface WDOfficeArt : WDRunWithCharacterProperties
{
    OADDrawable *mDrawable;
    _Bool mFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)propagateTextTypeToDrawables;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (id)imageName;
- (id)imageData;
- (void)setImageBlipRef:(id)arg1;
- (id)imageBlipRef;
- (void)setFloating:(_Bool)arg1;
- (_Bool)isFloating;
- (void)clearDrawable;
- (BOOL)isDrawableOverridden;
- (id)overrideDrawable;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (int)runType;
- (id)initWithParagraph:(id)arg1;
- (void)checkForFloating:(id)arg1;

@end

