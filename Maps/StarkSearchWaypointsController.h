//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkSearchWaypointsController : StarkWaypointsController
{
    NSArray *_results;
    unsigned long long _selectedIndex;
}

- (void).cxx_destruct;
- (unsigned long long)totalDestinations;
- (unsigned long long)indexOfCurrentDestination;
- (id)subtitleForCurrentDestination;
- (id)titleForCurrentDestination;
- (id)destinationWaypoint;
- (id)visuallySelectedItem;
- (void)previousPlaceWithTraits:(id)arg1;
- (void)nextPlaceWithTraits:(id)arg1;
- (id)destinationSearchResultIfAvailable;
- (id)initWithSearchResults:(id)arg1 selectedIndex:(unsigned long long)arg2;

@end