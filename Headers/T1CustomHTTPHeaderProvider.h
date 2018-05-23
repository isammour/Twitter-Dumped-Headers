//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TNLHTTPHeaderProvider-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, T1CustomUserAgentProvider;

@interface T1CustomHTTPHeaderProvider : NSObject <TNLHTTPHeaderProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <T1CustomUserAgentProvider> _userAgentProvider;
    _Bool _started;
    NSMutableDictionary *_hostHeaders;
    NSMutableDictionary *_excludes;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)allDefaultHTTPHeaderFieldsForRequest:(id)arg1 URLRequest:(id)arg2;
- (void)_t1_queue_mutateExcludePathsForHTTPHeader:(id)arg1 host:(id)arg2 paths:(id)arg3 removeOnNil:(_Bool)arg4;
- (void)_t1_queue_mutateValueForHTTPHeader:(id)arg1 host:(id)arg2 value:(id)arg3 removeOnNil:(_Bool)arg4;
- (void)_t1_queue_mutateDictionary:(id)arg1 forInnerKey:(id)arg2 outerKey:(id)arg3 value:(id)arg4 removeOnNil:(_Bool)arg5;
- (void)_t1_stop;
- (void)_t1_start;
- (id)allCoalescedHTTPHeaderViewValuesForPath:(id)arg1 host:(id)arg2;
- (id)allHTTPHeaderFieldValues;
- (id)allHTTPHeaderFieldValuesForHost:(id)arg1;
- (void)removeAllHTTPHeaderFieldValuesForHost:(id)arg1;
- (void)setAllHTTPHeaderFieldValues:(id)arg1 host:(id)arg2 exlusionPaths:(id)arg3;
- (id)valueForHTTPHeaderField:(id)arg1 host:(id)arg2;
- (void)removeHTTPHeaderField:(id)arg1 host:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 host:(id)arg3 excludingPaths:(id)arg4;
- (void)stop;
- (void)start;
@property(retain) id <T1CustomUserAgentProvider> userAgentProvider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

