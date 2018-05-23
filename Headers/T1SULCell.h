//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSMutableArray, NSString, TFNTwitterSULCategory, UIImageView, UILabel;

@interface T1SULCell : TFNTableViewCell
{
    UILabel *_nameLabel;
    UILabel *_countLabel;
    UIImageView *_chevronImageView;
    NSString *_accountID;
    TFNTwitterSULCategory *_category;
    NSMutableArray *_avatarImageViews;
}

+ (double)heightWithLayoutMetrics:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *avatarImageViews; // @synthesize avatarImageViews=_avatarImageViews;
@property(retain, nonatomic) TFNTwitterSULCategory *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)_updateCategoryLabels;
- (void)_categoryDidUpdate;
- (void)cleanup;
- (id)calculatedLayoutMetrics;
- (long long)_numberOfAvatarsAvailableWithinWidth:(double)arg1 forAvatarWidth:(double)arg2 avatarMargin:(double)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
