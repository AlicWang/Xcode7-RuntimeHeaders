//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface QueueItem : NSObject
{
    XRDispatchObject *object;
    unsigned long long pushTime;
    unsigned long long invokeTime;
    id addBlockStack;
    BOOL isSync;
    int state;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 timestamp:(unsigned long long)arg2 stack:(id)arg3 sync:(BOOL)arg4;

@end