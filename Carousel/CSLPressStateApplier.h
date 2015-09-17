//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLPressStateApplier : NSObject
{
    CASpringAnimation *_spring;
    double _springDuration;
    double _updateTime;
    CADisplayLink *_displayLink;
    struct deque<CSLPressState, std::__1::allocator<CSLPressState>> _pressStates;
    struct unordered_multiset<CSL::Hex, std::__1::hash<CSL::Hex>, std::__1::equal_to<CSL::Hex>, std::__1::allocator<CSL::Hex>> _pressedHexes;
    id <CSLPressStateApplierDelegate> _delegate;
}

@property(nonatomic) __weak id <CSLPressStateApplierDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)_updateDisplayLink;
- (_Bool)_needsDisplayLink;
- (void)cleanupAfterLayout;
- (void)prepareForLayout;
- (CDStruct_727cf631)_computeTargetAttributesForHex:(struct Hex)arg1 sourceAttributes:(CDStruct_727cf631)arg2 forPressState:(CDStruct_31feac45)arg3;
- (CDStruct_727cf631)_interpolateBetweenSourceAttributes:(CDStruct_727cf631)arg1 targetAttributes:(CDStruct_727cf631)arg2 pressState:(CDStruct_31feac45)arg3;
- (CDStruct_727cf631)_interpolateBetweenSourceAttributes:(CDStruct_727cf631)arg1 targetAttributes:(CDStruct_727cf631)arg2 fraction:(double)arg3;
- (CDStruct_727cf631)layoutAttributesForHex:(struct Hex)arg1;
- (_Bool)isEnabledForHex:(struct Hex)arg1;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)setPressedHex:(struct Hex)arg1;
- (void)clearPressedHex;
- (void)_reversePressStatesAtTime:(double)arg1;
- (id)init;

@end