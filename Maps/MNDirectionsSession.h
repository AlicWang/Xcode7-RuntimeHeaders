//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNDirectionsSession : NSObject <MNRouteManagerDelegate, MKLocationManagerObserver>
{
    MNNavigationSession *_navigationSession;
    MNRouteManager *_routeManager;
    _Bool _didBeginNavigation;
    _Bool _didEndNavigation;
    RAPGraphDirectionsRecorder *_reportAProblemRecorder;
}

@property(readonly, nonatomic) RAPGraphDirectionsRecorder *reportAProblemRecorder; // @synthesize reportAProblemRecorder=_reportAProblemRecorder;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) MNNavigationSession *navigationSession; // @synthesize navigationSession=_navigationSession;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)routeManager:(id)arg1 receivedTrafficIncidentAlert:(id)arg2;
- (void)routeManager:(id)arg1 recordRouteResponse:(id)arg2;
- (void)routeManager:(id)arg1 recordRouteRequest:(id)arg2;
- (void)routeManagerUpdatedTrafficIncidents:(id)arg1;
- (void)routeManagerUpdatedETA:(id)arg1;
- (void)routeManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)routeManager:(id)arg1 failedWithError:(id)arg2;
- (void)routeManager:(id)arg1 didChangeRoutePreloadSession:(id)arg2;
- (void)routeManager:(id)arg1 didSwitchToNewRoute:(id)arg2 alreadyOnRoute:(_Bool)arg3;
- (void)routeManagerCanceledRequest:(id)arg1;
- (void)routeManagerFailedToRecalculateRoute:(id)arg1 previousRoute:(id)arg2 errorCode:(long long)arg3;
- (void)routeManager:(id)arg1 recalculatedNewRoute:(id)arg2;
- (void)routeManagerWillRecalculateRoute:(id)arg1;
- (void)routeManagerFailedToReceiveRoutes:(id)arg1 error:(id)arg2;
- (void)routeManager:(id)arg1 addedRoutesToRouteSet:(id)arg2;
- (void)routeManagerDidChangeActiveRouteSet:(id)arg1;
- (void)routeManagerWillRequestRoute:(id)arg1;
- (void)routeManagerDidFailToRecordTrace:(id)arg1;
- (void)routeManagerDidChangeState:(id)arg1 newRouteState:(int)arg2;
- (_Bool)setupNavigatorForTransportType:(int)arg1 useSimulation:(_Bool)arg2 tracePlayer:(id)arg3;
- (void)dealloc;
- (id)initWithRouteManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end