//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXSettingsVoiceDetailController : AccessibilityBaseListController <AXSettingsVoiceAssetManagerDelegate>
{
    _Bool _showSpeakingRate;
    float _speakingRate;
    CDUnknownBlockType _setSpeakingRateCallback;
    CDUnknownBlockType _getSpeakingRateCallback;
    AXSettingsVoiceAssetManager *_assetManager;
    _Bool _isCompact;
    _Bool _receivedCompactAnswer;
    long long _storageSize;
    _Bool _isDownloading;
    _Bool _wantsDownload;
    _Bool _wantsDelete;
    _Bool _receivedIsDownloading;
    struct __SCNetworkReachability *_reachability;
    _Bool _allowedToDownload;
    _Bool _allowedToDownloadIsSet;
    NSString *_languageBeingDownloaded;
    AXSettingsPremiumVoiceCell *_testVoiceCell;
    NSMutableArray *_languagesDownloading;
    _Bool _showDialectPicker;
    _Bool _showDialectInTitle;
    _Bool _hideLanguageInDialect;
    NSString *_language;
    CDUnknownBlockType _setDialectPreferencesCallback;
    CDUnknownBlockType _getDialectPreferencesCallback;
    CDUnknownBlockType _alternativeVoiceAllowedCallback;
    AXLangMap *_languageMap;
}

@property(retain, nonatomic) AXLangMap *languageMap; // @synthesize languageMap=_languageMap;
@property(copy, nonatomic) CDUnknownBlockType alternativeVoiceAllowedCallback; // @synthesize alternativeVoiceAllowedCallback=_alternativeVoiceAllowedCallback;
@property(copy, nonatomic) CDUnknownBlockType getDialectPreferencesCallback; // @synthesize getDialectPreferencesCallback=_getDialectPreferencesCallback;
@property(copy, nonatomic) CDUnknownBlockType setDialectPreferencesCallback; // @synthesize setDialectPreferencesCallback=_setDialectPreferencesCallback;
@property(nonatomic) _Bool hideLanguageInDialect; // @synthesize hideLanguageInDialect=_hideLanguageInDialect;
@property(nonatomic) _Bool showDialectInTitle; // @synthesize showDialectInTitle=_showDialectInTitle;
@property(nonatomic) _Bool showDialectPicker; // @synthesize showDialectPicker=_showDialectPicker;
@property(copy, nonatomic) CDUnknownBlockType getSpeakingRateCallback; // @synthesize getSpeakingRateCallback=_getSpeakingRateCallback;
@property(copy, nonatomic) CDUnknownBlockType setSpeakingRateCallback; // @synthesize setSpeakingRateCallback=_setSpeakingRateCallback;
@property(nonatomic) float speakingRate; // @synthesize speakingRate=_speakingRate;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)assetManagerVoiceLanguageIsCompact:(id)arg1 alternateVoiceId:(id)arg2 compact:(_Bool)arg3 error:(id)arg4;
- (void)assetManagerVoiceLanguageIsDownloadingPaused:(id)arg1 alternateVoiceId:(id)arg2 paused:(_Bool)arg3;
- (void)assetManagerVoiceLanguageIsDownloading:(id)arg1 alternateVoiceId:(id)arg2 downloading:(_Bool)arg3;
- (void)assetManagerVoiceLanguageDownloadProgress:(id)arg1 alternateVoiceId:(id)arg2 progress:(float)arg3 storageSize:(long long)arg4 requiredDiskSpace:(_Bool)arg5 versionId:(id)arg6;
- (void)assetManagerVoiceLanguageInProgressDownload:(id)arg1 alternateVoiceId:(id)arg2;
- (void)updateAssetInformation;
- (void)_voiceServicesAssetStateChanged;
- (void)_setSelectedSpecifier:(id)arg1;
- (id)specifierAltVoiceId:(id)arg1;
- (_Bool)specifierIsCompact:(id)arg1;
- (_Bool)specifierIsVoiceCell:(id)arg1;
- (id)specifierLanguage:(id)arg1;
- (void)_startAlternativeVoiceDownload:(id)arg1;
- (id)_getEnhancedQuality:(id)arg1;
- (_Bool)_allowedToDownload;
- (void)_updateAllowedToDownload;
- (id)specifiers;
- (void)setSpeakingRateCallbackBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool showSpeakingRate; // @dynamic showSpeakingRate;
- (id)_speakingRate:(id)arg1;
- (void)_setSpeakingRate:(id)arg1 specifier:(id)arg2;
- (void)addVoiceFootprintsToSpecs:(id)arg1 dialect:(id)arg2 groupSpec:(id)arg3;
- (void)_updateSpeakingRate;
- (void)_manageEditButton;
- (void)_donePressed;
- (void)_editPressed:(id)arg1;
- (void)dealloc;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end