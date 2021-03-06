//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDESimulatorPlaygroundDeviceDebugWindowController : NSWindowController <IDESimulatorPlaygroundFramebufferServiceChannelDelegate>
{
    IDESimulatorPlaygroundDeviceCommunicationService *_deviceCommunicationService;
    IDESimulatorPlaygroundFramebufferServiceChannel *_framebufferServiceChannel;
}

+ (BOOL)isSimDebugWindowEnabled;
@property(retain) IDESimulatorPlaygroundFramebufferServiceChannel *framebufferServiceChannel; // @synthesize framebufferServiceChannel=_framebufferServiceChannel;
@property __weak IDESimulatorPlaygroundDeviceCommunicationService *deviceCommunicationService; // @synthesize deviceCommunicationService=_deviceCommunicationService;
- (void).cxx_destruct;
- (void)simulatorPlaygroundFramebufferServiceChannel:(id)arg1 didReceiveFramebufferImage:(struct CGImage *)arg2;
- (void)dealloc;
- (id)initWithDeviceCommunicationService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end