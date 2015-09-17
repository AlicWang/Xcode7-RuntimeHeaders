//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHCallConfiguration : NSObject
{
    NSArray *_calls;
    NSArray *_callsOnDefaultPairedDevice;
    TUDialRequest *_dialPrompt;
    TUDialRequest *_redialPrompt;
    NPHCall *_callEnding;
    NPHCall *_callHandingOff;
    NPHCall *_callHandingOffToGizmo;
    NPHCallConfigurationChangeSource *_source;
}

+ (void)log:(id)arg1 withReason:(id)arg2;
+ (id)callConfigurationWithIncomingCallOverrideName:(id)arg1 incomingCallStatus:(int)arg2 activeCallOverrideName:(id)arg3 activeCallStatus:(int)arg4 activeCallDisconnectedReason:(int)arg5 heldCallOverrideName:(id)arg6 heldCallStatus:(int)arg7 outgoingCallOverrideName:(id)arg8 outgoingCallStatus:(int)arg9 source:(id)arg10;
@property(retain, nonatomic) NPHCallConfigurationChangeSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NPHCall *callHandingOffToGizmo; // @synthesize callHandingOffToGizmo=_callHandingOffToGizmo;
@property(retain, nonatomic) NPHCall *callHandingOff; // @synthesize callHandingOff=_callHandingOff;
@property(retain, nonatomic) NPHCall *callEnding; // @synthesize callEnding=_callEnding;
@property(retain, nonatomic) TUDialRequest *redialPrompt; // @synthesize redialPrompt=_redialPrompt;
@property(retain, nonatomic) TUDialRequest *dialPrompt; // @synthesize dialPrompt=_dialPrompt;
@property(readonly, nonatomic) NSArray *callsOnDefaultPairedDevice; // @synthesize callsOnDefaultPairedDevice=_callsOnDefaultPairedDevice;
@property(readonly, nonatomic) NSArray *calls; // @synthesize calls=_calls;
- (void).cxx_destruct;
- (void)_log;
- (void)removeCallsPassingTest:(CDUnknownBlockType)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *callsFailed;
@property(readonly, nonatomic) NPHCall *callToAnswerOnPhone;
@property(readonly, nonatomic) NPHCall *currentCall;
@property(readonly, nonatomic) NPHCall *activeCall;
@property(readonly, nonatomic) NPHCall *incomingCall;
@property(readonly, nonatomic) NSArray *callsNotDeclined;
@property(readonly, nonatomic) NSArray *callsOngoing;
@property(readonly, nonatomic) NSArray *callsEnding;
@property(readonly, nonatomic) NSArray *callsEnded;
- (id)init;
- (id)initWithCalls:(id)arg1 andCallsOnDefaultPairedDevice:(id)arg2 source:(id)arg3;

@end