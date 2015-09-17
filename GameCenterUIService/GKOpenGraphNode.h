//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKOpenGraphNode : NSObject
{
    unsigned long long _numberOfLikes;
    unsigned long long _numberOfFriendLikes;
    _Bool _liked;
    NSError *_error;
    NSURL *_url;
}

+ (void)openGraphNodeForURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)openGraphNodeAccessQueue;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(retain) NSError *error; // @synthesize error=_error;
@property unsigned long long numberOfLikes; // @synthesize numberOfLikes=_numberOfLikes;
@property unsigned long long numberOfFriendLikes; // @synthesize numberOfFriendLikes=_numberOfFriendLikes;
@property _Bool liked; // @synthesize liked=_liked;
- (void)toggleLikeStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendDislikeEventWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sendLikeEventWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLikeStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithOpenGraphURL:(id)arg1;

@end