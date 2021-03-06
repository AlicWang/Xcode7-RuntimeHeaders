//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CompactMonthListAnimator : NSObject <UIViewControllerAnimatorTransitioning>
{
    _Bool _reverse;
    _Bool _animating;
    CompactWidthMonthViewController *_monthViewController;
    CompactListViewController *_listViewController;
    CalendarModel *_model;
    PaletteView *_paletteView;
    struct CGPoint _listViewNormalLocation;
    struct CGPoint _monthViewSplittingLocation;
    struct CGRect _monthSplittingCutOutArea;
}

@property(retain, nonatomic) PaletteView *paletteView; // @synthesize paletteView=_paletteView;
@property(retain, nonatomic) CalendarModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) struct CGRect monthSplittingCutOutArea; // @synthesize monthSplittingCutOutArea=_monthSplittingCutOutArea;
@property(nonatomic) struct CGPoint monthViewSplittingLocation; // @synthesize monthViewSplittingLocation=_monthViewSplittingLocation;
@property(nonatomic) struct CGPoint listViewNormalLocation; // @synthesize listViewNormalLocation=_listViewNormalLocation;
@property(retain, nonatomic) CompactListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) CompactWidthMonthViewController *monthViewController; // @synthesize monthViewController=_monthViewController;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
- (void).cxx_destruct;
- (void)_haltAnimations;
- (void)animateToMonthWithCompletion:(CDUnknownBlockType)arg1 inContext:(id)arg2;
- (void)animateToListWithCompletion:(CDUnknownBlockType)arg1 inContext:(id)arg2;
- (void)_terminateAnimationsAfterDelay;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithModel:(id)arg1 paletteView:(id)arg2 reverse:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end