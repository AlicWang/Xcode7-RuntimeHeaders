//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MKMapView (MapsAdditions)
+ (CDStruct_90e2a262)_rectForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (void)_rectForLeg:(id)arg1 currentStepIndex:(unsigned long long)arg2 mapAccess:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)_rectForTransitStationAtStep:(id)arg1 mapAccess:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)_rectForTransitStationIfExistsAtStep:(id)arg1 mapAccess:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)rectForTransitRouteStep:(id)arg1 currentStepIndex:(unsigned long long)arg2 mapAccess:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)rectForTransitRouteLeg:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)rectForTransitRouteStep:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (double)_animationDurationFromMapRect:(CDStruct_90e2a262)arg1 toMapRect:(CDStruct_90e2a262)arg2;
- (void)animateToVisibleMapRect:(CDStruct_90e2a262)arg1 withStepRouteLinePadding:(_Bool)arg2 usingDefaultAnimationDuration:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)snapshotImageWithScale:(double)arg1;
- (id)snapshotImage;
@end