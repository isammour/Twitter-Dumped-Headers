//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewController.h>

#import <T1Twitter/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol TFNCollectionViewContainerViewControllerDataSource, TFNCollectionViewContainerViewControllerDelegate;

@interface TFNCollectionViewContainerViewController : TFNDataViewController <UICollectionViewDelegateFlowLayout>
{
    id <TFNCollectionViewContainerViewControllerDataSource> _dataSource;
    id <TFNCollectionViewContainerViewControllerDelegate> _delegate;
    NSMutableDictionary *_viewControllersByIndexPath;
}

@property(retain, nonatomic) NSMutableDictionary *viewControllersByIndexPath; // @synthesize viewControllersByIndexPath=_viewControllersByIndexPath;
@property(nonatomic) __weak id <TFNCollectionViewContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TFNCollectionViewContainerViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)clearScrollPosition;
- (void)restoreScrollPosition;
- (void)saveScrollPosition;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)visibleViewControllers;
- (id)viewControllerAtIndexPath:(id)arg1;
- (id)visibleIndexPaths;
- (void)viewDidLayoutSubviews;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

