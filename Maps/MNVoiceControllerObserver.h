//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol MNVoiceControllerObserver <NSObject>
- (void)voiceController:(MNVoiceController *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)voiceController:(MNVoiceController *)arg1 didActivateAudioSession:(_Bool)arg2;
@end