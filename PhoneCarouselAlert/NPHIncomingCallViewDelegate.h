//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NPHIncomingCallViewDelegate <NSObject>

@optional
- (void)incomingCallViewReceivedTapOnAnswerOniPhone:(NPHIncomingCallView *)arg1;
- (void)incomingCallViewReceivedTapOnEndActiveAndAnswer:(NPHIncomingCallView *)arg1;
- (void)incomingCallViewReceivedTapOnDeclineAndSendToVoicemail:(NPHIncomingCallView *)arg1;
- (void)incomingCallViewReceivedTapOnDeclineAndMessage:(NPHIncomingCallView *)arg1;
- (void)incomingCallViewReceivedTapOnDecline:(NPHIncomingCallView *)arg1;
- (void)incomingCallViewReceivedTapOnAnswer:(NPHIncomingCallView *)arg1;
@end