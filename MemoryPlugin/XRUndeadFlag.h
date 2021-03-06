//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRUndeadFlag : XRTimeFlag
{
    XRObjectAllocInstrument *_oainstrument;
    NSString *_instrumentUUID;
    unsigned int _zombieAllocationID;
}

+ (void)initialize;
- (void)_showZombieInformation:(id)arg1;
- (id)instrument;
- (id)dataElementsForContext:(id)arg1;
- (id)detailedSummary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 zombieEvent:(id)arg2 instrument:(id)arg3;

@end