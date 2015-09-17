//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MNStarkSignsDisplay : MNGuidanceSignsDisplay <StarkDrivingNavigationItemDelegate, UIFocusEnvironment>
{
    StarkNavigationOverlaySign *_primaryOverlaySign;
    StarkNavigationOverlaySign *_secondaryOverlaySign;
    StarkReroutingOverlaySign *_reroutingOverlaySign;
    StarkArrivalOverlaySign *_arrivalOverlaySign;
    StarkGuidanceToggleOverlaySign *_guidanceToggleOverlaySign;
    NSTimer *_transientToggleTimer;
    StarkETAOnlyOverlaySign *_ETAOnlyOverlaySign;
    StarkChromeViewController *_chromeViewController;
    UIView *_view;
    MNNavigationModeController *_mode;
    _Bool _isTopBarShowing;
    NSArray *_overlayItems;
    _Bool _arrived;
    _Bool _updatesPending;
    _Bool _rerouting;
    _Bool _showTransientToggleSign;
    _Bool _guidanceEnabled;
    ManeuverGuidance *_primaryGuidance;
    ManeuverGuidance *_secondaryGuidance;
    StarkDrivingNavigationItem *_navigationItem;
}

- (_Bool)isGuidanceEnabled;
@property(retain, nonatomic) ManeuverGuidance *secondaryGuidance; // @synthesize secondaryGuidance=_secondaryGuidance;
@property(retain, nonatomic) ManeuverGuidance *primaryGuidance; // @synthesize primaryGuidance=_primaryGuidance;
- (void).cxx_destruct;
- (void)didStartNavigation;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)parentFocusEnvironment;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
- (void)_showRecalculatingWithDataConnectionFailedMessage:(_Bool)arg1;
- (void)showRecalculationFailed;
- (void)showRecalculating;
- (void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2;
- (void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2;
- (void)setDestinationDisplayName:(id)arg1;
- (void)showArrived;
- (void)showNoGuidance;
- (void)_toggleGuidance;
- (id)_newGuidanceToggleOverlayItem;
- (id)ETAOnlyOverlayItems;
- (id)transientToggleOverlayItems;
- (id)navigationOverlayItems;
- (id)arrivalOverlayItems;
- (id)reroutingOverlayItems;
- (id)_currentOverlayItemsForTopBarShowing:(_Bool)arg1;
- (_Bool)_shouldShowSecondarySign;
- (void)_updateOverviewButton;
- (void)_updateGuidanceOverlayReloadingIfNeeded:(_Bool)arg1;
- (void)_scheduleUpdate;
- (void)hideSecondaryManeuver;
- (void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
- (void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
- (void)_toggleTimerFired;
- (void)_resetToggleTimer;
- (void)setGuidanceEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setGuidanceEnabled:(_Bool)arg1;
- (void)setETA:(id)arg1;
- (void)_showDirectionsList;
@property(readonly, nonatomic) StarkDrivingNavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
- (_Bool)drivingNavigationItemAllowsZooming:(id)arg1;
- (void)drivingNavigationItemZoomOut:(id)arg1;
- (void)drivingNavigationItemZoomIn:(id)arg1;
- (id)mapViewForDrivingNavigationItem:(id)arg1;
- (void)drivingNavigationItemDidToggleOverview:(id)arg1;
- (void)drivingNavigationItemDidEndRoute:(id)arg1;
- (void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)hideAuxiliaryChromeWithAnimation:(id)arg1;
- (void)showAuxiliaryChromeWithAnimation:(id)arg1;
- (void)setShowsDimmedSigns:(_Bool)arg1 animation:(id)arg2;
- (void)layoutForUnobscuredBoundsChange;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)removeFromContainingViewController;
- (id)overlayItemsForState:(id)arg1;
- (void)_initializeGuidanceOverlay;
- (void)dealloc;
- (id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end