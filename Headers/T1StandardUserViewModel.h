//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1UserViewModel-Protocol.h>

@class NSDictionary, NSString, TFNTwitterTypeaheadUser, TFNTwitterUser, TFSTwitterRelationship;

@interface T1StandardUserViewModel : NSObject <T1UserViewModel>
{
    _Bool _partial;
    NSString *_socialText;
    TFNTwitterUser *_user;
    TFNTwitterTypeaheadUser *_typeaheadUser;
}

@property(retain, nonatomic) TFNTwitterTypeaheadUser *typeaheadUser; // @synthesize typeaheadUser=_typeaheadUser;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(readonly, copy, nonatomic) NSString *socialText; // @synthesize socialText=_socialText;
@property(readonly, nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
- (void).cxx_destruct;
- (void)_typeaheadUserDidUpdate:(id)arg1;
- (void)_userMutingDidUpdate:(id)arg1;
- (void)_userDidUpdate:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isPartialUser;
- (_Bool)partial;
- (id)profileBannerMediaEntity;
- (id)profileImageMediaEntity;
- (void)setHasRecordedImpression:(_Bool)arg1;
- (_Bool)hasRecordedImpression;
- (id)timelineEntryContext;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly, nonatomic, getter=isUsernameless) _Bool usernameless;
- (_Bool)usernameless;
@property(readonly, nonatomic, getter=isProtectedUser) _Bool protectedUser;
- (_Bool)protectedUser;
- (id)bio;
@property(readonly, nonatomic) TFNTwitterTypeaheadUser *backingTypeaheadUser;
@property(readonly, nonatomic) TFNTwitterUser *backingUser;
- (id)backingUserObject;
@property(readonly, copy, nonatomic) NSString *socialBadgeName;
@property(readonly, nonatomic) unsigned long long bioDisplayType;
@property(readonly, copy, nonatomic) NSString *bioDisplayText;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
- (id)promotedContent;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property(readonly, nonatomic, getter=isAffiliated) _Bool affiliated;
@property(readonly, nonatomic, getter=isVerified) _Bool verified;
@property(readonly, copy, nonatomic) NSString *designatorUrl;
@property(readonly, copy, nonatomic) NSString *designatorImageUrl;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
- (id)scribeComponent;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) long long userID;
- (id)initWithTypeaheadUser:(id)arg1 socialText:(id)arg2;
- (id)initWithTypeaheadUser:(id)arg1;
- (id)initWithUser:(id)arg1 socialText:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)initInternalWithUser:(id)arg1 typeaheadUser:(id)arg2 socialText:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly) Class superclass;

@end

