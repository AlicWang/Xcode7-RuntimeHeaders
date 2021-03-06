//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NanoClockAlertProvider : NSObject <NanoClockAlertViewControllerDelegate, CUISAlertProvider>
{
    id <CUISAlertProviderDelegate> alertProviderDelegate;
    NanoClockAlertViewController *_alertVC;
    id _firingAlarmsListener;
    id _firingTimersListener;
}

@property(retain, nonatomic) id firingTimersListener; // @synthesize firingTimersListener=_firingTimersListener;
@property(retain, nonatomic) id firingAlarmsListener; // @synthesize firingAlarmsListener=_firingAlarmsListener;
@property(retain, nonatomic) NanoClockAlertViewController *alertVC; // @synthesize alertVC=_alertVC;
@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate;
- (void).cxx_destruct;
- (void)_alertsChange;
- (void)snoozeAlertController:(id)arg1;
- (void)dismissAlertController:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end