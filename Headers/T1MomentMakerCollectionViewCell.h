//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TFNTwitterMomentPage, UIButton, UIView;
@protocol T1MomentMakerCollectionViewCellDelegate;

@interface T1MomentMakerCollectionViewCell : UICollectionViewCell
{
    id <T1MomentMakerCollectionViewCellDelegate> _delegate;
    UIView *_pageView;
    double _itemSizeRatio;
    double _staticItemRatio;
    TFNTwitterMomentPage *_page;
    long long _actionButtonMode;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) long long actionButtonMode; // @synthesize actionButtonMode=_actionButtonMode;
@property(readonly, nonatomic) TFNTwitterMomentPage *page; // @synthesize page=_page;
@property(nonatomic) double staticItemRatio; // @synthesize staticItemRatio=_staticItemRatio;
@property(readonly, nonatomic) double itemSizeRatio; // @synthesize itemSizeRatio=_itemSizeRatio;
@property(retain, nonatomic) UIView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) __weak id <T1MomentMakerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionButtonPressed:(id)arg1;
- (id)calculatedLayoutMetrics;
- (void)setItemSizeRatio:(double)arg1;
- (void)updateShadowForRect:(struct CGRect)arg1 ratio:(double)arg2;
- (void)updateWithItemSizeRatio:(double)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

