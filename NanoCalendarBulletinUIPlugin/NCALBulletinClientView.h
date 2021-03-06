//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NCALBulletinClientView : UIView
{
    CUISAlertPlatterView *_backgroundPlatterView;
    CUISBulletinLongLookLayoutAttributes *_layoutAttributes;
    UIImageView *_titleAndSubtitleBackgroundView;
    NCALTextAndHeaderViewPair *_titleTextAndHeader;
    NCALTextAndHeaderViewPair *_subtitleTextAndHeader;
    NSArray *_supplementaryTextAndHeaders;
    NSCalendar *_referenceGregorianCalendar;
    NSNumberFormatter *_decimalFormatter;
    EKUIEventNotificationRepresentation *_notificationRepresentation;
}

+ (id)_backgroundPlatterImage;
@property(retain, nonatomic) EKUIEventNotificationRepresentation *notificationRepresentation; // @synthesize notificationRepresentation=_notificationRepresentation;
- (void).cxx_destruct;
- (id)relativeStringForDate:(id)arg1 allDay:(_Bool)arg2;
- (_Bool)updateRelativeDateLabel;
- (void)handleLocaleChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithNotificationRepresentation:(id)arg1 displaySupplementaryItems:(_Bool)arg2;

@end