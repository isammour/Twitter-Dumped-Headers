//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface T1SignOutHelper : NSObject
{
}

+ (void)_presentCannotUnenrollAccount:(id)arg1 scribePage:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_removeAccount:(id)arg1 scribePage:(id)arg2;
+ (void)showSignOutSystemAccountAlert;
+ (void)confirmAndRemove2FAFromAccount:(id)arg1 scribePage:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)confirmLogoutOfAccount:(id)arg1 scribePage:(id)arg2 didConfirm:(CDUnknownBlockType)arg3;
+ (void)removePushTokenFromAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)signOut:(id)arg1 withConfirmation:(_Bool)arg2 scribePage:(id)arg3;

@end

