//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface EKReminderAlertItem : EKCalendarItemAlertItem
{
    _Bool _showingRemindWhenILeaveButton;
    _Bool _showingCallButton;
    _Bool _showingFaceTimeButton;
}

+ (id)_activeItems;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)configureTitleAndMessageOnAlertView:(id)arg1;

@end