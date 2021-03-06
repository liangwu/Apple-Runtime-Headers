//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface TTYUtterance : NSObject <NSSecureCoding>
{
    BOOL _isMe;
    NSString *_contactPath;
    NSString *_text;
    NSDate *_lastChangeDate;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)contactPathIsMe:(id)arg1;
+ (id)utteranceWithContactPath:(id)arg1 andText:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastChangeDate; // @synthesize lastChangeDate=_lastChangeDate;
@property(nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *contactPath; // @synthesize contactPath=_contactPath;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isComplete;
- (void)resetTimeout;
- (BOOL)hasTimedOut;
- (void)updateText:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

