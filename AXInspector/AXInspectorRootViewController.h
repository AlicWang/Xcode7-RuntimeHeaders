//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface AXInspectorRootViewController : UIViewController
{
    AXInspectorCursorViewController *_cursorViewController;
    AXInspectorPanelViewController *_panelViewController;
}

@property(retain, nonatomic) AXInspectorPanelViewController *panelViewController; // @synthesize panelViewController=_panelViewController;
@property(retain, nonatomic) AXInspectorCursorViewController *cursorViewController; // @synthesize cursorViewController=_cursorViewController;
- (void).cxx_destruct;
- (_Bool)inspectorWantsEvent:(id)arg1;
- (_Bool)isPanelMinimized;
- (void)hideInspectorPanelAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showInspectorPanelAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAXNotifications:(id)arg1;
- (void)didAddCursorViewController;
- (void)didAddPanelViewController;
- (Class)panelViewControllerClass;
- (Class)cursorViewControllerClass;
- (void)updateAXFocusedElement:(id)arg1 headerElements:(id)arg2 nonfocusableElements:(id)arg3 visualsOnly:(_Bool)arg4;
- (void)viewDidLoad;
- (void)loadView;

@end