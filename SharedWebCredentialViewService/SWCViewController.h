//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SWCViewController : SBSUIRemoteAlertItemContentViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_credentials;
    UILabel *_topLabel;
    UILabel *_middleLabel;
    UITableView *_table;
    NSDictionary *_selectedDict;
    NSIndexPath *_selectedCell;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)tableView;
- (void)_enableTable;
- (void)setCredentials:(id)arg1;
- (id)selectedItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end