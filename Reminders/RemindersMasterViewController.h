//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RemindersMasterViewController : UIViewController <RemindersListPickerDelegate, RemindersListControllerDelegate, RemindersNewListControllerDelegate, RemindersInvitationControllerDelegate>
{
    RemindersListPicker *_listPicker;
    RemindersSearchView *_searchView;
    UIToolbar *_addEditToolbar;
    UIView *_dividerLine;
    UIBarButtonItem *_editButton;
    UIBarButtonItem *_addListButton;
    _Bool _isSearching;
    UIBarButtonItem *_frontFixedSpace;
    id <RemindersMasterViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RemindersMasterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)searchWillBecomeActive:(_Bool)arg1;
- (void)listPickerDidEditCalendars:(id)arg1;
- (void)listPickerDidSelect:(id)arg1;
- (void)listPickerDidChangeSelectedCalendar:(id)arg1;
- (void)invitationControllerDeclined:(id)arg1;
- (void)invitationControllerAccepted:(id)arg1;
- (void)newListControllerCreatedList:(id)arg1;
- (void)newListControllerCanceledList:(id)arg1;
- (void)addListButtonTapped:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (_Bool)scheduledSelected;
- (void)selectScheduled;
- (id)selectedCalendar;
- (void)selectCalendar:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithSearchBarView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end