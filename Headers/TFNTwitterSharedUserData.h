//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString, TFSCallbackDispatcher, TFSTwitterEntityMedia, TFSTwitterUserReference;

@interface TFNTwitterSharedUserData : NSObject
{
    _Bool _verified;
    _Bool _partial;
    NSString *_fullName;
    TFSTwitterEntityMedia *_profileImageMediaEntity;
    long long _userID;
    NSString *_username;
    NSDate *_lastUpdated;
    TFSCallbackDispatcher *_updateEventDispatcher;
    NSString *_displayUsername;
    NSString *_displayFullName;
    NSData *_profileImageMediaEntityJSONData;
    TFSTwitterEntityMedia *_pendingProfileImageMediaEntity;
    NSString *_pendingProfileImageMediaEntityToken;
}

@property(copy, nonatomic) NSString *pendingProfileImageMediaEntityToken; // @synthesize pendingProfileImageMediaEntityToken=_pendingProfileImageMediaEntityToken;
@property(retain, nonatomic) TFSTwitterEntityMedia *pendingProfileImageMediaEntity; // @synthesize pendingProfileImageMediaEntity=_pendingProfileImageMediaEntity;
@property(retain, nonatomic) NSData *profileImageMediaEntityJSONData; // @synthesize profileImageMediaEntityJSONData=_profileImageMediaEntityJSONData;
@property(retain, nonatomic) NSString *displayFullName; // @synthesize displayFullName=_displayFullName;
@property(retain, nonatomic) NSString *displayUsername; // @synthesize displayUsername=_displayUsername;
@property(readonly, nonatomic) TFSCallbackDispatcher *updateEventDispatcher; // @synthesize updateEventDispatcher=_updateEventDispatcher;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
@property(readonly, nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;
- (void)cancelPendingProfileImageMediaEntityWithToken:(id)arg1;
- (id)tokenByAssimilatingPendingProfileImageMediaEntity:(id)arg1;
- (_Bool)shouldAssimilateSharedUserData:(id)arg1;
- (id)changedAttributedByAssimilatingSharedUserData:(id)arg1;
@property(readonly, nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) long long profileImageState;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity; // @synthesize profileImageMediaEntity=_profileImageMediaEntity;
@property(readonly, nonatomic) unsigned long long options;
- (void)_tfs_sharedInitWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 verified:(_Bool)arg4 partial:(_Bool)arg5 lastUpdated:(id)arg6;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntityJSONData:(id)arg4 verified:(_Bool)arg5 partial:(_Bool)arg6 lastUpdated:(id)arg7;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 profileImageMediaEntity:(id)arg4 verified:(_Bool)arg5 partial:(_Bool)arg6 lastUpdated:(id)arg7;
- (id)init;

@end

