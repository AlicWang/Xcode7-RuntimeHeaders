//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKClientProxy : NSObject <GKClientProtocol, _GKStateMachineDelegate>
{
    _Bool _deniedProductionEnvironment;
    _Bool _productionSigned;
    _Bool _installed;
    _Bool _supportsMultipleActivePlayers;
    unsigned char _achievementsRateLimitedCurrentState;
    unsigned char _scoresRateLimitedCurrentState;
    _Bool _initialized;
    int _pid;
    unsigned int _applicationState;
    unsigned int _previousApplicationState;
    GKClientProxy<GKUIViewService> *_weakViewService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_authQueue;
    NSXPCConnection *_connection;
    GKEntitlements *_entitlements;
    NSNumber *_adamID;
    NSNumber *_externalVersion;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    long long _environment;
    NSDate *_achievementsRateLimitingStartDate;
    long long _achievementsRateLimitingCurrentNumberOfRequests;
    NSDate *_scoresRateLimitingStartDate;
    long long _scoresRateLimitingCurrentNumberOfRequests;
    NSString *_language;
    GKGameInternal *_currentGame;
    GKEventTuple *_launchEvent;
    GKQuickAction *_pendingQuickAction;
    GKInviteSession *_inviteSession;
    GKMatchResponse *_currentMatchResponse;
    _GKStateMachine *_initAppStateMachine;
    GKThreadsafeDictionary *_appSessions;
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;
    GKDatabaseConnection *_delayedRequestsDBConnection;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    GKResourceManager *_resourceManager;
    NSMutableSet *_pendingDataTypesForRefresh;
    NSMapTable *_extensionProxies;
}

+ (id)syncQueue;
+ (id)newManagedObjectContextForClient:(id)arg1 player:(id)arg2;
+ (id)_newManagedObjectContextForPlayer:(id)arg1;
+ (id)cacheFileQueue;
+ (id)managedObjectModel;
+ (void)removeAllCaches;
+ (void)removeCacheForPlayer:(id)arg1;
+ (id)cacheFileURLForClient:(id)arg1 player:(id)arg2;
+ (id)cacheDirectoryURLForClient:(id)arg1 player:(id)arg2;
+ (id)cacheDirectoryForBundleID:(id)arg1 environment:(long long)arg2;
+ (id)contextKeyForPlayer:(id)arg1;
+ (void)removeClient:(id)arg1;
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)clientsToBeEnumerated;
+ (id)clientForMatchmakingRID:(id)arg1;
+ (id)clientForInviteSessionToken:(id)arg1;
+ (id)foregroundClient;
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;
+ (_Bool)isExtensionBundleID:(id)arg1;
+ (id)clientForProcessIdentifier:(int)arg1;
+ (id)clientForBundleID:(id)arg1;
+ (id)gameCenterClient;
+ (id)_clientLookup;
+ (id)factoryQueue;
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;
+ (void)authenticationDidChange;
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain, nonatomic) NSMutableSet *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *initAppStateMachine; // @synthesize initAppStateMachine=_initAppStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKQuickAction *pendingQuickAction; // @synthesize pendingQuickAction=_pendingQuickAction;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) _Bool productionSigned; // @synthesize productionSigned=_productionSigned;
@property(nonatomic) _Bool deniedProductionEnvironment; // @synthesize deniedProductionEnvironment=_deniedProductionEnvironment;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)processMatchResponse:(id)arg1;
- (void)checkMatchStatus;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)performSync:(CDUnknownBlockType)arg1;
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;
@property(nonatomic) GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_weakViewService;
- (_Bool)isExtension;
- (_Bool)isUIService;
- (_Bool)isGameCenter;
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)resetCache:(id)arg1;
- (void)_setupCache;
- (id)credentialForPlayer:(id)arg1;
- (id)transportWithCredential:(id)arg1;
- (void)dealloc;
- (void)updateIfRecentlyInstalled;
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;
- (void)initializeInitializationStateMachine;
- (void)invalidateStoreFrontDependentObjects;
- (id)transactionGroupIfCacheExistsForPlayer:(id)arg1;
- (id)transactionGroupForPlayer:(id)arg1;
- (id)_managedObjectContextForPlayer:(id)arg1;
- (id)_existingManagedObjectContextForPlayer:(id)arg1;
- (oneway void)processQuickAction:(id)arg1;
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;
- (void)didEnterForeground;
- (void)updateAppInitState;
- (id)verifyAuthorized;
- (id)appInitState;
- (_Bool)setAppInitState:(id)arg1;
- (void)stateDidChange;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)sendAuthenticationDidChangeNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAppSessionForPlayer:(id)arg1;
- (id)appSessionForPlayer:(id)arg1;
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)setLogBits:(int)arg1;
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setPreferencesValues:(id)arg1;
- (oneway void)refreshPendingDataTypes;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (oneway void)relayPushNotification:(id)arg1;
- (oneway void)cancelGameInvite:(id)arg1;
- (oneway void)declineInviteWithNotification:(id)arg1;
- (oneway void)acceptInviteWithNotification:(id)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)fetchTurnBasedData;
- (oneway void)achievementSelected:(id)arg1;
- (oneway void)scoreSelected:(id)arg1;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (oneway void)completedChallengeSelected:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)friendRequestSelected:(id)arg1;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
- (void)performDelayedRequestsForCredential:(id)arg1;
- (void)performDelayedRequestsForEnvironment:(long long)arg1;
- (void)performPassThroughScoreRequestsForEnvironment:(long long)arg1;
- (void)performPassThroughAchievementRequestsForEnvironment:(long long)arg1;
- (id)removeFriendWriterWithCredential:(id)arg1;
- (id)removeGameWriterWithCredential:(id)arg1;
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;
- (id)setPlayerStatusWriterWithCredential:(id)arg1;
- (id)abortChallengesWriterWithCredential:(id)arg1;
- (id)issueChallengesWriterWithCredential:(id)arg1;
- (id)submitAchievementsWriterWithCredential:(id)arg1;
- (id)submitRatingsWriterWithCredential:(id)arg1;
- (id)rejectFriendRequestsWriterWithCredential:(id)arg1;
- (id)acceptFriendRequestsWriterWithCredential:(id)arg1;
- (id)issueFriendRequestsWriterWithCredential:(id)arg1;
- (id)submitScoresWriterWithCredential:(id)arg1;
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;
- (void)_removeDelayedRequestStore;
- (void)_setupDelayedRequestsWriters;
- (id)requestsCacheForEnvironment:(long long)arg1;
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end