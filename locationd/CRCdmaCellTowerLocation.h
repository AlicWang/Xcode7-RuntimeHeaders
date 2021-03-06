//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CRCdmaCellTowerLocation : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _derivedMccs;
    double _bsLatitude;
    double _bsLongitude;
    double _sectorLatitude;
    double _sectorLongitude;
    NSString *_appBundleId;
    int _bandclass;
    int _bsid;
    int _celltype;
    int _channel;
    int _dayLightSavings;
    int _ecn0;
    CRLocation *_location;
    int _ltmOffset;
    int _mcc;
    int _mnc;
    CRCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    int _nid;
    NSString *_operatorName;
    int _pnoffset;
    int _rat;
    int _rscp;
    NSString *_sectorid;
    int _serverHash;
    int _sid;
    int _zoneid;
    struct {
        unsigned int bsLatitude:1;
        unsigned int bsLongitude:1;
        unsigned int sectorLatitude:1;
        unsigned int sectorLongitude:1;
        unsigned int bandclass:1;
        unsigned int celltype:1;
        unsigned int channel:1;
        unsigned int dayLightSavings:1;
        unsigned int ecn0:1;
        unsigned int ltmOffset:1;
        unsigned int pnoffset:1;
        unsigned int rat:1;
        unsigned int rscp:1;
        unsigned int serverHash:1;
        unsigned int zoneid:1;
    } _has;
}

@property(retain, nonatomic) CRCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property(retain, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property(nonatomic) int rscp; // @synthesize rscp=_rscp;
@property(nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property(nonatomic) int dayLightSavings; // @synthesize dayLightSavings=_dayLightSavings;
@property(nonatomic) int ltmOffset; // @synthesize ltmOffset=_ltmOffset;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) CRLocation *location; // @synthesize location=_location;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
@property(nonatomic) int celltype; // @synthesize celltype=_celltype;
@property(nonatomic) int rat; // @synthesize rat=_rat;
@property(nonatomic) int bandclass; // @synthesize bandclass=_bandclass;
@property(nonatomic) double sectorLongitude; // @synthesize sectorLongitude=_sectorLongitude;
@property(nonatomic) double sectorLatitude; // @synthesize sectorLatitude=_sectorLatitude;
@property(retain, nonatomic) NSString *sectorid; // @synthesize sectorid=_sectorid;
@property(nonatomic) int zoneid; // @synthesize zoneid=_zoneid;
@property(nonatomic) double bsLongitude; // @synthesize bsLongitude=_bsLongitude;
@property(nonatomic) double bsLatitude; // @synthesize bsLatitude=_bsLatitude;
@property(nonatomic) int bsid; // @synthesize bsid=_bsid;
@property(nonatomic) int nid; // @synthesize nid=_nid;
@property(nonatomic) int sid; // @synthesize sid=_sid;
@property(nonatomic) int mnc; // @synthesize mnc=_mnc;
@property(nonatomic) int mcc; // @synthesize mcc=_mcc;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNeighborGroup;
- (id)neighborAtIndex:(unsigned int)arg1;
- (unsigned int)neighborsCount;
- (void)addNeighbor:(id)arg1;
- (void)clearNeighbors;
@property(nonatomic) _Bool hasRscp;
@property(nonatomic) _Bool hasEcn0;
- (void)setDerivedMccs:(int *)arg1 count:(unsigned int)arg2;
- (int)derivedMccAtIndex:(unsigned int)arg1;
- (void)addDerivedMcc:(int)arg1;
- (void)clearDerivedMccs;
@property(readonly, nonatomic) int *derivedMccs;
@property(readonly, nonatomic) unsigned int derivedMccsCount;
@property(nonatomic) _Bool hasDayLightSavings;
@property(nonatomic) _Bool hasLtmOffset;
@property(readonly, nonatomic) _Bool hasOperatorName;
@property(nonatomic) _Bool hasServerHash;
@property(readonly, nonatomic) _Bool hasAppBundleId;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasPnoffset;
@property(nonatomic) _Bool hasCelltype;
@property(nonatomic) _Bool hasRat;
@property(nonatomic) _Bool hasBandclass;
@property(nonatomic) _Bool hasSectorLongitude;
@property(nonatomic) _Bool hasSectorLatitude;
@property(readonly, nonatomic) _Bool hasSectorid;
@property(nonatomic) _Bool hasZoneid;
@property(nonatomic) _Bool hasBsLongitude;
@property(nonatomic) _Bool hasBsLatitude;
- (void)dealloc;

@end