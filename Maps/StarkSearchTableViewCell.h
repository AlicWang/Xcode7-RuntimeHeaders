//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface StarkSearchTableViewCell : StarkTableViewCell <MKQuickRouteConfigurableView>
{
    StarkSearchTableViewCellContentView *_actualContentView;
    StarkSearchTableViewCellLayout *_layout;
}

+ (Class)layoutClass;
- (void).cxx_destruct;
- (void)quickRouteManager:(id)arg1 didUpdateETA:(id)arg2 error:(id)arg3 animated:(_Bool)arg4;
@property(readonly, nonatomic) StarkSearchTableViewCellLayout *layout; // @synthesize layout=_layout;
- (void)setOrientationIsValid:(_Bool)arg1;
- (void)setArrowDirection:(double)arg1 animated:(_Bool)arg2;
- (void)setNeedsLayoutForChanges:(CDUnknownBlockType)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end