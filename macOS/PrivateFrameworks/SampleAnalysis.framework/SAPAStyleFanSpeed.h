//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SAFanSpeed;

__attribute__((visibility("hidden")))
@interface SAPAStyleFanSpeed : NSObject
{
    SAFanSpeed *_fanSpeed;
}

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const CDStruct_fc10d2b4 *)arg1 bufferLength:(unsigned long long)arg2;
+ (id)classDictionaryKey;
- (void).cxx_destruct;
@property(retain) SAFanSpeed *fanSpeed; // @synthesize fanSpeed=_fanSpeed;
- (void)populateReferencesUsingBuffer:(const CDStruct_fc10d2b4 *)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBuffer:(void *)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;

@end

