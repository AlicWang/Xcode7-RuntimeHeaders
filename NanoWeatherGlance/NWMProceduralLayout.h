//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NWMProceduralLayout : NSObject
{
    int _primaryDirection;
    struct CGRect _rect;
    struct CGRect _usedRect;
}

+ (void)performLayoutInRect:(struct CGRect)arg1 direction:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)load;
@property(readonly) struct CGRect usedRect; // @synthesize usedRect=_usedRect;
@property int primaryDirection; // @synthesize primaryDirection=_primaryDirection;
@property(readonly) struct CGRect remainingRect; // @synthesize remainingRect=_rect;
- (struct CGRect)takeFrameThatFitsViews:(id)arg1 stackedFrom:(int)arg2 margins:(struct UIEdgeInsets *)arg3 withBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)takeFrameThatFitsViews:(id)arg1 stackedFrom:(int)arg2 ordering:(unsigned int *)arg3 margins:(struct UIEdgeInsets *)arg4 withBlock:(CDUnknownBlockType)arg5;
- (struct CGRect)placeView:(id)arg1 inRect:(struct CGRect)arg2 margin:(struct UIEdgeInsets)arg3 withBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)takeFrameThatFitsView:(id)arg1 margin:(struct UIEdgeInsets)arg2 withBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)takeFrameOfSize:(struct CGSize)arg1 forView:(id)arg2 margin:(struct UIEdgeInsets)arg3 withBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)takeAmount:(float)arg1 fromEdge:(int)arg2;
- (void)clearUsedRect;
- (void)reset:(struct CGRect)arg1;

@end