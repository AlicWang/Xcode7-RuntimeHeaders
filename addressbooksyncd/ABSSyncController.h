//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ABSSyncController : NSObject
{
    ABSABSyncManager *_abSyncManager;
    ABSFavoritesSyncManager *_favoritesSyncManager;
}

- (void).cxx_destruct;
- (void)deleteEverything;
- (void)resetSyncState;
- (void)deleteSyObject:(id)arg1 totalCount:(long long)arg2;
- (void)updateSyObject:(id)arg1 totalCount:(long long)arg2;
- (void)addSyObject:(id)arg1 totalCount:(long long)arg2;
- (void)_processDeletes:(id)arg1 withStore:(id)arg2 keepGoing:(_Bool *)arg3;
- (void)_processModifications:(id)arg1 withStore:(id)arg2 keepGoing:(_Bool *)arg3;
- (void)_processAdds:(id)arg1 withStore:(id)arg2 keepGoing:(_Bool *)arg3;
- (void)_processChanges:(id)arg1 withStore:(id)arg2;
- (id)generateFullSyncData;
- (void)syncWithSYStore:(id)arg1;
- (id)init;

@end