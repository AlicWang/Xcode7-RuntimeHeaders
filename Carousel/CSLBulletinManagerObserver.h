//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol CSLBulletinManagerObserver <NSObject>
- (void)addBulletin:(BBBulletin *)arg1 forFeed:(unsigned int)arg2 playLightsAndSirens:(_Bool)arg3;
- (void)purgeReferencesToBulletinID:(NSString *)arg1;
- (void)noteInvalidatedBulletinIDs:(NSSet *)arg1;
- (void)modifyBulletin:(BBBulletin *)arg1 forFeed:(unsigned int)arg2;
- (void)removeBulletin:(BBBulletin *)arg1 forFeed:(unsigned int)arg2;
- (unsigned int)observedFeed;
@end