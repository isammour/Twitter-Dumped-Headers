//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewSectionController.h>

@class TFNTwitterStickerCategory;

@interface T1StickerCategorySectionController : TFNItemsDataViewSectionController
{
    TFNTwitterStickerCategory *_category;
    _Bool _topSection;
    long long _catalogType;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithCategory:(id)arg1 topSection:(_Bool)arg2 catalogType:(long long)arg3;

@end

