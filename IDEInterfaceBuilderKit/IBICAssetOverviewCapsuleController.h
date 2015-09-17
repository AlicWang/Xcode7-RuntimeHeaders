//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICAssetOverviewCapsuleController : IDEViewController <IBICAssetCapsuleDelegate, IBICCatalogItemObserver>
{
    NSSet *_selectedIdentifiers;
    NSSet *_selectionBeforeMouseDown;
    DVTDelayedInvocation *_pushInvocation;
    id <IBInvalidation> _assetObservation;
    IBICCatalogDocument *_document;
    id <IBICAssetOverviewCapsuleControllerDelegate> _delegate;
    IBICAssetCapsule *_assetCapsule;
    IBICAbstractCatalogItem *_asset;
}

+ (id)assetComponentIDForAssetChild:(id)arg1;
@property(readonly, nonatomic) IBICAbstractCatalogItem *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) IBICAssetCapsule *assetCapsule; // @synthesize assetCapsule=_assetCapsule;
@property(nonatomic) __weak id <IBICAssetOverviewCapsuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IBICCatalogDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)assetCapsule:(id)arg1 interceptMouseUp:(id)arg2;
- (BOOL)assetCapsule:(id)arg1 interceptMouseDragged:(id)arg2 withOriginalMouseDown:(id)arg3;
- (BOOL)assetCapsule:(id)arg1 interceptMouseDown:(id)arg2;
- (void)assetCapsule:(id)arg1 userDidEditTitle:(id)arg2;
- (id)assetCapsuleTitleForEditing:(id)arg1 initialSelection:(struct _NSRange *)arg2;
- (void)assetCapsule:(id)arg1 performDelete:(id)arg2;
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;
- (id)hitModelObjectsAtPoint:(struct CGPoint)arg1;
- (id)assetComponentAtLocation:(struct CGPoint)arg1;
- (id)cachedDecodedDragImages;
- (void)setCachedDecodedDragImages:(CDUnknownBlockType)arg1;
- (void)populateDragIdentifiers:(id)arg1 images:(id)arg2 andWindowFrames:(id)arg3 fromItems:(id)arg4;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (void)setWholeAssetShowsSelection:(BOOL)arg1;
- (void)loadView;
- (Class)assetCapsuleClass;
- (void)pushData;
- (id)titleFromTitleProvidingItem:(id)arg1;
- (void)batchedValidateUI:(id)arg1;
- (void)pushImediatelyIfNeeded;
- (void)schedulePush;
- (void)imageCatalogItemDidChangeDisplayProperties:(id)arg1;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)imageCatalogItem:(id)arg1 willChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (void)removeAssetComponentIDsFromUIImmediately:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1 andAsset:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end