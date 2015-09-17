//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCUIRecorderService_iOS : NSObject <UIGestureRecognizerDelegate>
{
    int _eventCount;
    int _keyEventCounter;
    int _keyEventCountForLastFirstResponderChanged;
    _Bool _recordingEnabled;
    _Bool _enabledAccelerometer;
    id <XCTestManager_IDEInterface> _client;
    XCUIRecorderAction *_currentAction;
    XCElementSnapshot *_snapshotForCurrentEventSequence;
    NSTimer *_reportRetryTimer;
    NSNumber *_hidEventNotificationToken;
    NSNumber *_firstResponderChangedNotificationToken;
    int _processPID;
    NSArray *_applicationSnapshotAttributes;
    NSDictionary *_applicationSnapshotParameters;
    NSArray *_elementSnapshotAttributes;
    NSDictionary *_elementSnapshotParameters;
    NSArray *_simpleTargetGestureNames;
    NSDictionary *_touchBeganLocation;
}

@property _Bool enabledAccelerometer; // @synthesize enabledAccelerometer=_enabledAccelerometer;
@property(retain) NSDictionary *touchBeganLocation; // @synthesize touchBeganLocation=_touchBeganLocation;
@property(retain) NSArray *simpleTargetGestureNames; // @synthesize simpleTargetGestureNames=_simpleTargetGestureNames;
@property(retain) NSDictionary *elementSnapshotParameters; // @synthesize elementSnapshotParameters=_elementSnapshotParameters;
@property(retain) NSArray *elementSnapshotAttributes; // @synthesize elementSnapshotAttributes=_elementSnapshotAttributes;
@property(retain) NSDictionary *applicationSnapshotParameters; // @synthesize applicationSnapshotParameters=_applicationSnapshotParameters;
@property(retain) NSArray *applicationSnapshotAttributes; // @synthesize applicationSnapshotAttributes=_applicationSnapshotAttributes;
@property int processPID; // @synthesize processPID=_processPID;
@property(retain) NSNumber *firstResponderChangedNotificationToken; // @synthesize firstResponderChangedNotificationToken=_firstResponderChangedNotificationToken;
@property(retain) NSNumber *hidEventNotificationToken; // @synthesize hidEventNotificationToken=_hidEventNotificationToken;
@property(retain) NSTimer *reportRetryTimer; // @synthesize reportRetryTimer=_reportRetryTimer;
@property _Bool recordingEnabled; // @synthesize recordingEnabled=_recordingEnabled;
@property(retain) XCElementSnapshot *snapshotForCurrentEventSequence; // @synthesize snapshotForCurrentEventSequence=_snapshotForCurrentEventSequence;
@property(retain) XCUIRecorderAction *currentAction; // @synthesize currentAction=_currentAction;
@property(retain) id <XCTestManager_IDEInterface> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_recognizedGestures:(id)arg1;
- (void)_reportDeferredActionForEventCount:(id)arg1;
- (void)_processHandEvent:(id)arg1;
- (id)stringForHandEventType:(unsigned int)arg1;
- (id)_elementSnapshotForLocation:(struct CGPoint)arg1 rootElementSnapshot:(id *)arg2;
- (void)_handleHIDEventReceived:(id)arg1;
- (void)stopRecording;
- (void)_registerForKeyEventNotification;
- (void)startRecordingProcessPID:(int)arg1 applicationSnapshotAttributes:(id)arg2 applicationSnapshotParameters:(id)arg3 elementSnapshotAttributes:(id)arg4 elementSnapshotParameters:(id)arg5 simpleTargetGestureNames:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end