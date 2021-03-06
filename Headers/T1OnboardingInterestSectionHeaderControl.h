//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TFNBadgeAccessory, UIImageView, UILabel, UIView;

@interface T1OnboardingInterestSectionHeaderControl : UIControl
{
    UILabel *_textLabel;
    TFNBadgeAccessory *_badgeAccessory;
    UIImageView *_disclosureIndicator;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

@property(readonly, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(readonly, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(readonly, nonatomic) UIImageView *disclosureIndicator; // @synthesize disclosureIndicator=_disclosureIndicator;
@property(readonly, nonatomic) TFNBadgeAccessory *badgeAccessory; // @synthesize badgeAccessory=_badgeAccessory;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

