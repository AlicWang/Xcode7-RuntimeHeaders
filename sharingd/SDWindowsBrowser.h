//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDWindowsBrowser : NSObject <SDBonjourBrowserDelegate>
{
    SDBonjourBrowser *_browser;
    NSString *_workgroup;
    id <SDWindowsBrowserDelegate> _delegate;
}

@property __weak id <SDWindowsBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *workgroup; // @synthesize workgroup=_workgroup;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)bonjourNodesDidChange:(id)arg1;
@property(readonly, copy) NSArray *nodes;
- (void)dealloc;
- (id)initWithWorkgroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end