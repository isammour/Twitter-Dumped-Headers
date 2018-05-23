//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterImagePipeline/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL, TIPImageDiskCacheTemporaryFile, TIPPartialImage;

@protocol TIPImageDownloadRequest <NSObject>
- (TIPImageDiskCacheTemporaryFile *)imageDownloadTemporaryFileForResuming;
- (TIPPartialImage *)imageDownloadPartialImageForResuming;
- (NSString *)imageDownloadLastModified;
- (long long)imageDownloadOptions;
- (double)imageDownloadTTL;
- (NSDictionary *)decoderConfigMap;
- (void (^)(NSURLRequest *, id <TIPImageFetchOperationUnderlyingContext>, void (^)(NSURLRequest *, NSError *)))imageDownloadHydrationBlock;
- (long long)imageDownloadPriority;
- (NSDictionary *)imageDownloadHeaders;
- (NSString *)imageDownloadIdentifier;
- (NSURL *)imageDownloadURL;
@end

