//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@class NSString;
@protocol PGEventEnrichment;

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator
{
    BOOL _createVerboseTitle;
    id <PGEventEnrichment> _collection;
    NSString *_meaningLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL createVerboseTitle; // @synthesize createVerboseTitle=_createVerboseTitle;
@property(readonly, nonatomic) NSString *meaningLabel; // @synthesize meaningLabel=_meaningLabel;
@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(BOOL)arg3;

@end

