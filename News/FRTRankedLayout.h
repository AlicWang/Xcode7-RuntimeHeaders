//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTRankedLayout : NSObject
{
    _Bool _vetoed;
    FRTHeadlineLayoutData *_layoutData;
    double _rank;
}

@property(nonatomic) _Bool vetoed; // @synthesize vetoed=_vetoed;
@property(nonatomic) double rank; // @synthesize rank=_rank;
@property(retain, nonatomic) FRTHeadlineLayoutData *layoutData; // @synthesize layoutData=_layoutData;
- (void).cxx_destruct;
- (id)description;

@end