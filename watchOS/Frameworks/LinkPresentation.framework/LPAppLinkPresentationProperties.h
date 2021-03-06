//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPLinkPresentationPropertyProvider-Protocol.h>

@class LPCaptionBarPresentationProperties, LPImage, LPVideo, NSString, UIColor;

@interface LPAppLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>
{
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_topCaption;
    NSString *_bottomCaption;
    NSString *_trailingTopCaption;
    NSString *_trailingBottomCaption;
    NSString *_mediaTopCaption;
    NSString *_mediaBottomCaption;
    LPImage *_image;
    LPImage *_icon;
    LPVideo *_video;
    UIColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *mediaBottomCaption; // @synthesize mediaBottomCaption=_mediaBottomCaption;
@property(copy, nonatomic) NSString *mediaTopCaption; // @synthesize mediaTopCaption=_mediaTopCaption;
@property(copy, nonatomic) NSString *trailingBottomCaption; // @synthesize trailingBottomCaption=_trailingBottomCaption;
@property(copy, nonatomic) NSString *trailingTopCaption; // @synthesize trailingTopCaption=_trailingTopCaption;
@property(copy, nonatomic) NSString *bottomCaption; // @synthesize bottomCaption=_bottomCaption;
@property(copy, nonatomic) NSString *topCaption; // @synthesize topCaption=_topCaption;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *captionBar; // @synthesize captionBar=_captionBar;
- (int)style;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

