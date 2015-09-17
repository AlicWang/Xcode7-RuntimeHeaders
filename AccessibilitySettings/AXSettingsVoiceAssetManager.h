//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXSettingsVoiceAssetManager : NSObject
{
    NSMutableDictionary *_assets;
    id <AXSettingsVoiceAssetManagerDelegate> _delegate;
}

@property(nonatomic) id <AXSettingsVoiceAssetManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clientUpdateAvailableSpeechAssets;
- (id)_speechAssetUpdaterClient;
- (void)deleteDownloadAlternateVoice:(id)arg1;
- (void)stopDownloadingAlternateVoice:(id)arg1;
- (void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)_startDownloadingAlternateVoice:(id)arg1;
- (void)_handleAssetProgress:(id)arg1 error:(id)arg2 voiceId:(id)arg3 diskSize:(long long)arg4 asset:(id)arg5;
- (void)startDownloadingAlternateVoice:(id)arg1;
- (id)_assetForVoiceId:(id)arg1 forDeletion:(_Bool)arg2;
- (id)_mobileAssetDownloadOptions;
- (void)requestVoiceLanguageLanguageDownloadInProgress;
- (void)requestVoiceLanguageDownloadProgress:(id)arg1;
- (void)requestVoiceLanguageIsDownloadingPaused:(id)arg1;
- (void)requestVoiceLanguageIsDownloading:(id)arg1;
- (void)requestVoiceLanguageIsCompact:(id)arg1;
- (void)stopDownloading:(id)arg1;
- (void)deleteDownload:(id)arg1;
- (void)startDownloading:(id)arg1;
- (void)dealloc;
- (id)init;

@end