//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkOverlayContentView : UICollectionViewCell
{
    UIView *_content;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIView *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end