//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGameplayBulletin : GKBulletin
{
    unsigned char _gameLocation;
    NSString *_receiverPlayerID;
    NSString *_originatorPlayerID;
    GKPlayerInternal *_receiverPlayer;
    GKPlayerInternal *_originatorPlayer;
    NSString *_receiverGuestPlayerID;
    NSString *_originatorGuestPlayerID;
    GKPlayerInternal *_receiverGuestPlayer;
    GKPlayerInternal *_originatorGuestPlayer;
    NSURL *_storeURL;
    NSArray *_compatibleVersions;
}

@property unsigned char gameLocation; // @synthesize gameLocation=_gameLocation;
@property(retain) NSArray *compatibleVersions; // @synthesize compatibleVersions=_compatibleVersions;
@property(retain) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain) GKPlayerInternal *originatorGuestPlayer; // @synthesize originatorGuestPlayer=_originatorGuestPlayer;
@property(retain) GKPlayerInternal *receiverGuestPlayer; // @synthesize receiverGuestPlayer=_receiverGuestPlayer;
@property(retain) NSString *originatorGuestPlayerID; // @synthesize originatorGuestPlayerID=_originatorGuestPlayerID;
@property(retain) NSString *receiverGuestPlayerID; // @synthesize receiverGuestPlayerID=_receiverGuestPlayerID;
@property(retain) GKPlayerInternal *originatorPlayer; // @synthesize originatorPlayer=_originatorPlayer;
@property(retain) GKPlayerInternal *receiverPlayer; // @synthesize receiverPlayer=_receiverPlayer;
@property(retain) NSString *originatorPlayerID; // @synthesize originatorPlayerID=_originatorPlayerID;
@property(retain) NSString *receiverPlayerID; // @synthesize receiverPlayerID=_receiverPlayerID;
- (void)loadOriginatorPlayerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadStoreItemWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)gamePlatformWithHandler:(CDUnknownBlockType)arg1;
- (void)determineGameLocationOnDeviceOrInStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)determineGameLocationOnDeviceViaCompatibilityMatrixWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)determineGameLocationOnDeviceOnly;
- (_Bool)isCompatibleWithGameDescriptor:(id)arg1;
- (_Bool)isPushFromLocalPlayers;
- (_Bool)isPushForLocalPlayers;
- (_Bool)playerIsLocal:(id)arg1;
@property(readonly, retain) NSString *URLContext;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end