//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkPanButton : UIButton <UIGestureRecognizerDelegate, UIFocusEnvironment>
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_physicalLongPressRecognizer;
    UITapGestureRecognizer *_physicalTapRecognizer;
    CALayer *_backgroundLayer;
    long long _direction;
    NSMutableArray *_starkFocusGuides;
}

+ (id)arrowImageForDirection:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *starkFocusGuides; // @synthesize starkFocusGuides=_starkFocusGuides;
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)didUpdateFocusFromView:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithDirection:(long long)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end