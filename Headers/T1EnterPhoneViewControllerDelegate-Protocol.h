//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1EnterPhoneViewController;

@protocol T1EnterPhoneViewControllerDelegate <NSObject>
- (void)enterPhoneViewController:(T1EnterPhoneViewController *)arg1 didTapShowAdvancedOptions:(id)arg2;
- (void)enterPhoneViewController:(T1EnterPhoneViewController *)arg1 enteredPhone:(NSString *)arg2 normalizedPhone:(NSString *)arg3 uiMetricResult:(NSString *)arg4;

@optional
- (void)enterPhoneViewControllerDidTapUseEmailInstead:(T1EnterPhoneViewController *)arg1;
- (void)enterPhoneViewControllerDidTapSkip:(T1EnterPhoneViewController *)arg1;
@end

