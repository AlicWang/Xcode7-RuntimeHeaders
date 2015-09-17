//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DocSetTokenIndexer : NSObject
{
    DSATokenIndex *_tokenIndex;
    NSMutableDictionary *_existingTokens;
    NSMutableDictionary *_existingNodes;
    NSMutableArray *_tokensWithUnresolvedRelatedTokens;
    NSMutableArray *_relatedTokenGroups;
}

- (void).cxx_destruct;
- (BOOL)flush;
- (void)_buildTokenCache;
- (BOOL)importSymbols;
- (BOOL)postProcessSymbols;
- (BOOL)importSymbolsFromXML:(id)arg1;
- (BOOL)importSymbolFromElement:(id)arg1 forFilePath:(id)arg2 forNode:(id)arg3;
- (id)_extractHTMLStringFromElement:(id)arg1;
- (id)_generateVersionsForDistribution:(id)arg1 fromElement:(id)arg2 forType:(id)arg3;
- (id)_nodesForNodeRefs:(id)arg1 forType:(id)arg2;
- (id)_nodeWithID:(long long)arg1;
- (BOOL)_assignSortOrders;
- (void)_assignRelatedTokenGroups;
- (void)_addRelatedTokenGroupElement:(id)arg1;
- (void)_assignRelatedTokens;
- (void)_addToken:(id)arg1 withRelatedTokenIdentifiers:(id)arg2;
- (void)_loadExistingTokens;
- (void)_addToken:(id)arg1;
- (id)_findTokenForIDInformation:(id)arg1;
- (id)initWithTokenIndex:(id)arg1;

@end