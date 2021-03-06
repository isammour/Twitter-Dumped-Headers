//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface TFNDataViewSectionUpdates : NSObject
{
    long long _itemCount;
    NSMutableIndexSet *_inserts;
    NSMutableIndexSet *_deletes;
    NSMutableIndexSet *_reloads;
    _Bool _insertingAtBegin;
    _Bool _insertingAtEnd;
    long long _section;
}

@property(readonly, nonatomic) long long section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)applyCellLayoutUpdates:(id)arg1;
- (id)updatedIndexPathForIndexPath:(id)arg1;
- (id)sectionBreakIndexPathsToReset;
- (void)reloadingIndex:(long long)arg1;
- (void)deletingIndex:(long long)arg1;
- (void)insertingIndex:(long long)arg1;
- (id)initWithSection:(long long)arg1 numberOfItems:(long long)arg2;

@end

