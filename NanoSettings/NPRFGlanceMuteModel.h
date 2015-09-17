//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFGlanceMuteModel : NSObject
{
    int _notifyToken;
    _Bool _systemMuted;
    id <NPRFGlanceMuteModelDelegate> _delegate;
}

@property(nonatomic) __weak id <NPRFGlanceMuteModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_isRingerStateMuted;
- (void)_setSystemMuted:(_Bool)arg1;
@property(nonatomic, getter=isMuted) _Bool muted;
- (void)_ringerStateChanged;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;

@end