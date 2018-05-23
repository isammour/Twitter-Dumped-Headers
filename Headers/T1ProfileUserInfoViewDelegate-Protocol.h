//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ProfileUserInfoView, TFSTwitterEntityURL, TFSTwitterPlace, UIView;
@protocol TFSActiveTextRange;

@protocol T1ProfileUserInfoViewDelegate <NSObject>
- (void)profileUserInfoView:(T1ProfileUserInfoView *)arg1 didTapContributorLearnMore:(UIView *)arg2;
- (void)profileUserInfoView:(T1ProfileUserInfoView *)arg1 didTapUnmute:(UIView *)arg2;
- (void)profileUserInfoViewDidTapBirthday:(T1ProfileUserInfoView *)arg1;
- (void)profileUserInfoView:(T1ProfileUserInfoView *)arg1 didTapStructuredLocation:(TFSTwitterPlace *)arg2;
- (void)profileUserInfoView:(T1ProfileUserInfoView *)arg1 didTapBioActiveRange:(id <TFSActiveTextRange>)arg2;
- (void)profileUserInfoViewDidTapFollowing:(T1ProfileUserInfoView *)arg1;
- (void)profileUserInfoViewDidTapFollowers:(T1ProfileUserInfoView *)arg1;
- (void)profileUserInfoView:(T1ProfileUserInfoView *)arg1 didLongPressURL:(TFSTwitterEntityURL *)arg2 inView:(UIView *)arg3;
- (void)profileUserInfoView:(T1ProfileUserInfoView *)arg1 didTapURL:(TFSTwitterEntityURL *)arg2;
@end

