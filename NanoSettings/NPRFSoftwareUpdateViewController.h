//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFSoftwareUpdateViewController : NPRFBaseTableViewController
{
    PUICSwitch *_enableSSOSwitch;
    PUICSwitch *_allowSameVersionSwitch;
}

- (void).cxx_destruct;
- (void)setAllowSameVersion:(id)arg1;
- (void)setSsoEnabled:(id)arg1;
- (void)setKey:(id)arg1 forDomain:(id)arg2 value:(_Bool)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithStyle:(int)arg1;

@end