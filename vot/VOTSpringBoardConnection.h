//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VOTSpringBoardConnection : NSObject
{
    NSMachPort *_sbPort;
}

+ (id)defaultConnection;
- (void)showItemChooser:(_Bool)arg1 withItems:(id)arg2;
- (void)setScreenCurtainEnabled:(_Bool)arg1;
- (void)setInPassthroughMode:(_Bool)arg1;
- (void)showElementLabelPanel:(_Bool)arg1 currentLabel:(id)arg2;
- (void)setSpringBoardCaptionPanelText:(id)arg1;
- (void)sendProgrammaticAppSwitch:(_Bool)arg1;
- (void)showSpringBoardVOConfirmation:(_Bool)arg1;
- (id)_sbPort;
- (void)informConnectionDied;
- (void)restartConnection;
- (_Bool)isConnected;
- (void)dealloc;

@end