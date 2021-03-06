//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNPhotoAssetCollectionAlbum, TFNTwitterRecentPhotoAssetLocalIdentifiersStore;

@interface TFNTwitterPhotoAlbum : NSObject
{
    TFNPhotoAssetCollectionAlbum *_assetCollectionAlbum;
    TFNTwitterRecentPhotoAssetLocalIdentifiersStore *_assetLocalIdentifiersStore;
}

+ (id)defaultPhotoAlbum;
@property(retain, nonatomic) TFNTwitterRecentPhotoAssetLocalIdentifiersStore *assetLocalIdentifiersStore; // @synthesize assetLocalIdentifiersStore=_assetLocalIdentifiersStore;
@property(readonly, nonatomic) TFNPhotoAssetCollectionAlbum *assetCollectionAlbum; // @synthesize assetCollectionAlbum=_assetCollectionAlbum;
- (void).cxx_destruct;
- (id)recentPhotoAssetLocalIdentifiersSince:(id)arg1;
- (void)_performAssetCreationChange:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_promptAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_authorizeAndPerformAssetCreationChange:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createPhotoAssetFromVideoAtFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createPhotoAssetFromImageAtFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createPhotoAssetFromImageData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createPhotoAssetFromImage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithAssetCollectionAlbum:(id)arg1;
- (id)init;

@end

