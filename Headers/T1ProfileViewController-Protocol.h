//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1AppNavigationContext, TFNTwitterStatus, TFNTwitterUser, TFNTwitterUserDataSource, TFSTwitterScribeContext, TFSTwitterUserReference;

@protocol T1ProfileViewController <NSObject>
@property(copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext;
@property(retain, nonatomic) T1AppNavigationContext *navigationContext;
@property(nonatomic) long long headerButtonGroup;
@property(retain, nonatomic) TFNTwitterStatus *sourceStatus;
- (void)showQRProfileWithCompletion:(void (^)(void))arg1;
- (void)showMomentsWithCompletion:(void (^)(void))arg1;
- (void)showProfileFavoritesTab;
- (void)showFollowConfirmation;
- (void)showFollowersWithTab:(unsigned long long)arg1;
- (_Bool)isProfileForUserDataSource:(TFNTwitterUserDataSource *)arg1;
- (_Bool)isProfileForUserReference:(TFSTwitterUserReference *)arg1;
- (_Bool)isProfileForUser:(TFNTwitterUser *)arg1;
@end
