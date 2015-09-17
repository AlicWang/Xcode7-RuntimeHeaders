//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHVoicemailPlaybackHeaderView : UIView
{
    UILabel *_titleLabel;
    UILabel *_detail1Label;
    UILabel *_detail2Label;
    _Bool _notification;
    NSString *_title;
    NSString *_detail1;
    NSString *_detail2;
}

+ (id)_createDetail2LabelForNotification:(_Bool)arg1;
+ (id)_createDetail1LabelForNotification:(_Bool)arg1;
+ (id)_createTitleLabelForNotification:(_Bool)arg1;
@property(nonatomic, getter=isNotification) _Bool notification; // @synthesize notification=_notification;
@property(retain, nonatomic, setter=setDetail2:) NSString *detail2; // @synthesize detail2=_detail2;
@property(retain, nonatomic, setter=setDetail1:) NSString *detail1; // @synthesize detail1=_detail1;
@property(retain, nonatomic, setter=setTitle:) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_createConstraintsForNotification:(_Bool)arg1;
@property(readonly, nonatomic) UILabel *baselineLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithIsForNotification:(_Bool)arg1;

@end