//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CNContactContentViewControllerDelegate <CNContactViewControllerDelegate>

@optional
- (UIViewController *)contactPresentedViewController:(CNContactViewController *)arg1;
- (void)contactViewController:(CNContactContentViewController *)arg1 didDeleteContact:(CNContact *)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didCompleteWithContact:(CNContact *)arg2;
- (void)contactViewController:(CNContactContentViewController *)arg1 didChangeToEditMode:(_Bool)arg2;
- (_Bool)contactViewController:(CNContactContentViewController *)arg1 shouldPerformDefaultActionForContact:(CNContact *)arg2 propertyKey:(NSString *)arg3 propertyIdentifier:(NSString *)arg4;
@end