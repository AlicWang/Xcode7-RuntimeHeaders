//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXStickyKeysViewController : UIViewController
{
}

- (id)_stringForKeycode:(unsigned short)arg1 usagePage:(unsigned int)arg2;
- (void)_removeCapsLockIfNeeded;
- (id)_stickyKeysView;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)updateWithKeycode:(unsigned short)arg1 usagePage:(unsigned int)arg2 state:(long long)arg3;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end