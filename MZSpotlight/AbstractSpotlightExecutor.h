//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AbstractSpotlightExecutor : NSObject
{
    MZSpotlightContext *_context;
}

@property(retain, nonatomic) MZSpotlightContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)package;
- (id)attributes;
- (id)initWithContext:(id)arg1;
- (BOOL)executeWithError:(id *)arg1;

@end