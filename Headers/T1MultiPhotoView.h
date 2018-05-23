//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNTwitterImageViewFetchHelperDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, TFNTwitterAccount, TIPImagePipeline;
@protocol NSObject;

@interface T1MultiPhotoView : UIView <TFNTwitterImageViewFetchHelperDelegate>
{
    id <NSObject> _updateNotificationObservers[4];
    struct CGSize _internalPrimaryImageSize;
    _Bool _useAdaptiveMediaLayout;
    _Bool _stickerBadgeEnabled;
    _Bool _borderHidden;
    TIPImagePipeline *_imagePipeline;
    unsigned long long _numberOfVisibleImageViews;
    NSArray *_inlineMediaInfos;
    long long _inlineMediaSourceStatusId;
    CDUnknownBlockType _multiPhotoTapBlock;
    CDUnknownBlockType _multiPhotoLongPressBlock;
    CDUnknownBlockType _multiPhotoLoadedBlock;
    CDUnknownBlockType _multiPhotoLoadFailedBlock;
    double _gutterWidth;
    double _borderCornerRadius;
    TFNTwitterAccount *_account;
    NSMutableArray *_imageViews;
    NSMutableArray *_imageBorderLayers;
    unsigned long long _options;
}

+ (double)_compactVerticalLayoutSeparatorWidth;
+ (CDStruct_5e758c1a)_compactVerticalLayoutMinimumMultiPhotoAspectRatioForImageCount:(long long)arg1;
+ (CDStruct_5e758c1a)_compactVerticalLayoutMaximumMultiPhotoAspectRatioForImageCount:(long long)arg1;
+ (CDStruct_5e758c1a)_compactVerticalLayoutMaximumSinglePhotoAspectRatio;
+ (CDStruct_5e758c1a)_compactVerticalLayoutBoundingBoxAspectRatio;
+ (struct CGSize)_croppedImageSizeConstrainedToHeight:(double)arg1 imageSize:(struct CGSize)arg2 maxAspectRatio:(CDStruct_5e758c1a)arg3 minAspectRatio:(CDStruct_5e758c1a)arg4;
+ (struct CGRect)_compactVerticalFrameForImageAtIndex:(long long)arg1 withinMediaInfos:(id)arg2 withinBoundingSize:(struct CGSize)arg3;
+ (struct CGSize)_compactVerticalBoundingSizeForMediaInfos:(id)arg1 withinWidth:(double)arg2 primaryImageSize:(struct CGSize)arg3;
+ (_Bool)_isImageSizePanoramic:(struct CGSize)arg1;
+ (_Bool)useCompactVerticalLayoutWithLayoutMetrics:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
+ (double)adaptiveMediaHeightForWidth:(double)arg1 imageSize:(struct CGSize)arg2 maxAspectRatio:(CDStruct_5e758c1a)arg3;
+ (struct CGSize)preferredSizeForWidth:(double)arg1 usingCompactVerticalLayout:(_Bool)arg2 mediaInfos:(id)arg3 primaryMediaInfo:(id)arg4 mediaParameters:(id)arg5 forceAdaptiveMediaRatios:(_Bool)arg6 attachmentType:(unsigned long long)arg7 options:(unsigned long long)arg8;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *imageBorderLayers; // @synthesize imageBorderLayers=_imageBorderLayers;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(nonatomic, getter=isStickerBadgeEnabled) _Bool stickerBadgeEnabled; // @synthesize stickerBadgeEnabled=_stickerBadgeEnabled;
@property(nonatomic) _Bool useAdaptiveMediaLayout; // @synthesize useAdaptiveMediaLayout=_useAdaptiveMediaLayout;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoLoadFailedBlock; // @synthesize multiPhotoLoadFailedBlock=_multiPhotoLoadFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoLoadedBlock; // @synthesize multiPhotoLoadedBlock=_multiPhotoLoadedBlock;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoLongPressBlock; // @synthesize multiPhotoLongPressBlock=_multiPhotoLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType multiPhotoTapBlock; // @synthesize multiPhotoTapBlock=_multiPhotoTapBlock;
@property(readonly, nonatomic) long long inlineMediaSourceStatusId; // @synthesize inlineMediaSourceStatusId=_inlineMediaSourceStatusId;
@property(readonly, nonatomic) NSArray *inlineMediaInfos; // @synthesize inlineMediaInfos=_inlineMediaInfos;
@property(readonly, nonatomic) unsigned long long numberOfVisibleImageViews; // @synthesize numberOfVisibleImageViews=_numberOfVisibleImageViews;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
- (void).cxx_destruct;
- (struct CGRect)_compactVerticalFrameForImageAtIndex:(unsigned long long)arg1;
- (void)_updateAccessibilityLabels;
- (void)tfn_fetchHelper:(id)arg1 readyToConfigureView:(id)arg2 state:(long long)arg3;
- (long long)tfn_scaleAspectFillFocusModeForFetchHelper:(id)arg1;
- (id)tfn_focusRectanglesForFocusMode:(long long)arg1 inBounds:(struct CGRect)arg2 forFetchHelper:(id)arg3;
- (void)tfn_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (void)tfn_fetchHelper:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)_multiPhotoDidLongPress:(id)arg1;
- (void)_multiPhotoDidTap:(id)arg1;
- (struct CGRect)_frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect)_landscapeFourPhotoFrameForImageAtIndex:(unsigned long long)arg1 withNumberOfRows:(unsigned long long)arg2;
- (struct CGRect)_adaptiveFrameForImageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isPrimaryImagePanoramic;
@property(readonly, nonatomic) _Bool isPrimaryImageLandscape;
- (struct CGSize)_primaryImageSize;
- (unsigned long long)rectCornerForImageAtIndex:(unsigned long long)arg1 inVerticalCompactLayout:(_Bool)arg2;
- (void)_layoutImageView:(id)arg1 atIndex:(unsigned long long)arg2 layoutMetrics:(id)arg3;
- (void)layoutSubviews;
- (void)_addStickerBadgeToImageView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_initializePlaceholderView;
- (id)_initializeImageViewAtIndex:(unsigned long long)arg1;
- (void)_updateNumberOfVisibleImageViews:(unsigned long long)arg1;
- (id)_paletteForIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)reset;
- (_Bool)haveAllImagesBeenDownloaded;
@property(retain, nonatomic) NSArray *images;
- (void)setInlineMediaInfos:(id)arg1 fromSourceStatusId:(long long)arg2 options:(unsigned long long)arg3;
- (id)mediaInfoAtIndex:(unsigned long long)arg1;
- (long long)imageContentModeAtIndex:(unsigned long long)arg1;
- (struct CGRect)imageContentsRectAtIndex:(unsigned long long)arg1;
- (id)imageViewAtIndex:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (long long)imageIndexAtPoint:(struct CGPoint)arg1;
- (id)initWithImageSize:(struct CGSize)arg1 imagePipeline:(id)arg2 images:(id)arg3;
- (id)initWithImageSize:(struct CGSize)arg1 imagePipeline:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 imagePipeline:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
