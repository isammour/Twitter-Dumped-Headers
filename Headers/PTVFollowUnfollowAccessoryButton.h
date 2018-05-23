//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVExtendedButton.h>

@class UIImage, UIImageView;

@interface PTVFollowUnfollowAccessoryButton : PTVExtendedButton
{
    UIImage *_unfollowImage;
    UIImage *_unfollowImageHighlighted;
    UIImage *_followImage;
    UIImage *_followImageHighlighted;
    UIImageView *_muteImage;
    unsigned long long _followingState;
}

+ (id)UnfollowAccessoryImage;
@property(nonatomic) unsigned long long followingState; // @synthesize followingState=_followingState;
- (void).cxx_destruct;
- (void)executeFollowingState;
- (void)layoutSubviews;
- (id)init;

@end

