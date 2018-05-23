//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribeThrift/NSCoding-Protocol.h>
#import <TFSScribeThrift/TBase-Protocol.h>

@class NSString, TFSScribeThriftClientNetworkRequestDetails, TFSScribeThriftClientNetworkStatus;

@interface TFSScribeThriftClientNetworkRequest : NSObject <TBase, NSCoding>
{
    _Bool _uriSchemeIsSet;
    _Bool _uriHostNameIsSet;
    _Bool _uriPathIsSet;
    _Bool _httpMethodIsSet;
    _Bool _protocol_IsSet;
    _Bool _startNetworkStatusIsSet;
    _Bool _endNetworkStatusIsSet;
    _Bool _serverNameIsSet;
    _Bool _serverIpIsSet;
    _Bool _httpStatusCodeIsSet;
    _Bool _twitterApiErrorCodeIsSet;
    _Bool _clientErrorInfoIsSet;
    _Bool _responseSourceIsSet;
    _Bool _requestDetailsIsSet;
    _Bool _proxyStatusIsSet;
    _Bool _viaProxy;
    _Bool _viaProxyIsSet;
    _Bool _uriQueryIsSet;
    _Bool _traceIdIsSet;
    _Bool _startTimeMsIsSet;
    int _httpStatusCode;
    int _twitterApiErrorCode;
    NSString *_uriScheme;
    NSString *_uriHostName;
    NSString *_uriPath;
    NSString *_httpMethod;
    NSString *_protocol_;
    TFSScribeThriftClientNetworkStatus *_startNetworkStatus;
    TFSScribeThriftClientNetworkStatus *_endNetworkStatus;
    NSString *_serverName;
    NSString *_serverIp;
    NSString *_clientErrorInfo;
    long long _responseSource;
    TFSScribeThriftClientNetworkRequestDetails *_requestDetails;
    long long _proxyStatus;
    NSString *_uriQuery;
    NSString *_traceId;
    long long _startTimeMs;
}

@property(readonly, nonatomic) _Bool startTimeMsIsSet; // @synthesize startTimeMsIsSet=_startTimeMsIsSet;
@property(nonatomic) long long startTimeMs; // @synthesize startTimeMs=_startTimeMs;
@property(readonly, nonatomic) _Bool traceIdIsSet; // @synthesize traceIdIsSet=_traceIdIsSet;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(readonly, nonatomic) _Bool uriQueryIsSet; // @synthesize uriQueryIsSet=_uriQueryIsSet;
@property(copy, nonatomic) NSString *uriQuery; // @synthesize uriQuery=_uriQuery;
@property(readonly, nonatomic) _Bool viaProxyIsSet; // @synthesize viaProxyIsSet=_viaProxyIsSet;
@property(nonatomic) _Bool viaProxy; // @synthesize viaProxy=_viaProxy;
@property(readonly, nonatomic) _Bool proxyStatusIsSet; // @synthesize proxyStatusIsSet=_proxyStatusIsSet;
@property(nonatomic) long long proxyStatus; // @synthesize proxyStatus=_proxyStatus;
@property(readonly, nonatomic) _Bool requestDetailsIsSet; // @synthesize requestDetailsIsSet=_requestDetailsIsSet;
@property(retain, nonatomic) TFSScribeThriftClientNetworkRequestDetails *requestDetails; // @synthesize requestDetails=_requestDetails;
@property(readonly, nonatomic) _Bool responseSourceIsSet; // @synthesize responseSourceIsSet=_responseSourceIsSet;
@property(nonatomic) long long responseSource; // @synthesize responseSource=_responseSource;
@property(readonly, nonatomic) _Bool clientErrorInfoIsSet; // @synthesize clientErrorInfoIsSet=_clientErrorInfoIsSet;
@property(copy, nonatomic) NSString *clientErrorInfo; // @synthesize clientErrorInfo=_clientErrorInfo;
@property(readonly, nonatomic) _Bool twitterApiErrorCodeIsSet; // @synthesize twitterApiErrorCodeIsSet=_twitterApiErrorCodeIsSet;
@property(nonatomic) int twitterApiErrorCode; // @synthesize twitterApiErrorCode=_twitterApiErrorCode;
@property(readonly, nonatomic) _Bool httpStatusCodeIsSet; // @synthesize httpStatusCodeIsSet=_httpStatusCodeIsSet;
@property(nonatomic) int httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(readonly, nonatomic) _Bool serverIpIsSet; // @synthesize serverIpIsSet=_serverIpIsSet;
@property(copy, nonatomic) NSString *serverIp; // @synthesize serverIp=_serverIp;
@property(readonly, nonatomic) _Bool serverNameIsSet; // @synthesize serverNameIsSet=_serverNameIsSet;
@property(copy, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
@property(readonly, nonatomic) _Bool endNetworkStatusIsSet; // @synthesize endNetworkStatusIsSet=_endNetworkStatusIsSet;
@property(retain, nonatomic) TFSScribeThriftClientNetworkStatus *endNetworkStatus; // @synthesize endNetworkStatus=_endNetworkStatus;
@property(readonly, nonatomic) _Bool startNetworkStatusIsSet; // @synthesize startNetworkStatusIsSet=_startNetworkStatusIsSet;
@property(retain, nonatomic) TFSScribeThriftClientNetworkStatus *startNetworkStatus; // @synthesize startNetworkStatus=_startNetworkStatus;
@property(readonly, nonatomic) _Bool protocol_IsSet; // @synthesize protocol_IsSet=_protocol_IsSet;
@property(copy, nonatomic) NSString *protocol_; // @synthesize protocol_=_protocol_;
@property(readonly, nonatomic) _Bool httpMethodIsSet; // @synthesize httpMethodIsSet=_httpMethodIsSet;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(readonly, nonatomic) _Bool uriPathIsSet; // @synthesize uriPathIsSet=_uriPathIsSet;
@property(copy, nonatomic) NSString *uriPath; // @synthesize uriPath=_uriPath;
@property(readonly, nonatomic) _Bool uriHostNameIsSet; // @synthesize uriHostNameIsSet=_uriHostNameIsSet;
@property(copy, nonatomic) NSString *uriHostName; // @synthesize uriHostName=_uriHostName;
@property(readonly, nonatomic) _Bool uriSchemeIsSet; // @synthesize uriSchemeIsSet=_uriSchemeIsSet;
@property(copy, nonatomic) NSString *uriScheme; // @synthesize uriScheme=_uriScheme;
- (void).cxx_destruct;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUriScheme:(id)arg1 uriHostName:(id)arg2 uriPath:(id)arg3 httpMethod:(id)arg4 protocol_:(id)arg5 startNetworkStatus:(id)arg6 endNetworkStatus:(id)arg7 serverName:(id)arg8 serverIp:(id)arg9 httpStatusCode:(int)arg10 twitterApiErrorCode:(int)arg11 clientErrorInfo:(id)arg12 responseSource:(long long)arg13 requestDetails:(id)arg14 proxyStatus:(long long)arg15 viaProxy:(_Bool)arg16 uriQuery:(id)arg17 traceId:(id)arg18 startTimeMs:(long long)arg19;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

