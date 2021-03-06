//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface WDDashboardChartItem : NSObject <WDGroupDataProviderDelegate>
{
    NSDictionary *_dataPoints;
    _Bool _isActive;
    WDGroupDataProvider *_dataProvider;
    HKUnitController *_unitController;
    _Bool _localeDidChange;
    id <WDDashboardChartItemDelegate> _delegate;
    HKDataUnitGroup *_dataUnitGroup;
    HKDataCategory *_dataCategory;
    WDChartRenderer *_chartRenderer;
    long long _timeScope;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(nonatomic) _Bool localeDidChange; // @synthesize localeDidChange=_localeDidChange;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(readonly, nonatomic) WDChartRenderer *chartRenderer; // @synthesize chartRenderer=_chartRenderer;
@property(readonly, nonatomic) HKDataCategory *dataCategory; // @synthesize dataCategory=_dataCategory;
@property(readonly, nonatomic) HKDataUnitGroup *dataUnitGroup; // @synthesize dataUnitGroup=_dataUnitGroup;
@property(nonatomic) __weak id <WDDashboardChartItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_chartInsetsForTimeScope:(long long)arg1;
- (id)_getCurrentValueForUnit:(id)arg1;
- (void)_setStartDate:(id)arg1 endDate:(id)arg2 timeScope:(long long)arg3;
- (void)groupDataProviderDidUpdateSecondaryData:(id)arg1;
- (void)groupDataProviderDidUpdateCurrentValueData:(id)arg1;
- (void)groupDataProviderDidUpdateHistoricalData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1;
- (_Bool)shouldHideAverageLineForTimeScope:(long long)arg1;
- (void)updateDateRangeWithDateCache:(id)arg1 timeScope:(long long)arg2;
@property(readonly, nonatomic) NSAttributedString *secondaryValue;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) UIImage *mostRecentValueUnitIcon;
@property(readonly, nonatomic) NSString *mostRecentValueUnitString;
- (id)mostRecentValueWithValueFont:(id)arg1 unitFont:(id)arg2;
- (void)invalidateChart;
- (void)deactivate;
- (void)activate;
- (id)init;
- (id)initWithDataUnitGroup:(id)arg1 dataCategory:(id)arg2 unitController:(id)arg3 healthStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end