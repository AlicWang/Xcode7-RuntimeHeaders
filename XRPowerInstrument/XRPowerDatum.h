//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRPowerDatum : NSObject
{
    struct XRTimeRange _range;
}

@property(readonly, nonatomic) struct XRTimeRange time; // @synthesize time=_range;
- (id)objectValueForColumn:(long long)arg1;
- (id)stringValueForColumn:(long long)arg1;
- (id)stringForTimeColumn:(struct XRTimeRange)arg1;
- (id)labelForGraph:(long long)arg1;
- (id)labelForColumn:(long long)arg1;
- (id)initWithTimeRange:(struct XRTimeRange)arg1;
- (id)init;

@end