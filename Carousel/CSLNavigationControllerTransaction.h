//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLNavigationControllerTransaction : IOSSHLTransaction <CSLNavigationControllerInterface, CSLNavigationControllerEventDelegate>
{
    _Bool _shouldDismissPresentedController;
    _Bool _shouldRemoveObserverOnCompletion;
    _Bool _shouldWatchdog;
    CDUnknownBlockType _actionBlock;
    id <CSLNavigationControllerDelegateForwarding> _navigationEventSource;
    CDUnknownBlockType _willBeginHandler;
    CDUnknownBlockType _didCompleteHandler;
    UINavigationController *_navigationController;
    NSString *_watchdogDeclineReason;
}

@property(copy, nonatomic) NSString *watchdogDeclineReason; // @synthesize watchdogDeclineReason=_watchdogDeclineReason;
@property(nonatomic) _Bool shouldWatchdog; // @synthesize shouldWatchdog=_shouldWatchdog;
@property(nonatomic) _Bool shouldRemoveObserverOnCompletion; // @synthesize shouldRemoveObserverOnCompletion=_shouldRemoveObserverOnCompletion;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool shouldDismissPresentedController; // @synthesize shouldDismissPresentedController=_shouldDismissPresentedController;
@property(copy, nonatomic) CDUnknownBlockType didCompleteHandler; // @synthesize didCompleteHandler=_didCompleteHandler;
@property(copy, nonatomic) CDUnknownBlockType willBeginHandler; // @synthesize willBeginHandler=_willBeginHandler;
@property(nonatomic) __weak id <CSLNavigationControllerDelegateForwarding> navigationEventSource; // @synthesize navigationEventSource=_navigationEventSource;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 animator:(id)arg5;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_removeMilestonesForNavigationControllerUpdates;
- (void)_addMilestonesForNavigationControllerUpdateEventsIfPossible;
- (void)_didExecuteAction;
- (void)_assertWaitingOnAction;
- (void)executeActionBlock;
- (void)_begin;
- (void)_willBegin;
- (_Bool)shouldWatchdog:(id *)arg1;
- (void)setDeclinesWatchdogWithReason:(id)arg1;
- (id)initWithNavigationController:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end