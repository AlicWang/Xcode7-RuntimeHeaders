//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ABSPBSyncObject : PBCodable <NSCopying>
{
    double _sendTimestamp;
    ABSPBABDeleteObject *_abDeleteObject;
    ABSPBABSyncObject *_abSyncObject;
    ABSPBFavoritesSyncObject *_favoritesSyncObject;
    int _sequenceNumber;
    struct {
        unsigned int sendTimestamp:1;
        unsigned int sequenceNumber:1;
    } _has;
}

@property(nonatomic) double sendTimestamp; // @synthesize sendTimestamp=_sendTimestamp;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) ABSPBFavoritesSyncObject *favoritesSyncObject; // @synthesize favoritesSyncObject=_favoritesSyncObject;
@property(retain, nonatomic) ABSPBABDeleteObject *abDeleteObject; // @synthesize abDeleteObject=_abDeleteObject;
@property(retain, nonatomic) ABSPBABSyncObject *abSyncObject; // @synthesize abSyncObject=_abSyncObject;
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
@property(nonatomic) _Bool hasSendTimestamp;
@property(nonatomic) _Bool hasSequenceNumber;
@property(readonly, nonatomic) _Bool hasFavoritesSyncObject;
@property(readonly, nonatomic) _Bool hasAbDeleteObject;
@property(readonly, nonatomic) _Bool hasAbSyncObject;

@end