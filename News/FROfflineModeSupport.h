//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FROfflineModeSupport <NSObject>
@property(nonatomic) long long offlineReason;
@property(nonatomic, getter=isInOfflineMode) _Bool inOfflineMode;
- (void)notifyWhenAvailabilityInOfflineModeHasBeenDeterminedUsingBlock:(void (^)(void))arg1;
- (_Bool)canProvideAvailabilityInOfflineModeSynchronously;
- (_Bool)isAvailableInOfflineMode;
@end