//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSCharts/NSObject-Protocol.h>

@class TSCH3DGLContext, TSCH3DSession;

@protocol TSCH3DGLBindable <NSObject>
- (void)deactivateInContext:(TSCH3DGLContext *)arg1;
- (void)destroyResourcesInContext:(TSCH3DGLContext *)arg1;
- (_Bool)valid;
- (void)bindInSession:(TSCH3DSession *)arg1;
@end

