//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETAgentChange : NSObject
{
    NSUUID *_agentUUID;
    int _changeType;
}

@property int changeType; // @synthesize changeType=_changeType;
@property(retain) NSUUID *agentUUID; // @synthesize agentUUID=_agentUUID;
- (void).cxx_destruct;

@end