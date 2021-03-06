//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNURLSessionBackgroundSessionTask.h>

@class NSURL, NSURLRequest;

@interface TFNDownloadURLSessionBackgroundFetchTask : TFNURLSessionBackgroundSessionTask
{
    NSURLRequest *_request;
    NSURL *_destinationFileURL;
}

@property(readonly, nonatomic) NSURL *destinationFileURL; // @synthesize destinationFileURL=_destinationFileURL;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)URLSessionDownloadTaskDidComplete:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)URLSessionTaskDidComplete:(id)arg1 withData:(id)arg2 temporaryFileURL:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithURLRequest:(id)arg1 destinationFileURL:(id)arg2 identifier:(id)arg3 supportsBackgroundURLSession:(_Bool)arg4;

@end

