//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNTrafficIncidentAlert : NSObject
{
    GEOETARoute *_etaRoute;
    GEOComposedRoute *_originalRoute;
    GEOComposedRoute *_alternateRoute;
    CDStruct_3f2a7a20 _startValidCoordinateRange;
    CDStruct_3f2a7a20 _endValidCoordinateRange;
    CDStruct_3f2a7a20 _incidentCoordinate;
    NSDate *_timestamp;
    double _distanceToIncident;
    NSDate *_eta;
    unsigned long long _alertType;
}

@property(retain, nonatomic) NSDate *eta; // @synthesize eta=_eta;
@property(readonly, nonatomic) double distanceToIncident; // @synthesize distanceToIncident=_distanceToIncident;
@property(readonly, nonatomic) CDStruct_3f2a7a20 incidentCoordinate; // @synthesize incidentCoordinate=_incidentCoordinate;
@property(readonly, nonatomic) CDStruct_3f2a7a20 endValidCoordinateRange; // @synthesize endValidCoordinateRange=_endValidCoordinateRange;
@property(readonly, nonatomic) CDStruct_3f2a7a20 startValidCoordinateRange; // @synthesize startValidCoordinateRange=_startValidCoordinateRange;
@property(readonly, nonatomic) GEOComposedRoute *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOETARoute *oldETARoute; // @synthesize oldETARoute=_etaRoute;
@property(readonly, nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
- (void).cxx_destruct;
- (void)updateLocation:(id)arg1;
- (CDStruct_c3b9c2ee)_divergenceCoordinate;
- (id)_timestamp;
- (CDStruct_3f2a7a20)_routeCoordinateAtDuration:(double)arg1 beforeRouteCoordinate:(CDStruct_3f2a7a20)arg2;
- (void)_findRouteDivergence;
- (_Bool)isSimilarTo:(id)arg1;
- (_Bool)isCoordinateInValidRange:(CDStruct_3f2a7a20)arg1;
@property(readonly, nonatomic) double alertDisplayDuration;
@property(readonly, nonatomic) double newEstimatedTime;
@property(readonly, nonatomic) double oldEstimatedTime;
@property(readonly, nonatomic) NSArray *spokenTexts;
@property(readonly, nonatomic) NSArray *alertDescriptions;
@property(readonly, nonatomic) NSArray *alertTitles;
- (id)_dynamicStringValues;
- (id)initWithRoute:(id)arg1 etaRoute:(id)arg2;

@end