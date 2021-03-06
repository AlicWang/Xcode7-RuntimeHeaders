//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoGlanceChromeViewController : ChromeViewController <CUISGlanceServiceViewController, MKLocationManagerObserver, NSUserActivityDelegate, NMGizmoXPC>
{
    UIView *_currentHeader;
    UIImageView *_mapPlaceholderView;
    _Bool _visible;
    NSUserActivity *_userActivity;
    _Bool _pausedEffects;
    struct UIEdgeInsets _glanceEdgeInsets;
    NanoGlanceLocationModeController *_locationMode;
    GEOCompanionRouteDetails *_cachedRouteDetails;
    double _cachedRouteDetailsTimestamp;
    id <LoadingToken> _loadingMapNetworkActivity;
    PUICActivityIndicatorView *_mapActivityIndicator;
    NanoGlanceLoadingViewController *_loadingViewController;
    NSTimer *_loadingTimer;
    NSDictionary *_glanceContext;
    id <CUISGlanceServiceViewControllerDelegate> _delegate;
}

+ (_Bool)canTransitionWithoutMap;
+ (void)initialize;
@property(nonatomic) __weak id <CUISGlanceServiceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *glanceContext; // @synthesize glanceContext=_glanceContext;
- (void).cxx_destruct;
- (void)_debug_fetchStateSnapshot:(CDUnknownBlockType)arg1;
- (void)historyUpdated;
- (void)pinsUpdated;
- (void)bookmarksUpdated;
@property(readonly, nonatomic) NSUserActivity *glanceUserActivity;
@property(readonly, nonatomic) NSString *prelaunchBundleID;
@property(readonly, nonatomic) NSString *duetIdentifier;
- (id)currentLaunchURL;
- (void)tappedGlance:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)_mapsActivityWithFidelity:(unsigned int)arg1;
- (void)userActivityWillSave:(id)arg1;
- (void)updateUserActivity;
- (id)_mapsUserActivity;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)layoutForUnobscuredBoundsChange;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)moveToAccessoryViewsForMode:(id)arg1 animation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)performInitialConfigurationOnMapView:(id)arg1;
- (void)loadMapIfNeeded;
- (void)clearMapView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_hideLoadingScreen;
- (void)_showLoadingScreen;
- (void)glanceDidSettle;
- (void)unquiesceMapView;
- (void)quiesceMapView;
- (void)_locationAuthorizationChanged:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *glanceTitle;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *launchBundleID;
@property(readonly, nonatomic) NSURL *launchURL;
@property(readonly) Class superclass;

@end