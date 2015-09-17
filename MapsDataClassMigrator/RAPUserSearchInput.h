//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPUserSearchInput : PBCodable <NSCopying>
{
    GEOStorageCompletion *_completionStorage;
    GEOLatLng *_coordinate;
    int _origin;
    GEOMapItemStorage *_placeMapItemStorage;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    struct {
        unsigned int origin:1;
    } _has;
}

@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) GEOStorageCompletion *completionStorage; // @synthesize completionStorage=_completionStorage;
@property(retain, nonatomic) GEOMapItemStorage *placeMapItemStorage; // @synthesize placeMapItemStorage=_placeMapItemStorage;
@property(retain, nonatomic) NSString *singleLineAddressString; // @synthesize singleLineAddressString=_singleLineAddressString;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasOrigin;
@property(readonly, nonatomic) _Bool hasCoordinate;
@property(readonly, nonatomic) _Bool hasCompletionStorage;
@property(readonly, nonatomic) _Bool hasPlaceMapItemStorage;
@property(readonly, nonatomic) _Bool hasSingleLineAddressString;
@property(readonly, nonatomic) _Bool hasSearchString;

@end