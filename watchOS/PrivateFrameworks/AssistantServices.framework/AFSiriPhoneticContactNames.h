//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AFSiriPhoneticContactNames : NSObject
{
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nickname;
    NSString *_organizationName;
    NSString *_languageCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
- (id)spokenName;

@end

