//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRKEvent : XRManagedEvent
{
    unsigned long long _timestamp;
    int _pid;
    unsigned long long _tid;
    unsigned int _cpuIndex;
    unsigned int _userStack;
    CDUnion_f44b072f _eventCode;
}

+ (void)configureDescriptor:(id)arg1 forStorageManager:(id)arg2;
@property CDUnion_f44b072f eventCode; // @synthesize eventCode=_eventCode;
@property unsigned int cpuIndex; // @synthesize cpuIndex=_cpuIndex;
@property unsigned long long tid; // @synthesize tid=_tid;
@property int pid; // @synthesize pid=_pid;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (long long)compareTimeStamp:(id)arg1;
@property(readonly) id <CommonRawStack> userStack;

@end