//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSAPI/TNLRequest-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL, TFSAPIMultipartFormData, TNLRequestConfiguration;

@interface TFSAPIRequest : NSObject <TNLRequest>
{
    long long _HTTPMethodValue;
    NSURL *_URL;
    NSData *_HTTPBody;
    TFSAPIMultipartFormData *_multipartFormData;
    NSDictionary *_headerFields;
    TNLRequestConfiguration *_requestConfiguration;
    NSString *_HTTPBodyFilePath;
    _Bool _parametersEmbeddedInQuery;
    _Bool _emptyResponseDataExpected;
    _Bool _supportsProgressiveAPIResponses;
    NSString *_endpointURLString;
    NSDictionary *_parameters;
}

+ (id)_parameterStringWithParameterCollection:(id)arg1;
+ (Class)responseClass;
@property(readonly, nonatomic) TNLRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(readonly, nonatomic) _Bool supportsProgressiveAPIResponses; // @synthesize supportsProgressiveAPIResponses=_supportsProgressiveAPIResponses;
@property(readonly, copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) NSString *endpointURLString; // @synthesize endpointURLString=_endpointURLString;
@property(readonly, nonatomic, getter=isEmptyResponseDataExpected) _Bool emptyResponseDataExpected; // @synthesize emptyResponseDataExpected=_emptyResponseDataExpected;
@property(readonly, nonatomic, getter=areParametersEmbeddedInQuery) _Bool parametersEmbeddedInQuery; // @synthesize parametersEmbeddedInQuery=_parametersEmbeddedInQuery;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)objectWithResponseData:(id)arg1 headerFields:(id)arg2 error:(out id *)arg3;
@property(readonly, copy, nonatomic) NSString *HTTPBodyFilePath;
@property(readonly, nonatomic) NSData *HTTPBody;
@property(readonly, copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property(readonly, nonatomic) long long HTTPMethodValue;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) long long requestPriority;
@property(readonly, nonatomic, getter=isMultipartFormRequest) _Bool multipartFormRequest;
- (id)initWithHTTPMethodValue:(long long)arg1 endpointURLString:(id)arg2 parameters:(id)arg3 multipartFormData:(id)arg4 bodyData:(id)arg5 bodyFilePath:(id)arg6 headerFields:(id)arg7 requestConfiguration:(id)arg8 emptyResponseDataExpected:(_Bool)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

