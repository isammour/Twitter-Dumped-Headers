//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TFNButton, TFNTwitterUser, UIButton, UIImage, UIImageView, UILabel;
@protocol T1ProfileImageUpdateTweetTakeoverPromptViewDelegate;

@interface T1ProfileImageUpdateTweetTakeoverPromptView : UIView
{
    id <T1ProfileImageUpdateTweetTakeoverPromptViewDelegate> _delegate;
    TFNTwitterUser *_user;
    UIImage *_profileImage;
    UIView *_containerView;
    UIView *_tweetContainerView;
    UIImageView *_userProfileImageView;
    UILabel *_titleView;
    UILabel *_userNameView;
    UILabel *_userHandleView;
    UILabel *_tweetView;
    UIImageView *_mediaView;
    UIView *_mediaContainerView;
    UIView *_buttonsContainerView;
    TFNButton *_editButton;
    TFNButton *_notNowButton;
    TFNButton *_tweetItButton;
    UIButton *_closeButton;
    NSArray *_layoutConstraints;
    NSArray *_profileImageUpdateButtons;
}

@property(retain, nonatomic) NSArray *profileImageUpdateButtons; // @synthesize profileImageUpdateButtons=_profileImageUpdateButtons;
@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TFNButton *tweetItButton; // @synthesize tweetItButton=_tweetItButton;
@property(retain, nonatomic) TFNButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) TFNButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
@property(retain, nonatomic) UIView *mediaContainerView; // @synthesize mediaContainerView=_mediaContainerView;
@property(retain, nonatomic) UIImageView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UILabel *tweetView; // @synthesize tweetView=_tweetView;
@property(retain, nonatomic) UILabel *userHandleView; // @synthesize userHandleView=_userHandleView;
@property(retain, nonatomic) UILabel *userNameView; // @synthesize userNameView=_userNameView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *userProfileImageView; // @synthesize userProfileImageView=_userProfileImageView;
@property(retain, nonatomic) UIView *tweetContainerView; // @synthesize tweetContainerView=_tweetContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(nonatomic) __weak id <T1ProfileImageUpdateTweetTakeoverPromptViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_t1_updateButtonSizes;
- (void)_t1_closeButtonTapped:(id)arg1;
- (void)_t1_editButtonTapped:(id)arg1;
- (void)_t1_notNowButtonTapped:(id)arg1;
- (void)_t1_tweetItButtonTapped:(id)arg1;
- (void)_t1_disableViewsTranslateAutoresizingMaskIntoConstraints;
- (void)_t1_setupTweetContainerViewBorder;
- (void)_t1_setupUserViews;
- (void)_t1_setup;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 profileImage:(id)arg3;

@end

