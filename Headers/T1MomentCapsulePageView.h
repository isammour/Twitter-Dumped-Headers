//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1MomentCapsulePageImageView, T1MomentCapsuleStatusInfoForegroundView, T1MomentCapsuleViewConfiguration, TFNGradientView, TFNTwitterAccount, TFNTwitterMomentPage;

@interface T1MomentCapsulePageView : UIView
{
    T1MomentCapsulePageImageView *_pageImageView;
    T1MomentCapsuleStatusInfoForegroundView *_foregroundView;
    TFNTwitterAccount *_account;
    TFNTwitterMomentPage *_page;
    T1MomentCapsuleViewConfiguration *_configuration;
    TFNGradientView *_statusInfoGradientView;
}

@property(retain, nonatomic) TFNGradientView *statusInfoGradientView; // @synthesize statusInfoGradientView=_statusInfoGradientView;
@property(readonly, nonatomic) T1MomentCapsuleViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) TFNTwitterMomentPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) T1MomentCapsuleStatusInfoForegroundView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(readonly, nonatomic) T1MomentCapsulePageImageView *pageImageView; // @synthesize pageImageView=_pageImageView;
- (void).cxx_destruct;
- (void)cleanup;
- (void)setPage:(id)arg1 theme:(id)arg2 account:(id)arg3;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

@end
