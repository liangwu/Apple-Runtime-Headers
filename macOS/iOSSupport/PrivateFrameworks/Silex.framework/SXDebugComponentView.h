//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

@protocol SXLayoutInvalidator;

@interface SXDebugComponentView : SXComponentView
{
    id <SXLayoutInvalidator> _invalidator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXLayoutInvalidator> invalidator; // @synthesize invalidator=_invalidator;
- (void)presentComponentWithChanges:(CDStruct_74be42e1)arg1;
- (void)loadComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5;

@end

