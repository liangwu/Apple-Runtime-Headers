//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob
{
}

- (id)result;
- (id)generateVideoComposition:(out id *)arg1;
- (_Bool)prepare:(out id *)arg1;
- (id)videoRenderRequest;
- (id)scalePolicy;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputVideo;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsRenderStage;

@end

