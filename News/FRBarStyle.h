//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface FRBarStyle : NSObject
{
    FRCompressingBarAppearance *_appearance;
    UIImage *_image;
    NSString *_imageUniqueKey;
    long long _type;
}

+ (id)barStyleForFeedTheme:(id)arg1 headline:(id)arg2 scrollView:(id)arg3 statisticsEnabled:(_Bool)arg4 backdropStatisticsState:(long long)arg5 forcedStyle:(long long)arg6 fullBleed:(_Bool)arg7 compression:(double)arg8 bottom:(_Bool)arg9 lowEnd:(_Bool)arg10;
+ (id)topOfArticleForegoundColorForFeedTheme:(id)arg1 headline:(id)arg2;
+ (id)topOfArticleAssetHandleForFeedTheme:(id)arg1 headline:(id)arg2;
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSString *imageUniqueKey; // @synthesize imageUniqueKey=_imageUniqueKey;
@property(readonly) UIImage *image; // @synthesize image=_image;
@property(readonly) FRCompressingBarAppearance *appearance; // @synthesize appearance=_appearance;
- (void).cxx_destruct;
- (_Bool)shouldShowSeparatorWithFeedTheme:(id)arg1;
- (_Bool)isEqualToBarStyle:(id)arg1;
- (id)initWithAppearance:(id)arg1 image:(id)arg2 imageUniqueKey:(id)arg3 type:(long long)arg4;

@end