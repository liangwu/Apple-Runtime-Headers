//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OIPieSliceRenderer;

@interface OIPieChartRenderer : NSObject
{
    id <OIPieSliceRenderer> _sliceRenderer;
    struct __OIChart *_chart;
}

- (void).cxx_destruct;
@property struct __OIChart *chart; // @synthesize chart=_chart;
@property(retain) id <OIPieSliceRenderer> sliceRenderer; // @synthesize sliceRenderer=_sliceRenderer;
- (void)renderThreeDimensional:(BOOL)arg1 pieFromSeriesArray:(struct __CFArray *)arg2;
- (void)dealloc;
- (id)initWithChart:(struct __OIChart *)arg1;
- (id)initWithChart:(struct __OIChart *)arg1 sliceRenderer:(id)arg2;

@end

