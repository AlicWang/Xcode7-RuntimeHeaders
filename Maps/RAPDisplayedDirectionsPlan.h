//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPDisplayedDirectionsPlan : NSObject <RAPDisplayedDirectionsPlan>
{
    RouteSet *_routeSet;
    RAPDirectionsRecording *_recording;
}

- (void).cxx_destruct;
- (_Bool)getTransitSuggestedRoutesIndex:(out unsigned long long *)arg1 directionsResponseIndex:(out unsigned long long *)arg2 forRouteSuggestion:(id)arg3;
- (id)displayedRouteSuggestions;
- (int)requestedTransportType;
- (id)recording;
- (id)initWithRouteSet:(id)arg1 recording:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end