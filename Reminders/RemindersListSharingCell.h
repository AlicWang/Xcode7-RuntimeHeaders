//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersListSharingCell : UITableViewCell
{
    UIView *_avatarView;
    UILabel *_mainLabel;
    UILabel *_detailLabel;
    UIView *_labelContainerView;
    NSArray *_constraints;
}

- (void).cxx_destruct;
- (void)setDetailText:(id)arg1;
- (void)setMainText:(id)arg1 withColor:(id)arg2;
- (void)setAvatarView:(id)arg1;
- (void)resetConstraints;
- (void)prepareForReuse;

@end