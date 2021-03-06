//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFLoggable-Protocol.h>

@class NSString, SDRDiagnosticReporter;

@interface EFAutoBugCaptureReporter : NSObject <EFLoggable>
{
    SDRDiagnosticReporter *_diagnosticReporter;
}

+ (id)sharedReporter;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) SDRDiagnosticReporter *diagnosticReporter; // @synthesize diagnosticReporter=_diagnosticReporter;
- (void)reportIssueType:(id)arg1 description:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

