//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSOperation, TFSConcurrentOperation;
@protocol OS_dispatch_queue;

@interface TFSOperationResultWrapper : NSObject
{
    TFSConcurrentOperation *_operation;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id _result;
    NSError *_error;
}

+ (id)join:(id)arg1;
@property(readonly, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)concurrentContinuationOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)continuationOperationWithBlock:(CDUnknownBlockType)arg1;
- (id)continuationOperationWrapperWithBlock:(CDUnknownBlockType)arg1;
- (void)completeWithError:(id)arg1;
- (void)completeWithResult:(id)arg1;
- (id)initWithOperationRunBlock:(CDUnknownBlockType)arg1;

@end
