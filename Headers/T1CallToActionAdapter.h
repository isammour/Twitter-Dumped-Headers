//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

@class T1InlinePromptView;

@interface T1CallToActionAdapter : TFNItemsDataViewAdapter
{
    T1InlinePromptView *_prototypeView;
    unsigned long long _style;
}

@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setPropertiesForPromptView:(id)arg1 withCallToAction:(id)arg2;
- (struct CGSize)_contentViewSizeForItem:(id)arg1 controller:(id)arg2 indexPath:(id)arg3;
- (_Bool)dataViewController:(id)arg1 shouldHighlightItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)dataViewController:(id)arg1 collectionViewSizeForItem:(id)arg2 constrainedToSize:(struct CGSize)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 collectionViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;

@end

