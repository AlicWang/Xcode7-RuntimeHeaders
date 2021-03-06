//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSLaunchDaemon : NSObject
{
    NSString *_label;
    NSString *_installDestination;
}

@property(readonly) NSString *installDestination; // @synthesize installDestination=_installDestination;
@property(readonly) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (BOOL)removeItemAtPathAndCheckIfDeleted:(id)arg1 error:(id *)arg2;
- (BOOL)setLoaded:(BOOL)arg1 error:(id *)arg2;
- (BOOL)restartWithError:(id *)arg1;
- (BOOL)stopWithError:(id *)arg1;
- (BOOL)startWithError:(id *)arg1;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isExecutableInstalled) BOOL executableInstalled;
@property(readonly) NSString *executablePath;
- (BOOL)installWithAttributes:(id)arg1 error:(id *)arg2;
- (BOOL)uninstallWithError:(id *)arg1;
@property(readonly) NSString *installedPath;
- (id)sourcePath;
- (id)filename;
- (id)initWithLabel:(id)arg1 installDestination:(id)arg2;

@end