//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DataActivationAppDelegate : NSObject <UIApplicationDelegate, UINavigationControllerDelegate>
{
    UIWindow *_mainWindow;
    UIViewController *_rootViewController;
    NSDictionary *_launchOptions;
    DataActivationRemoteAlertViewController *_dataActivationRemoteAlertViewController;
}

@property(retain, nonatomic) DataActivationRemoteAlertViewController *dataActivationRemoteAlertViewController; // @synthesize dataActivationRemoteAlertViewController=_dataActivationRemoteAlertViewController;
@property(readonly, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)endRemoteSheet;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_showRootViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end