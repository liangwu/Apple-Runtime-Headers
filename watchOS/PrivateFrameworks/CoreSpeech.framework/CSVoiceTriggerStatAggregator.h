//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerStatAggregator : NSObject
{
    unsigned long long _numFalseWakeUp;
    unsigned long long _lastAggTimeFalseWakeUp;
}

+ (id)sharedAggregator;
@property(nonatomic) unsigned long long lastAggTimeFalseWakeUp; // @synthesize lastAggTimeFalseWakeUp=_lastAggTimeFalseWakeUp;
@property(nonatomic) unsigned long long numFalseWakeUp; // @synthesize numFalseWakeUp=_numFalseWakeUp;
- (void)_borealisPowerlog:(id)arg1;
- (void)logFalseWakeUp:(_Bool)arg1;
- (void)powerLogVoiceTriggerStop;
- (void)powerLogVoiceTriggerStart;
- (id)init;

@end

