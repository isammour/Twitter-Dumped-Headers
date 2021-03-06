//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNLayoutableView.h>

#import <T1Twitter/T1AutoplayableContainer-Protocol.h>
#import <T1Twitter/TFNTwitterImageViewFetchHelperDelegate-Protocol.h>

@class NSString, TFNTwitterCardContext, TFNTwitterMediaImagePipeline, TFSTwitterScribeContext, UIView;
@protocol TFNTwitterAVAutoplayPlayerControllerViewContainer, TFNTwitterCardViewDataSource, TFNTwitterCardViewDelegate;

@interface TFNTwitterCardView : TFNLayoutableView <T1AutoplayableContainer, TFNTwitterImageViewFetchHelperDelegate>
{
    TFNTwitterCardContext *_cardContext;
    id <TFNTwitterCardViewDelegate> _delegate;
    id <TFNTwitterCardViewDataSource> _dataSource;
    TFNTwitterMediaImagePipeline *_imagePipeline;
    UIView *_previewImageView;
    id <TFNTwitterAVAutoplayPlayerControllerViewContainer> _playerViewContainer;
    TFSTwitterScribeContext *_scribeContext;
}

@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) __weak id <TFNTwitterAVAutoplayPlayerControllerViewContainer> playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(readonly, nonatomic) UIView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) TFNTwitterMediaImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(nonatomic) __weak id <TFNTwitterCardViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TFNTwitterCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
- (_Bool)_shouldDisregardMediaDownloads;
- (void)tfn_fetchHelper:(id)arg1 didUpdateImageFromSource:(long long)arg2 isFinal:(_Bool)arg3;
- (void)didFinishImageLoadWithMetrics:(id)arg1;
- (id)imageFetchingViews;
- (void)fetchImages;
- (void)fetchImagesIfNeeded;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(struct CGRect *)arg2;
- (void)restartAnimationsIfNeeded;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (id)calculatedLayoutMetrics;
- (void)prepareForReuse;
- (void)cardContextDidUpdate;
- (id)autoplayable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

