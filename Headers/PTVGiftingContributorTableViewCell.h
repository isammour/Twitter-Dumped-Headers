//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, PTVDividerView, PTVParticipantsBarCellView, PTVRoundedButton, PTVTitleAndIconView, PTVTopContributorFlairView, PTVVirtualGiftContributor, UILabel;
@protocol PTVGiftingContributorTableViewCellDelegate;

@interface PTVGiftingContributorTableViewCell : UITableViewCell
{
    PTVParticipantsBarCellView *_avatarView;
    UILabel *_nameLabel;
    PTVTitleAndIconView *_amountLabel;
    PTVRoundedButton *_followButton;
    _Bool _showsFollowButton;
    _Bool _blocked;
    PTVVirtualGiftContributor *_contributor;
    long long _lastAmount;
    UILabel *_topContributorLabel;
    UILabel *_userDescriptionLabel;
    _Bool _topContributor;
    PTVTopContributorFlairView *_flairView;
    NSLayoutConstraint *_avatarTopConstraint;
    NSLayoutConstraint *_flairViewTopConstraint;
    id <PTVGiftingContributorTableViewCellDelegate> _delegate;
    PTVDividerView *_bottomBorder;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) PTVDividerView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(nonatomic) __weak id <PTVGiftingContributorTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowsFollowButton:(_Bool)arg1;
- (void)updateFollowAppearanceForFollowing:(_Bool)arg1;
- (void)followButtonDidTap;
- (void)setBlockedUserWithContribution:(long long)arg1;
- (void)setTopContributor:(_Bool)arg1;
- (void)setContributor:(id)arg1 maxContribution:(long long)arg2 isActiveContributor:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

