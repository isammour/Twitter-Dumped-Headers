//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/NSURLSessionDataDelegate-Protocol.h>
#import <PeriscopeViewer/NSURLSessionDelegate-Protocol.h>
#import <PeriscopeViewer/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

@interface iOSNetworkSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
{
    struct iOSNetworkSession *_session;
}

@property(nonatomic) struct iOSNetworkSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(struct iOSNetworkSession *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

