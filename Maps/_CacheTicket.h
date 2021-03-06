//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _CacheTicket : NSObject <GEODirectionServiceTicket>
{
    GEODirectionsRouteRequest *_request;
    _Bool _isReroute;
    GEOComposedRoute *_originalRoute;
}

@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) _Bool isReroute; // @synthesize isReroute=_isReroute;
@property(readonly, nonatomic) GEODirectionsRouteRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 isReroute:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end