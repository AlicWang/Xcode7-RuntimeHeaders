//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRSamplerInstrumentDecoratorBars : DTTimelineDecorator
{
    XRSamplerRun *_run;
    unsigned long long _graphIndex;
    unsigned long long _eventOrFormulaIndex;
    unsigned long long _eventIndex;
    unsigned long long _eventsCount;
    unsigned long long _barWidth;
    unsigned long long _sampleWeight;
    BOOL _isFormula;
    BOOL _isPMI;
}

- (void).cxx_destruct;
- (id)decorateInspectionRanges:(id)arg1;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (id)initWithRun:(id)arg1 graphIndex:(unsigned long long)arg2 barWidth:(unsigned long long)arg3 sampleWeight:(unsigned long long)arg4;
- (id)init;

@end