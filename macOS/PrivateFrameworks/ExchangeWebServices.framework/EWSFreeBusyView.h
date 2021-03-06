//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class EWSWorkingHours, NSArray, NSString;

@interface EWSFreeBusyView : NSObject <XSDefinitionProvider>
{
    long long _FreeBusyViewType;
    NSString *_MergedFreeBusy;
    NSArray *_CalendarEventArray;
    EWSWorkingHours *_WorkingHours;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) EWSWorkingHours *WorkingHours; // @synthesize WorkingHours=_WorkingHours;
@property(copy, nonatomic) NSArray *CalendarEventArray; // @synthesize CalendarEventArray=_CalendarEventArray;
@property(copy, nonatomic) NSString *MergedFreeBusy; // @synthesize MergedFreeBusy=_MergedFreeBusy;
@property(nonatomic) long long FreeBusyViewType; // @synthesize FreeBusyViewType=_FreeBusyViewType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

