//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSXPCConnection (WatchConnectivity_Additions)
- (_Bool)wc_connectionHasEntitlement:(id)arg1;
@property(readonly, copy) NSString *wc_connectionCommunicationID;
@property(readonly, copy) NSString *wc_connectionBundleID;
@property(readonly) _Bool wc_connectionIsiOSExtension;
@end