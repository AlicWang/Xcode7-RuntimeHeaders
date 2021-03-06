//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSVSSiriTaskTranslator : NSObject
{
    SUICPluginManager *_pluginManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_messageRequestForShowSmsMessageCommand:(id)arg1;
- (id)_stockRequestForStockSnippet:(id)arg1;
- (int)_conditionsForAceConditionCode:(id)arg1;
- (int)_forecastTypeForWeatherRequestType:(id)arg1;
- (id)_temperatureObjectForTemperature:(id)arg1 units:(int)arg2;
- (int)_temperatureUnitForAceTemperatureUnit:(id)arg1;
- (id)_convertedTemperature:(id)arg1;
- (id)_weatherRequestForForecastSnippet:(id)arg1;
- (id)sockPuppetViewControllerForRequest:(id)arg1;
- (id)viewControllerForRequest:(id)arg1;
- (id)transcriptItemsForAceView:(id)arg1;
- (id)init;

@end