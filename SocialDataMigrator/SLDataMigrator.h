//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SLDataMigrator : DataClassMigrator
{
}

- (id)_tencentWeiboImagesFolderPath;
- (id)_tencentWeiboDatabasePath;
- (id)_tencentWeiboDatabaseFileName;
- (void)_migrateTencentWeiboData;
- (id)_oldWeiboFolderPath;
- (id)_newWeiboImagesFolderPath;
- (id)_oldWeiboImagesFolderPath;
- (id)_newWeiboDatabasePath;
- (id)_oldWeiboDatabasePath;
- (id)_weiboDatabaseFileName;
- (void)_migrateWeiboData;
- (id)_oldTwitterFolderPath;
- (id)_newTwitterImagesFolderPath;
- (id)_oldTwitterImagesFolderPath;
- (id)_newTwitterDatabasePath;
- (id)_oldTwitterDatabasePath;
- (id)_twitterDatabaseFileName;
- (void)_migrateTwitterData;
- (void)_removeAncillarySocialDatabaseFilesWithPrefix:(id)arg1 service:(id)arg2;
- (_Bool)_needsFileProtectionUpgradeForProfileImagesAtPath:(id)arg1 service:(id)arg2;
- (void)_createSocialDataDirectoryIfNecessary;
- (_Bool)performMigration;
- (id)dataClassName;
- (float)migrationProgress;
- (float)estimatedDuration;

@end