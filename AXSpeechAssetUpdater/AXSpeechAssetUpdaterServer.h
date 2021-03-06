//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXSpeechAssetUpdaterServer : NSObject <AXUIService>
{
    NSMutableArray *_assetDownloadQueue;
    double _lastTTSVoiceAssetUpdate;
    _Bool _isUpdatingCachedTTSVoices;
}

- (void).cxx_destruct;
- (void)_purgeExistingAsset:(id)arg1 inFavorOfAsset:(id)arg2;
- (void)_updateAsset:(id)arg1 existingAsset:(id)arg2;
- (void)_beginDownloadIfNecessaryForAssets:(id)arg1;
- (_Bool)_isVocalizerAsset:(id)arg1;
- (void)_addToDownloadQueue:(id)arg1;
- (void)_checkForVocalizerAssetUpdates;
- (void)_checkForMacinTalkAssetUpdates;
- (void)_handleAssetProgress:(id)arg1 error:(id)arg2 asset:(id)arg3 installedAsset:(id)arg4;
- (id)_mobileAssetDownloadOptions;
- (id)_siriAssets;
- (id)_macinTalkAssets;
- (id)_vocalizerAssetsForLanguage:(id)arg1;
- (id)_installedVocalizerAssets;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)_checkForAssets:(_Bool)arg1;
- (void)_updateCachedTTSVoiceAssets;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end