//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSPGlanceInterfaceController : IBSPInterfaceController <IBDocumentArchiving, NSCoding>
{
    long long _topTemplateType;
    long long _bottomTemplateType;
    BOOL _usesTemplates;
    IBSPInterfaceGroup *_topGroup;
    IBSPInterfaceGroup *_bottomGroup;
    NSArray *_topLabels;
    NSArray *_bottomLabels;
}

+ (id)keyPathsForValuesAffectingIbInspectedBottomTextLayoutChoiceIndex;
+ (id)keyPathsForValuesAffectingIbInspectedTopTextLayoutChoiceIndex;
+ (id)keyPathsForValuesAffectingIbInspectedBottomTextLayoutChoiceIndices;
+ (id)keyPathsForValuesAffectingIbInspectedTopTextLayoutChoiceIndices;
+ (id)keyPathsForValuesAffectingIbInspectedBottomTextLayoutChoices;
+ (id)keyPathsForValuesAffectingIbInspectedTopTextLayoutChoices;
+ (id)keyPathsForValuesAffectingIbInspectedHasBottomTextLayoutChoices;
+ (id)keyPathsForValuesAffectingIbInspectedHasTopTextLayoutChoices;
+ (id)keyPathsForValuesAffectingIbInspectedBottomTemplateType;
+ (id)keyPathsForValuesAffectingIbInspectedTopTemplateType;
+ (id)keyPathsForValuesAffectingIbInspectedUsesTemplates;
+ (void)ibPopulateConfigurableToManyRelationshipKeyPaths:(id)arg1;
+ (void)ibPopulatePropertyListToManyRelationshipKeyPaths:(id)arg1;
+ (void)ibPopulatePropertyListToOneRelationshipKeyPaths:(id)arg1;
+ (id)ibAllTemplateItemKeyPaths;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(nonatomic) long long bottomTemplateType; // @synthesize bottomTemplateType=_bottomTemplateType;
@property(nonatomic) long long topTemplateType; // @synthesize topTemplateType=_topTemplateType;
@property(copy, nonatomic) NSArray *bottomLabels; // @synthesize bottomLabels=_bottomLabels;
@property(copy, nonatomic) NSArray *topLabels; // @synthesize topLabels=_topLabels;
@property(retain, nonatomic) IBSPInterfaceGroup *bottomGroup; // @synthesize bottomGroup=_bottomGroup;
@property(retain, nonatomic) IBSPInterfaceGroup *topGroup; // @synthesize topGroup=_topGroup;
@property(nonatomic) BOOL usesTemplates; // @synthesize usesTemplates=_usesTemplates;
- (void).cxx_destruct;
- (id)initWithTargetRuntime:(id)arg1;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)ibExpectedNumberOfLabelsForBottomTemplate;
- (long long)ibExpectedNumberOfLabelsForTopTemplate;
- (BOOL)ibBottomTemplateShouldHaveGroup;
- (BOOL)ibTopTemplateShouldHaveGroup;
- (id)ibBottomTemplateItems;
- (id)ibTopTemplateItems;
- (id)ibAllTemplateItems;
- (void)ibSetNumberOfLabels:(long long)arg1 forKeyPath:(id)arg2 inDocument:(id)arg3;
- (void)ibSetHasGroup:(BOOL)arg1 forKeyPath:(id)arg2 inDocument:(id)arg3;
- (void)ibInstantiateGroupForKeyPath:(id)arg1 inDocument:(id)arg2;
- (void)ibInstantiateLabelForKeyPath:(id)arg1 inDocument:(id)arg2;
- (void)ibRefreshInstalledItems;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (void)ibResetLabelTextAfterChangingInspectedBottomTemplateTypeFrom:(long long)arg1;
- (void)ibResetLabelTextAfterChangingInspectedTopTemplateTypeFrom:(long long)arg1;
- (id)ibInspectedBottomTemplateToolTips;
- (id)ibInspectedTopTemplateToolTips;
- (id)ibInspectedBottomTemplateImages;
- (id)ibInspectedTopTemplateImages;
- (id)ibInspectedTemplateImagesForKeyPath:(id)arg1 values:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)setIbInspectedBottomTextLayoutChoiceIndex:(long long)arg1;
- (long long)ibInspectedBottomTextLayoutChoiceIndex;
- (void)setIbInspectedTopTextLayoutChoiceIndex:(long long)arg1;
- (long long)ibInspectedTopTextLayoutChoiceIndex;
- (id)ibInspectedBottomTextLayoutChoiceIndices;
- (id)ibInspectedTopTextLayoutChoiceIndices;
- (id)ibInspectedBottomTextLayoutChoices;
- (id)ibInspectedTopTextLayoutChoices;
- (BOOL)ibInspectedHasBottomTextLayoutChoices;
- (BOOL)ibInspectedHasTopTextLayoutChoices;
- (void)ibSwitchToBottomTemplateType:(long long)arg1;
- (void)setIbInspectedBottomTemplateType:(long long)arg1;
- (long long)ibInspectedBottomTemplateType;
- (void)ibSwitchToTopTemplateType:(long long)arg1;
- (void)setIbInspectedTopTemplateType:(long long)arg1;
- (long long)ibInspectedTopTemplateType;
- (id)ibInspectedOrderedBottomTemplateTypes;
- (id)ibInspectedOrderedTopTemplateTypes;
- (void)setIbInspectedUsesTemplates:(BOOL)arg1;
- (BOOL)ibInspectedUsesTemplates;
- (BOOL)ibInspectedIsNotInGlanceInterface;
- (id)ibEditableTitleKeyPath;
- (id)ibDragAndDropSubitemsKeyPath;
- (BOOL)ibIsChildViewProvidedByGlanceTemplate:(id)arg1;
- (BOOL)ibOverridesPositionForChildView:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)ibOverridesSizeForChildView:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibOrderedEntryPointIndicatorsInStoryboard:(id)arg1;
- (BOOL)ibCanBecomeEntryPointForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (BOOL)ibCanBeValidSegueDestination;
- (id)ibDefaultEditorCanvasFrameTitle;
- (id)ibTypeNameForDefaultLabel;
- (id)ibRuntimeClassName;
- (void)ibEstablishTemplateItemRelationshipsAfterUnarchiving;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibFieldEditorFontForLabelSize:(long long)arg1;
- (id)ibOverriddenFieldEditorFontForChildView:(id)arg1;
- (id)ibLabelSizeForChild:(id)arg1;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (BOOL)ibShouldArchiveChild:(id)arg1 forToOneRelationship:(id)arg2;
- (BOOL)ibShouldIncludeKeyPath:(id)arg1 inInitialChildrenForDocument:(id)arg2;
- (long long)ibMarshalledFileType;
- (id)ibTransformPlistValue:(id)arg1 forKeyPath:(id)arg2 plistKey:(id)arg3 document:(id)arg4 configuration:(id)arg5 reason:(long long)arg6;
- (void)ibEnumeratePlistKeysForKeyPath:(id)arg1 document:(id)arg2 reason:(long long)arg3 withBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end