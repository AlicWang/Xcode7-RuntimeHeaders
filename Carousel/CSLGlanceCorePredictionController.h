//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLGlanceCorePredictionController : NSObject
{
    NSMutableArray *_glanceShimList;
    NSMutableDictionary *_glanceShimEvents;
    CPMLBestBadgeShim *_glanceShim;
    CPMLBestShimContext *_glanceShimContext;
    NSMutableArray *_visitedGlanceList;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *visitedGlanceList; // @synthesize visitedGlanceList=_visitedGlanceList;
@property(retain, nonatomic) CPMLBestShimContext *glanceShimContext; // @synthesize glanceShimContext=_glanceShimContext;
@property(retain, nonatomic) CPMLBestBadgeShim *glanceShim; // @synthesize glanceShim=_glanceShim;
@property(retain, nonatomic) NSMutableDictionary *glanceShimEvents; // @synthesize glanceShimEvents=_glanceShimEvents;
@property(retain, nonatomic) NSMutableArray *glanceShimList; // @synthesize glanceShimList=_glanceShimList;
- (void).cxx_destruct;
- (void)_resetVisitedList;
- (void)dwell;
- (void)setCorePredictionEvent:(id)arg1 expertType:(id)arg2 forGlance:(id)arg3;
- (void)rankGlances:(id)arg1;
- (void)visitIndex:(unsigned int)arg1;
- (void)resetVisitedList;
- (id)init;

@end