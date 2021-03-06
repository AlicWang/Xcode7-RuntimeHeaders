//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ADCameraJSO : ADJavaScriptObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, ADCameraJSO_Bindings>
{
    long long _cameraDevice;
    NSString *_currentPictureURI;
    NSString *_internalPictureURI;
}

+ (void)initializeInContext:(id)arg1;
@property(copy, nonatomic) NSString *internalPictureURI; // @synthesize internalPictureURI=_internalPictureURI;
@property(copy, nonatomic) NSString *currentPictureURI; // @synthesize currentPictureURI=_currentPictureURI;
@property(nonatomic) long long cameraDevice; // @synthesize cameraDevice=_cameraDevice;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_finishWithSuccess:(_Bool)arg1;
- (void)present:(id)arg1;
- (void)_presentCamera;
- (void)_setCurrentImage:(id)arg1;
- (id)initWithDelegate:(id)arg1 impressionController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end