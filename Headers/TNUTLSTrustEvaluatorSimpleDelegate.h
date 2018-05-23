//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNUTLSTrustEvaluatorDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface TNUTLSTrustEvaluatorSimpleDelegate : NSObject <TNUTLSTrustEvaluatorDelegate>
{
    NSObject<OS_dispatch_queue> *_mappedHostsQueue;
    NSMutableDictionary *_mappedHostsToUnmappedHosts;
    NSSet *_pinnableHostRootsInternal;
}

@property(copy) NSSet *pinnableHostRootsInternal; // @synthesize pinnableHostRootsInternal=_pinnableHostRootsInternal;
- (void).cxx_destruct;
- (_Bool)TLSTrustEvaluator:(id)arg1 isPinnableHost:(id)arg2;
- (id)TLSTrustEvaluator:(id)arg1 unmappedHostForHost:(id)arg2;
- (void)removeAllMappedHosts;
- (void)setHostMap:(id)arg1;
- (void)setPinnableHostRoots:(id)arg1;
@property(copy) NSArray *pinnableHostRootsArray;
@property(copy) NSSet *pinnableHostRootsSet;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
