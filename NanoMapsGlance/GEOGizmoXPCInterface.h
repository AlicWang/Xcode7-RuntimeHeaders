//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol GEOGizmoXPCInterface
- (void)didChangePairedDeviceReachability:(_Bool)arg1;
- (void)updateNavigationRouteStatus:(NSData *)arg1;
- (void)updateNavigationRouteDetails:(NSData *)arg1 routeStatus:(NSData *)arg2 routeContext:(NSData *)arg3;
- (void)didChangeActiveTileGroup:(NSData *)arg1;
@end