//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundDataHandler : NSObject
{
}

+ (void)handlePlaygroundData:(id)arg1 metaData:(id)arg2 dataIdentifier:(id)arg3 resultDate:(id)arg4 version:(unsigned long long)arg5 executionParameters:(id)arg6;
+ (id)dataHandlerForIdentifier:(id)arg1;
- (BOOL)handleData:(id)arg1 metaData:(id)arg2 version:(unsigned long long)arg3 executionParameters:(id)arg4 resultDate:(id)arg5 error:(id *)arg6;

@end