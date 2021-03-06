//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NEKRecordMapImpl : NSObject
{
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)removeAllRecords;
- (void)reset;
- (_Bool)commit:(id *)arg1;
- (void)deleteIdentifierForRecordID:(struct CalRecordID *)arg1;
- (void)setIdentifier:(id)arg1 forRecordID:(struct CalRecordID *)arg2;
- (id)identifierForRecordID:(struct CalRecordID *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end