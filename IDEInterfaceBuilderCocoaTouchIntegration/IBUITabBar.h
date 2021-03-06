//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBUITabBar : IBUIView <IBDocumentArchiving, NSCoding, IBUIEditorDecoratableView, IBUIViewCachedItemFramesDictionaryInfoDelegate>
{
    NSColor *_selectedImageTintColor;
    NSImage *_backgroundImage;
    NSImage *_selectionIndicatorImage;
    NSImage *_shadowImage;
    NSNumber *_itemPositioning;
    NSNumber *_itemWidth;
    NSNumber *_itemSpacing;
    int _barStyle;
    BOOL _translucent;
    NSColor *_barTintColor;
    NSMutableArray *_items;
    IBUITabBarItem *_selectedItem;
    IBMutableIdentityDictionary *_cachedItemFrames;
    IBMutableIdentityDictionary *_cachedItemImages;
    IBMutableIdentityDictionary *_cachedTitleRects;
}

+ (void)registerMarshallingRecordHandlers;
+ (BOOL)shouldArchiveTintColorWithUIViewProperties;
+ (id)keyPathsForValuesAffectingIbInspectedItemSpacingDefault;
+ (id)keyPathsForValuesAffectingIbInspectedItemWidthDefault;
+ (id)ibObservedPropertiesForInheritableMetricsInvalidation;
+ (long long)ibInstantiationSizeBehavior;
+ (id)ibInstantiateViewForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) NSNumber *itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(retain, nonatomic) NSNumber *itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSNumber *itemPositioning; // @synthesize itemPositioning=_itemPositioning;
@property(retain, nonatomic) NSImage *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(retain, nonatomic) NSImage *selectionIndicatorImage; // @synthesize selectionIndicatorImage=_selectionIndicatorImage;
@property(retain, nonatomic) NSImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) NSColor *selectedImageTintColor; // @synthesize selectedImageTintColor=_selectedImageTintColor;
- (void).cxx_destruct;
- (id)imageOfItem:(id)arg1;
- (id)itemImages;
- (id)tabBarItemAtPoint:(struct CGPoint)arg1;
- (struct CGRect)titleRectForItem:(id)arg1;
- (id)titleRects;
- (struct CGRect)frameForItem:(id)arg1;
- (id)itemFrames;
- (void)setSelectedItem:(id)arg1;
- (id)selectedItem;
- (void)populateCachedGeometryInfos:(id)arg1;
- (void)enumerateCachedImageKeyPaths:(CDUnknownBlockType)arg1;
- (void)setItems:(id)arg1;
- (id)orderedItemsForCachedItemFramesDictionaryInfo:(id)arg1;
- (id)items;
- (void)removeTabBarItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 targetRuntime:(id)arg2;
- (Class)barMetricsClass;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibInspectedItemSpacingDefault;
- (id)ibInspectedItemWidthDefault;
- (void)setIbInspectedItemPositioning:(int)arg1;
- (int)ibInspectedItemPositioning;
- (void)editorView:(id)arg1 drawDecoratorInRect:(struct CGRect)arg2 overlayView:(id)arg3;
- (BOOL)ibCanBeCollectionViewBackgroundView;
- (BOOL)ibCanBeTableViewBracketingView;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibCustomizeForInsertionIntoIBUIView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibRemoveChildren:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibPasteboardTypes;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (long long)ibPreferredResizeDirection;
- (id)ibWidgetType;
- (BOOL)ibArchivesTabBarItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end