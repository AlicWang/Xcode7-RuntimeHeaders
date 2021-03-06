//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ListViewSearchResultCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_addressLabel;
    UILabel *_closedLabel;
    UILabel *_distanceLabel;
    UIImageView *_icon;
    UILabel *_detailsLabel;
    SearchResult *_searchResult;
    MKStarRatingView *_ratingView;
    UILabel *_numReviewsLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_infoButton;
    UIImageView *_photoImageView;
    NSURL *_currentLoadingURL;
    _Bool _showBrowse;
    _Bool _showDistance;
    UILabel *_delimiter;
    UIView *_selectedView;
    UIColor *_lightContentPlaceholderImageColor;
    UIColor *_placeholderImageColor;
    _Bool _displaysPhoto;
    _Bool _displaysAsChainResult;
    _Bool _displaysAddressInsteadDistance;
    _Bool _displaysLightContent;
    GEOLocation *_currentLocation;
    id <ListViewSearchResultCellAccessoryDelegate> _delegate;
}

+ (id)cellWithSearchResult:(id)arg1 currentLocation:(id)arg2;
+ (id)cellWithMapItem:(id)arg1 currentLocation:(id)arg2;
+ (id)_delimiterString;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool displaysLightContent; // @synthesize displaysLightContent=_displaysLightContent;
@property(nonatomic) _Bool displaysAddressInsteadDistance; // @synthesize displaysAddressInsteadDistance=_displaysAddressInsteadDistance;
@property(nonatomic) _Bool displaysAsChainResult; // @synthesize displaysAsChainResult=_displaysAsChainResult;
@property(nonatomic) _Bool displaysPhoto; // @synthesize displaysPhoto=_displaysPhoto;
@property(nonatomic) __weak id <ListViewSearchResultCellAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBadgeBackground;
- (void)setImageBackgroundSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_transitInfoLabelBaselineToBottom;
- (double)_addressLabelBaselineToTransitInfoShieldLabelCenter;
- (double)_addressLabelBaselineToTransitInfoLabelBaseline;
- (double)_numReviewsLabelBaselineToBottom;
- (double)_numReviewsLabelBaselineToStarRatingBottom;
- (double)_addressLabelBaselineToNumReviewsLabelBaseline;
- (double)_nameLabelBaselineToAddressLabelBaseline;
- (double)_topToNameLabelBaseline;
- (void)_updateLabels;
- (_Bool)showClosedBadge;
- (id)_distanceStringFromLocation:(id)arg1 toMapItem:(id)arg2;
@property(retain, nonatomic) SearchResult *searchResult;
- (void)pressedInfo:(id)arg1;
- (id)infoButton;
- (void)_updateStyleValuesFromTheme;
- (void)_updateFonts;
- (void)prepareForReuse;
- (id)closedLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end