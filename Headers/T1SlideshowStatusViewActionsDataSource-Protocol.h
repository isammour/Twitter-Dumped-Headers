//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNTwitterAccount, TFNTwitterStatus;
@protocol T1StatusViewModel;

@protocol T1SlideshowStatusViewActionsDataSource <NSObject>
- (_Bool)shouldEnableStatusViewActionsForViewModel:(id <T1StatusViewModel>)arg1;
- (_Bool)shouldEnableBookmarksActionForStatus:(TFNTwitterStatus *)arg1 account:(TFNTwitterAccount *)arg2;
- (_Bool)shouldEnableShareActionForStatus:(TFNTwitterStatus *)arg1 account:(TFNTwitterAccount *)arg2;
- (_Bool)shouldEnableRetweetActionForStatus:(TFNTwitterStatus *)arg1 account:(TFNTwitterAccount *)arg2;
- (_Bool)shouldEnableFavoriteActionForStatus:(TFNTwitterStatus *)arg1;
- (_Bool)shouldEnableReplyActionForStatus:(TFNTwitterStatus *)arg1;
- (_Bool)shouldEnableMoreActionForStatus:(TFNTwitterStatus *)arg1;
- (_Bool)shouldShowInlineActionsWhenDisabledForStatus:(TFNTwitterStatus *)arg1;
@end

