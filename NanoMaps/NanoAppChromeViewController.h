//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoAppChromeViewController : NanoChromeViewController <UIGestureRecognizerDelegate, NSUserActivityDelegate, PUICActionControllerDelegate, PUICCrownInputSequencerDelegate, NMGizmoXPC>
{
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSUserActivity *_userActivity;
    CDStruct_2c43369c _crownZoomFocusPointCoordinate;
    double _crownZoomFocusPointCoordinateUseTimestamp;
    _Bool _crownZoomFocusPointIsUserLocation;
    double _lastCrownScaleFactor;
    PUICCrownInputSequencer *_crownSequencer;
    UIScreenEdgePanGestureRecognizer *_dummyEdgeSwipe;
    id <LoadingToken> _loadingMapNetworkActivity;
    CDStruct_2c43369c _lastActivityUpdateCenterCoordinate;
    float _lastActivityUpdateZoomLevel;
    NSXPCConnection *_stateSnapshotListenerConnection;
    _Bool _zoomLevelChangedByUser;
}

@property(nonatomic) _Bool zoomLevelChangedByUser; // @synthesize zoomLevelChangedByUser=_zoomLevelChangedByUser;
- (void).cxx_destruct;
- (void)_debug_fetchStateSnapshot:(CDUnknownBlockType)arg1;
- (void)historyUpdated;
- (void)pinsUpdated;
- (void)bookmarksUpdated;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)_crownInputSequencer:(id)arg1 offsetDidChangeByDelta:(double)arg2;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)actionControllerWillAppear:(id)arg1;
@property(nonatomic) _Bool cornersHidden;
- (id)_mapsActivityWithFidelity:(unsigned int)arg1;
@property(nonatomic) MapsActivity *mapsActivity;
- (id)mapItemsForContext;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(_Bool)arg4;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapViewDidStopUserInteraction:(id)arg1;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)updateZoomLevelWithDelta:(double)arg1;
- (struct CGPoint)_zoomFocusPoint;
- (void)_doubleTappedOnMap:(id)arg1;
- (void)setCrownZoomFocusCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)showNavSafetyWarningForType:(unsigned int)arg1;
- (id)actionController;
- (id)_topNanoAppMode;
- (_Bool)canProvideActionController;
- (void)_statusBarTapped;
- (void)userActivityWillSave:(id)arg1;
- (void)updateUserActivity;
- (id)_userActivity;
- (void)beginInteractiveStatusBarTransitionToItem:(id)arg1 withAnimation:(id)arg2 percentage:(float)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateStatusBarItem:(id)arg1 withAnimation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateTitle;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets)obscuredInsetsForBoundsOptions:(int)arg1;
- (void)setMapView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)_diagnosticString;
- (void)updateNavigationAnnotations;
- (void)configureForEndNavigation;
- (void)configureForBeginNavigation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end