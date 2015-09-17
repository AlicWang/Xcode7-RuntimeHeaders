//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying>
{
    NSMutableArray *_dictionarys;
    NSString *_name;
    int _reason;
    struct {
        unsigned int reason:1;
    } _has;
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSMutableArray *dictionarys; // @synthesize dictionarys=_dictionarys;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
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
@property(nonatomic) _Bool hasReason;
- (id)dictionaryAtIndex:(unsigned int)arg1;
- (unsigned int)dictionarysCount;
- (void)addDictionary:(id)arg1;
- (void)clearDictionarys;
@property(readonly, nonatomic) _Bool hasName;

@end