//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCGGlanceContentView : NCGPlatterView
{
    NSMutableArray *_eventViews;
    NCGGlanceLayoutAttributes *_layoutAttributes;
    NSString *_headerText;
    NSString *_footerText;
    NSString *_noContentText;
    UILabel *_headerLabel;
    UILabel *_footerLabel;
    UILabel *_noContentLabel;
}

@property(retain, nonatomic) UILabel *noContentLabel; // @synthesize noContentLabel=_noContentLabel;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSString *noContentText; // @synthesize noContentText=_noContentText;
@property(retain, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(retain, nonatomic) NCGGlanceLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void).cxx_destruct;
- (id)_newEventView;
- (id)_newHeaderFooterLabel;
- (id)_selectNumberOfEvents:(int)arg1 fromEvents:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithUpcomingEvents:(id)arg1 areFirstInDay:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end