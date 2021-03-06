//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUTextBannerView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_textLabel;
    BOOL _destructiveText;
    NSString *_text;
    long long _textAlignment;
}

- (void).cxx_destruct;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructiveText) BOOL destructiveText; // @synthesize destructiveText=_destructiveText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

