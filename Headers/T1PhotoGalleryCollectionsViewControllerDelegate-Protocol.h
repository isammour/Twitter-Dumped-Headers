//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, PHAssetCollection, T1PhotoGalleryCollectionsViewController;

@protocol T1PhotoGalleryCollectionsViewControllerDelegate <NSObject>

@optional
- (void)photoGalleryCollectionsViewControllerDidCancel:(T1PhotoGalleryCollectionsViewController *)arg1;
- (void)photoGalleryCollectionsViewController:(T1PhotoGalleryCollectionsViewController *)arg1 didSelectAdditionalCollectionName:(NSString *)arg2;
- (void)photoGalleryCollectionsViewController:(T1PhotoGalleryCollectionsViewController *)arg1 didSelectAssetCollection:(PHAssetCollection *)arg2;
@end
