//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol SFUnlockProtocol <NSObject>
- (void)unlockStateForDevice:(NSString *)arg1 completionHandler:(void (^)(SFUnlockState *, NSError *))arg2;
- (void)establishStashBagWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)unlockEnabledWithDevice:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)disableUnlockWithDevice:(NSString *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)enableUnlockWithDevice:(NSString *)arg1 fromKey:(_Bool)arg2 withPasscode:(NSString *)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
@end