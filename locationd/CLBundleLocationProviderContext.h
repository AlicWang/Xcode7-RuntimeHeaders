//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CLBundleLocationProviderContext : NSObject
{
    struct CLBundleLocationProvider *_provider;
    CLSilo *_silo;
}

@property(readonly, nonatomic) CLSilo *silo; // @synthesize silo=_silo;
- (void)invalidate;
@property(readonly, nonatomic) struct CLBundleLocationProvider *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)dealloc;
- (id)initWithBundleLocationProvider:(struct CLBundleLocationProvider *)arg1 inSilo:(id)arg2;

@end