//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AVCaptureMetadataOutput;

@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>
{
    AVCaptureMetadataOutput *_captureOutput;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) AVCaptureMetadataOutput *captureOutput; // @synthesize captureOutput=_captureOutput;

@end

