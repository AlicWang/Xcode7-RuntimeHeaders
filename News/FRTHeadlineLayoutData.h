//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRTHeadlineLayoutData : NSObject
{
    _Bool _showingSubtitle;
    _Bool _showingExcerpt;
    long long _cellType;
    long long _columnSpan;
    long long _rowSpan;
    long long _imagePosition;
    double _imageHeight;
    double _whiteSpace;
    struct CGRect _imageFrame;
    struct CGRect _titleFrame;
    struct CGRect _subtitleFrame;
    struct CGRect _excerptFrame;
    struct CGRect _bottomLeftViewFrame;
    struct CGRect _accessoryViewFrame;
}

@property(nonatomic) double whiteSpace; // @synthesize whiteSpace=_whiteSpace;
@property(nonatomic) _Bool showingExcerpt; // @synthesize showingExcerpt=_showingExcerpt;
@property(nonatomic) _Bool showingSubtitle; // @synthesize showingSubtitle=_showingSubtitle;
@property(nonatomic) struct CGRect accessoryViewFrame; // @synthesize accessoryViewFrame=_accessoryViewFrame;
@property(nonatomic) struct CGRect bottomLeftViewFrame; // @synthesize bottomLeftViewFrame=_bottomLeftViewFrame;
@property(nonatomic) struct CGRect excerptFrame; // @synthesize excerptFrame=_excerptFrame;
@property(nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property(nonatomic) long long rowSpan; // @synthesize rowSpan=_rowSpan;
@property(nonatomic) long long columnSpan; // @synthesize columnSpan=_columnSpan;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (id)description;

@end