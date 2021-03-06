//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDURLSessionProxyGetAuthHeadersReply : PBCodable <NSCopying>
{
    NSData *_headerData;
    SDURLSessionProxyTaskMessage *_task;
    _Bool _continueLoad;
    struct {
        unsigned int continueLoad:1;
    } _has;
}

@property(nonatomic) _Bool continueLoad; // @synthesize continueLoad=_continueLoad;
@property(retain, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) SDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasContinueLoad;
@property(readonly, nonatomic) _Bool hasHeaderData;
@property(readonly, nonatomic) _Bool hasTask;
@property(retain, setter=_setActualAuthHeaders:) NSDictionary *_actualAuthHeaders;

@end