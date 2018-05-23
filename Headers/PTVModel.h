//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/NSURLSessionDelegate-Protocol.h>

@class NSOperationQueue, NSString, NSURLSession, PTVLIFOQueue, PTVWorkServer;
@protocol PTVModelLoggingDelegate, PTVModelSSLPinningDelegate;

@interface PTVModel : NSObject <NSURLSessionDelegate>
{
    PTVLIFOQueue *_networkQueue;
    PTVLIFOQueue *_imageProcessingQueue;
    PTVLIFOQueue *_imageDownloadingQueue;
    PTVWorkServer *_networkWorkServer;
    PTVWorkServer *_imageProcessingServer;
    PTVWorkServer *_imageDownloadingServer;
    NSURLSession *_session;
    NSURLSession *_extendedSessionForLongerTasks;
    NSOperationQueue *_sessionQueue;
    NSOperationQueue *_extendedSessionQueue;
    long long _defaultConcurrency;
    id <PTVModelLoggingDelegate> _logDelegate;
    id <PTVModelSSLPinningDelegate> _sslPinningDelegate;
}

+ (id)GenerateIdempotenceHeaderValueFromDate:(id)arg1;
+ (unsigned long long)GenerateIdempotenceValueFromDate:(id)arg1;
+ (id)IdempotenceQueue;
+ (id)SharedInstance;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <PTVModelSSLPinningDelegate> sslPinningDelegate; // @synthesize sslPinningDelegate=_sslPinningDelegate;
@property(nonatomic) __weak id <PTVModelLoggingDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (_Bool)isTimedOutError:(id)arg1;
- (_Bool)didRequestTimeOutWithResponse:(id)arg1 error:(id)arg2;
- (void)_postAuthenticationErrorNotificationOnMainThread:(id)arg1;
- (void)_imageData:(id)arg1 activityWillStartBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 activityWillStopBlock:(CDUnknownBlockType)arg4;
- (void)_jsonData:(id)arg1 method:(id)arg2 responseClass:(Class)arg3 postParameters:(id)arg4 getParameters:(id)arg5 multiPartFile:(id)arg6 urlFormString:(id)arg7 requestOriginDate:(id)arg8 idempotenceValue:(id)arg9 nRetriesAttempted:(long long)arg10 retryQueue:(id)arg11 canRetry:(_Bool)arg12 useExtendedSession:(_Bool)arg13 canPostAuthErrors:(_Bool)arg14 activityWillStartBlock:(CDUnknownBlockType)arg15 shouldErrorOnStatusNoContent:(_Bool)arg16 activityWillStopBlock:(CDUnknownBlockType)arg17 additionalHeaderFields:(id)arg18 completion:(CDUnknownBlockType)arg19;
- (void)_jsonData:(id)arg1 method:(id)arg2 responseClass:(Class)arg3 postParameters:(id)arg4 getParameters:(id)arg5 multiPartFile:(id)arg6 urlFormString:(id)arg7 canRetry:(_Bool)arg8 useExtendedSession:(_Bool)arg9 canPostAuthErrors:(_Bool)arg10 shouldErrorOnStatusNoContent:(_Bool)arg11 activityWillStartBlock:(CDUnknownBlockType)arg12 activityWillStopBlock:(CDUnknownBlockType)arg13 additionalHeaderFields:(id)arg14 completion:(CDUnknownBlockType)arg15;
- (void)_jsonData:(id)arg1 method:(id)arg2 responseClass:(Class)arg3 postParameters:(id)arg4 getParameters:(id)arg5 multiPartFile:(id)arg6 urlFormString:(id)arg7 canRetry:(_Bool)arg8 useExtendedSession:(_Bool)arg9 canPostAuthErrors:(_Bool)arg10 activityWillStartBlock:(CDUnknownBlockType)arg11 activityWillStopBlock:(CDUnknownBlockType)arg12 additionalHeaderFields:(id)arg13 completion:(CDUnknownBlockType)arg14;
- (void)timedImageGetRequest:(id)arg1 activityWillStartBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3 activityWillStopBlock:(CDUnknownBlockType)arg4;
- (void)timedJSONPostRequest:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 multiPartFile:(id)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)defaultHTTPHeaderParameters;
- (id)workQueue;
- (id)cacheObjectForKey:(id)arg1;
- (void)setCacheObject:(id)arg1 forKey:(id)arg2;
- (void)resetMaxConcurrentHTTPOperations;
- (void)setMaxConcurrentHTTPOperationCount:(long long)arg1;
- (void)setMaxNetworkQueueSize:(long long)arg1;
- (void)resetNetworkQueueMaxSizeToDefault;
- (void)pushCustomRequest:(CDUnknownBlockType)arg1;
- (void)customRequestForWorkClient:(id)arg1 cachePolicy:(long long)arg2 cacheKey:(id)arg3 dataWorkBlock:(CDUnknownBlockType)arg4;
- (void)processImageWork:(CDUnknownBlockType)arg1 forWorkClient:(id)arg2 cachePolicy:(long long)arg3 cacheKey:(id)arg4;
- (void)getRemoteImage:(id)arg1 cacheKey:(id)arg2 cachePolicy:(long long)arg3 context:(id)arg4 immediateBlock:(CDUnknownBlockType)arg5 eventualBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7 shouldExecuteEventually:(CDUnknownBlockType)arg8 shouldCache:(_Bool)arg9 activityWillStartBlock:(CDUnknownBlockType)arg10 completion:(CDUnknownBlockType)arg11 activityWillStopBlock:(CDUnknownBlockType)arg12;
- (void)upload:(id)arg1 uploadData:(id)arg2 contentType:(id)arg3 contentLength:(id)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7 shouldLogOutOnAuthError:(_Bool)arg8;
- (void)patch:(id)arg1 responseClass:(Class)arg2 postParameters:(id)arg3 canPostAuthErrors:(_Bool)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 additionalHeaderFields:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)delete:(id)arg1 responseClass:(Class)arg2 postParameters:(id)arg3 canPostAuthErrors:(_Bool)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 additionalHeaderFields:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)put:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 canPostAuthErrors:(_Bool)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 additionalHTTPHeaders:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)get:(id)arg1 responseClass:(Class)arg2 queryParameters:(id)arg3 canPostAuthErrors:(_Bool)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 additionalHTTPHeaders:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 multiPartFile:(id)arg4 canRetry:(_Bool)arg5 canPostAuthErrors:(_Bool)arg6 activityWillStartBlock:(CDUnknownBlockType)arg7 activityWillStopBlock:(CDUnknownBlockType)arg8 additionalHTTPHeaders:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 multiPartFile:(id)arg4 canRetry:(_Bool)arg5 useExtendedSessionTimeout:(_Bool)arg6 activityWillStartBlock:(CDUnknownBlockType)arg7 activityWillStopBlock:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 multiPartFile:(id)arg4 urlFormString:(id)arg5 activityWillStartBlock:(CDUnknownBlockType)arg6 activityWillStopBlock:(CDUnknownBlockType)arg7 additionalHeaderFields:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 urlFormString:(id)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 multiPartFile:(id)arg4 activityWillStartBlock:(CDUnknownBlockType)arg5 activityWillStopBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)put:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 workClient:(id)arg4 cachePolicy:(long long)arg5 cacheKey:(id)arg6 canRetry:(_Bool)arg7 canPostAuthErrors:(_Bool)arg8 activityWillStartBlock:(CDUnknownBlockType)arg9 activityWillStopBlock:(CDUnknownBlockType)arg10 additionalHTTPHeaders:(id)arg11 completion:(CDUnknownBlockType)arg12;
- (void)get:(id)arg1 responseClass:(Class)arg2 queryParameters:(id)arg3 workClient:(id)arg4 cachePolicy:(long long)arg5 cacheKey:(id)arg6 canRetry:(_Bool)arg7 canPostAuthErrors:(_Bool)arg8 activityWillStartBlock:(CDUnknownBlockType)arg9 activityWillStopBlock:(CDUnknownBlockType)arg10 additionalHTTPHeaders:(id)arg11 completion:(CDUnknownBlockType)arg12;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 workClient:(id)arg4 cachePolicy:(long long)arg5 cacheKey:(id)arg6 multiPartFile:(id)arg7 getCacheHandler:(CDUnknownBlockType)arg8 setCacheHandler:(CDUnknownBlockType)arg9 activityWillStartBlock:(CDUnknownBlockType)arg10 activityWillStopBlock:(CDUnknownBlockType)arg11 completion:(CDUnknownBlockType)arg12;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 workClient:(id)arg4 cachePolicy:(long long)arg5 cacheKey:(id)arg6 multiPartFile:(id)arg7 canRetry:(_Bool)arg8 canPostAuthErrors:(_Bool)arg9 shouldErrorOnStatusNoContent:(_Bool)arg10 activityWillStartBlock:(CDUnknownBlockType)arg11 activityWillStopBlock:(CDUnknownBlockType)arg12 additionalHTTPHeaders:(id)arg13 completion:(CDUnknownBlockType)arg14;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 workClient:(id)arg4 cachePolicy:(long long)arg5 cacheKey:(id)arg6 multiPartFile:(id)arg7 canRetry:(_Bool)arg8 activityWillStartBlock:(CDUnknownBlockType)arg9 activityWillStopBlock:(CDUnknownBlockType)arg10 completion:(CDUnknownBlockType)arg11;
- (void)post:(id)arg1 responseClass:(Class)arg2 parameters:(id)arg3 workClient:(id)arg4 cachePolicy:(long long)arg5 cacheKey:(id)arg6 multiPartFile:(id)arg7 activityWillStartBlock:(CDUnknownBlockType)arg8 activityWillStopBlock:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

