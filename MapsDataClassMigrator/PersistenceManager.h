//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PersistenceManager : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSString *_settingsDirectoryPath;
    MapsPaths *_locations;
    RAPStorage *_directionsRecordingsStorage;
    RAPStorage *_searchRecordingsStorage;
    NSDictionary *_directionsCache;
    NSDictionary *_directionsCacheObjectThatFailedToBeWrittenBecauseTheDeviceWasLockedLastTimeWeChecked;
    NSString *_directionsCacheKeyThatFailedToBeWrittenBecauseTheDeviceWasLockedLastTimeWeChecked;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSString *settingsDirectoryPath; // @synthesize settingsDirectoryPath=_settingsDirectoryPath;
- (void).cxx_destruct;
- (void)editSearchRecordingForHistoryItem:(id)arg1 fromHistory:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)readSearchRecording:(out id *)arg1 forHistoryItem:(id)arg2 fromHistory:(id)arg3 error:(out id *)arg4;
- (void)writeSearchRecordingWithContentsOfObject:(id)arg1 forHistoryItem:(id)arg2 inHistory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeDirectionsRecording:(id)arg1 forDirectionsHistoryItem:(id)arg2 inHistory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)readDirectionsRecordings:(out id *)arg1 associatedHistoryItems:(out id *)arg2 fromHistory:(id)arg3 error:(out id *)arg4;
- (_Bool)getDirectionsRecording:(out id *)arg1 forHistoryItem:(id)arg2 fromHistory:(id)arg3 error:(out id *)arg4;
- (_Bool)_syncRAPStorageWithItemsFromHistory:(id)arg1 error:(id *)arg2;
- (id)_searchRecordingsStorage:(id *)arg1;
- (id)_directionsRecordingsStorage:(id *)arg1;
- (id)_searchRecordingsDirectoryURLCreatingIfNonexistent:(_Bool)arg1 error:(id *)arg2;
- (id)_directionsRecordingsDirectoryURLCreatingIfNonexistent:(_Bool)arg1 error:(id *)arg2;
- (void)_deleteDirectionsCacheFile;
- (void)_cleanDirectionsCache;
- (_Bool)_writeDirectionsCache:(id)arg1 error:(id *)arg2;
- (void)_syncDirectionsCacheIfNeeded;
- (id)directionsCache;
- (id)directionsCachePaginationArrayForKey:(id)arg1;
- (id)directionsCacheDataArrayForKey:(id)arg1;
- (_Bool)addDataToDirectionsCache:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)addPaginationDataToDirectionsCache:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)cacheKeyForWaypoints:(id)arg1;
- (void)deleteTransitAppRanker;
- (_Bool)writeTransitAppRanker:(id)arg1 error:(id *)arg2;
- (id)readTransitAppRanker;
- (void)_deleteItemAtPath:(id)arg1;
- (_Bool)_writeFailedHistoryItems:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)_writeFailedMSPHistoryItems:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)_readFailedItemsAtPath:(id)arg1;
- (id)_readFailedMSPItemsAtPath:(id)arg1;
- (void)deleteFailedDirectionsRequests;
- (_Bool)writeFailedDirectionsRequests:(id)arg1 error:(id *)arg2;
- (_Bool)writeFailedMSPDirectionsRequests:(id)arg1 error:(id *)arg2;
- (id)readFailedDirectionsRequests;
- (id)readFailedMSPDirectionsRequests;
- (void)deleteFailedSearches;
- (_Bool)writeFailedSearches:(id)arg1 error:(id *)arg2;
- (_Bool)writeFailedMSPSearches:(id)arg1 error:(id *)arg2;
- (id)readFailedSearches;
- (id)readFailedMSPSearches;
- (_Bool)writePins:(id)arg1 error:(id *)arg2;
- (id)readPins;
- (_Bool)writeLegacyHistory:(id)arg1 error:(id *)arg2;
- (id)readNanoHistory;
- (id)readMSPHistory;
- (id)readNanoHistoryDictionary;
- (id)readMSPHistoryDictionary;
- (_Bool)_writeMSPHistoryFromHistoryItems:(id)arg1 syncItemsToRAPStorage:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeMSPHistory:(id)arg1 error:(id *)arg2;
- (_Bool)writeMSPHistoryWithLegacyHistoryItems:(id)arg1 error:(id *)arg2;
- (id)_canonicalHistoryItemForItem:(id)arg1 inHistory:(id)arg2;
- (id)readLegacyHistory;
- (void)deleteHistory;
- (_Bool)checkOrCreateHistorySynced;
- (_Bool)deleteHistorySyncedFile;
- (_Bool)_deleteSyncedFileWithName:(id)arg1;
- (_Bool)_createSyncedFileIfNotExistsWithName:(id)arg1;
- (void)deleteDirections;
- (_Bool)writeDirections:(id)arg1 error:(id *)arg2;
- (id)readDirections;
- (void)deleteLegacyBookmarks;
- (_Bool)writeLegacyBookmarks:(id)arg1 error:(id *)arg2;
- (id)readLegacyBookmarks;
- (id)readLegacyBookmarksDictionary;
- (_Bool)deleteBookmarksSyncedFile;
- (_Bool)checkOrCreateBookmarksSynced;
- (_Bool)writeMSPBookmarks:(id)arg1 error:(id *)arg2;
- (id)readMSPBookmarks;
- (id)readMSPBookmarksDictionary;
- (id)readBookmarksDictionary;
- (_Bool)writeSearchResults:(id)arg1 toType:(int)arg2 error:(id *)arg3;
- (id)readSearchResultsType:(int)arg1 error:(id *)arg2;
- (id)_searchResultsSettingsPath:(int)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithPersistenceData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end