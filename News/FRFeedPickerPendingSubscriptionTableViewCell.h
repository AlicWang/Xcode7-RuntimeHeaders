//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRFeedPickerPendingSubscriptionTableViewCell : UITableViewCell
{
    UIButton *_button;
    UIActivityIndicatorView *_spinnerView;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showSpinner:(_Bool)arg1;
- (void)showButton:(_Bool)arg1;
- (void)populateWithTitle:(id)arg1 showButton:(_Bool)arg2 showSpinner:(_Bool)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)cellAddButtonPressed:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end