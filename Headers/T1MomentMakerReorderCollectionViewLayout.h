//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <T1Twitter/T1MomentMakerScrollViewDriverDelegate-Protocol.h>
#import <T1Twitter/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableArray, NSString, T1MomentMakerReorderCollectionViewInteractionContext, T1MomentMakerScrollViewDriver, UILongPressGestureRecognizer, UIView;
@protocol T1MomentMakerReorderLayoutDelegate;

@interface T1MomentMakerReorderCollectionViewLayout : UICollectionViewFlowLayout <T1MomentMakerScrollViewDriverDelegate, UIGestureRecognizerDelegate>
{
    id <T1MomentMakerReorderLayoutDelegate> _delegate;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIView *_darkeningView;
    T1MomentMakerReorderCollectionViewInteractionContext *_interactionContext;
    NSMutableArray *_allMoveInfos;
    T1MomentMakerScrollViewDriver *_scrollViewDriver;
    unsigned long long _scrollState;
    NSArray *_collectionViewUpdates;
}

@property(copy, nonatomic) NSArray *collectionViewUpdates; // @synthesize collectionViewUpdates=_collectionViewUpdates;
@property(nonatomic) unsigned long long scrollState; // @synthesize scrollState=_scrollState;
@property(retain, nonatomic) T1MomentMakerScrollViewDriver *scrollViewDriver; // @synthesize scrollViewDriver=_scrollViewDriver;
@property(retain, nonatomic) NSMutableArray *allMoveInfos; // @synthesize allMoveInfos=_allMoveInfos;
@property(retain, nonatomic) T1MomentMakerReorderCollectionViewInteractionContext *interactionContext; // @synthesize interactionContext=_interactionContext;
@property(retain, nonatomic) UIView *darkeningView; // @synthesize darkeningView=_darkeningView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) __weak id <T1MomentMakerReorderLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)momentMakerScrollViewDriver:(id)arg1 didUpdateContentOffset:(struct CGPoint)arg2;
- (void)_updateCellTransforms;
- (void)_updateAutoScrollStateWithGesture:(id)arg1;
@property(readonly, nonatomic) long long itemCountPerRow;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateSnapShotWithGesture:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)undoLastReorder;
@property(readonly, nonatomic) NSIndexPath *currentReorderIndexPath;
- (id)popMoveInfo;
- (void)pushMoveInfo:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

