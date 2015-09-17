//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRPersonalizationConfigurableValues : NSObject <NSCoding, NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    long long _numberOfRecordsToKeep;
    double _reevaluationDuration;
    double _increaseBinningThreshold;
    double _decreaseBinningThreshold;
    long long _minimumArticleCount;
    long long _tapRatioSmoothingFactor;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long tapRatioSmoothingFactor; // @synthesize tapRatioSmoothingFactor=_tapRatioSmoothingFactor;
@property(nonatomic) long long minimumArticleCount; // @synthesize minimumArticleCount=_minimumArticleCount;
@property(nonatomic) double decreaseBinningThreshold; // @synthesize decreaseBinningThreshold=_decreaseBinningThreshold;
@property(nonatomic) double increaseBinningThreshold; // @synthesize increaseBinningThreshold=_increaseBinningThreshold;
@property(nonatomic) double reevaluationDuration; // @synthesize reevaluationDuration=_reevaluationDuration;
@property(nonatomic) long long numberOfRecordsToKeep; // @synthesize numberOfRecordsToKeep=_numberOfRecordsToKeep;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithPersonalizationConfiguration:(id)arg1;
- (id)init;

@end