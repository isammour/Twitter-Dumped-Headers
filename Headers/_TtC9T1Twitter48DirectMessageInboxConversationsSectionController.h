//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewSectionController.h>

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter48DirectMessageInboxConversationsSectionController : TFNItemsDataViewSectionController
{
    // Error parsing type: , name: supportedEditActions
    // Error parsing type: , name: flipEditActionIcon
    // Error parsing type: , name: conversationAdapter
    // Error parsing type: , name: markAsViewedHelper
}

- (CDUnknownBlockType).cxx_destruct;
- (void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2;
- (id)editActionsForItem:(id)arg1 atIndexPath:(id)arg2;
- (long long)editingStyleForItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)canEditItem:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (id)previewingViewControllerForItem:(id)arg1 location:(struct CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4 outSourceRect:(struct CGRect *)arg5;
- (void)dataViewDidEndDisplaying;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)didMoveToDataViewController:(id)arg1;
- (id)init;

@end

