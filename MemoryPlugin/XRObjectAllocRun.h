//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRObjectAllocRun : XRRun <SymbolAwareRun, XRSourceQuery, XRCallTreeDataSource>
{
    XRObjectAllocRunSharedData *_sharedData;
    NSMutableArray *_allStats;
    NSMutableDictionary *_statsForCategory;
    NSMutableDictionary *_categoryIDForName;
    XROAEventSummary *_scaleStats;
    NSMutableArray *_generations;
    NSArray *_graphedCategories;
    struct XRTimeRange _filterTimeRange;
    unsigned int _filterMinEventID;
    unsigned int _filterMaxEventID;
    unsigned long long _nextGenNumber;
    NSMutableDictionary *_samplesByCategoryNumber;
    unsigned long long _catNumIndex;
    struct XRTimeRange _currentStatsFilterRange;
    int _lifecycleFilter;
    int _allocationTypeFilter;
    unsigned int *_quickEventCacheIds;
    id *_quickEventCache;
    XRHeapGeneration *_activeGeneration;
}

+ (void)initialize;
- (id)operation:(id)arg1 commentsForSymbol:(id)arg2 inSourceManager:(id)arg3 callTreeInformation:(id)arg4;
- (id)provideCategories;
- (id)backtracesForCategory:(id)arg1 timeRange:(struct XRTimeRange)arg2 savedIndex:(unsigned long long *)arg3;
- (void)_configureCallTreeForAllocationType:(int)arg1;
- (id)symbolsForEvent:(id)arg1 reverseOrder:(BOOL)arg2;
- (id)backtraceRepository;
- (BOOL)eventIsLiveInCurrentTimeRange:(id)arg1;
- (unsigned int)uncategorizedCount;
- (unsigned int)countOfObjectEventsForCategory:(unsigned int)arg1;
- (void)enumerateObjectEventsForCategory:(unsigned int)arg1 skipToIndex:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (BOOL)_applyLifecycleFilterToEvent:(id)arg1;
- (id)zombieEvent;
- (id)eventForIdentifier:(unsigned int)arg1;
- (BOOL)loadDTPerformanceSessionDataFromPaths:(id)arg1 error:(id *)arg2;
- (void)updateGenerations;
- (void)deleteGeneration:(id)arg1;
- (void)moveGeneration:(id)arg1 toTime:(unsigned long long)arg2;
- (void)setActiveGeneration:(id)arg1;
- (id)generationAtTime:(unsigned long long)arg1;
- (id)generations;
- (id)nextGenerationIdentifier;
- (void)createGenerationAtTime:(unsigned long long)arg1;
- (void)removeFlag:(id)arg1;
- (struct XRTimeRange)_displayTimeFilter;
- (BOOL)_isTimeScoped;
- (BOOL)useTypeFilteringRules:(id)arg1;
- (void)setAllocationTypeFilter:(int)arg1;
- (void)setLifecycleFilter:(int)arg1;
- (struct XRTimeRange)selectedTimeRange;
- (void)setSelectedTimeRange:(struct XRTimeRange)arg1;
- (id)categoryNameForIdentifier:(unsigned int)arg1;
- (id)globalStats;
- (id)scalingStats;
- (void)_clearStats;
- (void)allowEventReuse;
- (void)refreshStatsForActiveTimeFilter;
- (void)_updateStatsWithEventIdentifier:(unsigned int)arg1 category:(unsigned int)arg2 type:(unsigned int)arg3 size:(int)arg4 pastEvent:(unsigned int)arg5 summaryMap:(id *)arg6 maxCat:(unsigned int)arg7;
- (id)_statsObjectForCategoryID:(unsigned int)arg1;
- (void)_changeStatsByTimestampRange:(struct XRTimeRange)arg1 overallRange:(struct XRTimeRange)arg2 startID:(unsigned int)arg3 endID:(unsigned int)arg4;
- (id *)_createCategorySummaryMapWithMaximum:(unsigned int)arg1;
- (void)_validateGlobalStatsForTimeRange:(struct XRTimeRange)arg1;
- (void)_recomputeGlobalStats;
- (void)setNeedsForceReloadData;
- (id)graphedCategories;
- (void)setGraphedCategories:(id)arg1;
- (BOOL)discardsLifeCycleComplete;
- (unsigned long long)lastTimestamp;
- (id)sharedData;
- (void)setRecordingMode:(unsigned long long)arg1;
- (void)setDiscardsLifeCycleComplete:(BOOL)arg1;
- (void)setTargetDevice:(id)arg1 pid:(int)arg2 repository:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end