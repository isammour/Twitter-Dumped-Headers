//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, T1ChangePasswordViewController;

@protocol T1ChangePasswordViewControllerDelegate <NSObject>
- (void)changePasswordViewController:(T1ChangePasswordViewController *)arg1 didUpdateInputText:(NSString *)arg2;

@optional
- (void)changePasswordViewControllerDidTapSkip:(T1ChangePasswordViewController *)arg1;
- (void)changePasswordViewControllerDidFailToUpdateInput:(T1ChangePasswordViewController *)arg1;
@end

