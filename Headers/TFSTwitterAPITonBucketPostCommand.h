//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSDate, NSString;

@interface TFSTwitterAPITonBucketPostCommand : TFSTwitterAPICommand
{
    NSString *_bucket;
    NSString *_contentType;
    NSString *_filePath;
    NSDate *_expiresOnDate;
    CDUnknownBlockType _blobStoreUploadCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType blobStoreUploadCompletionBlock; // @synthesize blobStoreUploadCompletionBlock=_blobStoreUploadCompletionBlock;
@property(retain, nonatomic) NSDate *expiresOnDate; // @synthesize expiresOnDate=_expiresOnDate;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (void)APIRequest:(id)arg1 requestOperation:(id)arg2 didCompleteWithResponse:(id)arg3;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 bucket:(id)arg3 contentType:(id)arg4 filePath:(id)arg5 expiresOnDate:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

