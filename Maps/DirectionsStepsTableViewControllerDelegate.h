//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol DirectionsStepsTableViewControllerDelegate <NSObject>
- (_Bool)directionsStepsTableViewControllerShouldAllowInfoCardsForEndpoints:(DirectionsStepsTableViewController *)arg1;
- (void)directionsStepsTableViewController:(DirectionsStepsTableViewController *)arg1 didTapDisclosureForSearchResult:(SearchResult *)arg2;
- (void)directionsStepsTableViewController:(DirectionsStepsTableViewController *)arg1 didTapRowForRouteStep:(RouteStep *)arg2;

@optional
- (void)showDebugControls;
- (void)hideDebugControls;
@end