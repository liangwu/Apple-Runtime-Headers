//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>

@interface _UICollectionLayoutAnchor : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting>
{
    unsigned long long _edges;
    struct CGPoint _offset;
    struct CGPoint _anchorPoint;
    BOOL _offsetIsUnitOffset;
}

+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 unitOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint)arg1;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 unitOffset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1;
- (id)_apiRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint offset;
@property(readonly, nonatomic) unsigned long long edges;
- (id)initWithEdges:(unsigned long long)arg1 offset:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4;

@end

