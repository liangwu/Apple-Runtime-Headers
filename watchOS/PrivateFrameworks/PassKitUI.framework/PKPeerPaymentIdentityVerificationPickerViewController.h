//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentSetupFieldPicker, PKPeerPaymentIdentityVerificationController, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPeerPaymentIdentityVerificationPickerViewController : PKPaymentSetupTableViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate>
{
    PKPeerPaymentIdentityVerificationController *_controller;
    PKPaymentSetupFieldPicker *_pickerField;
    NSString *_footerText;
    PKTableHeaderView *_headerView;
    unsigned int _identityVerificaionError;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    _Bool _navigationEnabled;
    _Bool _rightBarButtonItemsEnabled;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
    id <PKPaymentSetupViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <PKPaymentSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void)_setIdleTimerDisabled:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)_updateRightBarButtonState;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;
- (void)_setRightBarButtonItemsEnabled:(_Bool)arg1;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)_handleCancelButtonTapped:(id)arg1;
- (void)_terminateFlow;
- (void)_handleError:(id)arg1;
- (void)_handleNextButtonTapped:(id)arg1;
- (void)_showNavigationBarSpinner:(_Bool)arg1;
- (void)_processNextViewController;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2;
- (id)headerView;
- (void)_setTableViewHeaderActivitySpinnerAnimated:(_Bool)arg1 title:(id)arg2 subtitle:(id)arg3;
- (void)hideActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)hideActivitySpinner;
- (void)showActivitySpinnerWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isComplete;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 pickerField:(id)arg3 footerText:(id)arg4;
- (id)initWithController:(id)arg1 pickerField:(id)arg2 footerText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

