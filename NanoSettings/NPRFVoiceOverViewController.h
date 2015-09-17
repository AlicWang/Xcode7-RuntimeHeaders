//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFVoiceOverViewController : NPRFBaseTableViewController
{
    PUICSwitch *_voiceOverSwitch;
    PUICSwitch *_curtainSwitch;
    NSString *_descriptionVoiceOverText;
    NSString *_descriptionCurtainText;
}

- (void).cxx_destruct;
- (void)voiceOverStatusChanged:(id)arg1;
- (void)screenCurtainSwitchChanged:(id)arg1;
- (void)voiceOverSwitchChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (_Bool)curtainRowVisible;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(int)arg1;

@end