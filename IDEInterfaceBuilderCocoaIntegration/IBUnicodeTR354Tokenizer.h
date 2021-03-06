//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUnicodeTR354Tokenizer : IBDateTokenizer
{
    NSArray *_quarterOptions;
    NSArray *_weekdayOptions;
    NSArray *_periodOptions;
    NSArray *_minuteOptions;
    NSArray *_secondOptions;
    NSArray *_monthOptions;
    NSArray *_yearOptions;
    NSArray *_weekOptions;
    NSArray *_hourOptions;
    NSArray *_zoneOptions;
    NSArray *_dayOptions;
    NSArray *_eraOptions;
}

+ (long long)fieldTypeForUnichar:(unsigned short)arg1;
+ (id)possibleFieldTypes;
+ (id)unicodeTR354TokenizerWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)_setEraOptions:(id)arg1;
- (void)_setDayOptions:(id)arg1;
- (void)_setZoneOptions:(id)arg1;
- (void)_setHourOptions:(id)arg1;
- (void)_setWeekOptions:(id)arg1;
- (void)_setYearOptions:(id)arg1;
- (void)_setMonthOptions:(id)arg1;
- (void)_setSecondOptions:(id)arg1;
- (void)_setMinuteOptions:(id)arg1;
- (void)_setPeriodOptions:(id)arg1;
- (void)_setWeekdayOptions:(id)arg1;
- (void)_setQuarterOptions:(id)arg1;
- (void)_regenerateTokenOptions;
- (void)setDelegate:(id)arg1;
- (id)_zoneTokenWithType:(id)arg1 count:(id)arg2;
- (id)_secondTokenWithType:(id)arg1 count:(id)arg2;
- (id)_minuteTokenWithType:(id)arg1 count:(id)arg2;
- (id)_hourTokenWithType:(id)arg1 count:(id)arg2;
- (id)_periodTokenWithType:(id)arg1 count:(id)arg2;
- (id)_weekdayTokenWithType:(id)arg1 count:(id)arg2;
- (id)_dayTokenWithType:(id)arg1 count:(id)arg2;
- (id)_weekTokenWithType:(id)arg1 count:(id)arg2;
- (id)_monthTokenWithType:(id)arg1 count:(id)arg2;
- (id)_quarterTokenWithType:(id)arg1 count:(id)arg2;
- (id)_yearTokenWithType:(id)arg1 count:(id)arg2;
- (id)_eraTokenWithType:(id)arg1 count:(id)arg2;
- (id)_possibleFieldSelectors;
- (id)_matchPattern:(unsigned short)arg1 count:(unsigned long long)arg2;
- (id)tokenizeString:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end