//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol FRAVPlayerViewControllerDataSource <NSObject>
- (_Bool)isVideoInArticle;
- (FRArticleViewContext *)videoArticleViewContext;
- (id <FCHeadlineProviding>)videoHeadline;
- (_Bool)adSupported;
- (NSURL *)videoURLForAVPlayerViewController:(AVPlayerViewController *)arg1;
@end