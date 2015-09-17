//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SearchRecentsOperation : NSOperation
{
    NSString *_query;
    _Bool _isExecuting;
    _Bool _isFinished;
    id <SearchRecentsOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <SearchRecentsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)start;
- (id)initWithSearchQuery:(id)arg1;

@end