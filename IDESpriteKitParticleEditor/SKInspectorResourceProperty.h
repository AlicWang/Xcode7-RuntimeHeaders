//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKInspectorResourceProperty : IDEInspectorProperty
{
    NSComboBox *_comboBox;
    NSArray *_availableMediaFiles;
    IDEInspectorKeyPath *_valueKeyPath;
    id <DVTInvalidation> _variantContextKVOToken;
    IDEMediaResourceVariantContext *_variantContext;
}

+ (id)scannedTextureNames;
+ (id)parseAssetCatalogAtPath:(id)arg1;
+ (id)supportedSoundFileTypes;
+ (id)supportedFileTypes;
- (void).cxx_destruct;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (void)retrieveIDEMediaResourceWithFoldingStrategy:(id)arg1;
- (double)baseline;
- (id)comboBox;
- (void)primitiveInvalidate;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end