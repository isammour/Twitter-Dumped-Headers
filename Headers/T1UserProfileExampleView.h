//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1ProfileAvatarImageView, T1UserProfileExampleViewOptions, TFNTwitterAccount, TFNTwitterUser, UIImage, UIImageView, UILabel;
@protocol T1UserProfileExampleViewDelegate;

@interface T1UserProfileExampleView : UIView
{
    TFNTwitterUser *_user;
    T1UserProfileExampleViewOptions *_viewOptions;
    id <T1UserProfileExampleViewDelegate> _delegate;
    UIImage *_forcedProfileImage;
    UIImage *_forcedBannerImage;
    TFNTwitterAccount *_account;
    UIImage *_initialForcedProfileImage;
    UIView *_bannerImageView;
    T1ProfileAvatarImageView *_avatarImageView;
    UILabel *_fullNameLabel;
    UILabel *_usernameLabel;
    UILabel *_bioTextLabel;
    UIView *_locationView;
    UIImageView *_locationIcon;
    UILabel *_locationLabel;
    UIView *_birthdayView;
    UIImageView *_birthdayIcon;
    UILabel *_birthdayLabel;
}

@property(readonly, nonatomic) UILabel *birthdayLabel; // @synthesize birthdayLabel=_birthdayLabel;
@property(readonly, nonatomic) UIImageView *birthdayIcon; // @synthesize birthdayIcon=_birthdayIcon;
@property(readonly, nonatomic) UIView *birthdayView; // @synthesize birthdayView=_birthdayView;
@property(readonly, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(readonly, nonatomic) UIImageView *locationIcon; // @synthesize locationIcon=_locationIcon;
@property(readonly, nonatomic) UIView *locationView; // @synthesize locationView=_locationView;
@property(readonly, nonatomic) UILabel *bioTextLabel; // @synthesize bioTextLabel=_bioTextLabel;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) T1ProfileAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) UIView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(readonly, nonatomic) UIImage *initialForcedProfileImage; // @synthesize initialForcedProfileImage=_initialForcedProfileImage;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) UIImage *forcedBannerImage; // @synthesize forcedBannerImage=_forcedBannerImage;
@property(retain, nonatomic) UIImage *forcedProfileImage; // @synthesize forcedProfileImage=_forcedProfileImage;
@property(nonatomic) __weak id <T1UserProfileExampleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) T1UserProfileExampleViewOptions *viewOptions; // @synthesize viewOptions=_viewOptions;
@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (_Bool)_shouldShowLocation;
- (_Bool)_shouldShowBirthday;
- (_Bool)_shouldShowBio;
- (void)_didTapBannerControl:(id)arg1;
- (void)_setupConstraints;
- (void)_setupView;
- (id)initWithAccount:(id)arg1 user:(id)arg2 forcedProfileImage:(id)arg3;
- (id)initWithAccount:(id)arg1 user:(id)arg2 forcedProfileImage:(id)arg3 options:(id)arg4;

@end

