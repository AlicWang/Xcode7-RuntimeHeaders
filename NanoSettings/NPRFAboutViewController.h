//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPRFAboutViewController : NPRFBaseTableViewController
{
    NSString *_capacity;
    NSString *_available;
    NSString *_applicationCount;
    NSString *_version;
    NSString *_model;
    NSString *_serialNumber;
    NSString *_seid;
    NSString *_macAddress;
    NSString *_bluetoothMACAddress;
    _Bool _loaded;
    _Bool _cancel;
    _Bool _threadRunning;
    NSString *_loadingText;
    NSLock *_lock;
    NSMutableDictionary *_mediaDict;
    id <NSObject> _photoVideoNotificationToken;
    _Bool _isGeneratingNotifications;
}

- (void).cxx_destruct;
- (id)_countForKey:(id)arg1;
- (void)_loadMediaFinished:(id)arg1;
- (void)mediaLibraryDidChange:(id)arg1;
- (void)_enableMediaLibraryNotifications:(_Bool)arg1;
- (id)_getBluetoothMACAddress;
- (id)_getMacAddress;
- (id)_getSEID;
- (id)_getSerialNumber;
- (id)_getModel;
- (id)_getVersion;
- (id)_getNumApplications;
- (void)_getCapacityAndAvailableSpace;
- (id)_deviceName;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithStyle:(int)arg1;

@end