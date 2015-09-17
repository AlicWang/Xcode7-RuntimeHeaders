//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface EKCalendarPlugin : NSObject <SBPluginBundleController, SBBulletinAlertHandler>
{
    EKAlertItem *_activeItem;
}

+ (void)awakeFromBundle;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleAlertBulletinRemoval:(id)arg1 forEntityType:(unsigned long long)arg2;
- (void)_handleAlertBulletin:(id)arg1 forEntityType:(unsigned long long)arg2;
- (void)activateModalBulletinAlert:(id)arg1;
- (void)handleEvent:(int)arg1 withBulletin:(id)arg2 forRegistry:(id)arg3;
- (_Bool)bindBulletin:(id)arg1 forRegistry:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end