//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLGlanceChangedPreheatScheduleProvider : NSObject <CSLPrelaunchScheduleProvider>
{
    _Bool _needsPreheat;
    id <CSLPrelaunchScheduleProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CSLGlanceSwitcherViewController *_glanceSwitcherViewController;
}

@property(retain, nonatomic) CSLGlanceSwitcherViewController *glanceSwitcherViewController; // @synthesize glanceSwitcherViewController=_glanceSwitcherViewController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSLPrelaunchScheduleProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleGlancesNeedPreheatNotification:(id)arg1;
- (_Bool)execute;
- (id)nextScheduledDate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end