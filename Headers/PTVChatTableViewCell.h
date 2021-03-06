//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVTableViewCell.h>

@class NSDate, UITapGestureRecognizer;
@protocol PTVChatTableViewCellDelegate;

@interface PTVChatTableViewCell : PTVTableViewCell
{
    UITapGestureRecognizer *_tap;
    PTVChatTableViewCell *_weakSelf;
    _Bool _forceHide;
    _Bool _forceEarlyFade;
    _Bool _useLargeChatFont;
    double _overrideFadeOutDuration;
    NSDate *_firstVisibleDate;
    NSDate *_fadeOutStartDate;
    id <PTVChatTableViewCellDelegate> _delegate;
}

+ (_Bool)StillVisible:(id)arg1 ForcedRemove:(_Bool)arg2;
+ (double)VisibleDurationOfChatMessageBeforeFadeOut;
@property(nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(nonatomic) __weak id <PTVChatTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *fadeOutStartDate; // @synthesize fadeOutStartDate=_fadeOutStartDate;
@property(retain, nonatomic) NSDate *firstVisibleDate; // @synthesize firstVisibleDate=_firstVisibleDate;
@property(nonatomic) double overrideFadeOutDuration; // @synthesize overrideFadeOutDuration=_overrideFadeOutDuration;
@property(nonatomic) _Bool forceEarlyFade; // @synthesize forceEarlyFade=_forceEarlyFade;
@property(nonatomic) _Bool forceHide; // @synthesize forceHide=_forceHide;
- (void).cxx_destruct;
- (void)didTapMessage:(id)arg1;
- (void)handleTap;
- (void)resumeOldFadeOutAnimation;
- (void)beginFadeOutAnimationWithDelay:(double)arg1;
- (void)beginFadeOutAnimation;
- (void)alphaState;
- (void)executeState;
- (id)containerView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

