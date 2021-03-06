//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface CSLBulletinAsyncBuildItem : NSObject
{
    CUISBulletinClientFactory<CUISBulletinClientFactoryExtension> *_factory;
    CSLBulletinAlertItem *_bulletin;
    CSLPITimer *_forceStopTimer;
    CSLPITimer *_warningTimer;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) CSLPITimer *warningTimer; // @synthesize warningTimer=_warningTimer;
@property(retain, nonatomic) CSLPITimer *forceStopTimer; // @synthesize forceStopTimer=_forceStopTimer;
@property(retain, nonatomic) CSLBulletinAlertItem *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) CUISBulletinClientFactory<CUISBulletinClientFactoryExtension> *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)_handleTimerExpired;
- (void)_handleLastChanceTimerWarning;
- (void)_handleSecondTimerWarning;
- (void)_handleFirstTimerWarning;
- (double)timeRemaining;
- (void)stop;
- (void)start;
- (double)extendedTimeout;
- (double)warningTimeout;

@end