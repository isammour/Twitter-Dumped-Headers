//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TFNItemsDataViewController, TFNTwitterAccount, TFNTwitterUserDataSource, TFSTwitterScribeContext;
@protocol TFNTwitterAuthenticated;

@interface T1LiveFollowPromptHelper : NSObject
{
    _Bool _hasLiveFollowPermission;
    TFNItemsDataViewController<TFNTwitterAuthenticated> *_controller;
    TFNTwitterAccount *_account;
    TFNTwitterUserDataSource *_userDataSource;
    NSString *_followToken;
    NSDictionary *_scribeParameters;
    TFSTwitterScribeContext *_scribeContext;
}

@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) NSDictionary *scribeParameters; // @synthesize scribeParameters=_scribeParameters;
@property(retain, nonatomic) NSString *followToken; // @synthesize followToken=_followToken;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) TFNItemsDataViewController<TFNTwitterAuthenticated> *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool hasLiveFollowPermission; // @synthesize hasLiveFollowPermission=_hasLiveFollowPermission;
- (void).cxx_destruct;
- (void)_liveUnfollowWasAccepted;
- (void)promptLiveUnfollowWithResponse:(CDUnknownBlockType)arg1;
- (id)initWithTargetUserDataSource:(id)arg1 controller:(id)arg2 scribeContext:(id)arg3;

@end

