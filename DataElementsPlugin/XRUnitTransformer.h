//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XRUnitTransformer : NSValueTransformer
{
    int _conversionFactor;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property int conversionFactor; // @synthesize conversionFactor=_conversionFactor;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end