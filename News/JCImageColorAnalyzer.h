//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface JCImageColorAnalyzer : NSObject
{
    struct JCImageAnalyzer *_analyzer;
}

- (id)textShadowColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
- (id)secondaryTextColorForBackgroundColor:(id)arg1;
- (id)textColorForBackgroundColor:(id)arg1;
- (double)imageBorder;
- (_Bool)colorIsDark:(id)arg1;
- (id)backgroundColor;
- (id)dominantColors;
- (void)analyzeImage:(struct CGImage *)arg1;
- (void)dealloc;
- (struct JCImageAnalyzer *)imageAnalyzer;

@end