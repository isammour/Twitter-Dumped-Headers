//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataViewController.h>

#import <TFNUI/TFNItemsAnimatorDelegate-Protocol.h>
#import <TFNUI/TFNItemsDataViewAssociation-Protocol.h>
#import <TFNUI/TFNItemsDataViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableIndexSet, NSString, TFNItemsDataViewControllerBackingStore;
@protocol TFNItemsDummyObjectDelegate;

@interface TFNItemsDataViewController : TFNDataViewController <TFNItemsDataViewDelegate, TFNItemsDataViewAssociation, TFNItemsAnimatorDelegate>
{
    _Bool _reactingToRowMove;
    NSMutableArray *_batchedItemDeletes;
    NSMutableArray *_batchedItemInserts;
    NSMutableIndexSet *_batchedSectionDeletes;
    NSMutableArray *_batchedSectionInserts;
    NSMapTable *_visibleDataViewItemsByCell;
    _Bool _flashesScrollIndicatorsOnUpdate;
    _Bool _batchAnimated;
    id <TFNItemsDummyObjectDelegate> _dummyObjectDelegate;
    long long _batchCount;
    TFNItemsDataViewControllerBackingStore *_backingStore;
}

@property(readonly, nonatomic) TFNItemsDataViewControllerBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(nonatomic) long long batchCount; // @synthesize batchCount=_batchCount;
@property(nonatomic) _Bool batchAnimated; // @synthesize batchAnimated=_batchAnimated;
@property(nonatomic) _Bool flashesScrollIndicatorsOnUpdate; // @synthesize flashesScrollIndicatorsOnUpdate=_flashesScrollIndicatorsOnUpdate;
@property(nonatomic) __weak id <TFNItemsDummyObjectDelegate> dummyObjectDelegate; // @synthesize dummyObjectDelegate=_dummyObjectDelegate;
- (void).cxx_destruct;
- (id)itemsInternalVisibleDataViewItems;
- (id)itemsInternalDataViewItemAtValidIndexPath:(id)arg1;
- (void)itemsInternalEnumerateDataViewItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_setVisibleDataViewItem:(id)arg1 forCell:(id)arg2;
- (id)_lastVisibleDataViewItemForCell:(id)arg1;
- (void)itemsAnimator:(id)arg1 didChangeSection:(id)arg2 forChangeType:(unsigned long long)arg3 atSectionIndex:(long long)arg4;
- (void)itemsAnimator:(id)arg1 didChangeItem:(id)arg2 forChangeType:(unsigned long long)arg3 atIndexPath:(id)arg4;
- (id)itemsAnimatorSectionsToAnimateFrom:(id)arg1;
- (void)itemsAnimator:(id)arg1 performChanges:(CDUnknownBlockType)arg2;
- (id)dragItemForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)_isValidSection:(long long)arg1;
- (_Bool)isValidIndexPath:(id)arg1;
- (_Bool)dismissItem:(id)arg1 withInfo:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)sectionBreaksForItem:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)sectionBreaksForIndexPath:(id)arg1;
- (void)commitPreviewingViewController:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 inDataViewController:(id)arg4 withPreviousDataViewAdapter:(id)arg5 options:(id)arg6;
- (id)previewingViewControllerForItem:(id)arg1 location:(struct CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4 outSourceRect:(out struct CGRect *)arg5;
- (void)commitPreviewingViewController:(id)arg1;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 inCell:(id)arg2 atIndexPath:(id)arg3 outSourceRect:(out struct CGRect *)arg4;
- (id)targetIndexPathForMoveOfItem:(id)arg1 atIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)moveItem:(id)arg1 atIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)canMoveItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)shouldIndentWhileEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)titleForDeleteConfirmationButtonForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)willBeginEditingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)commitEditingStyle:(long long)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)editActionsForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)editingStyleForItem:(id)arg1 atIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)didDeselectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_invokeDidDeselectWithItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)shouldDeselectItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_invokeShouldDeselectWithItemAtIndexPath:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_invokeDidSelectWithItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_invokeShouldSelectWithItemAtIndexPath:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)didUnhighlightItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_invokeDidUnhighlightWithItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)didHighlightItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_invokeDidHighlightWithItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (_Bool)shouldHighlightItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)_invokeShouldHighlightWithItemAtIndexPath:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)didEndDisplayingCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 inDataViewController:(id)arg4 withPreviousDataViewAdapter:(id)arg5 options:(id)arg6;
- (void)_invokeDidEndDisplayingCell:(id)arg1 withItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_invokeWillDisplayCell:(id)arg1 withItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)collectionViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct CGSize)collectionViewSizeForItem:(id)arg1 constrainedToSize:(struct CGSize)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 sizeForItemAtIndexPath:(id)arg2 constrainedToSize:(struct CGSize)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)estimatedTableViewHeightForItem:(id)arg1 atIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)_sanitizeHeight:(double)arg1 forItem:(id)arg2 atIndexPath:(id)arg3 withFallbackHeight:(double)arg4;
- (double)tableViewHeightForItem:(id)arg1 atIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_applyBatchedUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSections:(id)arg1 withRowAnimation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSections:(id)arg1 withRowAnimation:(long long)arg2;
- (void)updateSections:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSections:(id)arg1;
- (void)updateSection:(id)arg1 atIndex:(long long)arg2 withRowAnimation:(long long)arg3;
- (void)updateSection:(id)arg1 atIndex:(long long)arg2;
- (void)deleteSectionAtIndex:(long long)arg1 withRowAnimation:(long long)arg2;
- (void)deleteSectionAtIndex:(long long)arg1;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2 withRowAnimation:(long long)arg3;
- (void)insertSection:(id)arg1 atIndex:(long long)arg2;
- (void)dataViewDidEndDisplaying;
- (void)dataViewDidDisplay;
- (void)dataViewDidUpdate:(_Bool)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)updateItem:(id)arg1 atIndexPath:(id)arg2 withRowAnimation:(long long)arg3;
- (void)updateItem:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteItemAtIndexPath:(id)arg1 withRowAnimation:(long long)arg2;
- (void)deleteItemAtIndexPath:(id)arg1;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2 withRowAnimation:(long long)arg3;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)missingDataViewAdapterForItem:(id)arg1 withOptions:(id)arg2;
- (id)sectionControllers;
- (id)sectionControllerForItemAtIndexPath:(id)arg1;
- (id)_sectionControllerOwningDataViewFooterDelegationAtValidSectionIndex:(long long)arg1;
- (id)_sectionControllerOwningDataViewHeaderDelegationAtValidSectionIndex:(long long)arg1;
- (id)dataViewAdapterOptionsForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)dataViewAdapterForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)calculatedLayoutMetricsForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)calculatedLayoutMetricsForItemAtIndexPath:(id)arg1;
- (id)registeredDataViewAdapterForItem:(id)arg1;
- (void)useDataViewAdapter:(id)arg1 forItemsOfClass:(Class)arg2;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)arg1 inView:(id)arg2;
- (id)indexPathForElementWithScrollPositionIdentifier:(id)arg1 inView:(id)arg2;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
@property(copy, nonatomic) NSArray *sections;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)updatedSections:(id)arg1 forStyle:(long long)arg2;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

