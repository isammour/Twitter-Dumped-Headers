//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSDictionary, T1OnboardingFlowController;

@protocol T1OnboardingFlowControllerDelegate <NSObject>
- (void)flowController:(T1OnboardingFlowController *)arg1 stateDidChange:(long long)arg2;

@optional
- (void)flowController:(T1OnboardingFlowController *)arg1 didReceiveResponseWithFlowData:(NSDictionary *)arg2;
@end

