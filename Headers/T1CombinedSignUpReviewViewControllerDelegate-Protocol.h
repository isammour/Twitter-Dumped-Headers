//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1CombinedSignUpReviewViewController;
@protocol TFSActiveTextRange;

@protocol T1CombinedSignUpReviewViewControllerDelegate <NSObject>
- (void)signUpReviewViewController:(T1CombinedSignUpReviewViewController *)arg1 didTapActiveTextRange:(id <TFSActiveTextRange>)arg2 inRect:(struct CGRect)arg3;
- (void)signUpReviewViewControllerRequestsEditBirthday:(T1CombinedSignUpReviewViewController *)arg1;
- (void)signUpReviewViewControllerRequestsEditEmail:(T1CombinedSignUpReviewViewController *)arg1;
- (void)signUpReviewViewControllerRequestsEditPhone:(T1CombinedSignUpReviewViewController *)arg1;
- (void)signUpReviewViewControllerRequestsEditName:(T1CombinedSignUpReviewViewController *)arg1;
- (void)signUpReviewViewControllerDidTapSignUp:(T1CombinedSignUpReviewViewController *)arg1;
@end

