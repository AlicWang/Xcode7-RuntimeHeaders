//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ALCLSessionCatherine : PBCodable <NSCopying>
{
    double _startTime;
    int _activityType;
    float _firstCatherine;
    float _firstCatherineStartTime;
    float _longestDropout;
    float _maxGoodCatherine;
    float _meanCatherine;
    float _meanGoodCatherine;
    float _minGoodCatherine;
    unsigned int _nCatherine;
    unsigned int _nDropout;
    unsigned int _nGoodCatherine;
    unsigned int _nHighCatherine;
    unsigned int _nInterpolatedCatherine;
    unsigned int _nLowCatherine;
    unsigned int _nSampleAndHoldCatherine;
    unsigned int _nVeryHighCatherine;
    unsigned int _nVeryLowCatherine;
    float _onsetCatherine;
    int _onsetReason;
    float _persistedMinHR;
    float _totalDropoutTime;
    float _userMaxCatherine;
    struct {
        unsigned int startTime:1;
        unsigned int firstCatherine:1;
        unsigned int firstCatherineStartTime:1;
        unsigned int longestDropout:1;
        unsigned int maxGoodCatherine:1;
        unsigned int meanCatherine:1;
        unsigned int meanGoodCatherine:1;
        unsigned int minGoodCatherine:1;
        unsigned int nCatherine:1;
        unsigned int nDropout:1;
        unsigned int nGoodCatherine:1;
        unsigned int nHighCatherine:1;
        unsigned int nInterpolatedCatherine:1;
        unsigned int nLowCatherine:1;
        unsigned int nSampleAndHoldCatherine:1;
        unsigned int nVeryHighCatherine:1;
        unsigned int nVeryLowCatherine:1;
        unsigned int onsetCatherine:1;
        unsigned int onsetReason:1;
        unsigned int persistedMinHR:1;
        unsigned int totalDropoutTime:1;
        unsigned int userMaxCatherine:1;
    } _has;
}

@property(nonatomic) float persistedMinHR; // @synthesize persistedMinHR=_persistedMinHR;
@property(nonatomic) float userMaxCatherine; // @synthesize userMaxCatherine=_userMaxCatherine;
@property(nonatomic) float onsetCatherine; // @synthesize onsetCatherine=_onsetCatherine;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int nDropout; // @synthesize nDropout=_nDropout;
@property(nonatomic) float totalDropoutTime; // @synthesize totalDropoutTime=_totalDropoutTime;
@property(nonatomic) float longestDropout; // @synthesize longestDropout=_longestDropout;
@property(nonatomic) float firstCatherineStartTime; // @synthesize firstCatherineStartTime=_firstCatherineStartTime;
@property(nonatomic) float firstCatherine; // @synthesize firstCatherine=_firstCatherine;
@property(nonatomic) float meanGoodCatherine; // @synthesize meanGoodCatherine=_meanGoodCatherine;
@property(nonatomic) float meanCatherine; // @synthesize meanCatherine=_meanCatherine;
@property(nonatomic) float maxGoodCatherine; // @synthesize maxGoodCatherine=_maxGoodCatherine;
@property(nonatomic) float minGoodCatherine; // @synthesize minGoodCatherine=_minGoodCatherine;
@property(nonatomic) unsigned int nSampleAndHoldCatherine; // @synthesize nSampleAndHoldCatherine=_nSampleAndHoldCatherine;
@property(nonatomic) unsigned int nInterpolatedCatherine; // @synthesize nInterpolatedCatherine=_nInterpolatedCatherine;
@property(nonatomic) unsigned int nGoodCatherine; // @synthesize nGoodCatherine=_nGoodCatherine;
@property(nonatomic) unsigned int nVeryHighCatherine; // @synthesize nVeryHighCatherine=_nVeryHighCatherine;
@property(nonatomic) unsigned int nHighCatherine; // @synthesize nHighCatherine=_nHighCatherine;
@property(nonatomic) unsigned int nLowCatherine; // @synthesize nLowCatherine=_nLowCatherine;
@property(nonatomic) unsigned int nVeryLowCatherine; // @synthesize nVeryLowCatherine=_nVeryLowCatherine;
@property(nonatomic) unsigned int nCatherine; // @synthesize nCatherine=_nCatherine;
@property(nonatomic) int activityType; // @synthesize activityType=_activityType;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasPersistedMinHR;
@property(nonatomic) _Bool hasUserMaxCatherine;
@property(nonatomic) _Bool hasOnsetCatherine;
@property(nonatomic) _Bool hasOnsetReason;
@property(nonatomic) int onsetReason; // @synthesize onsetReason=_onsetReason;
@property(nonatomic) _Bool hasStartTime;
@property(nonatomic) _Bool hasNDropout;
@property(nonatomic) _Bool hasTotalDropoutTime;
@property(nonatomic) _Bool hasLongestDropout;
@property(nonatomic) _Bool hasFirstCatherineStartTime;
@property(nonatomic) _Bool hasFirstCatherine;
@property(nonatomic) _Bool hasMeanGoodCatherine;
@property(nonatomic) _Bool hasMeanCatherine;
@property(nonatomic) _Bool hasMaxGoodCatherine;
@property(nonatomic) _Bool hasMinGoodCatherine;
@property(nonatomic) _Bool hasNSampleAndHoldCatherine;
@property(nonatomic) _Bool hasNInterpolatedCatherine;
@property(nonatomic) _Bool hasNGoodCatherine;
@property(nonatomic) _Bool hasNVeryHighCatherine;
@property(nonatomic) _Bool hasNHighCatherine;
@property(nonatomic) _Bool hasNLowCatherine;
@property(nonatomic) _Bool hasNVeryLowCatherine;
@property(nonatomic) _Bool hasNCatherine;

@end