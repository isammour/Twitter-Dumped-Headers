//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNTwitterAvatarImageView, TFNTwitterUser, UIImageView, UILabel, UIStackView;
@protocol T1LiveEventAuthorAttributionTheme;

@interface T1LiveEventAuthorAttributionView : UIView
{
    TFNTwitterUser *_user;
    id <T1LiveEventAuthorAttributionTheme> _theme;
    UIStackView *_stackView;
    TFNTwitterAvatarImageView *_avatarImageView;
    UILabel *_fullNameLabel;
    UIImageView *_verifiedIcon;
    UILabel *_handleLabel;
}

@property(retain, nonatomic) UILabel *handleLabel; // @synthesize handleLabel=_handleLabel;
@property(retain, nonatomic) UIImageView *verifiedIcon; // @synthesize verifiedIcon=_verifiedIcon;
@property(retain, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(retain, nonatomic) TFNTwitterAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) id <T1LiveEventAuthorAttributionTheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)setAccountID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

