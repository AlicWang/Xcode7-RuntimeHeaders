//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider>
{
    NSMutableArray *_data;
    NSMutableArray *_activeDataQueries;
    NSMutableSet *_activeQueryTypes;
    HKDataUnitGroup *_dataUnitGroup;
    WDControllerManager *_controllerManager;
    HKUnitController *_unitController;
}

@property(readonly, nonatomic) HKUnitController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) WDControllerManager *controllerManager; // @synthesize controllerManager=_controllerManager;
@property(readonly, nonatomic) HKDataUnitGroup *dataUnitGroup; // @synthesize dataUnitGroup=_dataUnitGroup;
@property(readonly, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)defaultDetailValuesForSample:(id)arg1;
- (void)deleteObjectsAtIndexPath:(id)arg1 withSource:(id)arg2 healthStore:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataListviewControllerDidDeleteAllData:(id)arg1;
- (void)dataListViewController:(id)arg1 didRemoveObjectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
- (void)dataListViewController:(id)arg1 stopCollectingDataWithHealthStore:(id)arg2;
- (unsigned long long)_statisticsOptionsForSampleType:(id)arg1;
- (void)dataListViewController:(id)arg1 startCollectingDataForSource:(id)arg2 healthStore:(id)arg3 forStartDate:(id)arg4 endDate:(id)arg5 updateHandler:(CDUnknownBlockType)arg6;
- (void)_performAdditionalDataHandlingForSource:(id)arg1 healthStore:(id)arg2 forStartDate:(id)arg3 endDate:(id)arg4 updateHandler:(CDUnknownBlockType)arg5;
- (id)dataListViewController:(id)arg1 secondaryTextForObject:(id)arg2;
- (id)dataListViewController:(id)arg1 textForObjectWithUnits:(id)arg2;
- (id)dataListViewController:(id)arg1 textForObject:(id)arg2;
- (id)dataListViewController:(id)arg1 objectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
- (unsigned long long)dataListViewController:(id)arg1 numberOfObjectsForSection:(unsigned long long)arg2;
- (id)dataListViewController:(id)arg1 titleForSection:(unsigned long long)arg2;
- (unsigned long long)numberOfSectionsForDataListViewController:(id)arg1;
- (long long)cellStyleForDataListViewController:(id)arg1;
- (id)_queryPredicateForSource:(id)arg1 type:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)restorationIdentifier;
- (id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end