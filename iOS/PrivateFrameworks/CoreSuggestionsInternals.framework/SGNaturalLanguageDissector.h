//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSMutableDictionary;

@interface SGNaturalLanguageDissector : SGPipelineDissector
{
    NSMutableDictionary *_conversations;
}

+ (id)ipsosMessageWithEntity:(id)arg1 store:(id)arg2;
+ (_Bool)allowNaturalLanguageDissector;
- (void).cxx_destruct;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)conversationWithIdentifier:(id)arg1;
- (void)addEnrichmentForEvents:(id)arg1 forMessage:(id)arg2 toEntity:(id)arg3;
- (id)initWithoutSharedInstance;
- (id)init;

@end

