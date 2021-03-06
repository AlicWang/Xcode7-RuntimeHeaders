//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WCDProtoUserInfoTransfer : PBCodable <NSCopying>
{
    NSData *_clientData;
    NSString *_transferIdentifier;
    unsigned int _version;
    CDStruct_f20694ce _has;
}

@property(retain, nonatomic) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain, nonatomic) NSData *clientData; // @synthesize clientData=_clientData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
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
@property(readonly, nonatomic) _Bool hasTransferIdentifier;
@property(readonly, nonatomic) _Bool hasClientData;
@property(nonatomic) _Bool hasVersion;

@end