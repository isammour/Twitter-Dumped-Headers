//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDate, NSString, TFNTwitterMediaAssetPackedSegmentedUploadFinalizeOperation;

@protocol TFNTwitterMediaAssetPackedSegmentedUploadFinalizeOperationDelegate <NSObject>

@optional
- (void)packedSegmentedUploadFinalizeOperation:(TFNTwitterMediaAssetPackedSegmentedUploadFinalizeOperation *)arg1 mediaID:(NSString *)arg2 didFinalizeWithExpiryDate:(NSDate *)arg3;
@end

