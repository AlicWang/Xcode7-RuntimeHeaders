//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKAccount : NSObject
{
    AAAccount *_internalAccount;
}

@property(readonly, retain, nonatomic) AAAccount *internalAccount; // @synthesize internalAccount=_internalAccount;
- (_Bool)isEnabledForDataClass:(id)arg1;
@property(readonly, retain, nonatomic) NSString *authToken; // @dynamic authToken;
@property(readonly, retain, nonatomic) NSString *username; // @dynamic username;
@property(readonly, retain, nonatomic) NSString *personID; // @dynamic personID;
- (void)dealloc;
- (id)initWithInternalAccount:(id)arg1;

@end