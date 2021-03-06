//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEGaugeDebuggingAddition : NSObject <IDEDebuggingAddition>
{
    IDEDebugSession *_debugSession;
    DVTObservingToken *_queryModeObserverToken;
    DVTObservingToken *_debugSessionStateObservingToken;
    DVTObservingToken *_gaugesForObserversStateObservingToken;
    BOOL _dataQueryReportMode;
    BOOL _hasStarted;
    NSString *_identifier;
    IDELaunchSession *_launchSession;
    IDEGaugeDataQuery *_dataQuery;
    NSMutableArray *_collectedQueryResults;
    NSMutableArray *_queryResultListeners;
}

+ (void)initialize;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property(nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(retain, nonatomic) NSMutableArray *queryResultListeners; // @synthesize queryResultListeners=_queryResultListeners;
@property(retain, nonatomic) NSMutableArray *collectedQueryResults; // @synthesize collectedQueryResults=_collectedQueryResults;
@property(retain, nonatomic) IDEGaugeDataQuery *dataQuery; // @synthesize dataQuery=_dataQuery;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property BOOL dataQueryReportMode; // @synthesize dataQueryReportMode=_dataQueryReportMode;
- (void).cxx_destruct;
- (void)discardDataQueries;
- (void)resumeDataQueries;
- (void)suspendDataQueries;
- (void)createDataQueries;
- (id)dataQueryAttributes;
- (void)removeCollectedDataListener:(id)arg1;
- (void)addCollectedDataListener:(id)arg1;
- (void)processFinalLaunchParameters:(id)arg1;
- (void)processQueryResultDict:(id)arg1;
- (id)gaugeDataQueryCoordinator;
- (id)pid;
- (id)device;
- (void)primitiveInvalidate;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end