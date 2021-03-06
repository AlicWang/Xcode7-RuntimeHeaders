//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFInternalTableViewController : NPRFPrefsTableViewController
{
}

- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)batteryChanged:(id)arg1;
- (id)batteryPercent;
- (id)specifiers;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(int)arg1;
- (_Bool)isDisclamerTextShowing;
- (void)rebootDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)dumpPassbookLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)killCarouselWithCompletion:(CDUnknownBlockType)arg1;
- (void)restartConnectionDaemonsWithCompletion:(CDUnknownBlockType)arg1;
- (void)restartLocationdWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllIDSLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setNanoMailKitSyncOnSwitchChanged:(id)arg1;
- (_Bool)isNanoMailKitSyncOn;
- (void)setEventKitSyncOnSwitchChanged:(id)arg1;
- (_Bool)isEventKitSyncOn;
- (void)setAddressBookSyncOnSwitchChanged:(id)arg1;
- (_Bool)isAddressBookSyncOn;
- (void)setCompanionSyncOnSwitchChanged:(id)arg1;
- (_Bool)isCompanionSyncOn;
- (void)setSiriLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isSiriLoggingOn;
- (void)setPedometerLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isPedometerLoggingOn;
- (void)setPlatinumLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isPlatinumLoggingOn;
- (void)setRawMTLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isRawMTLoggingOn;
- (void)setMTLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isMTLoggingOn;
- (void)setFitnessDataCollectionOnSwitchChanged:(id)arg1;
- (_Bool)isFitnessDataCollectionOn;
- (void)setRollingStackshotsOnSwitchChanged:(id)arg1;
- (_Bool)isRollingStackshotsOn;
- (void)setWifiOnSwitchChanged:(id)arg1;
- (_Bool)isWifiOn;
- (void)setIDSLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isIDSLoggingOn;
- (void)setConnectionStatusVisibleSwitchChanged:(id)arg1;
- (_Bool)isBacklightLoggingOn;
- (void)setBacklightLoggingOnSwitchChanged:(id)arg1;
- (_Bool)isWakeGestureLoggingOn;
- (void)setWakeGestureLoggingOnSwitchChanged:(id)arg1;
- (void)setWakeOnTapSwitchChanged:(id)arg1;
- (void)setShowOnWristSwitchChanged:(id)arg1;
- (void)setDeviceWalkaboutStatusOnSwitchChanged:(id)arg1;
- (_Bool)isDeviceWalkaboutStatusOn;
- (void)setNotificationsAsPlainStyleSwitchChanged:(id)arg1;
- (void)setInternalAppsVisibleSwitchChanged:(id)arg1;
- (_Bool)isAutoDimOn;
- (void)setAutoDimOnSwitchChanged:(id)arg1;

@end