//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CSLBulletinPresenterDelegate <NSObject>
- (unsigned int)audioFeedbackAllowedForBulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1;
- (void)requestLaunchAppSuspendedWithBulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1;
- (void)bulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1 didAutoDismissWhenAlertHasDisplayed:(_Bool)arg2;
- (void)bulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1 requestDismissAnimated:(_Bool)arg2;
- (void)bulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1 requestHandleActionType:(int)arg2;
- (void)bulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1 requestLaunchApp:(NSString *)arg2 withURL:(NSURL *)arg3 annotation:(NSDictionary *)arg4;
- (void)didPerformActionWithBulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1;
- (void)didPresentLongLookWithBulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1;
- (void)didDeactivateBulletinPresenter:(CUISAlertViewController<CSLBulletinPresenter> *)arg1;
@end