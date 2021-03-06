//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSView (IBAppKitViewIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedCompositingFilter;
+ (id)keyPathsForValuesAffectingIbInspectedBackgroundFilters;
+ (id)keyPathsForValuesAffectingIbInspectedContentFilters;
+ (id)keyPathsForValuesAffectingDesignableSubviewsTransition;
+ (id)keyPathsForValuesAffectingIbInspectedHasShadow;
+ (id)keyPathsForValuesAffectingIbInspectedShadowBlurRadius;
+ (id)keyPathsForValuesAffectingIbInspectedShadowColor;
+ (id)keyPathsForValuesAffectingIbInspectedShadowOffsetHeight;
+ (id)keyPathsForValuesAffectingIbInspectedShadowOffsetWidth;
+ (id)keyPathsForValuesAffectingIbInspectedShadow;
+ (id)keyPathsForValuesAffectingIbInspectedAllViewsForRenderTree;
+ (id)keyPathsForValuesAffectingIbInspectedControl;
+ (id)ibSwizzledNSViewLayoutMetrics;
+ (void)ibPopulateAdditionalCocoaInspectors:(id)arg1 forCategory:(id)arg2;
- (id)ibViewsRelevantToPriorityOfKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ibDescriptiveTextOfCustomPriorityType:(id)arg1 withPriority:(long long)arg2;
- (id)ibLabelForPriorityOfKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)ibSwizzledNSViewPopulateResourceReferences:(id)arg1 withValueToVariantSetMap:(id)arg2;
- (BOOL)ibCanEmbedDirectlyInSplitView;
- (Class)ibSwizzledNSViewTrackerClass;
- (Class)ibSwizzledNSViewEditorClass;
- (CDUnknownBlockType)ibSwizzledNSViewWindow:(id *)arg1 forUpdatingConstraintsInDocument:(id)arg2;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibSwizzledNSViewLastInspectedTranslatesAutoresizingMaskIntoConstraintsMetadataKeyInDocument:(id)arg1;
- (id)ibSwizzledNSViewTranslatesAutoresizingMaskIntoConstraintsMetadataKeyInDocument:(id)arg1;
- (id)ibSwizzledNSViewConstraintsMetadataKeyInDocument:(id)arg1;
- (BOOL)ibWrapperViewForEditorCanvasFrameIsAffectedByChangeToProperty:(id)arg1;
- (id)ibWrapperViewForEditorCanvasFrame:(id)arg1;
- (void)setIbExternalNSViewSimulatedAppContext:(unsigned long long)arg1;
- (unsigned long long)ibExternalNSViewSimulatedAppContext;
- (void)setIbInspectedCompositingFilter:(id)arg1;
- (id)ibInspectedCompositingFilter;
- (void)setIbInspectedBackgroundFilters:(id)arg1;
- (id)ibInspectedBackgroundFilters;
- (void)setIbInspectedContentFilters:(id)arg1;
- (id)ibInspectedContentFilters;
- (void)setDesignableSubviewsTransition:(id)arg1;
- (id)designableSubviewsTransition;
- (void)setLastKnownDesignableSubviewsTransitionSubtype:(id)arg1;
- (id)lastKnownDesignableSubviewsTransitionSubtype;
- (BOOL)ibIsNSAppearanceContainer;
- (void)setIbInspectedHasShadow:(BOOL)arg1;
- (BOOL)ibInspectedHasShadow;
- (void)setIbInspectedShadowBlurRadius:(double)arg1;
- (double)ibInspectedShadowBlurRadius;
- (void)setIbInspectedShadowColor:(id)arg1;
- (id)ibInspectedShadowColor;
- (void)setIbInspectedShadowOffsetHeight:(double)arg1;
- (double)ibInspectedShadowOffsetHeight;
- (void)setIbInspectedShadowOffsetWidth:(double)arg1;
- (double)ibInspectedShadowOffsetWidth;
- (void)setIbInspectedShadow:(id)arg1;
- (id)ibInspectedShadow;
- (BOOL)ibInspectedIsTreeRenderingWithLayers;
- (void)ibEnableWantsLayerForBestViewInHierarchy;
- (id)ibInspectedAllViewsForRenderTree;
- (void)ibCellDidChangeInspectedLineBreakMode:(id)arg1;
- (void)ibTextFieldCellDidChangeInspectorLayout:(id)arg1;
- (BOOL)ibCanSupportIdentifierProperty;
- (void)ibSwizzledNSViewCustomizeForInsertionIntoNSView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (BOOL)ibInspectedImplementsSetTag;
- (id)ibInspectedControl;
- (id)ibSwizzledNSViewViewFromPasteboardImage:(id)arg1;
- (BOOL)ibCanBeBoundToFromObject:(id)arg1;
- (void)setIbExternalGestureRecognizers:(id)arg1;
- (id)ibExternalGestureRecognizers;
- (void)ibSwizzledNSViewRemoveChildren:(id)arg1;
- (void)ibSwizzledNSViewPopulateChildRelationOrder:(id)arg1;
- (id)ibSwizzledNSViewAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibSwizzledNSViewCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)ibSwizzledNSViewAcceptsPasteboardImageResourcesAsViews;
- (void)ibSwizzledNSViewWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibSwizzledNSViewShouldGenerateOverlappingViewsWarningsInDocument:(id)arg1;
- (void)ibSwizzledNSViewIssueOverlappingViewWarning:(id)arg1 forSibling:(id)arg2 withParentView:(id)arg3 inDocument:(id)arg4 withComputationContext:(id)arg5;
- (id)ibLocalAttributeKeyPaths;
- (BOOL)ibIsInspectorApplicable:(id)arg1 forCategory:(id)arg2;
- (id)ibSwizzledNSViewDocumentationPropertyInfosForKeyPath:(id)arg1;
@end