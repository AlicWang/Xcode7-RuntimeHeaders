//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface _DefaultNumberFormatter : NSObject <HKNumberFormatter>
{
    NSNumberFormatter *_numberFormatter;
}

- (void).cxx_destruct;
- (id)stringFromNumber:(id)arg1 dataUnit:(id)arg2 unitController:(id)arg3;
- (id)init;
- (id)initWithDecimalPrecision:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end