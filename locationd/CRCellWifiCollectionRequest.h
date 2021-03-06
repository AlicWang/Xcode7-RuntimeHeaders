//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRCellWifiCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_cdmaCellTowerLocations;
    NSMutableArray *_cellTowerLocations;
    NSMutableArray *_lteCellTowerLocations;
    CRMeta *_meta;
    NSMutableArray *_scdmaCellTowerLocations;
    NSMutableArray *_wifiAPLocations;
}

@property(retain, nonatomic) NSMutableArray *scdmaCellTowerLocations; // @synthesize scdmaCellTowerLocations=_scdmaCellTowerLocations;
@property(retain, nonatomic) NSMutableArray *wifiAPLocations; // @synthesize wifiAPLocations=_wifiAPLocations;
@property(retain, nonatomic) NSMutableArray *lteCellTowerLocations; // @synthesize lteCellTowerLocations=_lteCellTowerLocations;
@property(retain, nonatomic) NSMutableArray *cdmaCellTowerLocations; // @synthesize cdmaCellTowerLocations=_cdmaCellTowerLocations;
@property(retain, nonatomic) NSMutableArray *cellTowerLocations; // @synthesize cellTowerLocations=_cellTowerLocations;
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
- (id)scdmaCellTowerLocationAtIndex:(unsigned int)arg1;
- (unsigned int)scdmaCellTowerLocationsCount;
- (void)addScdmaCellTowerLocation:(id)arg1;
- (void)clearScdmaCellTowerLocations;
- (id)wifiAPLocationAtIndex:(unsigned int)arg1;
- (unsigned int)wifiAPLocationsCount;
- (void)addWifiAPLocation:(id)arg1;
- (void)clearWifiAPLocations;
- (id)lteCellTowerLocationAtIndex:(unsigned int)arg1;
- (unsigned int)lteCellTowerLocationsCount;
- (void)addLteCellTowerLocation:(id)arg1;
- (void)clearLteCellTowerLocations;
- (id)cdmaCellTowerLocationAtIndex:(unsigned int)arg1;
- (unsigned int)cdmaCellTowerLocationsCount;
- (void)addCdmaCellTowerLocation:(id)arg1;
- (void)clearCdmaCellTowerLocations;
- (id)cellTowerLocationAtIndex:(unsigned int)arg1;
- (unsigned int)cellTowerLocationsCount;
- (void)addCellTowerLocation:(id)arg1;
- (void)clearCellTowerLocations;
- (void)dealloc;

@end