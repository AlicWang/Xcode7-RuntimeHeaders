//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SafariExplanationViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    id <SafariExplanationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SafariExplanationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)donePressed;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 explanatoryHTMLResourceName:(id)arg2 fromBundle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end