//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSVSTranscriptDelegate <NSObject>
- (void)transcript:(NSVSTranscript *)arg1 didRemoveItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)transcript:(NSVSTranscript *)arg1 didReplaceItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)transcript:(NSVSTranscript *)arg1 didAddItems:(NSArray *)arg2 atIndexes:(NSIndexSet *)arg3;
- (void)transcriptDidEndUpdates:(NSVSTranscript *)arg1;
- (void)transcriptWillBeginUpdates:(NSVSTranscript *)arg1;
@end