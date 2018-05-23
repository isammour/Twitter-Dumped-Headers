//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageModelObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSCopying-Protocol.h>
#import <T1Twitter/TFNDirectMessageUser-Protocol.h>

@class NSDate, NSNumber, NSString, TFNTwitterSharedUserData, TFSTwitterEntityMedia, TFSTwitterEntitySet, TFSTwitterUserReference;

@interface TFNDirectMessageUser : TFNDirectMessageModelObject <TFNDirectMessageUser, NSCopying, NSCoding>
{
    _Bool _followRequestSent;
    _Bool _following;
    _Bool _protectedUser;
    _Bool _blocking;
    TFNTwitterSharedUserData *_sharedUserData;
    NSString *_bio;
    TFSTwitterEntitySet *_bioEntities;
}

@property(nonatomic) _Bool blocking; // @synthesize blocking=_blocking;
@property(nonatomic) _Bool protectedUser; // @synthesize protectedUser=_protectedUser;
@property(nonatomic) _Bool following; // @synthesize following=_following;
@property(nonatomic) _Bool followRequestSent; // @synthesize followRequestSent=_followRequestSent;
@property(copy, nonatomic) TFSTwitterEntitySet *bioEntities; // @synthesize bioEntities=_bioEntities;
@property(copy, nonatomic) NSString *bio; // @synthesize bio=_bio;
@property(readonly, nonatomic) TFNTwitterSharedUserData *sharedUserData; // @synthesize sharedUserData=_sharedUserData;
- (void).cxx_destruct;
- (void)replaceSharedUserDataForAssimilation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic) TFSTwitterUserReference *userReference;
@property(readonly, nonatomic) NSNumber *userIDNumber;
@property(readonly, nonatomic) NSDate *lastUpdated;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, nonatomic) TFSTwitterEntityMedia *profileImageMediaEntity;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initTestUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3 lastUpdated:(id)arg4;
- (id)initTestUserWithUserID:(long long)arg1 username:(id)arg2 fullName:(id)arg3;
- (id)initTestUserWithUserID:(long long)arg1;
- (id)initWithDirectMessageUser:(id)arg1;
- (id)initWithSharedUserData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
