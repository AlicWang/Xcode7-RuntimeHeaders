//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSIntegrationIssuesProcessor : NSObject
{
    IDESchemeActionsInvocationRecord *_record;
    NSString *_integrationID;
    struct NSArray *_commits;
    NSString *_checkoutPath;
}

@property(readonly, nonatomic) NSString *checkoutPath; // @synthesize checkoutPath=_checkoutPath;
@property(readonly, nonatomic) NSArray *commits; // @synthesize commits=_commits;
@property(readonly, nonatomic) NSString *integrationID; // @synthesize integrationID=_integrationID;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (id)integrationIssueForSummary:(id)arg1 type:(unsigned long long)arg2;
- (void)addIssuesToBuildingIntegration:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)initWithSchemeActionsRecord:(id)arg1 integrationID:(id)arg2 commits:(id)arg3 checkoutPath:(id)arg4;

@end