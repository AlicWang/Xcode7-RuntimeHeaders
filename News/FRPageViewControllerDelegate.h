//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FRPageViewControllerDelegate <NSObject>

@optional
- (void)pageViewController:(FRPageViewController *)arg1 didChangeVisibleViewControllerFromViewController:(UIViewController *)arg2 direction:(int)arg3;
- (void)pageViewController:(FRPageViewController *)arg1 willChangeToVisibleViewController:(UIViewController *)arg2;
- (void)pageViewController:(FRPageViewController *)arg1 willShowViewController:(UIViewController *)arg2;
- (void)pageViewController:(FRPageViewController *)arg1 didHideViewController:(UIViewController *)arg2;
- (void)pageViewController:(FRPageViewController *)arg1 viewController:(UIViewController *)arg2 changedVisibilityFactor:(double)arg3;
@end