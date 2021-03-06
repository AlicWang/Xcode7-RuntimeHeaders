//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRKEventsInstrumentPlugin : PFTInstrumentPlugin <XRDeviceLogImporter>
{
    NSMutableDictionary *_pairByDeviceID;
}

+ (id)colorsByThreadState;
- (void).cxx_destruct;
- (BOOL)importFromPaths:(id)arg1 forInstruments:(id)arg2 error:(id *)arg3;
- (void)importSession:(id)arg1 fromDevice:(id)arg2 intoTrace:(id)arg3;
- (id)createInstrumentsForImport;
- (void)voteForEpoch:(id)arg1 withInstruments:(id)arg2 fromDevice:(id)arg3;
- (void)endInstruments:(id)arg1 forCommand:(id)arg2;
- (void)willEndInstruments:(id)arg1 forCommand:(id)arg2;
- (BOOL)prepareInstruments:(id)arg1 forCommand:(id)arg2 error:(id *)arg3;
- (BOOL)verifyInstruments:(id)arg1 performCommand:(id)arg2 error:(id *)arg3;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end