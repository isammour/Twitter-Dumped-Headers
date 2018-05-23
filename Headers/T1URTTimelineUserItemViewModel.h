//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, TFNTwitterTypeaheadUser, TFNTwitterUser, TFSTwitterRelationship;

@interface T1URTTimelineUserItemViewModel : NSObject
{
    // Error parsing type: , name: userItem
    // Error parsing type: , name: clientEventInfo
    // Error parsing type: , name: advertiserUser
    // Error parsing type: , name: entryID
    // Error parsing type: , name: user
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *socialBadgeName;
@property(nonatomic, readonly) NSString *socialText;
@property(nonatomic, readonly) NSDictionary *scribeItem;
@property(nonatomic, readonly) NSString *scribeItemImpressionID;
- (id)scribeComponent;
@property(nonatomic, readonly) unsigned long long bioDisplayType;
@property(nonatomic, readonly) NSString *bioDisplayText;
@property(nonatomic, readonly) NSString *displayUsername;
@property(nonatomic, readonly) NSString *displayFullName;
- (_Bool)isPromoted;
@property(nonatomic, readonly) TFSTwitterRelationship *relationship;
@property(nonatomic, readonly) unsigned long long options;
@property(nonatomic, readonly) unsigned int profileLinkColorHexTriplet;
- (_Bool)isPartial;
- (_Bool)isAffiliated;
- (_Bool)isProtectedUser;
- (_Bool)isVerified;
- (_Bool)isUsernameless;
@property(nonatomic, readonly) NSString *designatorUrl;
@property(nonatomic, readonly) NSString *designatorImageUrl;
@property(nonatomic, readonly) NSString *designatorString;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) long long userID;
@property(nonatomic, readonly) TFNTwitterTypeaheadUser *backingTypeaheadUser;
@property(nonatomic, readonly) TFNTwitterUser *backingUser;

// Remaining properties
@property(nonatomic, readonly) _Bool affiliated;
@property(nonatomic, readonly) _Bool partial;
@property(nonatomic, readonly) _Bool promoted;
@property(nonatomic, readonly) _Bool protectedUser;
@property(nonatomic, readonly) _Bool usernameless;
@property(nonatomic, readonly) _Bool verified;

@end

