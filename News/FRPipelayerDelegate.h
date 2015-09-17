//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FRPipelayerDelegate <NSObject>
- (void)pipelayer:(FRPipelayer *)arg1 segmentForUnits:(NSArray *)arg2 segmentType:(unsigned long long)arg3 qualityOfService:(long long)arg4 completion:(void (^)(NSObject<FRPipeSegment> *))arg5;
- (_Bool)pipelayer:(FRPipelayer *)arg1 maySegmentType:(unsigned long long)arg2 usePipeUnits:(NSArray *)arg3;
- (unsigned long long)pipelayer:(FRPipelayer *)arg1 numberOfUnitsUsedBySegmentType:(unsigned long long)arg2;
- (NSString *)pipelayer:(FRPipelayer *)arg1 descriptionForSegmentType:(unsigned long long)arg2;
- (NSArray *)pipelayer:(FRPipelayer *)arg1 nextSegmentTypeCandidatesForSegmentType:(unsigned long long)arg2;
- (double)pipelayer:(FRPipelayer *)arg1 secondaryScoreOfPath:(NSArray *)arg2 units:(NSArray *)arg3;
- (double)pipelayer:(FRPipelayer *)arg1 transitionRankFromSegmentType:(unsigned long long)arg2 toSegmentType:(unsigned long long)arg3;
@end