//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkOverlayCollectionViewLayout : UICollectionViewLayout
{
    NSMutableDictionary *_cellAttributes;
    NSMutableDictionary *_supplementaryAttributes;
    NSArray *_overlayItems;
    _Bool _contentChange;
    _Bool _boundsChange;
    NSDictionary *_oldCellAttributes;
    NSDictionary *_disappearingAttributes;
    NSDictionary *_appearingAttributes;
    NSDictionary *_oldSupplementaryAttributes;
    NSDictionary *_disappearingSupplementaryAttributes;
    NSDictionary *_appearingSupplementaryAttributes;
    NSSet *_indexPathsToDelete;
    NSSet *_indexPathsToInsert;
    double _topOffset;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) double topOffset; // @synthesize topOffset=_topOffset;
@property(retain, nonatomic) NSArray *overlayItems; // @synthesize overlayItems=_overlayItems;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)_getUpdateAttributesForItems:(id)arg1 disappearingAttributes:(out id *)arg2 oldCellAttributes:(id)arg3 currentCellAttributes:(id)arg4 appearingAttributes:(out id *)arg5 crossFade:(_Bool)arg6;
- (void)prepareLayout;
- (struct CGRect)_contentBounds;
- (struct CGSize)collectionViewContentSize;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)initWithOffset:(double)arg1 overlayItems:(id)arg2;

@end