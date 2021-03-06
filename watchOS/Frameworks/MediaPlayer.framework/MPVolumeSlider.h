//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

#import <MediaPlayer/MPVolumeControllerDelegate-Protocol.h>
#import <MediaPlayer/MPVolumeDisplaying-Protocol.h>

@class MPAVController, MPAVEndpointRoute, MPAVOutputDeviceRoute, MPAVRoute, MPVolumeController, NSString, NSTimer, UIImage, UIImageView, UILabel, UILayoutGuide, UIView, UIWindowScene;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate, MPVolumeDisplaying>
{
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    int _style;
    UIImageView *_thumbImageView;
    _Bool _isOffScreen;
    _Bool _forcingOffscreenVisibility;
    _Bool _thumbIsDefault;
    _Bool _configuredLayoutGuide;
    UIView *_volumeWarningView;
    _Bool _volumeWarningBlinking;
    UIImage *_volumeWarningTrackImage;
    _Bool _beganTrackingFromEUVolumeLimit;
    float _originalMinTrackViewAlphaOverride;
    float _originalMinValueViewAlphaOverride;
    float _originalMaxValueViewAlphaOverride;
    _Bool _isCurrentlyTracking;
    float _setVolumeStartValue;
    int _coalescedVolumeDidChangeLogCount;
    _Bool _optimisticState;
    UILayoutGuide *_trackLayoutGuide;
    MPVolumeController *_volumeController;
    MPAVController *_player;
    MPAVEndpointRoute *_groupRoute;
    MPAVOutputDeviceRoute *_outputDeviceRoute;
    float _optimisticValue;
    struct UIEdgeInsets _hitRectInsets;
}

- (void).cxx_destruct;
@property(nonatomic) float optimisticValue; // @synthesize optimisticValue=_optimisticValue;
@property(nonatomic, getter=isInOptimisticState) _Bool optimisticState; // @synthesize optimisticState=_optimisticState;
@property(retain, nonatomic) MPAVOutputDeviceRoute *outputDeviceRoute; // @synthesize outputDeviceRoute=_outputDeviceRoute;
@property(retain, nonatomic) MPAVEndpointRoute *groupRoute; // @synthesize groupRoute=_groupRoute;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(retain, nonatomic) MPVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) UILayoutGuide *trackLayoutGuide; // @synthesize trackLayoutGuide=_trackLayoutGuide;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(retain, nonatomic) UIImage *volumeWarningTrackImage; // @synthesize volumeWarningTrackImage=_volumeWarningTrackImage;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void)_logVolumeValueDidChange:(float)arg1;
- (id)_routeName;
- (id)_newVolumeWarningView;
- (void)_endBlinkingWarningView;
- (void)_blinkWarningView;
- (void)_beginBlinkingWarningView;
- (void)_layoutVolumeWarningView;
- (void)_layoutForAvailableRoutes;
- (void)_resetThumbImageForState:(unsigned int)arg1;
- (id)_maxTrackImageForStyle:(int)arg1;
- (id)_minTrackImageForStyle:(int)arg1;
- (id)_thumbImageForStyle:(int)arg1;
- (void)_commitVolumeChange;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
@property(readonly, nonatomic) __weak UIView *thumbView;
@property(nonatomic, setter=_setIsOffScreen:) _Bool _isOffScreen;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(int)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(_Bool)arg2;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2;
- (void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;
- (void)updateVolume;
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
- (void)setVolumeDataSource:(id)arg1;
@property(retain, nonatomic) MPAVRoute *route;
@property(readonly, copy, nonatomic) NSString *volumeControlLabel;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(float)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_endTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setThumbImage:(id)arg1 forState:(unsigned int)arg2;
- (float)minimumValue;
- (float)maximumValue;
- (id)createThumbView;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 endpointRoute:(id)arg3 outputDeviceRoute:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic, getter=isOnScreen) _Bool onScreen;
@property(readonly) Class superclass;

@end

