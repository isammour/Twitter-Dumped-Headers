//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AuthorView, TFNTwitterUserDataSource;

@protocol T1AuthorViewDelegate <NSObject>
- (void)authorViewDidClose:(T1AuthorView *)arg1;
- (void)authorView:(T1AuthorView *)arg1 didTapProfileForUserDataSource:(TFNTwitterUserDataSource *)arg2;
- (void)authorView:(T1AuthorView *)arg1 didTapMoreForUserDataSource:(TFNTwitterUserDataSource *)arg2;
- (void)authorView:(T1AuthorView *)arg1 didTapLiveFollowForUserDataSource:(TFNTwitterUserDataSource *)arg2;
- (void)authorView:(T1AuthorView *)arg1 didTapFollowForUserDataSource:(TFNTwitterUserDataSource *)arg2;
@end

