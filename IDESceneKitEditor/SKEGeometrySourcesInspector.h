//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEGeometrySourcesInspector : SKEStaticTableViewInspector
{
    DVTGradientImageButton *_deleteButton;
    DVTGradientImageButton *_quickLookButton;
}

+ (BOOL)wantsEditionBar;
+ (id)tableColumnTitles;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)deleteAction:(id)arg1;
- (void)quickLookAction:(id)arg1;
- (void)configureEditionBar;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;

@end