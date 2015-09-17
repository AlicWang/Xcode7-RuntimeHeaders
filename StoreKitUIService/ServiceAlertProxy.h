//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ServiceAlertProxy : NSObject
{
    id <ServiceAlertProxyDelegate> _delegate;
    NSObject<OS_xpc_object> *_options;
    SSXPCConnection *_receiverConnection;
    NSObject<OS_xpc_object> *_receiverEndpoint;
    SSXPCConnection *_responseConnection;
}

@property(retain, nonatomic) SSXPCConnection *responseConnection; // @synthesize responseConnection=_responseConnection;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *receiverEndpoint; // @synthesize receiverEndpoint=_receiverEndpoint;
@property(retain, nonatomic) NSObject<OS_xpc_object> *options; // @synthesize options=_options;
@property(nonatomic) __weak id <ServiceAlertProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (void)_disconnect;
- (void)_closeReceiverConnection;
- (void)invalidate;
- (void)finishWithResponse:(id)arg1;
- (void)dealloc;
- (id)init;

@end