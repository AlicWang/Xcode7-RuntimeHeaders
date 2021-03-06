//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NDCallbackQueue : NSObject
{
    NSMutableArray *_callbacks;
    id <NDCallbackQueueDelegate> _delegate;
}

@property __weak id <NDCallbackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)count;
- (void)drainCallbacksForTaskIdentifier:(unsigned int)arg1;
- (void)performAllCallbacks;
- (void)addPendingCallback:(id)arg1 forceWakeup:(_Bool)arg2;
- (void)addPendingCallbackToFront:(id)arg1;
- (void)drainCallback:(id)arg1;
- (void)performCallback:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end