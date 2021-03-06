//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IOSSHLApplication : NSObject <IOSSHLPresentationProtocol>
{
    FBProcessState *_processState;
    FBApplicationProcess *_process;
    unsigned int _doingBackgroundNetworking:16;
    unsigned int _failedLaunchCount:8;
    unsigned int _enabled:1;
    unsigned int _isInternalApplication:1;
    unsigned int _isSystemApplication:1;
    unsigned int _isSystemProvisioningApplication:1;
    unsigned int _hasMiniAlerts:1;
    unsigned int _isWatchKitApplication:1;
    NSNumber *_watchKitApplicationVersion;
    unsigned int _isBeingDebugged:1;
    unsigned int _isAnimatingActivation:1;
    unsigned int _isAnimatingDeactivation:1;
    unsigned int _dataFlagsIsSet:1;
    unsigned int _supportsAudioBackgroundMode:1;
    unsigned int _supportsLocationBackgroundMode:1;
    unsigned int _supportsVOIPBackgroundMode:1;
    unsigned int _supportsEABackgroundMode:1;
    unsigned int _supportsRemoteNotificationBackgroundMode:1;
    unsigned int _supportsFetchBackgroundMode:1;
    unsigned int _supportsContinuousBackgroundMode:1;
    unsigned int _wantsUnboundedTaskCompletionAssertions:1;
    unsigned int _prefersSavedSnapshots:1;
    unsigned int _suspendingUnsupported;
    unsigned int _hasBeenFrontmost:1;
    unsigned int _requiresHiDPI:1;
    unsigned int _supportsPortraitOrientation:1;
    unsigned int _supportsPortraitUpsideDownOrientation:1;
    unsigned int _supportsLandscapeLeftOrientation:1;
    unsigned int _supportsLandscapeRightOrientation:1;
    unsigned int _terminationAssertions:8;
    unsigned int _terminationAssertionsForCacheCleaning:8;
    unsigned int _defaultStatusBarStyle:8;
    unsigned int _defaultInterfaceOrientation:8;
    unsigned int _defaultInterfaceOrientationOverride:8;
    unsigned int _interfaceOrientationOverrideSet:1;
    unsigned int _hasShownDataPlanAlertSinceLock:1;
    unsigned int _uninstalled:1;
    unsigned int _isLaunchableDuringSetup:1;
    unsigned int _hasViewServiceEntitlement:1;
    unsigned int _launchSuspendedAlways:1;
    unsigned int _orientationChangedEventsEnabled:1;
    unsigned int _isRecentlyUpdated:3;
    unsigned int _isNewlyInstalled:3;
    unsigned int _hasBadgeValue:3;
    NSMutableArray *_activationContextStack;
    int _supportedTypes;
    NSDictionary *_customSpotlightIconPaths;
    NSArray *_customMachServices;
    NSMutableSet *_idleTimerDisabledReasons;
    NSDictionary *_searchDomainLaunchInfo;
    struct _opaque_pthread_mutex_t _appBundleMutex;
    BSCFBundle *_cachedBundle;
    NSDate *_nextApplicationWakeDate;
    PCPersistentTimer *_applicationWakeTimer;
    int _applicationRestorationCheckState;
    BKSProcessAssertion *_periodicWakeProcessAssertion;
    NSTimer *_periodicWakeSuspendTimer;
    BKSProcessAssertion *_transientProcessAssertion;
    NSTimer *_transientSuspendTimer;
    int _transientAssertionType;
    FBApplicationInfo *_appInfo;
    IOSSHLBackedUpDataStore *_dataStore;
    int _lastExitType;
    unsigned int _activationToken;
    int _showsProgress;
    NSDate *_applicationNextWakeDate;
    FBWindowContextManager *_contextManager;
    NSMutableDictionary *_defaultImageNamesByScreenType;
    NSDictionary *_defaultImageNamesForOrientation;
    XBApplicationSnapshotManifest *_snapshotManifest;
    void *_cachedSnapshotSurface;
    NSTimer *_snapshotCacheRemovalTimer;
    _Bool _appSnapshotSequenceID;
    _Bool _running;
    _Bool _hasBeenFrontMost;
    _Bool _restricted;
    _Bool _enableTestsNextActivation;
    _Bool _checkForLeaks;
    unsigned int _systemAppSupportsLocalNotifications;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSArray *_folderNames;
    NSString *_fallbackFolderName;
    int _activationState;
    unsigned int _applicationState;
    float _minimumBrightnessLevel;
    NSArray *_domainsToPreheat;
    NSString *_currentTestName;
    NSArray *_externalAccessoryProtocols;
    NSDictionary *_alertSuppressionContextsBySectionIdentifier;
    UIRemoteApplication *_remoteApplication;
    IOSSHLPresentationContext *_presentationContext;
    double _watchdogExtension;
}

+ (id)defaultValueForKey:(id)arg1 presentationIdentifier:(id)arg2 urlScheme:(id)arg3;
+ (void)setDefaultValue:(id)arg1 forKey:(id)arg2 presentationIdentifier:(id)arg3;
+ (id)_defaultDisplayState;
+ (_Bool)shouldHaveContextsForActivationState:(int)arg1;
+ (void)setMaxRelaunchCountUser:(int)arg1;
+ (int)maxRelaunchCountUser;
+ (void)setMaxRelaunchCountSystem:(int)arg1;
+ (int)maxRelaunchCountSystem;
+ (void)setGoToSafeModeAfterCount:(int)arg1;
+ (int)goToSafeModeAfterCount;
+ (void)load;
@property(retain, nonatomic) IOSSHLPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(retain, nonatomic, getter=remoteApplication) UIRemoteApplication *remoteApplication; // @synthesize remoteApplication=_remoteApplication;
@property(nonatomic) double watchdogExtension; // @synthesize watchdogExtension=_watchdogExtension;
@property(retain, nonatomic) NSDictionary *alertSuppressionContextsBySectionIdentifier; // @synthesize alertSuppressionContextsBySectionIdentifier=_alertSuppressionContextsBySectionIdentifier;
@property(readonly, nonatomic) NSArray *externalAccessoryProtocols; // @synthesize externalAccessoryProtocols=_externalAccessoryProtocols;
@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(nonatomic) _Bool checkForLeaks; // @synthesize checkForLeaks=_checkForLeaks;
@property(nonatomic) _Bool enableTestsNextActivation; // @synthesize enableTestsNextActivation=_enableTestsNextActivation;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) _Bool hasBeenFrontMost; // @synthesize hasBeenFrontMost=_hasBeenFrontMost;
@property(readonly, nonatomic) _Bool running; // @synthesize running=_running;
@property(readonly, nonatomic) NSArray *domainsToPreheat; // @synthesize domainsToPreheat=_domainsToPreheat;
@property(readonly, nonatomic) float minimumBrightnessLevel; // @synthesize minimumBrightnessLevel=_minimumBrightnessLevel;
@property(nonatomic) unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, nonatomic) int activationState; // @synthesize activationState=_activationState;
@property(readonly, nonatomic) NSString *fallbackFolderName; // @synthesize fallbackFolderName=_fallbackFolderName;
@property(readonly, nonatomic) NSArray *folderNames; // @synthesize folderNames=_folderNames;
@property(readonly, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool appSnapshotSequenceID; // @synthesize appSnapshotSequenceID=_appSnapshotSequenceID;
@property(readonly, nonatomic) unsigned int systemAppSupportsLocalNotifications; // @synthesize systemAppSupportsLocalNotifications=_systemAppSupportsLocalNotifications;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSSet *idleTimerDisabledReasons; // @synthesize idleTimerDisabledReasons=_idleTimerDisabledReasons;
- (void).cxx_destruct;
- (void *)cachedSnapshotSurface;
- (void)removalTimerFired:(id)arg1;
- (void)setRemovalTimer;
- (void)setCachedSnapshotSurface:(void *)arg1;
- (id)_snapshotManifest;
- (void)_setApplicationRestorationCheckState:(int)arg1;
- (int)_applicationRestorationCheckState;
- (_Bool)hasBeenFrontmost;
- (id)_additionalDisplayQualification;
- (id)displayIdentifier;
- (id)_searchDomainLaunchInfo;
- (_Bool)_prefersSavedSnapshots;
- (id)_defaultImageNamesByScreenType;
- (id)_defaultImageNamesForOrientation;
- (void)_assignDefaultLaunchImages:(id)arg1 forScreenType:(int)arg2;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(float)arg4 outScale:(float *)arg5;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 forMainScene:(_Bool)arg4 size:(struct CGSize)arg5 scale:(float)arg6 outScale:(float *)arg7;
- (id)_sortedLaunchImagesForMainScreen:(id)arg1 bundle:(id)arg2;
- (_Bool)_isMainSceneID:(id)arg1;
- (id)mainSceneID;
- (id)sceneIdentifierForDisplay:(id)arg1;
- (id)mainScene;
- (id)mainSceneInitialClientSettings;
- (id)transitionContext;
- (id)executionContext;
- (_Bool)canAccessScreen:(id)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)isSameExecutableAsApplication:(id)arg1;
- (void)bulletinWithLocalNotificationShouldLaunchSuspended:(id)arg1;
- (void)bulletinWithLocalNotificationShouldLaunch:(id)arg1;
- (void)_bulletinWithLocalNotificationShouldLaunch:(id)arg1 withActivationSetting:(unsigned int)arg2;
- (_Bool)isUninstalled;
- (double)lastBadgeClearTime;
- (void)_noteIconDataSourceDidChange;
- (_Bool)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setBadge:(id)arg1;
- (id)badgeNumberOrString;
- (_Bool)badgeHasBeenSetLocally;
- (void)noteBadgeSetLocally;
@property(readonly, nonatomic) _Bool requiresRLNDataProvider;
@property(copy, nonatomic) IOSSHLStateSettings *stateSettings;
- (void)applyStateSettings:(id)arg1;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (int)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forStateSetting:(unsigned int)arg2;
- (void)clearStateSettings;
@property(copy, nonatomic) IOSSHLDeactivationSettings *deactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (int)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearDeactivationSettings;
@property(copy, nonatomic) IOSSHLActivationSettings *activationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (int)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(int)arg1 forActivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
@property(readonly, nonatomic) NSString *presentationName;
@property(readonly, nonatomic) NSString *presentationIdentifier;
- (void)deactivate;
- (void)activate;
- (double)autoLockTime;
- (double)autoDimTime;
- (_Bool)suppressesNotifications;
- (_Bool)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (_Bool)allowsEventOnlySuspension;
- (int)effectiveStatusBarStyle;
- (_Bool)defaultStatusBarHidden;
- (int)defaultStatusBarStyle;
- (int)statusBarStyle;
- (_Bool)statusBarHidden;
- (id)urlScheme;
- (id)url;
- (id)siriRequestURL;
- (void)markUserLaunchInitiationTime;
@property(readonly, nonatomic) _Bool newlyInstalled;
- (void)_dropTransientProcessAssertion;
- (void)_suspendForPeriodicWakeTimerFired:(id)arg1;
- (void)_dropPeriodicWakeProcessAssertion;
- (void)_resumeForPeriodicWakeWithReason:(id)arg1;
- (void)wakeTimerFired;
- (void)_updateApplicationWakeTimers;
- (id)_copyApplicationMetadata;
@property(readonly, nonatomic) double modificationDate;
@property(readonly, nonatomic) NSString *sandboxPath;
- (id)bundleContainerPath;
- (id)dataContainerPath;
@property(readonly, nonatomic) NSString *path;
- (id)_preferredImagePathInBundle:(id)arg1 baseResourceName:(id)arg2 ofType:(id)arg3 scale:(float *)arg4;
- (id)_preferredImagePathByScaleInBundle:(id)arg1 resourceName:(id)arg2 ofType:(id)arg3 scale:(float *)arg4;
- (void)autoLaunchIfNecessaryOnBootOrInstall:(_Bool)arg1;
- (_Bool)shouldAutoRelaunchAfterExit;
- (_Bool)shouldAutoLaunchOnBootOrInstall;
- (_Bool)_shouldAutoLaunchOnBootOrInstall:(_Bool)arg1;
- (_Bool)_shouldAutoRelaunchForEA;
- (_Bool)_shouldAutoLaunchForVoIP;
- (void)_setAutoLaunchForVoIP:(_Bool)arg1;
- (void)prepareForUninstallation;
- (void)_purgeRemoteApplication;
- (void)removeDefaultInterfaceOrientationOverride;
- (void)overrideDefaultInterfaceOrientation:(int)arg1;
- (int)launchingInterfaceOrientationForOrientation:(int)arg1;
- (int)launchingInterfaceOrientationForCurrentOrientation;
- (int)statusBarOrientation;
- (void)didAnimateDeactivation;
- (void)willAnimateDeactivation:(_Bool)arg1;
- (void)didAnimateActivation;
- (void)willAnimateActivation;
- (void)_transientSuspendForTimerFired:(id)arg1;
- (void)_transientResumeForType:(int)arg1;
- (double)_resumeDurationForTransientType:(int)arg1;
- (id)_transientIdentifier;
- (void)resumeForContentAvailable;
- (void)resumeToQuit;
- (void)didDeactivateForEventsOnly:(_Bool)arg1;
- (void)willDeactivateForEventsOnly:(_Bool)arg1;
- (void)didFailToActivate;
- (void)validateSystemProvisioningEntitlements:(CDStruct_6ad76789 *)arg1;
- (_Bool)didActivateWithTransactionID:(unsigned int)arg1;
- (void)setActivateTransactionID:(unsigned int)arg1;
- (void)_updateOrientationForActivationIfNecessary;
- (void)willActivate;
@property(copy, nonatomic) IOSSHLPresentationContext *activationContext;
- (void)popActivationContext;
- (void)pushActivationContext;
- (void)_sendDidLaunchNotification:(_Bool)arg1;
- (_Bool)isActivating;
- (void)_setActivationState:(int)arg1;
- (id)_activationStateToString;
- (id)_stringForActivationState:(int)arg1;
- (void)didSuspend;
- (_Bool)shouldLaunchSuspendedAlways;
- (_Bool)suspendingUnsupported;
- (_Bool)shouldLaunchPNGless;
- (void)_setHasBeenLaunched;
- (void)_setRecentlyUpdated:(_Bool)arg1;
- (_Bool)_isRecentlyUpdated;
- (void)_updateRecentlyUpdatedTimer;
- (void)setRunning:(_Bool)arg1;
- (void)_setRunning:(_Bool)arg1;
- (void)didExitWithType:(int)arg1 terminationReason:(int)arg2;
- (void)processDidLaunch:(id)arg1;
- (void)processWillLaunch:(id)arg1;
- (void)_setNewlyInstalled:(_Bool)arg1;
- (_Bool)_isNewlyInstalled;
- (_Bool)hasStartedLaunching;
- (unsigned int)eventPort;
- (id)processState;
- (id)process;
- (void)updateProcessState:(id)arg1;
@property(readonly, nonatomic) _Bool isRunning;
@property(readonly, nonatomic) int pid;
- (void)noteDidOpenURL:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationInfo:(id)arg1 bundle:(id)arg2;
- (id)appInfo;
- (int)applicationSignatureState;
@property(readonly, nonatomic) NSString *signerIdentity;
@property(readonly, nonatomic) _Bool provisioningProfileValidated;
- (void)markApplicationIdentityAsTrusted;
- (void)terminationAssertionRemovedWithReason:(unsigned char)arg1;
- (void)terminationAssertionAddedWithReason:(unsigned char)arg1;
- (_Bool)isCacheCleaningTerminationAssertionHeld;
- (_Bool)isAnyTerminationAssertionHeld;
@property(retain, nonatomic) NSDate *applicationNextWakeDate;
- (void)purgeAllCaches;
- (void)purgeBundleCaches;
- (id)bundle;
- (_Bool)supportsFetchBackgroundMode;
- (_Bool)supportsBackgroundAppRefresh;
- (_Bool)supportsRemoteNotificationBackgroundMode;
- (_Bool)shouldSuppressUserNotificationPermissionAlert;
- (_Bool)isInternalApplication;
- (_Bool)isLaunchableDuringSetup;
- (id)watchKitApplicationVersion;
- (_Bool)isWatchKitApplication;
- (_Bool)isSystemApplication;
- (_Bool)isShellApplication;
- (_Bool)isBeingDebugged;
- (void)setBeingDebugged:(_Bool)arg1;
@property(nonatomic) _Bool showsProgress;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool isSticky;
- (id)_screenFromSceneID:(id)arg1;
- (id)_snapshotCreationDeletionQueueForSceneID:(id)arg1;
- (id)extendedSnapshotData;
- (id)snapshotImage;
- (void)saveSuspendSnapshotForSceneSnapshot:(id)arg1;
- (void)_saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSnapshotForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAllSnapshots;
- (void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)flushSnapshotsForSceneID:(id)arg1;
- (void)flushSnapshotsForAllScenes;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end