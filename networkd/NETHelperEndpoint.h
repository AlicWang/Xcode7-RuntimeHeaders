//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETHelperEndpoint : NSObject
{
    NETClient *_client;
    NWParameters *_networkParameters;
    unsigned long long _eid;
}

@property(retain) NWParameters *networkParameters; // @synthesize networkParameters=_networkParameters;
@property unsigned long long eid; // @synthesize eid=_eid;
@property __weak NETClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)initWithClient:(id)arg1 endpointID:(unsigned long long)arg2;
- (id)init;
- (void)evaluate;
- (void)resume;
- (void)destroy:(_Bool)arg1;
- (void)handleMessage:(id)arg1 ofType:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;

@end