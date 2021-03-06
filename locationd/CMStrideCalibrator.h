//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CMStrideCalibrator : CLIntersiloService <CMStrideCalibratorServiceProtocol>
{
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client>> _stepCountClient;
    struct queue<std::__1::pair<double, unsigned int>, std::__1::deque<std::__1::pair<double, unsigned int>, std::__1::allocator<std::__1::pair<double, unsigned int>>>> _stepWindow;
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::__1::default_delete<CLOdometerNotifier_Type::Client>> _odometerClient;
    struct unique_ptr<CLMotionState_Type::Client, std::__1::default_delete<CLMotionState_Type::Client>> _motionStateClient;
    struct vector<std::__1::pair<double, CLMotionActivity::Type>, std::__1::allocator<std::__1::pair<double, CLMotionActivity::Type>>> _activityWindow;
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::__1::default_delete<CLMotionStateMediator_Type::Client>> _motionStateMediatorClient;
    struct unique_ptr<CLLocationProvider_Type::Client, std::__1::default_delete<CLLocationProvider_Type::Client>> _locationProviderClient;
    struct CLServiceLocationProvider *_serviceLocationProvider;
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::__1::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;
    double _lastGoodLocFix;
    struct shared_ptr<CLPersistentTimer> _batchTimer;
    struct CLStepCountRecorderDb _stepCountDb;
    struct shared_ptr<CMStrideCalRecorderDb> _strideCalDb;
    CMStrideCalibrationBins *_strideCalibrationBins;
    int _currentSessionOverride;
    int _locationState;
    _Bool _forcedGizmoRequested;
    struct vector<CLElevationChangeEntry, std::__1::allocator<CLElevationChangeEntry>> _elevationWindow;
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::__1::default_delete<CLCompanionNotifier_Type::Client>> _companionClient;
    double _minForcedAttemptWait;
    double _minCalibrationSuccessWait;
    double _minCalibrationConvergedWait;
    int _minStepsBeforeForce;
    double _stepWindowTime;
    _Bool _canSkipChecksInWindow;
    CLTimer *_stopOpportunisticCalibrationTimer;
    CalibrationTrack *fLatestTrack;
    CalibrationTrack *fLatestInvalidGradientTrack;
    struct CLStrideCalibrationSessionMetrics _sessionMetrics;
    CalTrackFinder *_trackFinder;
}

+ (_Bool)isSupported;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;
+ (void)becameFatallyBlocked:(id)arg1;
@property(retain) CalTrackFinder *trackFinder; // @synthesize trackFinder=_trackFinder;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)syncgetIsRunCalibrationAvailable;
- (_Bool)syncgetIsWalkCalibrationAvailable;
- (id)syncgetDefaultBins;
- (void)resetBins;
- (void)setBins:(id)arg1;
- (id)syncgetBins;
- (double)syncgetKValueForSpeed:(double)arg1;
- (_Bool)syncgetIsCalibrationConvergedForSpeed:(double)arg1;
- (void)setGizmoRequestedCalibration:(_Bool)arg1 withSession:(int)arg2;
- (void)quitForcedLocationState;
- (void)endSessionMetrics:(double)arg1;
- (void)startSessionMetrics:(double)arg1 session:(int)arg2;
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;
- (void)setUpdateFinishedHandler;
- (_Bool)isCalibrationConvergedStdForBinWithSpeed:(double)arg1;
- (void)onMotionStateMediatorNotification:(int)arg1 data:(union NotificationData)arg2;
- (void)onCompanionNotification:(int)arg1 data:(union NotificationData)arg2;
- (void)sendCurrentTrack:(id)arg1;
- (void)updateCalibrationBins:(double)arg1;
- (void)logInvalidGradientTrackToAWD:(double)arg1;
- (void)setLatestInvalidGradientTrack:(id)arg1;
- (void)setLatestTrack:(id)arg1;
- (_Bool)checkValidTrackGradient:(double)arg1 track:(id)arg2;
- (_Bool)checkValidTrack:(const struct CLStepDistance *)arg1 track:(id)arg2;
@property int locationState;
- (void)checkAuthorization;
- (void)attemptForcedLocation;
- (void)onBatchTimer:(struct CLPersistentTimer *)arg1;
- (void)onLocationNotification:(int)arg1 data:(struct NotificationData)arg2;
- (void)onMotionStateNotification:(int)arg1 data:(union NotificationData)arg2;
- (void)onOdometerNotification:(int)arg1 data:(union NotificationData)arg2;
- (_Bool)isRunningStateInWindow;
- (void)ageOutMotionStateArray;
- (unsigned int)stepsInWindow;
- (void)ageOutStepArray;
- (void)onStepNotification:(int)arg1 data:(union NotificationData)arg2;
- (void)checkForStateTransition;
- (_Bool)shouldSkipChecksInWindow;
- (void)endService;
- (void)beginService;
- (id)initInSilo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end