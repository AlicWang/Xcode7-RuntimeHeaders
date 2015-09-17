//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MergedTransitRoutingIncidentMessage : NSObject <GEOTransitRoutingIncidentMessage>
{
    NSString *_routingMessage;
    NSArray *_transitIncidents;
}

@property(readonly, nonatomic) NSArray *transitIncidents; // @synthesize transitIncidents=_transitIncidents;
@property(readonly, nonatomic) NSString *routingMessage; // @synthesize routingMessage=_routingMessage;
- (void).cxx_destruct;
- (void)_mergeTransitRoutingIncidentMessages:(id)arg1;
- (id)initWithGEOTransitIncidentMessages:(id)arg1;
- (id)initWithGEOTransitIncidentMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end