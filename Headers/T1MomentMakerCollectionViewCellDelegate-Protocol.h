//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1MomentMakerCollectionViewCell, TFNTwitterMomentPage;

@protocol T1MomentMakerCollectionViewCellDelegate <NSObject>

@optional
- (void)momentMakerCell:(T1MomentMakerCollectionViewCell *)arg1 didTapDeleteForPage:(TFNTwitterMomentPage *)arg2;
- (void)momentMakerCell:(T1MomentMakerCollectionViewCell *)arg1 didTapActionButtonForPage:(TFNTwitterMomentPage *)arg2 sender:(id)arg3;
- (_Bool)momentMakerCell:(T1MomentMakerCollectionViewCell *)arg1 shouldTapActionButtonForPage:(TFNTwitterMomentPage *)arg2;
@end
