//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray, NSMutableDictionary;

@interface T1MediaAttachmentsViewLayout : UICollectionViewFlowLayout
{
    NSArray *_reloadingItems;
    NSArray *_insertingItems;
    NSArray *_deletingItems;
    NSMutableDictionary *_attributesCache;
    struct UIEdgeInsets _cellMarginInsets;
    struct CGRect _oldBounds;
}

@property(retain, nonatomic) NSMutableDictionary *attributesCache; // @synthesize attributesCache=_attributesCache;
@property(retain, nonatomic) NSArray *deletingItems; // @synthesize deletingItems=_deletingItems;
@property(retain, nonatomic) NSArray *insertingItems; // @synthesize insertingItems=_insertingItems;
@property(retain, nonatomic) NSArray *reloadingItems; // @synthesize reloadingItems=_reloadingItems;
@property(nonatomic) struct CGRect oldBounds; // @synthesize oldBounds=_oldBounds;
@property(nonatomic) struct UIEdgeInsets cellMarginInsets; // @synthesize cellMarginInsets=_cellMarginInsets;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (_Bool)_t1_isReloadingForIndexPath:(id)arg1;
- (_Bool)_t1_isDeletingForIndexPath:(id)arg1;
- (_Bool)_t1_isInsertingForIndexPath:(id)arg1;
- (id)_t1_alignLayoutAttributesForItemToTop:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end
