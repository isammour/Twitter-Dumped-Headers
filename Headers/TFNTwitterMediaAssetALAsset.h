//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAsset.h>

@class NSString, PHAsset, TFSReferencedFile, TFSTwitterLocation, UIImage;

@interface TFNTwitterMediaAssetALAsset : TFNTwitterMediaAsset
{
    struct CGSize _assetDimensions;
    _Bool _assetSavedToLibrary;
    _Bool _needsRequestAsset;
    NSString *_localIdentifier;
    PHAsset *_asset;
    TFSTwitterLocation *_location;
    long long _localBackupState;
    TFSReferencedFile *_referencedLocalBackupFile;
    UIImage *_cachedPreview;
}

+ (struct CGSize)_previewTargetSize;
+ (id)objectIdentifierForPhotoAsset:(id)arg1;
+ (id)_localBackupQueue;
+ (id)_previewRenderQueue;
@property(retain, nonatomic) UIImage *cachedPreview; // @synthesize cachedPreview=_cachedPreview;
@property(retain, nonatomic) TFSReferencedFile *referencedLocalBackupFile; // @synthesize referencedLocalBackupFile=_referencedLocalBackupFile;
@property(nonatomic) long long localBackupState; // @synthesize localBackupState=_localBackupState;
@property(nonatomic) _Bool needsRequestAsset; // @synthesize needsRequestAsset=_needsRequestAsset;
@property(retain, nonatomic) TFSTwitterLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool assetSavedToLibrary; // @synthesize assetSavedToLibrary=_assetSavedToLibrary;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (void).cxx_destruct;
- (void)saveAssetToLibrary:(CDUnknownBlockType)arg1;
- (void)_dispatchWithPhotoAsset:(CDUnknownBlockType)arg1 withFallBackToLocalBackupFileURL:(CDUnknownBlockType)arg2;
- (void)_dispatchWithPhotoAsset:(CDUnknownBlockType)arg1 withFallBackToLocalBackup:(CDUnknownBlockType)arg2;
- (void)_dispatchWithPhotoAsset:(CDUnknownBlockType)arg1;
- (void)renderFinalDataWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generatePreviewWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderPreviewWithProgressHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)estimatedPreviewSizeThatFits:(struct CGSize)arg1;
- (void)_expireCacheAfterEdits;
- (id)deprecatedPreview;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_didLoadBackupData:(id)arg1;
- (void)_loadLocalBackupData:(CDUnknownBlockType)arg1;
- (unsigned long long)_readData:(id)arg1 bytes:(void *)arg2 range:(struct _NSRange)arg3;
- (_Bool)_bufferedCopyFromImageData:(id)arg1 toPath:(id)arg2;
- (void)_saveAsset:(id)arg1 localFilePath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveLocalBackupToFilePath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_referencedFileWithDirectory:(id)arg1 filename:(id)arg2;
- (void)saveLocalBackupToDocumentsDirectory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveLocalBackupToDocumentsDirectory:(id)arg1;
- (id)_localBackupFilePath;
- (void)mediaSizeWithCompletion:(CDUnknownBlockType)arg1;
- (id)objectIdentifier;
- (struct CGSize)assetDimensions;
- (id)initWithPhotoAsset:(id)arg1;
- (id)init;

@end

