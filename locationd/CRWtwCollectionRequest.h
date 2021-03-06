//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRWtwCollectionRequest : PBRequest <NSCopying>
{
    CRMeta *_meta;
    NSMutableArray *_wtwLocations;
}

@property(retain, nonatomic) NSMutableArray *wtwLocations; // @synthesize wtwLocations=_wtwLocations;
@property(retain, nonatomic) CRMeta *meta; // @synthesize meta=_meta;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)wtwLocationAtIndex:(unsigned int)arg1;
- (unsigned int)wtwLocationsCount;
- (void)addWtwLocation:(id)arg1;
- (void)clearWtwLocations;
- (void)dealloc;

@end