//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SDAirDropListenerDelegate <NSObject>
- (void)listener:(SDAirDropListener *)arg1 informationDidChange:(NSDictionary *)arg2;
- (void)listener:(SDAirDropListener *)arg1 didReceiveNewRequest:(SDNetworkOperation *)arg2;
- (void)listener:(SDAirDropListener *)arg1 didReceiveError:(NSError *)arg2;
@end