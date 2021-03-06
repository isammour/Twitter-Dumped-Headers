//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterInlineActionButton.h>

@class NSString, T1StatusLiveEngagementManager, TFNTwitterAccount;
@protocol T1StatusInlineActionButtonAnimator;

@interface T1StatusInlineActionButton : TFNTwitterInlineActionButton
{
    TFNTwitterAccount *_account;
    T1StatusLiveEngagementManager *_livePipelineTweetManager;
    id <T1StatusInlineActionButtonAnimator> _buttonAnimator;
    unsigned long long _options;
}

+ (id)tintColorForUIControlState:(unsigned long long)arg1;
+ (struct CGSize)buttonImageSize;
+ (double)buttonImageHeight;
+ (double)extraWidthForOptions:(unsigned long long)arg1;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <T1StatusInlineActionButtonAnimator> buttonAnimator; // @synthesize buttonAnimator=_buttonAnimator;
@property(nonatomic) __weak T1StatusLiveEngagementManager *livePipelineTweetManager; // @synthesize livePipelineTweetManager=_livePipelineTweetManager;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *actionSheetTitle;
- (void)statusDidUpdate:(id)arg1 animated:(_Bool)arg2;
- (void)_t1_updateAnimator;
- (void)_t1_setInitialButtonAppearance;
- (void)_t1_setInitialTouchInsets;
- (id)initWithInlineActionType:(unsigned long long)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (id)initWithOptions:(unsigned long long)arg1 account:(id)arg2;
- (id)init;

@end

