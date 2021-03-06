//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SDURLSessionProxyDataTaskWithRequest : PBRequest <NSCopying>
{
    unsigned long long _taskSequenceNumber;
    SDURLSessionProxyRequest *_currentRequest;
    SDURLSessionProxyRequest *_originalRequest;
    SDURLSessionProxyTaskMessage *_task;
    struct {
        unsigned int taskSequenceNumber:1;
    } _has;
}

@property(nonatomic) unsigned long long taskSequenceNumber; // @synthesize taskSequenceNumber=_taskSequenceNumber;
@property(retain, nonatomic) SDURLSessionProxyRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) SDURLSessionProxyRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(retain, nonatomic) SDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTaskSequenceNumber;
@property(readonly, nonatomic) _Bool hasCurrentRequest;
@property(readonly, nonatomic) _Bool hasOriginalRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end