//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLChargingAlertView : UIView
{
    UILabel *_chargingStateLabel;
    UIImageView *_chargingStateImageView;
    CSLBatteryLevelRingView *_ringView;
    NSNumberFormatter *_percentageFormatter;
    float _batteryLevel;
    int _batteryState;
}

@property(nonatomic) int batteryState; // @synthesize batteryState=_batteryState;
@property(nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
- (void).cxx_destruct;
- (float)_lowBatteryThreshold;
- (id)_imageForBatteryLevel:(float)arg1;
- (id)_textForBatteryState:(int)arg1 batteryLevel:(float)arg2;
- (void)layoutSubviews;

@end