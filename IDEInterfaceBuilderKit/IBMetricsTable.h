//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMetricsTable : NSObject
{
    NSDictionary *maxSizes;
    NSDictionary *minSizes;
    NSDictionary *insets;
    struct CGSize defaultMinSize;
    struct CGSize defaultMaxSize;
    CDStruct_c519178c defaultInset;
}

- (void).cxx_destruct;
- (CDStruct_c519178c)shadowForWidget:(id)arg1;
- (struct CGSize)maximumLayoutSizeForWidget:(id)arg1;
- (id)minimumLayoutSizeValueForWidget:(id)arg1;
- (struct CGSize)minimumLayoutSizeForWidget:(id)arg1;
- (id)initWithConstraints:(id)arg1 andShadowInsets:(id)arg2;

@end