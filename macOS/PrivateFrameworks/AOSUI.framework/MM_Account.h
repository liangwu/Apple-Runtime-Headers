//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AOSUIProfilePictureStore, CNContact, NSArray, NSDictionary, NSImage, NSMutableArray, NSMutableDictionary, NSString, NSWindow;

@interface MM_Account : NSObject
{
    struct __CFString *_accountID;
    NSMutableArray *_services;
    NSDictionary *_context;
    NSWindow *_parentWindow;
    BOOL _suppressFailureSheets;
    NSMutableDictionary *_suppressedFailures;
    NSImage *_cachedImage;
    NSImage *_croppedImage;
    struct CGRect _imageCropRect;
    AOSUIProfilePictureStore *_profilePictureStore;
}

+ (id)accountWithID:(id)arg1 fetchAccountImage:(BOOL)arg2;
+ (id)accountWithID:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property struct CGRect imageCropRect; // @synthesize imageCropRect=_imageCropRect;
@property(retain) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(retain) NSMutableDictionary *suppressedFailures; // @synthesize suppressedFailures=_suppressedFailures;
@property(retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) NSDictionary *context; // @synthesize context=_context;
@property(retain) NSArray *services; // @synthesize services=_services;
- (void)DSEEnable:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_setProgressStringForAccount:(id)arg1 service:(id)arg2 starting:(BOOL)arg3;
- (void)_handleEndMigrationNotification:(id)arg1;
- (void)_handleBeginMigrationNotification:(id)arg1;
- (void)_handleServiceFailureNotification:(id)arg1;
- (void)_handleServiceFailureForServiceID:(id)arg1 notification:(id)arg2;
- (BOOL)hasMailConfigured;
- (id)appleAccount;
- (void)handleAEEvents:(id)arg1;
- (void)enableFailureSheetsAndShow:(BOOL)arg1;
- (void)suppressFailureSheets;
@property(readonly) NSDictionary *properties;
- (BOOL)isPaidAccount;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (BOOL)setPassword:(id)arg1 oldPassword:(id)arg2;
- (void)setAccountName:(id)arg1;
@property(copy, nonatomic) NSString *displayName;
@property(readonly) CNContact *contact;
- (void)setImage:(id)arg1 withCropRect:(struct CGRect)arg2 andCroppedImage:(id)arg3;
@property(readonly) NSImage *image;
@property(readonly) NSImage *editorImage;
- (void)didSignOutAccount;
- (void)willSignOutAccount;
- (void)willResignFocus;
- (void)willGainFocus;
- (void)willUnselect;
- (void)willSelect;
- (void)didUnselect;
- (void)didSelect;
- (void)didBecomeInactive;
- (void)didBecomeActive;
- (void)refresh;
- (id)serviceWithID:(id)arg1;
- (id)accountID;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 fetchAccountImage:(BOOL)arg2;
- (id)initWithAccountID:(id)arg1;
- (id)getiCloudStorageUsageDict;
- (void)preflightDSEEnable:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)preflightDelete:(id *)arg1 withWindow:(id)arg2;
- (BOOL)prepareForSignoutWithOptionsDict:(id *)arg1 parentWindow:(id)arg2;
- (id)_cdpStateController;

@end

