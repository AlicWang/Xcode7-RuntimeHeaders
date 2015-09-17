//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitWalkingLegInstruction : TransitInstruction
{
    NSDictionary *_replacementTokens;
    GEOComposedWalkingRouteLeg *_walkingLeg;
}

+ (id)instructionForWalkingLeg:(id)arg1 context:(int)arg2;
@property(readonly, nonatomic) GEOComposedWalkingRouteLeg *walkingLeg; // @synthesize walkingLeg=_walkingLeg;
- (void).cxx_destruct;
- (id)_walkTime;
- (id)_walkDistance;
- (id)_instructionsReplacementKeys;
- (id)_fillInstructionsWithTokens:(id)arg1;
- (void)_fillInInstructions;
- (id)instructionStep;
- (id)timeZoneForFormattedString;
- (id)initWithWalkingLeg:(id)arg1 context:(int)arg2;

@end