//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NCABContactListViewControllerDelegate <NSObject>

@optional
- (_Bool)contactListViewController:(NCABContactListViewController *)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)contactListViewController:(NCABContactListViewController *)arg1 didPickContact:(void *)arg2;
@end