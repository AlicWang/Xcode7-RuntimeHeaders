//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NLWeeklyGoalSettingView : UIView <PUICCrownInputSequencerDelegate>
{
    _Bool _showRecommendationInSummary;
    UILabel *_titleLabel;
    UILabel *_recommendedGoalLabel;
    NSDictionary *_titleAttributes;
    NSDictionary *_recommendationAttributes;
    float _titleHeight;
    float _recommendationHeight;
    UIView *_energyView;
    UILabel *_energyLabel;
    UIButton *_minusButton;
    UIButton *_plusButton;
    float _height;
    PUICCrownInputSequencer *_inputSequencer;
    CUISAlertPlatterView *_goalSettingPlatterView;
    HKQuantity *_weeklyGoal;
}

@property(readonly, nonatomic) HKQuantity *weeklyGoal; // @synthesize weeklyGoal=_weeklyGoal;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)incrementEnergy:(id)arg1;
- (void)decrementEnergy:(id)arg1;
- (id)_energyUnit;
- (double)_valueIncrement;
- (double)_maximumAllowedValue;
- (double)_minimumAllowedValue;
- (void)layoutSubviews;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (double)_stepAdjustedValueForRawValue:(double)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)_populateWeeklyGoalText;
- (void)_populateTitle;
- (void)_setupGoalEditor;
- (void)_setupCrownInput;
- (void)_unitPreferencesDidChange;
- (void)dealloc;
- (id)init;
- (id)initWithRecommendedNewGoal:(id)arg1 showRecommendationInSummary:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end