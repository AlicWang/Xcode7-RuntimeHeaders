//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedPickerTableViewCellLogoView : UIView
{
    _Bool _isSection;
    UIImageView *_logoImageView;
    UIImageView *_sectionDecorationImageView;
}

@property(retain, nonatomic) UIImageView *sectionDecorationImageView; // @synthesize sectionDecorationImageView=_sectionDecorationImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) _Bool isSection; // @synthesize isSection=_isSection;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSectionDecorationImage:(id)arg1;
- (id)sectionDecorationImage;
@property(nonatomic) UIImage *logo;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect logoImageFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end