//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKBubbleSegmentedControlFloatInAnimatorView : UIView
{
    GKBubbleSegmentedControlContext *_context;
    _UIBackdropView *_backdropView;
    UIView *_knockoutView;
    UIView *_dimmingView;
}

+ (id)animatorForContext:(id)arg1;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIView *knockoutView; // @synthesize knockoutView=_knockoutView;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) GKBubbleSegmentedControlContext *context; // @synthesize context=_context;
- (void)animateWithHandler:(CDUnknownBlockType)arg1;
- (void)floatInFriendsBubble;
- (void)floatInPointsBubble;
- (void)floatInGamesBubble;
- (double)ez;
- (void)updateTargetBubblesAnimations;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end