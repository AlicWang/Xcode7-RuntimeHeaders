//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol TransitRoutePreviewControllerDelegate <NSObject>
- (void)transitRoutePreviewCOntroller:(TransitRoutePreviewController *)arg1 didSelectIncident:(id <GEOTransitRoutingIncidentMessage>)arg2;
- (void)transitRoutePreviewControllerDidSelectMoreRoutes:(TransitRoutePreviewController *)arg1;
- (void)transitRoutePreviewController:(TransitRoutePreviewController *)arg1 didSelectRoute:(MNRoute *)arg2;
@end