//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/TNLLRUEntry-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSURLSession;
@protocol TNLLRUEntry;

@interface TNLURLSessionContext : NSObject <TNLLRUEntry>
{
    NSMutableArray *_URLSessionTaskOperationObservers;
    id <TNLLRUEntry> _nextLRUEntry;
    id <TNLLRUEntry> _previousLRUEntry;
    NSURLSession *_URLSession;
    NSString *_reuseId;
    long long _executionMode;
    NSArray *_URLSessionTaskOperations;
}

@property(readonly, nonatomic) NSArray *URLSessionTaskOperations; // @synthesize URLSessionTaskOperations=_URLSessionTaskOperations;
@property(readonly, nonatomic) long long executionMode; // @synthesize executionMode=_executionMode;
@property(readonly, copy, nonatomic) NSString *reuseId; // @synthesize reuseId=_reuseId;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(nonatomic) __weak id <TNLLRUEntry> previousLRUEntry; // @synthesize previousLRUEntry=_previousLRUEntry;
@property(retain, nonatomic) id <TNLLRUEntry> nextLRUEntry; // @synthesize nextLRUEntry=_nextLRUEntry;
- (void).cxx_destruct;
- (void)changeOperation:(id)arg1 fromTask:(id)arg2 toTask:(id)arg3;
- (id)operationForTask:(id)arg1;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1 observer:(id)arg2;
- (unsigned long long)operationCount;
- (void)dealloc;
- (id)initWithURLSession:(id)arg1 reuseId:(id)arg2 executionMode:(long long)arg3;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (id)LRUEntryIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

