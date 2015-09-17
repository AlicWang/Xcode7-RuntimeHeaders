//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PSSpinnerHeaderView : UIView <PSHeaderFooterView>
{
    NSString *_title;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_spinnerView;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (id)initWithSpecifier:(id)arg1;

@end