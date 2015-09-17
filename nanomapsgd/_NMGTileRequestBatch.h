//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _NMGTileRequestBatch : NSObject
{
    GEOTileKeyMap *_tileKeyToRequest;
    GEOTileKeyList *_tileKeys;
    NSMutableArray *_requests;
}

@property(readonly, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) GEOTileKeyList *tileKeys; // @synthesize tileKeys=_tileKeys;
- (void).cxx_destruct;
- (void)removePendingRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (id)pendingRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (void)addTileKey:(const struct _GEOTileKey *)arg1 cachedETag:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end