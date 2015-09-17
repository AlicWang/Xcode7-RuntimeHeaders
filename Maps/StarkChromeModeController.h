//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol StarkChromeModeController <MapsChromeModeController, MapsChromeModeControllerWithInterruptionDisplay, StarkContentController, UIFocusEnvironment>

@optional
- (id)visuallySelectedItem;
- (void)modeWasSelected;
- (void)modeWillPop;
- (NSArray *)overlayItemsForState:(StarkChromeState *)arg1;
- (UINavigationItem *)navigationItem;
- (_Bool)starkTopBarModifiesInsets;
- (_Bool)starkStatusBarModifiesInsets;
- (void)willEndAutohideInterruptionsForTokens:(NSSet *)arg1;
- (double)autohideIdlenessInterval;
- (void)updateMapForAutohidingContentChangeWithGroupAnimation:(GroupAnimation *)arg1;
- (void)hideAutohidingContentWithAnimation:(GroupAnimation *)arg1;
- (void)showAutohidingContentWithAnimation:(GroupAnimation *)arg1;
- (_Bool)presentMenu;
- (_Bool)pressesCancelled:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)pressesEnded:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)pressesChanged:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)pressesBegan:(NSSet *)arg1 withEvent:(UIPressesEvent *)arg2;
- (_Bool)wheelChangedWithEvent:(UIEvent *)arg1;
- (_Bool)moveWithEvent:(UIEvent *)arg1;
- (void)layoutForInteractionModelChange;
@end