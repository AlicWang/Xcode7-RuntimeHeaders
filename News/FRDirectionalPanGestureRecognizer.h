//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRDirectionalPanGestureRecognizer : UIGestureRecognizer
{
    double _moveX;
    double _moveY;
    _Bool _isDragging;
    _Bool _startsPositive;
    struct CGPoint _velocity;
    double _timestamp;
    long long _direction;
    double _threshold;
    double _inverseThreshold;
    id _touchedObject;
    long long _detectedDirection;
}

@property(readonly, nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
@property(readonly, nonatomic) long long detectedDirection; // @synthesize detectedDirection=_detectedDirection;
@property(nonatomic) __weak id touchedObject; // @synthesize touchedObject=_touchedObject;
@property(nonatomic) double inverseThreshold; // @synthesize inverseThreshold=_inverseThreshold;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)reset;
@property(readonly, nonatomic) double inversePanFactor;
@property(readonly, nonatomic) double panFactor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end