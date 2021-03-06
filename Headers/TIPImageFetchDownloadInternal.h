//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterImagePipeline/TIPImageFetchDownload-Protocol.h>

@class NSString, NSURLRequest, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_queue, TIPImageFetchDownloadContext;

@interface TIPImageFetchDownloadInternal : NSObject <TIPImageFetchDownload>
{
    long long _priority;
    NSURLSession *_session;
    _Bool _started;
    _Bool _cancelled;
    id <TIPImageFetchDownloadContext> _context;
    NSURLSessionDataTask *_task;
    id _downloadMetrics;
    NSObject<OS_dispatch_queue> *_contextQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue; // @synthesize contextQueue=_contextQueue;
@property(retain, nonatomic) id downloadMetrics; // @synthesize downloadMetrics=_downloadMetrics;
@property(readonly, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) id <TIPImageFetchDownloadContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)URLSession;
- (void)prepare;
@property(readonly, nonatomic) NSURLRequest *finalURLRequest;
@property(nonatomic) long long priority;
- (void)discardContext;
- (void)cancelWithDescription:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

