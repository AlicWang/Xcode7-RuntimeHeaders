//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkNavigationController : UINavigationController
{
    _Bool _physicalBackButtonTriggersDoneButtonItem;
    CDUnknownBlockType _physicalBackButtonPressHandler;
}

@property(copy, nonatomic) CDUnknownBlockType physicalBackButtonPressHandler; // @synthesize physicalBackButtonPressHandler=_physicalBackButtonPressHandler;
@property(nonatomic) _Bool physicalBackButtonTriggersDoneButtonItem; // @synthesize physicalBackButtonTriggersDoneButtonItem=_physicalBackButtonTriggersDoneButtonItem;
- (void).cxx_destruct;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBecomeFirstResponder;

@end