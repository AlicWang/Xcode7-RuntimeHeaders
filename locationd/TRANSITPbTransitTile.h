//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TRANSITPbTransitTile : PBCodable <NSCopying>
{
    double _generationTimeSecs;
    unsigned long long _marketId;
    unsigned long long _securityKey;
    TRANSITPbLocationFingerprintsV1 *_dEPRECATEDFingerprints;
    int _expirationAgeSecs;
    TRANSITPbLocationFingerprints *_fingerprints;
    int _tileX;
    int _tileY;
    int _version;
    struct {
        unsigned int generationTimeSecs:1;
        unsigned int marketId:1;
        unsigned int securityKey:1;
        unsigned int expirationAgeSecs:1;
        unsigned int tileX:1;
        unsigned int tileY:1;
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) TRANSITPbLocationFingerprints *fingerprints; // @synthesize fingerprints=_fingerprints;
@property(retain, nonatomic) TRANSITPbLocationFingerprintsV1 *dEPRECATEDFingerprints; // @synthesize dEPRECATEDFingerprints=_dEPRECATEDFingerprints;
@property(nonatomic) int expirationAgeSecs; // @synthesize expirationAgeSecs=_expirationAgeSecs;
@property(nonatomic) double generationTimeSecs; // @synthesize generationTimeSecs=_generationTimeSecs;
@property(nonatomic) int tileY; // @synthesize tileY=_tileY;
@property(nonatomic) int tileX; // @synthesize tileX=_tileX;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMarketId;
@property(nonatomic) unsigned long long marketId; // @synthesize marketId=_marketId;
@property(readonly, nonatomic) _Bool hasFingerprints;
@property(readonly, nonatomic) _Bool hasDEPRECATEDFingerprints;
@property(nonatomic) _Bool hasExpirationAgeSecs;
@property(nonatomic) _Bool hasGenerationTimeSecs;
@property(nonatomic) _Bool hasSecurityKey;
@property(nonatomic) unsigned long long securityKey; // @synthesize securityKey=_securityKey;
@property(nonatomic) _Bool hasTileY;
@property(nonatomic) _Bool hasTileX;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;

@end