//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NEKPBDeletionWrapper : PBCodable <NSCopying>
{
    NSString *_calendarIdentifier;
    NSString *_syncId;
    unsigned int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;
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
@property(readonly, nonatomic) _Bool hasCalendarIdentifier;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSyncId;

@end