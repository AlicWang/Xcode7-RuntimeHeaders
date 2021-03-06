//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PasscodeViewController : TransitionViewController <SBUIPasscodeLockViewDelegate>
{
    UIView<SBUIPasscodeLockView> *passcodeLockView;
    UIView *_lockoutView;
    UILabel *_lockoutTimerLabel;
    UILabel *_promptLabel;
    UILabel *_deviceLockedLabel;
    UIButton *_cancelButton;
    NSTimer *_updateTimer;
    NSNumberFormatter *_decimalFormatter;
    unsigned long long _failures;
    NSNumber *_failureLimit;
    NSDate *_blockedUntilDate;
    _Bool _isLockoutActive;
    _Bool _firstTime;
    _Bool _isBlocked;
    _Bool _whitePasscodeScreen;
    _Bool _passcodeEntered;
}

- (void).cxx_destruct;
- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;
- (void)_clearTimer;
- (void)_switchToBackoffScreen:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)_processPasscodeEntryResult:(long long)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)setupLockScreen;
- (int)passcodeLockStyle;
- (void)adjustColors;
- (void)adjustCancelColor;
- (void)loadView;
- (_Bool)isFullScreenController;
- (void)dealloc;
- (void)didReceiveAuthenticationData;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end