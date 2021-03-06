//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class UIView, UIViewController;
@protocol T1MomentViewModel, TFNTwitterMomentSportEventsDataManager;

@protocol T1MomentCapsuleAdapterDelegate <NSObject>
- (void)didTapCTAMomentViewModel:(id <T1MomentViewModel>)arg1;
- (id <TFNTwitterMomentSportEventsDataManager>)sportsDataManager;
- (void)didTapMomentViewModel:(id <T1MomentViewModel>)arg1 sender:(UIView *)arg2;
- (void)didTapFollowMomentViewModel:(id <T1MomentViewModel>)arg1;

@optional
- (UIViewController *)previewingViewControllerForMomentViewModel:(id <T1MomentViewModel>)arg1 sender:(UIView *)arg2;
@end

