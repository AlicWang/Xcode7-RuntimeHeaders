//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NPHVoicemailDbProxy : NSObject
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)markAsTrash:(id)arg1;
- (void)markAsRead:(id)arg1;
- (id)getNth:(unsigned int)arg1;
- (unsigned int)count;
- (void)_connectTurcdMachService;
- (id)init;

@end