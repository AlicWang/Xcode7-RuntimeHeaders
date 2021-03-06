//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDAItemSource : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment>
{
    NSData *_data;
    NSString *_uti;
    NSURL *_URL;
    NSString *_string;
    NSAttributedString *_attributedString;
    UIImage *_previewImage;
    NSString *_subject;
    NSString *_name;
    NSString *_fakeBundleID;
    float _fakeDuration;
    int _fakeBytes;
}

@property(nonatomic) int fakeBytes; // @synthesize fakeBytes=_fakeBytes;
@property(nonatomic) float fakeDuration; // @synthesize fakeDuration=_fakeDuration;
@property(copy, nonatomic) NSString *fakeBundleID; // @synthesize fakeBundleID=_fakeBundleID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithAttributedString:(id)arg1 previewImage:(id)arg2 subject:(id)arg3;
- (id)initWithString:(id)arg1 previewImage:(id)arg2 subject:(id)arg3;
- (id)initWithURL:(id)arg1 previewImage:(id)arg2 subject:(id)arg3;
- (id)initWithData:(id)arg1 type:(id)arg2 previewImage:(id)arg3 subject:(id)arg4 name:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end