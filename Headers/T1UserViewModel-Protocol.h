//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSString, TFNTwitterTypeaheadUser, TFNTwitterUser, TFSTwitterRelationship;

@protocol T1UserViewModel <TFSTwitterScribableItem>
@property(readonly, copy, nonatomic) NSString *socialBadgeName;
@property(readonly, copy, nonatomic) NSString *socialText;
@property(readonly, copy, nonatomic) NSString *bioDisplayText;
@property(readonly, nonatomic) NSString *displayUsername;
@property(readonly, nonatomic) NSString *displayFullName;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship;
@property(readonly, nonatomic) unsigned int profileLinkColorHexTriplet;
@property(readonly, nonatomic, getter=isPartial) _Bool partial;
@property(readonly, nonatomic) unsigned long long bioDisplayType;
@property(readonly, nonatomic, getter=isAffiliated) _Bool affiliated;
@property(readonly, nonatomic, getter=isUsernameless) _Bool usernameless;
@property(readonly, nonatomic, getter=isProtectedUser) _Bool protectedUser;
@property(readonly, nonatomic, getter=isVerified) _Bool verified;
@property(readonly, copy, nonatomic) NSString *designatorUrl;
@property(readonly, copy, nonatomic) NSString *designatorImageUrl;
@property(readonly, copy, nonatomic) NSString *designatorString;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, nonatomic) long long userID;
@property(readonly, nonatomic) TFNTwitterTypeaheadUser *backingTypeaheadUser;
@property(readonly, nonatomic) TFNTwitterUser *backingUser;
@end
