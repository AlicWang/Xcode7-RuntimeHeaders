//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkDirectionsListViewController : StarkTableViewController <DirectionsManagerObserver>
{
    CDUnknownBlockType _completion;
    NSArray *_steps;
    long long _stepIndex;
    _Bool _needsToScroll;
    _Bool _hasUserScrolled;
    UIBarButtonItem *_doneBarButtonItem;
}

- (void).cxx_destruct;
- (void)_done;
@property(readonly, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_scrollToCurrentStepIfNeeded:(_Bool)arg1;
- (void)directionsManagerDidUpdateToStepIndex:(id)arg1 stepIndex:(id)arg2;
- (void)directionsManagerDidSwitchToNewRoute:(id)arg1 route:(id)arg2;
- (void)directionsManager:(id)arg1 didReplaceRoute:(id)arg2 withRoute:(id)arg3;
- (void)tableViewWillScrollFromMoveEvent:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateSteps;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end