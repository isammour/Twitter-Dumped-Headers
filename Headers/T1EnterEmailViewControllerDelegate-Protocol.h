//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1EnterEmailViewController;

@protocol T1EnterEmailViewControllerDelegate <NSObject>
- (void)enterEmailViewController:(T1EnterEmailViewController *)arg1 didTapShowAdvancedOptions:(id)arg2;
- (void)enterEmailViewController:(T1EnterEmailViewController *)arg1 enteredEmail:(NSString *)arg2 uiMetricResult:(NSString *)arg3;

@optional
- (void)enterEmailViewControllerDidTapSkip:(T1EnterEmailViewController *)arg1;
- (void)enterEmailViewControllerDidTapUsePhoneInstead:(T1EnterEmailViewController *)arg1;
@end

