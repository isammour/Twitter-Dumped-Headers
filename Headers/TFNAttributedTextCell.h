//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

#import <TFNUI/TFNAttributedTextCellLayoutDelegate-Protocol.h>

@class TFNAttributedTextView;
@protocol TFNAttributedTextCellLayoutDelegate;

@interface TFNAttributedTextCell : TFNTableViewCell <TFNAttributedTextCellLayoutDelegate>
{
    TFNAttributedTextView *_attributedTextView;
    _Bool _useTilingTextView;
    _Bool _useHorizontallyCenteredTextView;
    CDUnknownBlockType _accessoryButtonTappedBlock;
    id <TFNAttributedTextCellLayoutDelegate> _layoutDelegate;
}

+ (double)_heightForAttributedText:(id)arg1 badgeText:(id)arg2 detailText:(id)arg3 detailFont:(id)arg4 image:(id)arg5 layoutMetrics:(id)arg6 ignoringMaxHeight:(_Bool)arg7;
+ (double)_heightForAttributedText:(id)arg1 badgeText:(id)arg2 image:(id)arg3 layoutMetrics:(id)arg4 ignoringMaxHeight:(_Bool)arg5;
+ (double)heightForAttributedText:(id)arg1 detailText:(id)arg2 detailFont:(id)arg3 image:(id)arg4 layoutMetrics:(id)arg5;
+ (double)heightForAttributedText:(id)arg1 iconImage:(id)arg2 layoutMetrics:(id)arg3;
+ (double)heightForAttributedText:(id)arg1 badgeImage:(id)arg2 layoutMetrics:(id)arg3;
+ (double)heightForAttributedText:(id)arg1 badgeText:(id)arg2 layoutMetrics:(id)arg3;
+ (double)fullHeightForAttributedText:(id)arg1 layoutMetrics:(id)arg2;
+ (double)heightForAttributedText:(id)arg1 layoutMetrics:(id)arg2;
+ (id)_cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 withAttributedText:(id)arg4 accessoryType:(long long)arg5 initialization:(CDUnknownBlockType)arg6;
+ (id)iconCellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 icon:(id)arg4 accessoryType:(long long)arg5;
+ (id)imageBadgeCellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 badgeImage:(id)arg4;
+ (id)badgeCellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 badgeText:(id)arg4;
+ (id)cellForTableView:(id)arg1 indexPath:(id)arg2 withAttributedText:(id)arg3 accessoryType:(long long)arg4;
@property(nonatomic) __weak id <TFNAttributedTextCellLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonTappedBlock; // @synthesize accessoryButtonTappedBlock=_accessoryButtonTappedBlock;
@property(readonly, nonatomic) TFNAttributedTextView *attributedTextView; // @synthesize attributedTextView=_attributedTextView;
@property(nonatomic) _Bool useHorizontallyCenteredTextView; // @synthesize useHorizontallyCenteredTextView=_useHorizontallyCenteredTextView;
@property(nonatomic) _Bool useTilingTextView; // @synthesize useTilingTextView=_useTilingTextView;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (struct CGRect)frameForAccessoryView:(id)arg1;
- (struct CGRect)frameForAttributedTextView:(id)arg1 withFrame:(struct CGRect)arg2;
- (_Bool)isAccessibilityElement;
- (void)accessoryButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)cleanup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
