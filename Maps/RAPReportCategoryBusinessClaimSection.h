//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportCategoryBusinessClaimSection : RAPTablePartSection
{
    MKMapItem *_businessMapItem;
}

- (void).cxx_destruct;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (id)_businessPortalClaimURL;
- (id)footerTitle;
- (id)headerTitle;
- (id)cellForRowAtIndex:(long long)arg1;
- (long long)rowsCount;
- (id)initWithMapItem:(id)arg1;

@end