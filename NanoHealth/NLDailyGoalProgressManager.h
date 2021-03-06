//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLDailyGoalProgressManager : NSObject <HDHealthDaemonReadyObserver, NLBridgeSettingsObserver, NLCoachingSubmanager>
{
    id <HDHealthDaemon> _healthDaemon;
    NLBridgeSettings *_bridgeSettings;
    id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate;
}

+ (id)submanagerIdentifier;
@property(nonatomic) __weak id <NLCoachingSubmanagerDelegate> coachingSubmanagerDelegate; // @synthesize coachingSubmanagerDelegate;
- (void).cxx_destruct;
- (void)privacySettingsDidChange:(id)arg1;
- (void)settingsDidChange:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)wristOnStateChangedTo:(_Bool)arg1;
- (void)coachingAlertRequestsWereProcessed:(id)arg1 submanagerIdentifiersWithProcessedRequests:(id)arg2;
- (id)coachingAlertRequestsForPollingReason:(unsigned int)arg1;
- (void)_sendAggdSettings;
- (void)_sendAggdSetting:(id)arg1;
- (void)_cancelScheduledAlert;
- (void)_rescheduleAlert;
- (id)_nextFireDate;
- (void)clearLastIntervalReset;
- (void)resetIntervalStartDate;
- (void)clearFirstWristOnDateToday;
- (void)_updateFirstWristOnDateToday;
- (void)_saveWristOnCoachingEventWithActualWristOnDate:(id)arg1 adjustedWristOnDate:(id)arg2;
- (id)_dateOfLastIntervalReset;
- (id)_firstWristOnDateToday;
- (void)_setUserDefaultsDate:(id)arg1 forKey:(id)arg2;
- (id)_userDefaultsDateForKey:(id)arg1;
- (double)_progressUpdateInterval;
- (id)initWithHealthDaemon:(id)arg1 bridgeSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end