//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLAlertTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    CSLAlertTransitionContext *_transitionContext;
    unsigned int _transitionStyle;
    id <CSLAlertTransitionAnimatorDelegate> _delegate;
    CUISAlertViewController *_startingViewController;
    CUISAlertViewController *_endingViewController;
    id <CUISAlertAnimatedTransitioning> _startingAnimator;
    id <CUISAlertAnimatedTransitioning> _endingAnimator;
    CUISAlertTransitionContext *_startingContext;
    CUISAlertTransitionContext *_endingContext;
    CUISAlertViewController *_appearingViewController;
}

@property(retain, nonatomic) CUISAlertViewController *appearingViewController; // @synthesize appearingViewController=_appearingViewController;
@property(retain, nonatomic) CUISAlertTransitionContext *endingContext; // @synthesize endingContext=_endingContext;
@property(retain, nonatomic) CUISAlertTransitionContext *startingContext; // @synthesize startingContext=_startingContext;
@property(retain, nonatomic) id <CUISAlertAnimatedTransitioning> endingAnimator; // @synthesize endingAnimator=_endingAnimator;
@property(retain, nonatomic) id <CUISAlertAnimatedTransitioning> startingAnimator; // @synthesize startingAnimator=_startingAnimator;
@property(retain, nonatomic) CUISAlertViewController *endingViewController; // @synthesize endingViewController=_endingViewController;
@property(retain, nonatomic) CUISAlertViewController *startingViewController; // @synthesize startingViewController=_startingViewController;
@property(nonatomic) __weak id <CSLAlertTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(retain, nonatomic) CSLAlertTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)tellDelegateWillShowAppearingAlert;
- (void)configureAlertContext:(id)arg1 withContext:(id)arg2;
- (void)configureAlertContextsWithContext:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithAppearingViewController:(id)arg1 disappearingViewController:(id)arg2 transitionStyle:(unsigned int)arg3 transitionContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end