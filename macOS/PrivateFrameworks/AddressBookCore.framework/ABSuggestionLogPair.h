//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABSuggestionLogPair : NSObject
{
    NSString *_label;
    NSString *_value;
}

+ (id)pairWithLabel:(id)arg1 value:(id)arg2;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

