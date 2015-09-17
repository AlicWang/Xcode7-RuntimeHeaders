//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ETAlertProvider : NSObject <ETAppViewControllerDelegate, ETClientInterface, CUISAlertProvider>
{
    NSXPCConnection *_connection;
    CSLSButtonHandler *_buttonHandler;
    id <CUISAlertProviderDelegate> alertProviderDelegate;
    ETAppViewController *_appController;
}

@property(retain, nonatomic) ETAppViewController *appController; // @synthesize appController=_appController;
@property(nonatomic) __weak id <CUISAlertProviderDelegate> alertProviderDelegate; // @synthesize alertProviderDelegate;
- (void).cxx_destruct;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)controllerRequestsDeactivation:(id)arg1;
- (void)incomingMessage:(id)arg1 identifier:(id)arg2 sender:(id)arg3 recipient:(id)arg4;
- (void)dealloc;
- (_Bool)_handleButtonPress;
- (void)_registerForButtonPress;
- (void)_handleUserTappedOnNotification:(id)arg1;
- (void)registerForNotifications;
- (void)close;
- (void)open;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end