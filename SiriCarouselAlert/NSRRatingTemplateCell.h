//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRRatingTemplateCell : NSRTemplateCell
{
    NSRRatingView *_ratingView;
}

+ (float)lastLineBaselineDistanceFromBottomWithTemplate:(id)arg1;
+ (float)firstLineBaselineOriginWithTemplate:(id)arg1;
+ (int)defaultContentAlignmentType;
+ (Class)_ratingViewClassForRating:(id)arg1;
+ (id)calculateLayoutValuesForTemplate:(id)arg1 suggestedSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)_layoutValues;
- (void)layoutSubviews;
- (void)setTemplateObject:(id)arg1;

@end