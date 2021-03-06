//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionViewCell.h>

@class T1RecentSearchViewModel, TFNTwitterAvatarImageView, UIImageView, UILabel, UIStackView, UIView;

@interface T1RecentSearchCollectionViewCell : TFNCollectionViewCell
{
    UIView *_imageContainerView;
    UIImageView *_imageView;
    UIView *_imageToTextSpacerView;
    TFNTwitterAvatarImageView *_avatarImageView;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
    UIStackView *_stackView;
    T1RecentSearchViewModel *_viewModel;
}

+ (struct CGSize)recentSearchCellSize;
@property(retain, nonatomic) T1RecentSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) UILabel *subtextLabel; // @synthesize subtextLabel=_subtextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) TFNTwitterAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *imageToTextSpacerView; // @synthesize imageToTextSpacerView=_imageToTextSpacerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)cleanup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

