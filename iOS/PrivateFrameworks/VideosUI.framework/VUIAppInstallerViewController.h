//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSString, VUIAppInstallConfirmationViewController;
@protocol WLKInstallable;

@interface VUIAppInstallerViewController : UINavigationController
{
    CDUnknownBlockType _completionBlock;
    double _lastProgress;
    CDUnknownBlockType _progressBlock;
    VUIAppInstallConfirmationViewController *_confirmationController;
    _Bool _displayAppStoreLink;
    _Bool _displaySecondaryLink;
    id <WLKInstallable> _installable;
    NSString *_localizedContentTitle;
    NSString *_contentType;
    NSString *_confirmationTitle;
    NSString *_confirmationBody;
    NSString *_updateBody;
    NSString *_updateTitle;
    NSString *_confirmationInstallButtonTitle;
    NSString *_secondaryLinkTitle;
    CDUnknownBlockType _secondaryLinkHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType secondaryLinkHandler; // @synthesize secondaryLinkHandler=_secondaryLinkHandler;
@property(copy, nonatomic) NSString *secondaryLinkTitle; // @synthesize secondaryLinkTitle=_secondaryLinkTitle;
@property(nonatomic) _Bool displaySecondaryLink; // @synthesize displaySecondaryLink=_displaySecondaryLink;
@property(nonatomic) _Bool displayAppStoreLink; // @synthesize displayAppStoreLink=_displayAppStoreLink;
@property(copy, nonatomic) NSString *confirmationInstallButtonTitle; // @synthesize confirmationInstallButtonTitle=_confirmationInstallButtonTitle;
@property(copy, nonatomic) NSString *updateTitle; // @synthesize updateTitle=_updateTitle;
@property(copy, nonatomic) NSString *updateBody; // @synthesize updateBody=_updateBody;
@property(copy, nonatomic) NSString *confirmationBody; // @synthesize confirmationBody=_confirmationBody;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *localizedContentTitle; // @synthesize localizedContentTitle=_localizedContentTitle;
@property(readonly, nonatomic) id <WLKInstallable> installable; // @synthesize installable=_installable;
- (void)_finishInstallationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateWithInstallProgress:(double)arg1;
- (void)_dismissAppInstallWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginInstallingApp;
- (void)beginInstallingAppWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;
- (void)_initConfirmation;
- (id)initWithInstallable:(id)arg1;
- (id)init;

@end

