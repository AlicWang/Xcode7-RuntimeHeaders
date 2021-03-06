//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PlacePresentationSelectionManager : NSObject <MKQuickRouteManagerDelegate, AdvisorySheetViewDelegate, SearchManagerObserver>
{
    _Bool _registeredForAddressBookChanges;
    PlacePresentationController *_placePresentationController;
    AdaptivePresenter *_placeCardPresenter;
    _Bool _readyForPlaceCard;
    SearchResult *_pendingPlaceCardSearchResult;
    _MKQuickRouteManager *_quickRouteManager;
    SearchResult *_quickRouteSearchResult;
    _Bool _shouldShowAddress;
    MainChromeViewController *_chrome;
    SearchResult *_selectedSearchResult;
}

@property(nonatomic) _Bool shouldShowAddress; // @synthesize shouldShowAddress=_shouldShowAddress;
@property(retain, nonatomic) SearchResult *selectedSearchResult; // @synthesize selectedSearchResult=_selectedSearchResult;
@property(nonatomic) __weak MainChromeViewController *chrome; // @synthesize chrome=_chrome;
- (void).cxx_destruct;
- (void)_updateQuickRouteManagerTransitOptions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)quickRouteShouldIncludeTransit;
- (_Bool)quickRouteShouldOnlyUseAutomobile;
- (unsigned long long)preferredDirectionsTypeForQuickRoute;
- (_Bool)mode:(id)arg1 shouldShowPlacePresentationOptionInCalloutForLabelMarker:(id)arg2;
- (_Bool)mode:(id)arg1 shouldShowPlacePresentationOptionInCalloutForAnnotationView:(id)arg2;
- (_Bool)mode:(id)arg1 shouldShowFlyoverButtonForSearchResult:(id)arg2;
- (_Bool)mode:(id)arg1 shouldShowDirectionsButtonForSearchResult:(id)arg2;
- (_Bool)mode:(id)arg1 shouldChangeMKApplicationStateForLabelMarker:(id)arg2;
- (void)advisorySheetButtonWasTapped:(id)arg1;
- (void)_unregisterForAddressBookChanges;
- (void)_registerForAddressBookChanges:(id)arg1;
- (_Bool)shouldAllowAutorotation;
- (void)handleAdvisoryForRoute:(id)arg1 inContext:(id)arg2;
- (void)updateRatingsReviewsAndTransitForSelection:(id)arg1 searchResult:(id)arg2;
- (void)updateRatingsReviewsAndTransitForAnnotationView:(id)arg1 labelMarker:(id)arg2 searchResult:(id)arg3;
- (_Bool)_shouldShowFlyoverForLabel:(id)arg1 inContext:(id)arg2;
- (void)updateDirectionsCalloutButtonForContext:(id)arg1 selection:(id)arg2 searchResult:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateDirectionsCalloutButtonForContext:(id)arg1 selection:(id)arg2 searchResult:(id)arg3;
- (id)trafficViewControllerForTrafficIncidentAtLabelMarker:(id)arg1 inContext:(id)arg2;
- (void)viewModeDidChangeForContext:(id)arg1;
- (void)updateCalloutForSelectionInContext:(id)arg1;
- (void)_updateEntitiesForSearchResult:(id)arg1 withContext:(id)arg2 withError:(id)arg3;
- (void)noteSearchResultChanged:(id)arg1 forContext:(id)arg2;
- (void)handleDidFinishCalloutExpansionInContext:(id)arg1;
- (void)calloutDidAppearForSelection:(id)arg1 inContext:(id)arg2;
- (void)handleCalloutAccessoryTap:(id)arg1 onSelection:(id)arg2 inContext:(id)arg3;
- (void)handleDeselection:(id)arg1 inContext:(id)arg2;
- (void)handleSelection:(id)arg1 inContext:(id)arg2;
- (void)_updateForSelectedLabelMarker:(id)arg1 searchResult:(id)arg2 inContext:(id)arg3;
- (void)handleUserLocationUpdate:(id)arg1 inContext:(id)arg2;
- (void)dismissPlaceCardWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissPlaceCardWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissPlaceCardWithContext:(id)arg1;
- (void)presentViewControllerInContext:(id)arg1 withPlaceCardPresentation:(id)arg2 animated:(_Bool)arg3 changeHandler:(CDUnknownBlockType)arg4;
- (_Bool)isPresentingPlaceCard;
- (void)_doneButtonTapped;
- (void)presentPlaceCardInContext:(id)arg1 forSearchResult:(id)arg2 animated:(_Bool)arg3 recordAnalyticHandler:(CDUnknownBlockType)arg4;
- (void)presentPlaceCardInContext:(id)arg1 forSearchResult:(id)arg2 animated:(_Bool)arg3;
- (id)_mapSelection;
- (_Bool)_placeCardPresentationRequiresSelectionInContext:(id)arg1;
- (void)_setSelectedSearchResult:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end