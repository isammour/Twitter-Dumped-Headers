//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIMediaSegmentedUploadInitCommand : TFSTwitterAPICommand
{
    unsigned long long _totalRequestRetryCount;
    NSString *_mediaType;
    NSNumber *_totalBytes;
    unsigned long long _assetType;
    long long _sourceType;
    NSString *_mediaCategory;
    NSString *_sourceURLString;
    unsigned long long _permittedRequestRetryCount;
    double _requestRetryDelay;
}

@property(nonatomic) double requestRetryDelay; // @synthesize requestRetryDelay=_requestRetryDelay;
@property(nonatomic) unsigned long long permittedRequestRetryCount; // @synthesize permittedRequestRetryCount=_permittedRequestRetryCount;
@property(retain, nonatomic) NSString *sourceURLString; // @synthesize sourceURLString=_sourceURLString;
@property(retain, nonatomic) NSString *mediaCategory; // @synthesize mediaCategory=_mediaCategory;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) unsigned long long assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSNumber *totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned long long totalRequestRetryCount; // @synthesize totalRequestRetryCount=_totalRequestRetryCount;
- (void).cxx_destruct;
- (id)_errorWithResponse:(id)arg1 code:(unsigned long long)arg2;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)APIRequest:(id)arg1 requestOperation:(id)arg2 didCompleteWithResponse:(id)arg3;
- (_Bool)shouldEndNetworkTransactionMetrics;
- (void)scribeCommandResponse:(id)arg1;
- (id)APICommandErrorFromAPIResponse:(id)arg1;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 mediaType:(id)arg3 mediaCategory:(id)arg4 totalBytes:(id)arg5 sourceURLString:(id)arg6 assetType:(unsigned long long)arg7 sourceType:(long long)arg8 permittedRequestRetryCount:(unsigned long long)arg9 requestRetryDelay:(double)arg10 source:(unsigned long long)arg11 networkTransactionMetrics:(id)arg12 completionBlock:(CDUnknownBlockType)arg13;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

