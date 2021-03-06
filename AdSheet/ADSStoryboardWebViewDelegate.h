//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol ADSStoryboardWebViewDelegate <ADWebViewDelegate>
- (long long)interfaceOrientation;
- (void)webViewDidTakeScreenShot:(ADSStoryboardWebView *)arg1;
- (void)webViewWillTakeScreenShot:(ADSStoryboardWebView *)arg1;
- (void)storyboardWebView:(ADSStoryboardWebView *)arg1 didChangeSupportedInterfaceOrientations:(unsigned long long)arg2;
- (unsigned long long)storyboardWebViewRequestsSupportedInterfaceOrientations:(ADSStoryboardWebView *)arg1;
- (void)webView:(ADSStoryboardWebView *)arg1 requestsPreview:(ADQuicklookPreview *)arg2 completion:(void (^)(_Bool))arg3;
- (void)webView:(ADSStoryboardWebView *)arg1 requestsDismissPopoverViewControllerAnimated:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)webView:(ADSStoryboardWebView *)arg1 requestsDismissModalViewControllerAnimated:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)webViewPopoverShouldResize:(ADSStoryboardWebView *)arg1;
- (void)webView:(ADSStoryboardWebView *)arg1 requestsPresentPopoverViewController:(UIViewController *)arg2 fromRect:(struct CGRect)arg3 animated:(_Bool)arg4 tapDismissalHandler:(void (^)(void))arg5;
- (void)webView:(ADSStoryboardWebView *)arg1 requestsPresentModalViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (_Bool)storyboardWebViewVoiceOverWantsToDismiss:(ADSStoryboardWebView *)arg1;
- (void)storyboardWebViewPrivilegedAdWantsToDismiss:(ADSStoryboardWebView *)arg1;

@optional
- (void)webView:(ADSStoryboardWebView *)arg1 didReportSystemEventWithType:(int)arg2;
- (void)webView:(ADSStoryboardWebView *)arg1 didReportEventWithMessage:(NSString *)arg2;
@end