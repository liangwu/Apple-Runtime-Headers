//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HKChartableCodedQuantitySet, HKGraphSeries, HKInteractiveChartDisplayType, HKUIMetricColors, HKUnit, NSString;
@protocol HKChartPoint;

@protocol _TtP15HealthRecordsUI33MedicalRecordChartDataTransformer_
- (HKInteractiveChartDisplayType *)chartDisplayTypeWith:(HKGraphSeries *)arg1 displayName:(NSString *)arg2 unitName:(NSString *)arg3;
- (HKGraphSeries *)graphSeriesWith:(HKUIMetricColors *)arg1;
- (id <HKChartPoint>)chartPointFor:(HKChartableCodedQuantitySet *)arg1 in:(HKUnit *)arg2 with:(long long)arg3 dataSourceType:(long long)arg4;
@end

