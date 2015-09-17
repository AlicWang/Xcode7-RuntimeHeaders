//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEShaderModifierSourceTextView : DVTSourceTextView
{
    DVTTextSidebarView *_sidebarView;
    id <SKEShaderModifierSourceTextViewSyntaxColoringDelegate> _syntaxColoringDelegate;
}

@property __weak id <SKEShaderModifierSourceTextViewSyntaxColoringDelegate> syntaxColoringDelegate; // @synthesize syntaxColoringDelegate=_syntaxColoringDelegate;
- (void).cxx_destruct;
- (void)installSidebarViewIfNeeded;
- (id)sidebarView;
- (id)layoutManager:(id)arg1 shouldUseTemporaryAttributes:(id)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (void)adjustFrameHeightToMatchLineCount;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end