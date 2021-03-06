//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol RecentsViewControllerDelegate <CollectionsTableViewControllerDelegate>
- (id <QuickActionMenuPresenterDelegate>)quickActionMenuHandlerForRecentsViewController:(RecentsViewController *)arg1;
- (_Bool)recentsViewControllerShouldPresentToOrFromSelectionAlert:(RecentsViewController *)arg1;
- (void)recentsViewController:(RecentsViewController *)arg1 didShowCategory:(GEOSearchCategory *)arg2;
- (void)recentsViewController:(RecentsViewController *)arg1 choseBookmark:(SearchResult *)arg2;
- (void)recentsViewController:(RecentsViewController *)arg1 choseHistoryItem:(id <HistoryItem>)arg2;
- (void)recentsViewController:(RecentsViewController *)arg1 choseCategory:(GEOSearchCategory *)arg2;

@optional
- (void)recentsViewController:(RecentsViewController *)arg1 choseCategoryResult:(SearchResult *)arg2;
- (void)recentsViewController:(RecentsViewController *)arg1 chosePopularNearbyResult:(SearchResult *)arg2;
- (void)recentsViewControllerDidSelectCollectionsButton:(RecentsViewController *)arg1;
- (void)recentsViewControllerDidDismissClearHistorySheet:(RecentsViewController *)arg1;
- (void)setSearchType:(int)arg1;
@end