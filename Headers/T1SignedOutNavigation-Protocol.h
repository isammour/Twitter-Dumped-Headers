//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingFlowHost-Protocol.h>

@protocol T1SignedOutNavigation <T1OnboardingFlowHost>
- (void)showLegacyLoginFlowWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showLegacyNuxFlowWithSource:(long long)arg1 completion:(void (^)(void))arg2;
@end
