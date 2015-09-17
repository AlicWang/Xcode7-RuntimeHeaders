//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MessagesDataSourceMessage : NSObject <TILinguisticDataSourceMessage>
{
    NSDate *_dateSent;
    NSString *_recipient;
    NSString *_body;
    _Bool _fromMe;
    unsigned int _rowID;
}

@property(nonatomic) unsigned int rowID; // @synthesize rowID=_rowID;
@property(nonatomic) _Bool fromMe; // @synthesize fromMe=_fromMe;
@property(readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithDate:(id)arg1 recipient:(id)arg2 body:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end