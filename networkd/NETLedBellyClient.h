//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NETLedBellyClient : NSObject
{
    unsigned char _channel;
    _Bool _writeClosed;
    _Bool _committed;
    _Bool _connected;
    _Bool _needsCleanup;
    _Bool _isSetup;
    unsigned char _eofCCPCommand;
    _Bool _statsReported;
    unsigned short _generation;
    NETLedBelly *_ledbellyConnection;
    id <NETLedBellyClientDelegate> _delegate;
    NSString *_identifierString;
    NSString *_serviceString;
    int _pid;
    NSObject<OS_tcp_connection> *_clientConnection;
    unsigned long _readSizeOutstanding;
    NSArray *_endpoints;
    NSObject<OS_dispatch_data> *_firstData;
    NSObject<OS_xpc_object> *_processName;
    NETLedBelly *_firstDataConnection;
    int _clientSocket;
    AWDLBClientConnectionReport *_ledbellyClientReport;
    unsigned long long _serviceID;
    unsigned long long _cid;
    long long _uniqueID;
    unsigned long long _creationTime;
    unsigned long long _startTime;
}

+ (void)setupLedbellyClients;
@property(nonatomic) _Bool statsReported; // @synthesize statsReported=_statsReported;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long creationTime; // @synthesize creationTime=_creationTime;
@property(retain, nonatomic) AWDLBClientConnectionReport *ledbellyClientReport; // @synthesize ledbellyClientReport=_ledbellyClientReport;
@property(nonatomic) unsigned char eofCCPCommand; // @synthesize eofCCPCommand=_eofCCPCommand;
@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(nonatomic) int clientSocket; // @synthesize clientSocket=_clientSocket;
@property(retain, nonatomic) NETLedBelly *firstDataConnection; // @synthesize firstDataConnection=_firstDataConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *processName; // @synthesize processName=_processName;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *firstData; // @synthesize firstData=_firstData;
@property(nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(nonatomic) unsigned long readSizeOutstanding; // @synthesize readSizeOutstanding=_readSizeOutstanding;
@property(retain, nonatomic) NSObject<OS_tcp_connection> *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *serviceString; // @synthesize serviceString=_serviceString;
@property(nonatomic) unsigned long long cid; // @synthesize cid=_cid;
@property(readonly, nonatomic) unsigned long long serviceID; // @synthesize serviceID=_serviceID;
@property(nonatomic) unsigned short generation; // @synthesize generation=_generation;
@property(nonatomic) _Bool needsCleanup; // @synthesize needsCleanup=_needsCleanup;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic, getter=isCommitted) _Bool committed; // @synthesize committed=_committed;
@property(nonatomic) _Bool writeClosed; // @synthesize writeClosed=_writeClosed;
@property(nonatomic) unsigned char channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *identifierString; // @synthesize identifierString=_identifierString;
@property(nonatomic) __weak id <NETLedBellyClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NETLedBelly *ledbellyConnection; // @synthesize ledbellyConnection=_ledbellyConnection;
- (void).cxx_destruct;
- (void)filloutPath:(id)arg1;
- (void)dealloc;
- (id)initWithService:(const char *)arg1 endpoints:(id)arg2 uniqueID:(long long)arg3 forPid:(int)arg4 withName:(id)arg5 connectionID:(unsigned long long)arg6;
- (id)init;
- (void)readFromClient:(unsigned long)arg1;
- (void)handleClientDetectedLedbellyIsDown;
- (int)copyFD;
@property(readonly, nonatomic) const char *pname;
- (void)cancel;
- (_Bool)start;
- (id)description;
- (void)setupSocketPair;
- (void)handleClientConnectionEvent:(unsigned int)arg1 withData:(const void *)arg2;
- (void)handleReadComplete:(id)arg1 error:(int)arg2;
- (void)writeEOFToClient:(unsigned char)arg1;
- (void)writeToClient:(id)arg1;
- (void)handleLedBellyStatusChanged;

@end