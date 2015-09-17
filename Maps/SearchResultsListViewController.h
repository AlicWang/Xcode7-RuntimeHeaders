//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchResultsListViewController : UITableViewController <ListViewSearchResultCellAccessoryDelegate, MKLocationManagerObserver>
{
    NSArray *_searchResults;
    BlurView *_blurView;
    _Bool _useBlurView;
    _Bool _showLightContent;
    id <SearchResultsListViewControllerDelegate> _delegate;
    struct CGRect _enclosingPopoverFrame;
    _Bool _isScrolling;
    double _lastContentOffset;
    long long _numberSimilarSearchResults;
    MKLocationManager *_locationManager;
    SearchResultQuickActionMenuPresenter *_quickActionMenuPresenter;
    _Bool _showPhotos;
    _Bool _chainResults;
    _Bool _displayingAsSidebar;
    SearchResult *_defaultSearchResult;
    GEOLocation *_currentLocation;
    id <QuickActionMenuPresenterDelegate> _quickActionMenuHandler;
}

@property(nonatomic) _Bool displayingAsSidebar; // @synthesize displayingAsSidebar=_displayingAsSidebar;
@property(nonatomic) __weak id <QuickActionMenuPresenterDelegate> quickActionMenuHandler; // @synthesize quickActionMenuHandler=_quickActionMenuHandler;
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, nonatomic) struct CGRect enclosingPopoverFrameInMapView; // @synthesize enclosingPopoverFrameInMapView=_enclosingPopoverFrame;
@property(retain, nonatomic) SearchResult *defaultSearchResult; // @synthesize defaultSearchResult=_defaultSearchResult;
@property(nonatomic) __weak id <SearchResultsListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isChainResults) _Bool chainResults; // @synthesize chainResults=_chainResults;
@property(nonatomic) _Bool showPhotos; // @synthesize showPhotos=_showPhotos;
- (void).cxx_destruct;
- (id)mapServiceTraitsForQuickActionPresenter:(id)arg1;
- (_Bool)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2;
- (_Bool)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2;
- (void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)listViewSearchCell:(id)arg1 pressedInfoButton:(id)arg2;
- (void)updateSavedLocation:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)orientationDidChange;
- (void)updateBlurDisabledBackgroundColor:(id)arg1 blurViewStyle:(long long)arg2 transitionToBackdropStyle:(long long)arg3;
- (void)useBlurView:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)selectSearchResult:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_userDefaultsDidChange:(id)arg1;
- (_Bool)_isSingleLocationList;
- (void)reloadData;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end