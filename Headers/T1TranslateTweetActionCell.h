//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSString, T1TranslateTweetButton;

@interface T1TranslateTweetActionCell : TFNTableViewCell
{
    T1TranslateTweetButton *_button;
}

+ (struct UIEdgeInsets)_adjustDefaultContentPadding:(struct UIEdgeInsets)arg1;
- (void).cxx_destruct;
- (void)setShowingLogo:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showingLogo;
@property(retain, nonatomic) NSString *originalLanguage;
- (void)layoutSubviews;
@property(copy, nonatomic) CDUnknownBlockType logoTapActionBlock;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock;
- (id)calculatedLayoutMetrics;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

