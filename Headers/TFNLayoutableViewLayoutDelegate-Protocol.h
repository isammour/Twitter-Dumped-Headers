//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNLayoutableView;

@protocol TFNLayoutableViewLayoutDelegate <NSObject>
- (void)layoutSubviewsForLayoutableView:(TFNLayoutableView *)arg1;

@optional
- (struct CGSize)intrinsicContentSizeForLayoutableView:(TFNLayoutableView *)arg1;
- (struct CGSize)layoutableView:(TFNLayoutableView *)arg1 sizeThatFits:(struct CGSize)arg2;
@end

