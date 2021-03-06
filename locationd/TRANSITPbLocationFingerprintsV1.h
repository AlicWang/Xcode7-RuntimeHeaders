//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TRANSITPbLocationFingerprintsV1 : PBCodable <NSCopying>
{
    NSMutableArray *_locationFingerprints;
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)locationFingerprintAtIndex:(unsigned int)arg1;
- (unsigned int)locationFingerprintsCount;
- (void)addLocationFingerprint:(id)arg1;
- (void)clearLocationFingerprints;
- (void)dealloc;

@end