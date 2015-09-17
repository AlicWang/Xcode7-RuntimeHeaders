//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXSequentialItemView : UIView
{
    long long _visibleItemIndex;
    NSArray *_allItems;
    NSTimer *_showMoreItemsTimer;
    UILabel *_slot0;
    UILabel *_slot1;
    UILabel *_slot2;
}

@property(retain, nonatomic) UILabel *slot2; // @synthesize slot2=_slot2;
@property(retain, nonatomic) UILabel *slot1; // @synthesize slot1=_slot1;
@property(retain, nonatomic) UILabel *slot0; // @synthesize slot0=_slot0;
@property(retain, nonatomic) NSTimer *showMoreItemsTimer; // @synthesize showMoreItemsTimer=_showMoreItemsTimer;
@property(retain, nonatomic) NSArray *allItems; // @synthesize allItems=_allItems;
- (void).cxx_destruct;
- (void)_fadeInAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeOutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showNextVisibleItemsAnimated:(_Bool)arg1;
- (void)_showMoreItemsTimerFired:(id)arg1;
- (double)_heightNeededFor2RowsOfText:(id)arg1;
- (void)updateItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end