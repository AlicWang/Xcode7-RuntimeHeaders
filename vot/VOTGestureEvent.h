//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface VOTGestureEvent : SCRCGestureEvent
{
    AXEventRepresentation *_eventRepresentation;
}

+ (id)gestureEventWithEventRepresentation:(id)arg1;
@property(retain, nonatomic) AXEventRepresentation *eventRepresentation; // @synthesize eventRepresentation=_eventRepresentation;
- (_Bool)didFallThruToDevice;
- (void)_addFingerInformation;
- (_Bool)isDownEvent;
- (_Bool)isLiftEvent;
- (_Bool)isCancelEvent;
- (id)description;
- (void)dealloc;
- (id)_initWithDeviceIdentifier:(unsigned long long)arg1 andEventRepresentation:(id)arg2;

@end