//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFPrefsTableViewController : NPRFBaseTableViewController
{
    NSArray *_specifiers;
    _Bool _requestingSpecifiersFromDataSource;
    PSSpecifier *_specifier;
    NSArray *_enabledSpecifiers;
}

@property(retain, nonatomic) NSArray *enabledSpecifiers; // @synthesize enabledSpecifiers=_enabledSpecifiers;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)specifierIndexForTableView:(id)arg1 indexPath:(id)arg2;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)reloadEnabledSpecifiers:(id)arg1;
- (id)specifier;
- (id)bundle;

@end