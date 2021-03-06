//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSSafeOperation.h>

@class NSError, NSString, NSURL, TFNTwitterAccount, TFNTwitterMediaAssetImage, TFNTwitterMediaImagePipeline, UIImage;

@interface T1ProfileImageUploadOperation : TFSSafeOperation
{
    // Error parsing type: AB, name: _isExecuting
    // Error parsing type: AB, name: _isFinished
    struct {
        unsigned int didOverride:1;
        unsigned int didSucceed:1;
        unsigned int didEncounterFailure:1;
    } _flags;
    NSError *_uploadError;
    unsigned long long _executionSteps;
    unsigned long long _nextStep;
    unsigned long long _type;
    TFNTwitterAccount *_account;
    UIImage *_uploadImage;
    TFNTwitterMediaAssetImage *_uploadImageAsset;
    NSURL *_uploadImageAssetURL;
    NSString *_legacyPendingStateToken;
    CDUnknownBlockType _successCompletion;
    NSString *_uploadImageTempFilePath;
    TFNTwitterMediaImagePipeline *_pipeline;
}

+ (void)_cancelOverridesWithWithAccountID:(id)arg1 type:(unsigned long long)arg2 user:(id)arg3 legacyPendingStateToken:(id)arg4;
+ (unsigned long long)executionSteps;
@property(readonly, nonatomic) TFNTwitterMediaImagePipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(copy, nonatomic) NSString *uploadImageTempFilePath; // @synthesize uploadImageTempFilePath=_uploadImageTempFilePath;
@property(readonly, copy, nonatomic) CDUnknownBlockType successCompletion; // @synthesize successCompletion=_successCompletion;
@property(readonly, nonatomic) NSString *legacyPendingStateToken; // @synthesize legacyPendingStateToken=_legacyPendingStateToken;
@property(readonly, nonatomic) NSURL *uploadImageAssetURL; // @synthesize uploadImageAssetURL=_uploadImageAssetURL;
@property(readonly, nonatomic) TFNTwitterMediaAssetImage *uploadImageAsset; // @synthesize uploadImageAsset=_uploadImageAsset;
@property(readonly, nonatomic) UIImage *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_completeUpload;
- (void)_uploadImage;
- (void)_writeUploadImageToTempFile;
- (void)_cancelOverrides;
- (void)_continueOverridingImageAfterWritingImageToLocalImageCache;
- (void)_overrideImage;
- (void)_cleanup;
- (void)executeStep:(unsigned long long)arg1;
- (void)_executeNextStep;
- (void)_completeCurrentStep:(CDUnknownBlockType)arg1;
- (void)_finish:(_Bool)arg1;
- (void)_setFinished:(_Bool)arg1;
- (_Bool)isFinished;
- (void)_setExecuting:(_Bool)arg1;
- (_Bool)isExecuting;
- (void)_triggerFailure;
- (_Bool)didEncounterFailure;
@property(readonly, nonatomic) _Bool didSucceed;
- (void)cancel;
- (void)start;
- (_Bool)isConcurrent;
- (_Bool)isAsynchronous;
- (id)initWithImage:(id)arg1 type:(unsigned long long)arg2 account:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

