//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSTableColumn (IBTableColumnIntegration)
- (id)ibDesignableFontKeyPath;
- (id)ibSmartConnectionComparisonString;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (struct CGRect)ibTitleRectForEditing;
- (double)preferredWidth;
- (void)noteDesignableDescendant:(id)arg1 didChangeProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (struct CGRect)ibRectForChild:(id)arg1 inWindowController:(id)arg2;
- (id)ibDefaultLabel;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (id)ibDefaultChildren;
- (id)gToolTip;
- (void)setGToolTip:(id)arg1;
- (void)setSortDescriptorSelector:(id)arg1;
- (id)sortDescriptorSelector;
- (void)setSortDescriptorAscending:(BOOL)arg1;
- (BOOL)sortDescriptorAscending;
- (void)setSortDescriptorKey:(id)arg1;
- (id)sortDescriptorKey;
- (id)currentSortDescriptor;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)orderedDesignableAttributesKeyPaths;
- (id)ibPasteboardTypes;
- (void)ibPopulateSizeInspectorClasses:(id)arg1;
- (void)ibPopulateAttributeInspectorClasses:(id)arg1;
- (Class)ibEditorClass;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateKeyPaths:(id)arg1;
@end