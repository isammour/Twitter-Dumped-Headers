//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1SlideshowViewControllerDelegate-Protocol.h>
#import <T1Twitter/T1SlideshowViewControllerLoadingDelegate-Protocol.h>
#import <T1Twitter/T1StatusMediaHandlerSlideshowPresenter-Protocol.h>
#import <T1Twitter/TFNImageTransitionDelegate-Protocol.h>

@class NSString, T1StatusTableViewControllerSlideshowDataSource, TFNDataViewController, UIViewController;
@protocol TFNTwitterAVPlayerControllerSource;

@interface T1StatusTableSlideshowManager : NSObject <TFNImageTransitionDelegate, T1SlideshowViewControllerDelegate, T1SlideshowViewControllerLoadingDelegate, T1StatusMediaHandlerSlideshowPresenter>
{
    _Bool _supportsSwipingBetweenStatuses;
    _Bool _scrollsViewControllerToShowStatusWhenDismissed;
    id <TFNTwitterAVPlayerControllerSource> _playerSource;
    UIViewController *_layoutGuidesProvider;
    T1StatusTableViewControllerSlideshowDataSource *_multiStatusDataSource;
    TFNDataViewController *_controller;
    id _item;
}

@property(nonatomic) __weak id item; // @synthesize item=_item;
@property(nonatomic) __weak TFNDataViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) T1StatusTableViewControllerSlideshowDataSource *multiStatusDataSource; // @synthesize multiStatusDataSource=_multiStatusDataSource;
@property(nonatomic) __weak UIViewController *layoutGuidesProvider; // @synthesize layoutGuidesProvider=_layoutGuidesProvider;
@property(nonatomic) _Bool scrollsViewControllerToShowStatusWhenDismissed; // @synthesize scrollsViewControllerToShowStatusWhenDismissed=_scrollsViewControllerToShowStatusWhenDismissed;
@property(nonatomic) _Bool supportsSwipingBetweenStatuses; // @synthesize supportsSwipingBetweenStatuses=_supportsSwipingBetweenStatuses;
@property(nonatomic) __weak id <TFNTwitterAVPlayerControllerSource> playerSource; // @synthesize playerSource=_playerSource;
- (void).cxx_destruct;
- (id)_legacyContextualStatusForCell:(id)arg1;
- (id)presentVideoViewControllerFromPlayerViewContainerCell:(id)arg1 status:(id)arg2 previewing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)presentSlideshowFromPlayerViewContainerCell:(id)arg1 status:(id)arg2 previewing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleImageFromStatusView:(id)arg1 mediaTransitionIndex:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (struct CGRect)_imageContentsRectFromStatusView:(id)arg1 mediaTransitionIndex:(long long)arg2;
- (long long)_imageContentModeFromStatusView:(id)arg1 mediaTransitionIndex:(long long)arg2;
- (id)_imageViewFromStatusView:(id)arg1 mediaTransitionIndex:(long long)arg2;
- (void)imageTransitionViewController:(id)arg1 willTransition:(_Bool)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageHostViewFrameInWindow:(id)arg2 forObject:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageContentsRectForObject:(id)arg2;
- (long long)imageTransitionViewController:(id)arg1 contentModeForPreviewFrameOfObject:(id)arg2;
- (_Bool)imageTransitionViewController:(id)arg1 previewImageFrameIsAspectFillForObject:(id)arg2;
- (void)setPreviewImageHidden:(_Bool)arg1 forImageTransitionViewController:(id)arg2 object:(id)arg3;
- (struct CGRect)imageTransitionViewController:(id)arg1 previewImageFrameInWindow:(id)arg2 forObject:(id)arg3;
- (_Bool)slideshowCanRequestLoadingMoreSlides:(id)arg1;
- (void)slideshowDidRequestLoadingMoreSlides:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)slideshow:(id)arg1 dismissAndPresentViewController:(id)arg2;
- (void)slideshow:(id)arg1 didSelectSticker:(id)arg2;
- (void)slideshow:(id)arg1 status:(id)arg2 didSelectActiveRange:(id)arg3;
- (void)slideshow:(id)arg1 didSelectUser:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatusReply:(id)arg2;
- (void)slideshow:(id)arg1 didSelectStatus:(id)arg2;
- (void)slideshow:(id)arg1 didDeleteStatus:(id)arg2;
- (_Bool)_supportsSwipingBetweenStatusesForStatus:(id)arg1;
- (id)_transitionCellForTransitionObject:(id)arg1;
- (long long)_mediaTransitionIndexForTransitionObject:(id)arg1;
- (long long)_mediaInfoIndexForViewModel:(id)arg1 URLString:(id)arg2;
- (id)_presentSlideshowFromDataCell:(id)arg1 slideIndex:(long long)arg2 dataSource:(id)arg3 retainDataSource:(_Bool)arg4 account:(id)arg5 previewing:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_presentSlideshow:(id)arg1 fromDataCell:(id)arg2 previewing:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSlideshow:(id)arg1 fromDataCell:(id)arg2 withStatusView:(id)arg3 previewing:(_Bool)arg4;
- (id)_prepopulatedSlideWithStatus:(id)arg1 previewImage:(id)arg2 mediaInfo:(id)arg3;
- (id)_presentMultiStatusSlideShowFromDataCell:(id)arg1 withStatus:(id)arg2 slideIndexInCell:(unsigned long long)arg3 previewing:(_Bool)arg4;
- (id)presentSlideshowFromDataCell:(id)arg1 statusView:(id)arg2 slideIndexInCell:(unsigned long long)arg3 previewing:(_Bool)arg4;
- (id)initWithTableViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

