//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersCardVerticalPanAnimator : NSObject
{
    _UIDynamicValueAnimation *_panningAnimation;
    UIPanGestureRecognizer *_gestureRecognizer;
    UIView *_panningCardView;
    double _panningViewTargetScale;
    struct CGPoint _panningViewStartPosition;
    struct CGPoint _panningViewTargetPosition;
}

@property(nonatomic) double panningViewTargetScale; // @synthesize panningViewTargetScale=_panningViewTargetScale;
@property(nonatomic) struct CGPoint panningViewTargetPosition; // @synthesize panningViewTargetPosition=_panningViewTargetPosition;
@property(nonatomic) struct CGPoint panningViewStartPosition; // @synthesize panningViewStartPosition=_panningViewStartPosition;
@property(retain, nonatomic) UIView *panningCardView; // @synthesize panningCardView=_panningCardView;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (void)dismissWithStartVelocity:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3;
- (void)layoutViewsWithY:(double)arg1;
- (void)stop;
- (id)initWithCardView:(id)arg1;

@end