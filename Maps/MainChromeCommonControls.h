//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MainChromeCommonControls : NSObject
{
    MainChromeViewController *_chrome;
    MKMapView *_mapView;
    MapsUserTrackingButton *_trackingButton;
    MapsUserTrackingButton *_whiteTrackingButton;
    Maps3DButton *_maps3DButton;
    Maps3DButton *_whiteMaps3DButton;
    UIButton *_searchListViewControl;
    UIButton *_directionsListViewControl;
    UIButton *_settingsControl;
    UIButton *_audioControl;
    MapsLargerHitTargetButton *_shareControl;
    UIButton *_hideBrowseListViewControl;
    UIButton *_showBrowseListViewControl;
    UIButton *_stopFlyoverButton;
}

- (void).cxx_destruct;
@property(readonly) UIButton *audioControl;
@property(readonly) UIButton *settingsControl;
@property(readonly) UIButton *shareControl;
@property(readonly) UIButton *stopFlyoverButton;
@property(readonly) UIButton *showBrowseListViewControl;
@property(readonly) UIButton *hideBrowseListViewControl;
@property(readonly) UIButton *directionsListViewControl;
@property(readonly) UIButton *searchListViewControl;
- (id)newThreeDButton;
@property(readonly) Maps3DButton *invertedMaps3DButton;
@property(readonly) Maps3DButton *maps3DButton;
@property(readonly) MapsUserTrackingButton *invertedTrackingButton;
@property(readonly) MapsUserTrackingButton *trackingButton;
- (id)initWithChrome:(id)arg1;

@end