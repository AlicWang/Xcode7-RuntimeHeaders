//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRVisitableItemWebViewWrapper : NSObject <FCHeadlineProviding>
{
    _Bool _featureCandidate;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _surfacedByExploration;
    _Bool _featured;
    _Bool _wasFeatured;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_title;
    NSString *_subtitle;
    NSDate *_publishDate;
    unsigned long long _publisherArticleVersion;
    unsigned long long _backendArticleVersion;
    NSString *_primaryAudience;
    NSObject<FCChannelProviding> *_sourceChannel;
    NSString *_sourceName;
    FCAssetHandle *_thumbnailAssetHandle;
    NSString *_longFormExcerpt;
    NSString *_shortExcerpt;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    unsigned long long _contentType;
    NSArray *_topicIDs;
    NSArray *_highestScoringTopicIDs;
    NSURL *_videoURL;
    double _videoDuration;
    NSObject<FCTagProviding> *_displayTopic;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSString *_localDraftPath;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    NSString *_surfacedByTagID;
    NSString *_surfacedBySectionID;
    NSString *_surfacedByChannelID;
    NSString *_surfacedByTopicID;
    NSString *_surfacedByBinID;
    NSString *_accessoryText;
    double _userFeedback;
}

@property(readonly, nonatomic) double userFeedback; // @synthesize userFeedback=_userFeedback;
@property(readonly, copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(readonly, nonatomic) _Bool wasFeatured; // @synthesize wasFeatured=_wasFeatured;
@property(readonly, nonatomic, getter=isFeatured) _Bool featured; // @synthesize featured=_featured;
@property(readonly, nonatomic) _Bool surfacedByExploration; // @synthesize surfacedByExploration=_surfacedByExploration;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID; // @synthesize surfacedByBinID=_surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID; // @synthesize surfacedByTopicID=_surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID; // @synthesize surfacedByChannelID=_surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID; // @synthesize surfacedBySectionID=_surfacedBySectionID;
@property(readonly, copy, nonatomic) NSString *surfacedByTagID; // @synthesize surfacedByTagID=_surfacedByTagID;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath; // @synthesize localDraftPath=_localDraftPath;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(readonly, copy, nonatomic) NSObject<FCTagProviding> *displayTopic; // @synthesize displayTopic=_displayTopic;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate; // @synthesize featureCandidate=_featureCandidate;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSArray *highestScoringTopicIDs; // @synthesize highestScoringTopicIDs=_highestScoringTopicIDs;
@property(readonly, copy, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(readonly, copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *longFormExcerpt; // @synthesize longFormExcerpt=_longFormExcerpt;
@property(readonly, nonatomic) FCAssetHandle *thumbnailAssetHandle; // @synthesize thumbnailAssetHandle=_thumbnailAssetHandle;
@property(readonly, copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(readonly, nonatomic) unsigned long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(readonly, nonatomic) unsigned long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, copy, nonatomic) FCHeadlineTemplate *headlineTemplate;
@property(readonly, nonatomic) unsigned long long displayType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArticleHeadline:(id)arg1;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end