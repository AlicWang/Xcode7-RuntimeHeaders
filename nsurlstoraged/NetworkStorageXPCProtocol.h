//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NetworkStorageXPCProtocol
- (void)setMinSizeForVMCachedResource:(long long)arg1 withIdentifier:(NSString *)arg2;
- (void)currentDiskUsageWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)setMaxSize:(long long)arg1 withIdentifier:(NSString *)arg2;
- (void)copyAllPartitionNamesWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)copyAllHostNamesForOptionalPartition:(NSString *)arg1 identifier:(NSString *)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)deleteAllHostNames:(NSArray *)arg1 forOptionalPartition:(NSString *)arg2 identifier:(NSString *)arg3;
- (void)deleteResponsesSinceDate:(NSDate *)arg1 withIdentifier:(NSString *)arg2;
- (void)deleteAllResponsesWithIdentifier:(NSString *)arg1;
- (void)deleteResponseForRequestWithKey:(NSString *)arg1 withIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)addCachedResponseWithDictionary:(NSDictionary *)arg1 identifier:(NSString *)arg2 key:(NSString *)arg3;
- (void)addCachedResponse:(NSData *)arg1 identifier:(NSString *)arg2 key:(NSString *)arg3;
- (void)cachedResponseDictionaryForKey:(NSString *)arg1 withIdentifier:(NSString *)arg2 handler:(void (^)(NSDictionary *, NSString *, NSString *))arg3;
- (void)storageTaskManagerExistsWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)createStorageTaskManagerForPath:(NSString *)arg1 maxSize:(long long)arg2 extension:(NSData *)arg3 withIdentifier:(NSString *)arg4;
@end