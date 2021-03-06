//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETDataProtectionManager : NSObject
{
    NSMutableArray *_changeHandlers;
    int _protectionClass;
}

+ (id)sharedNETDataProtectionManager;
@property int protectionClass; // @synthesize protectionClass=_protectionClass;
@property(retain) NSMutableArray *changeHandlers; // @synthesize changeHandlers=_changeHandlers;
- (void).cxx_destruct;
- (void)unregisterChangeHandler:(id)arg1;
- (void)registerChangeHandler:(id)arg1 ifNeededByParameters:(id)arg2;
- (void)registerChangeHandler:(id)arg1;
- (id)init;
- (void)setPathProtectionClassSatisfied:(id)arg1;
- (id)privateDescription;
- (_Bool)dataProtectionClassAvailable:(int)arg1;

@end