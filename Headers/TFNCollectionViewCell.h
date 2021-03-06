//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <TFNUI/TFNDataViewCell-Protocol.h>

@class NSIndexPath, NSString, TFNDataViewCellLayout, UICollectionView, UIView;

@interface TFNCollectionViewCell : UICollectionViewCell <TFNDataViewCell>
{
    UICollectionView *_collectionView;
    NSIndexPath *_initialIndexPath;
    _Bool _initialized;
    _Bool _hasSentDidFirstDisplay;
    TFNDataViewCellLayout *_cellLayout;
    unsigned long long _sectionBreaks;
    CDUnknownBlockType _willDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayInDataViewControllerBlock;
    CDUnknownBlockType _didDisplayWithZeroVisibilityInDataViewControllerBlock;
    CDUnknownBlockType _didEndDisplayingInDataViewControllerBlock;
    CDUnknownBlockType _didEndScrollingInDataViewControllerBlock;
    CDUnknownBlockType _didFirstDisplayInDataViewControllerBlock;
    CDUnknownBlockType _cleanupBlock;
    struct CGRect _contentFrame;
}

+ (id)cellForCollectionView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 initialization:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(copy, nonatomic) CDUnknownBlockType didFirstDisplayInDataViewControllerBlock; // @synthesize didFirstDisplayInDataViewControllerBlock=_didFirstDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndScrollingInDataViewControllerBlock; // @synthesize didEndScrollingInDataViewControllerBlock=_didEndScrollingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndDisplayingInDataViewControllerBlock; // @synthesize didEndDisplayingInDataViewControllerBlock=_didEndDisplayingInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayWithZeroVisibilityInDataViewControllerBlock; // @synthesize didDisplayWithZeroVisibilityInDataViewControllerBlock=_didDisplayWithZeroVisibilityInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType didDisplayInDataViewControllerBlock; // @synthesize didDisplayInDataViewControllerBlock=_didDisplayInDataViewControllerBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayInDataViewControllerBlock; // @synthesize willDisplayInDataViewControllerBlock=_willDisplayInDataViewControllerBlock;
@property(readonly, nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) unsigned long long sectionBreaks; // @synthesize sectionBreaks=_sectionBreaks;
@property(retain, nonatomic) TFNDataViewCellLayout *cellLayout; // @synthesize cellLayout=_cellLayout;
- (void).cxx_destruct;
- (id)currentIndexPath;
- (id)calculatedLayoutMetrics;
- (void)cleanup;
- (void)didFirstDisplayInDataViewController:(id)arg1;
- (void)didEndScrollingInDataViewController:(id)arg1;
- (void)didEndDisplayingInDataViewController:(id)arg1;
- (void)didDisplayWithZeroVisibilityInDataViewController:(id)arg1;
- (void)didDisplayInDataViewController:(id)arg1 visibleIntersection:(struct CGRect)arg2;
- (void)willDisplayInDataViewController:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

