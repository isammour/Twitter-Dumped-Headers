//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVLoader.h>

#import <PeriscopeViewer/PTVWorkClientDelegate-Protocol.h>

@class NSString, PTVWorkClient;

@interface PTVWorkClientLoader : PTVLoader <PTVWorkClientDelegate>
{
    PTVWorkClient *_workClient;
    long long _cachePolicy;
}

- (void).cxx_destruct;
- (void)performLoadWithWorkClient:(id)arg1 cachePolicy:(long long)arg2;
- (id)initWithCachePolicy:(long long)arg1;
- (void)didReceiveNetworkData:(id)arg1;
- (void)didReceiveCachedData:(id)arg1;
- (void)performLoad;
- (void)error:(id)arg1 context:(id)arg2;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;
- (id)context;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

