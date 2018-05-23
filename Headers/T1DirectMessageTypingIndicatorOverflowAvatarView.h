//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1DirectMessageAvatarImageView, UILabel;

@interface T1DirectMessageTypingIndicatorOverflowAvatarView : UIView
{
    T1DirectMessageAvatarImageView *_emptyAvatarImageView;
    UILabel *_overflowLabel;
    unsigned long long _overflowCount;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) unsigned long long overflowCount; // @synthesize overflowCount=_overflowCount;
@property(readonly, nonatomic) UILabel *overflowLabel; // @synthesize overflowLabel=_overflowLabel;
@property(readonly, nonatomic) T1DirectMessageAvatarImageView *emptyAvatarImageView; // @synthesize emptyAvatarImageView=_emptyAvatarImageView;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1 emptyAvatarImageView:(id)arg2;

@end
