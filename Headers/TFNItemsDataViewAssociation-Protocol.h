//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNDataSourceScrollPositionAssociation-Protocol.h>

@class NSIndexPath, TFNItemsDataViewAdapter;

@protocol TFNItemsDataViewAssociation <TFNDataSourceScrollPositionAssociation>
- (TFNItemsDataViewAdapter *)registeredDataViewAdapterForItem:(id)arg1;
- (void)useDataViewAdapter:(TFNItemsDataViewAdapter *)arg1 forItemsOfClass:(Class)arg2;
- (void)enumerateItemsUsingBlock:(void (^)(id, long long, long long, _Bool *))arg1;
- (NSIndexPath *)indexPathForItem:(id)arg1;
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
@end

