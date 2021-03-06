//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRPageViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _gestureEnabled;
    _Bool _cancelScrollViewDidScroll;
    _Bool _appeared;
    _Bool _isTransitioning;
    UIViewController *_visibleViewController;
    unsigned long long _numberOfLoadedViewControllers;
    id <FRPageViewControllerDataSource> _dataSource;
    id <FRPageViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIViewController *_managedForViewController;
    NSMutableArray *_previousViewControllers;
    NSMutableArray *_nextViewControllers;
    NSMutableSet *_visibleViewControllers;
    UIViewController *_possibleNextViewController;
    UIViewController *_originalVisibleViewController;
    struct CGSize _transitioningSize;
}

@property(readonly, nonatomic) struct CGSize transitioningSize; // @synthesize transitioningSize=_transitioningSize;
@property(readonly, nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) _Bool appeared; // @synthesize appeared=_appeared;
@property(nonatomic) _Bool cancelScrollViewDidScroll; // @synthesize cancelScrollViewDidScroll=_cancelScrollViewDidScroll;
@property(retain, nonatomic) UIViewController *originalVisibleViewController; // @synthesize originalVisibleViewController=_originalVisibleViewController;
@property(retain, nonatomic) UIViewController *possibleNextViewController; // @synthesize possibleNextViewController=_possibleNextViewController;
@property(readonly, nonatomic) NSMutableSet *visibleViewControllers; // @synthesize visibleViewControllers=_visibleViewControllers;
@property(readonly, nonatomic) NSMutableArray *nextViewControllers; // @synthesize nextViewControllers=_nextViewControllers;
@property(readonly, nonatomic) NSMutableArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
@property(retain, nonatomic) UIViewController *managedForViewController; // @synthesize managedForViewController=_managedForViewController;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool gestureEnabled; // @synthesize gestureEnabled=_gestureEnabled;
@property(nonatomic) __weak id <FRPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <FRPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long numberOfLoadedViewControllers; // @synthesize numberOfLoadedViewControllers=_numberOfLoadedViewControllers;
@property(retain, nonatomic) UIViewController *visibleViewController; // @synthesize visibleViewController=_visibleViewController;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)transitionToSize:(struct CGSize)arg1;
- (void)switchToPreviousViewController;
- (void)switchToNextViewController;
- (_Bool)_assistiveTechnologyIsRunning;
- (_Bool)_shouldIgnoreDidScrollWithScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)callLastViewAppearanceMethods;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reindexViewControllers;
- (void)addViewController:(id)arg1;
- (void)removeViewController:(id)arg1;
- (void)setCenterOfViewController:(id)arg1;
- (void)managePreviousAndNextViewController;
- (void)fixAllCenters;
- (struct CGPoint)centerForIndex:(unsigned long long)arg1;
- (void)updateContentOffset;
- (void)updateContentSize;
- (void)updateScrollView;
@property(readonly, nonatomic) struct CGSize pageSize;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end