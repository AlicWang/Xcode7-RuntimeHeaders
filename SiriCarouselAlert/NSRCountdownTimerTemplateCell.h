//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSRCountdownTimerTemplateCell : NSRTemplateCell <NSRActionableCell>
{
    NSRLabel *_headerLabel;
    NSRLabel *_countdownLabel;
    CAShapeLayer *_headerMask;
    CAShapeLayer *_countdownMask;
    id <NSRTemplateCellActionDelegate> actionDelegate;
}

+ (id)calculateLayoutValuesForTemplate:(id)arg1 suggestedSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <NSRTemplateCellActionDelegate> actionDelegate; // @synthesize actionDelegate;
- (void).cxx_destruct;
- (void)countdown;
- (id)_layoutValues;
- (void)updateCountdownLabel;
- (void)setTemplateObject:(id)arg1;
- (void)updateContentMasks;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end