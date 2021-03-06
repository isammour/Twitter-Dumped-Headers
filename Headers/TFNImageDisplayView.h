//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNTwitterImageViewFetchHelperDelegate-Protocol.h>

@class NSString, TFNProgressBar, TFNTwitterImageViewFetchHelper, TFNZoomableImageView, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer, UIViewController;
@protocol TFNImageDisplayViewDelegate, TFNImageDisplayViewDownloadDelegate;

@interface TFNImageDisplayView : UIView <TFNTwitterImageViewFetchHelperDelegate>
{
    TFNTwitterImageViewFetchHelper *_fetchHelper;
    TFNProgressBar *_progressBar;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _isPreviewForPlayableMedia;
    id _tapTarget;
    SEL _tapAction;
    SEL _tapActionWithGestureRecognizer;
    id _doubleTapTarget;
    SEL _doubleTapAction;
    _Bool _forceHighQualityImage;
    id <TFNImageDisplayViewDownloadDelegate> _downloadDelegate;
    id <TFNImageDisplayViewDelegate> _delegate;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_viewController;
    TFNZoomableImageView *_zoomableImageView;
}

+ (CDUnknownBlockType)variantSelectionBehaviorCustomizationForShouldLoadHighQualityImage:(_Bool)arg1;
@property(readonly, nonatomic) TFNZoomableImageView *zoomableImageView; // @synthesize zoomableImageView=_zoomableImageView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) __weak id <TFNImageDisplayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TFNImageDisplayViewDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) _Bool forceHighQualityImage; // @synthesize forceHighQualityImage=_forceHighQualityImage;
- (void).cxx_destruct;
- (void)_tfn_longPressAction:(id)arg1;
- (void)_tfn_doubleTapAction:(id)arg1;
- (void)_tfn_tapAction:(id)arg1;
- (void)tfn_fetchHelper:(id)arg1 didUpdateProgress:(float)arg2;
- (void)tfn_fetchHelper:(id)arg1 didFailToLoadImageWithError:(id)arg2;
- (void)tfn_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)tfn_fetchHelper:(id)arg1 didLoadInitialImageFromSource:(long long)arg2;
- (_Bool)_tfn_shouldUseHighQualityImage;
- (void)_tfn_updateShouldUseHighQualityImage;
- (void)_tfn_updateWithProgress:(float)arg1;
- (void)loadImageWithAccountForSigningImageRequests:(id)arg1 templateURL:(id)arg2 dimensions:(struct CGSize)arg3 transformer:(id)arg4 previewImage:(id)arg5 isPreviewForPlayableMedia:(_Bool)arg6;
- (void)setDoubleTapTarget:(id)arg1 action:(SEL)arg2;
- (void)setTapTarget:(id)arg1 forActionWithGestureRecognizer:(SEL)arg2;
- (void)setTapTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) NSString *imageURLString;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImagePipeline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

