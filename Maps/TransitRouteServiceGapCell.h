//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface TransitRouteServiceGapCell : TransitRoutePickingCell
{
    NSLayoutConstraint *_topToLabelBaselineConstraint;
    NSLayoutConstraint *_labelToBottomConstraint;
    UILabel *_messageLabel;
    _Bool _isMessageLabelMultiline;
    NSTimeZone *_timeZone;
    id <GEOServerFormattedString> _messageFormattedString;
    long long _textFormat;
}

+ (id)reuseIdentifier;
@property(nonatomic) long long textFormat; // @synthesize textFormat=_textFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> messageFormattedString; // @synthesize messageFormattedString=_messageFormattedString;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (void).cxx_destruct;
- (void)_updateMessageLabel;
- (void)_contentSizeCategoryDidChange;
- (void)layoutSubviews;
- (void)_updateConstraintValues;
- (id)_autolayoutConstraints;
- (void)didMoveToWindow;
- (void)dealloc;
- (void)_createSubviews;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end