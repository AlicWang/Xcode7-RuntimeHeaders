//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitDirectionsListClusteredVehicleItem : TransitDirectionsListItem
{
    TransitDirectionsListItemTransitTrip *_relatedTripItem;
}

@property(readonly, nonatomic) TransitDirectionsListItemTransitTrip *relatedTripItem; // @synthesize relatedTripItem=_relatedTripItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *boardStep;
- (id)initWithRelatedTransitTripItem:(id)arg1;

@end