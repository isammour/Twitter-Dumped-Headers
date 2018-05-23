//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@class NSError;
@protocol TFSRetryableConcurrentOperationDelegate;

@interface TFSRetryableConcurrentOperation : TFSConcurrentOperation
{
    id <TFSRetryableConcurrentOperationDelegate> _delegate;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <TFSRetryableConcurrentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)retry;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

