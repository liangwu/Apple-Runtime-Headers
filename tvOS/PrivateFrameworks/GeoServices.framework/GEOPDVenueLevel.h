//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueLevel : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueLabel *_label;
    unsigned long long _levelId;
    int _ordinal;
    struct {
        unsigned int has_levelId:1;
        unsigned int has_ordinal:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDVenueLabel *label;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasOrdinal;
@property(nonatomic) int ordinal;
@property(nonatomic) _Bool hasLevelId;
@property(nonatomic) unsigned long long levelId;

@end

