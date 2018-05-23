//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMediaAssetUploaderDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol TNUNetworkQualityProvider;

@interface TFNTwitterMediaUploadManager : NSObject <TFNTwitterMediaAssetUploaderDelegate>
{
    NSMutableSet *_uploadersInProgress;
    NSMutableArray *_uploadersInQueue;
    id <TNUNetworkQualityProvider> _networkQualityProvider;
}

+ (id)sharedMediaUploadManager;
@property(retain, nonatomic) id <TNUNetworkQualityProvider> networkQualityProvider; // @synthesize networkQualityProvider=_networkQualityProvider;
- (void).cxx_destruct;
- (void)uploaderDidCompelete:(id)arg1 success:(_Bool)arg2;
- (_Bool)_needTriggerUploader:(id)arg1 account:(id)arg2;
- (void)cancelAllUploaders;
- (void)cancelUploadForAssets:(id)arg1;
- (void)_startOrQueueUploader:(id)arg1;
- (_Bool)uploadAssets:(id)arg1 fromAccount:(id)arg2 source:(long long)arg3 networkTransactionMetrics:(id)arg4;
- (_Bool)uploadAsset:(id)arg1 fromAccount:(id)arg2 source:(long long)arg3 networkTransactionMetrics:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

