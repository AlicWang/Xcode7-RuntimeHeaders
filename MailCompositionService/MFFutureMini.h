//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface MFFutureMini : NSObject
{
    NSConditionLock *_lock;
    id _result;
}

+ (id)future;
- (id)result:(id *)arg1;
- (void)finishWithResult:(id)arg1;
- (void)dealloc;
- (id)init;

@end