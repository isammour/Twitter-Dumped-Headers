//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1ActivitySummaryView, TFNTwitterTweetDetailsActionView;

@interface T1TweetDetailsActivityCell : TFNTableViewCell
{
    T1ActivitySummaryView *_activitySummaryView;
    TFNTwitterTweetDetailsActionView *_actionView;
    _Bool _usesBirthdayAnimation;
    long long _mode;
}

@property(nonatomic) _Bool usesBirthdayAnimation; // @synthesize usesBirthdayAnimation=_usesBirthdayAnimation;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(readonly, nonatomic) TFNTwitterTweetDetailsActionView *actionView;
@property(readonly, nonatomic) T1ActivitySummaryView *activitySummaryView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

