//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class TFNScrollBumpCell, UICollectionViewCell;

@protocol TFNScrollBumpCellDataSource <NSObject>
- (UICollectionViewCell *)scrollBumpCell:(TFNScrollBumpCell *)arg1 viewForPageAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPagesForScrollBumpCell:(TFNScrollBumpCell *)arg1;
@end

