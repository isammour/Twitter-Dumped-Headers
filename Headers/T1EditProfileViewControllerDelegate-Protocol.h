//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNFormViewController, UIImage;

@protocol T1EditProfileViewControllerDelegate <NSObject>

@optional
- (void)showProfilePhotoPromptWithImage:(UIImage *)arg1;
- (void)editProfileViewControllerWillRemoveHeader:(TFNFormViewController *)arg1;
- (void)editProfileViewControllerWillChangeHeader:(TFNFormViewController *)arg1;
@end

