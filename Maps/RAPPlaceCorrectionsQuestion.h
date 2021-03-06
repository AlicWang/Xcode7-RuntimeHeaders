//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPPlaceCorrectionsQuestion : RAPQuestion <RAPQuestionAcceptingAlternatePlace>
{
    id <RAPPlace> _reportedPlace;
    CDStruct_2c43369c _originalCoordinate;
    NSArray *_correctableItems;
    RAPPlaceCorrectableAddress *_correctableAddress;
    NSArray *_originalSelectedCategoryTitles;
    NSArray *_selectedCategoryTitles;
    RAPCommentQuestion *_commentQuestion;
    RAPCommentQuestion *_geotaggedPhotoCommentQuestion;
    CDStruct_2c43369c _coordinate;
}

+ (int)mapServiceAction;
+ (id)localizedTitle;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinatePickingInitialFeatureCoordinate;
@property(readonly, nonatomic) unsigned long long coordinatePickingMapType;
@property(readonly, nonatomic) CDStruct_90e2a262 coordinatePickingMapRect;
@property(readonly, nonatomic) _Bool requiresSelectingCoordinateImmediately;
- (CDStruct_90e2a262)_initialCoordinatePickingMapRect;
@property(readonly, nonatomic) NSString *localizedCoordinatePickingPrompt;
@property(readonly, nonatomic) NSString *localizedLocationExplanation;
@property(readonly, nonatomic) NSString *localizedLocationLabel;
- (_Bool)addressPresentationWasUpdatedSinceChangeContext:(id)arg1;
@property(readonly, nonatomic) id <RAPPlaceCorrectionsQuestionChangeContext> changeContext;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)_userPathItems;
- (int)_problemType;
@property(readonly, nonatomic) NSString *localizedAddCategoryCommandTitle;
@property(readonly, nonatomic) NSString *localizedCategoriesListTitle;
@property(readonly, nonatomic) NSString *localizedCorrectionsPrompt;
- (_Bool)validateSelectedCategoryTitles:(inout id *)arg1 error:(out id *)arg2;
@property(copy, nonatomic) NSArray *selectedCategoryTitles; // @synthesize selectedCategoryTitles=_selectedCategoryTitles;
@property(readonly, nonatomic) NSArray *originalSelectedCategoryTitles; // @synthesize originalSelectedCategoryTitles=_originalSelectedCategoryTitles;
@property(readonly, nonatomic) unsigned long long maximumCountForSelectedCategories;
@property(readonly, nonatomic) _Bool shouldShowCategorySelection;
@property(readonly, nonatomic) NSArray *correctableItems; // @synthesize correctableItems=_correctableItems;
- (id)correctableItemOfKind:(long long)arg1;
@property(readonly, nonatomic) RAPPlaceCorrectableAddress *correctableAddress; // @synthesize correctableAddress=_correctableAddress;
- (void)_beginObservingCorrectableItem:(id)arg1;
- (_Bool)shouldAllowMarkingWrongForItem:(id)arg1;
- (_Bool)requiresValueForCorrectableItem:(id)arg1;
@property(readonly, nonatomic, getter=isCoordinateEdited) _Bool coordinateEdited;
- (_Bool)isCoordinateValid;
- (_Bool)_isNowComplete;
- (void)_correctableValueDidChange;
@property(readonly, nonatomic) RAPCommentQuestion *geotaggedPhotoCommentQuestion; // @synthesize geotaggedPhotoCommentQuestion=_geotaggedPhotoCommentQuestion;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
- (id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end