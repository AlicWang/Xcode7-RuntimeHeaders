//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol NSURLSessionDelegate_Internal <NSURLSessionDelegate>
- (void)_URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 getAuthHeadersForResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(_Bool, NSDictionary *))arg4;
- (void)_URLSession:(NSURLSession *)arg1 openFileAtPath:(NSString *)arg2 mode:(int)arg3 completionHandler:(void (^)(int))arg4;

@optional
- (void)_URLSession:(NSURLSession *)arg1 companionAvailabilityChanged:(_Bool)arg2;
@end