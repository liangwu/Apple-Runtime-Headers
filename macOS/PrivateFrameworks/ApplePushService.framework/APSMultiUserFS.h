//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface APSMultiUserFS : NSObject
{
    BOOL _isMultiUser;
}

+ (id)sharedInstance;
@property(readonly) BOOL isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (id)systemPath;
- (id)initWithIsMultiUserMode:(BOOL)arg1;

@end

