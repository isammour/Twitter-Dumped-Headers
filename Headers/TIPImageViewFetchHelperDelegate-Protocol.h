//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, NSString, NSURL, TIPImageViewFetchHelper, UIImage;
@protocol TIPImageFetchResult;

@protocol TIPImageViewFetchHelperDelegate <NSObject>

@optional
- (void)tip_fetchHelperDidReset:(TIPImageViewFetchHelper *)arg1;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didFailToLoadFinalImage:(NSError *)arg2;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didLoadFinalImageFromSource:(long long)arg2;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didUpdateDisplayedImage:(UIImage *)arg2 fromSourceDimensions:(struct CGSize)arg3 isFinal:(_Bool)arg4;
- (void)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 didUpdateProgress:(float)arg2;
- (void)tip_fetchHelperDidStartLoading:(TIPImageViewFetchHelper *)arg1;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldReloadAfterDifferentFetchCompletedWithImage:(UIImage *)arg2 dimensions:(struct CGSize)arg3 identifier:(NSString *)arg4 URL:(NSURL *)arg5 treatedAsPlaceholder:(_Bool)arg6 manuallyStored:(_Bool)arg7;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldLoadProgressivelyWithIdentifier:(NSString *)arg2 URL:(NSURL *)arg3 imageType:(NSString *)arg4 originalDimensions:(struct CGSize)arg5;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldContinueLoadingAfterFetchingPreviewImageResult:(id <TIPImageFetchResult>)arg2;
- (_Bool)tip_fetchHelper:(TIPImageViewFetchHelper *)arg1 shouldUpdateImageWithPreviewImageResult:(id <TIPImageFetchResult>)arg2;
@end

