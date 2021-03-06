//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/T1StatusViewEventHandler-Protocol.h>
#import <T1Twitter/T1TimelineStatusViewContainer-Protocol.h>
#import <T1Twitter/TFNSizeThatFitsHelperDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAVAutoplayPlayerControllerViewContainer-Protocol.h>

@class NSString, TFNSizeThatFitsHelper, UIImage, UIView;
@protocol T1TimelineStatusView, TFNTwitterAVPlayerSessionSource;

@interface T1StatusCell : TFNTableViewCell <TFNSizeThatFitsHelperDelegate, T1StatusViewEventHandler, T1TimelineStatusViewContainer, TFNTwitterAVAutoplayPlayerControllerViewContainer, T1AutoplayableContainer>
{
    TFNSizeThatFitsHelper *_layoutHelper;
    unsigned long long _appearanceTime;
    char _loadedStates[4];
    long long _loadedSources[4];
    _Bool _supportsEstimatedTableRowHeights;
    UIView<T1TimelineStatusView> *_statusView;
    CDUnknownBlockType _eventHandlerBlock;
}

+ (id)cellForTableView:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 indexPath:(id)arg4 initialization:(CDUnknownBlockType)arg5;
+ (double)estimatedHeightForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4;
+ (id)cellLayoutForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 withPreviousLayout:(id)arg5 layoutDelegate:(id)arg6;
+ (id)cellLayoutForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 layoutMetrics:(id)arg4 withPreviousLayout:(id)arg5;
@property(copy, nonatomic) CDUnknownBlockType eventHandlerBlock; // @synthesize eventHandlerBlock=_eventHandlerBlock;
@property(readonly, nonatomic) UIView<T1TimelineStatusView> *statusView; // @synthesize statusView=_statusView;
- (void).cxx_destruct;
- (void)_t1_presentUndoWithheldRetweetActionSheet;
- (void)playerDidFailToLoad:(id)arg1 error:(id)arg2;
- (void)playerDidUpdatePlaybackLikelyToKeepUp:(id)arg1 playbackLikelyToKeepUp:(_Bool)arg2;
- (void)playerDidUpdateItemStatus:(id)arg1 itemStatus:(long long)arg2;
- (void)playerDidReceiveTimedMetadata:(id)arg1 timedMetadata:(id)arg2;
- (long long)playerControllerMode;
- (void)updateWithPlayer:(id)arg1;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)detachPlayerViewAnimated:(_Bool)arg1;
- (void)attachPlayerView:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIImage *playerPreviewImage;
@property(readonly, nonatomic) UIView *playerContainerView;
@property(readonly, nonatomic) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (_Bool)tableViewCellAccessibilityMagicTap;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)handleStatusViewEvent:(id)arg1;
- (id)_interceptStatusViewEvent:(id)arg1 withOriginalReturnValue:(id)arg2;
- (void)_handlePhotoLoadedEvent:(unsigned long long)arg1 imageIndex:(id)arg2 source:(long long)arg3 error:(id)arg4;
- (void)didEndDisplayingInDataViewController:(id)arg1;
- (void)didDisplayInDataViewController:(id)arg1 visibleIntersection:(struct CGRect)arg2;
- (void)_imageLostVisibilityBeforeLoad:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (void)_imageDidLoad:(unsigned long long)arg1 source:(long long)arg2 index:(unsigned long long)arg3;
- (void)_imageFailedToLoad:(unsigned long long)arg1 error:(id)arg2 source:(long long)arg3 index:(unsigned long long)arg4;
- (void)_imageDurationFinished:(unsigned long long)arg1 error:(id)arg2 source:(long long)arg3 index:(unsigned long long)arg4;
- (void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3;
- (void)tfn_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCellLayout:(id)arg1;
- (void)_initForEstimatedRowHeights:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

