//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CompactYearViewController : YearViewController
{
    _Bool _applicationResuming;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (_Bool)shouldPushNextLevelViewControllerWhenTodayIsVisible;
- (void)setShouldRespondToApplicationDidBecomeActiveStateChange:(_Bool)arg1;
- (void)updatePalette:(id)arg1;
- (_Bool)shouldAnimateTransitionsToMonthView;
- (unsigned long long)monthsPerRow;
- (Class)multipleMonthViewClass;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end