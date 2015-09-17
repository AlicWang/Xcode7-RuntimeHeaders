//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface PFTStackTraceElement : PFTDataElement <NSMenuDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    NSArray *_stacktrace;
    BOOL _topOfStackIsTruncated;
    NSMutableArray *_collapsedStacktrace;
    NSTableView *_tableView;
    struct _NSRange _filteringStackRange;
    NSFont *_normalFont;
    NSFont *_frameFont;
    BOOL _inverted;
    BOOL _calltreeOriginated;
    NSMutableArray *_releasePool;
    DVTGradientImageButton *_configurationButton;
}

+ (void)initialize;
@property(nonatomic) __weak DVTGradientImageButton *configurationButton; // @synthesize configurationButton=_configurationButton;
- (void).cxx_destruct;
- (id)stackFromTableView:(id)arg1;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_symbolDoubleClicked:(id)arg1;
- (void)_selectionDidChange:(id)arg1;
- (void)_toggleCollapseLevel:(id)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)configureConfigurationButton:(id)arg1;
- (id)createView;
- (void)noteSearchCriteria:(id)arg1;
- (BOOL)isSearchCriteriaReady;
- (id)tooltipForSearchCriteria;
- (id)searchCriteria;
- (BOOL)isSearchCriteria;
- (void)_copyFrames:(id)arg1;
- (void)_traceCall:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)downloadDSYM:(id)arg1;
- (void)symbolicateAddress:(id)arg1;
- (void)locateAndSymbolicateAddress:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_handleAction:(id)arg1;
- (id)selectedObjects;
- (void)_refreshStack:(id)arg1;
- (id)_currentDocument;
- (void)_refreshDataSource;
- (void)_setConfigurationButtonState;
- (void)setup;
- (void)invert;
- (void)dealloc;
- (void)_invertStack:(id)arg1;
- (void)_displayFileIcon:(id)arg1;
- (void)_displayFilePath:(id)arg1;
- (void)_displayLibraries:(id)arg1;
- (void)_displayFrames:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end