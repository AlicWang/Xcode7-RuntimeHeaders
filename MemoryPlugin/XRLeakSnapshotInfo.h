//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRLeakSnapshotInfo : NSObject <NSCoding>
{
    unsigned int _newLeakCount;
    unsigned long long _traceRelativeTime;
}

@property(readonly, nonatomic) unsigned int newLeakCount; // @synthesize newLeakCount=_newLeakCount;
@property(readonly, nonatomic) unsigned long long traceRelativeTime; // @synthesize traceRelativeTime=_traceRelativeTime;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTime:(unsigned long long)arg1 newLeakCount:(unsigned int)arg2;

@end