//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/NSCoding-Protocol.h>
#import <T1Twitter/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface TFNDirectMessageConversationIdentifier : NSObject <NSCopying, NSCoding>
{
    long long _conversationType;
    NSArray *_inferredParticipantIDs;
    NSNumber *_inferredIsEncrypted;
    NSString *_canonicalID;
    NSString *_localID;
}

+ (void)private_parseCanonicalID:(id)arg1 outConversationType:(out long long *)arg2 outInferredIsEncrypted:(out id *)arg3 outInferredParticipantIDs:(out id *)arg4;
+ (id)uniqueLocalGroupIdentifier;
+ (id)canonicalIdentifierWithUserID1:(long long)arg1 userID2:(long long)arg2 encrypted:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property(retain, nonatomic) NSNumber *inferredIsEncrypted; // @synthesize inferredIsEncrypted=_inferredIsEncrypted;
- (void).cxx_destruct;
- (void)private_loadInferredPropertiesIfNeeded;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *inferredParticipantIDs; // @synthesize inferredParticipantIDs=_inferredParticipantIDs;
@property(readonly, nonatomic, getter=isEncrypted) _Bool encrypted;
@property(readonly, nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(readonly, nonatomic, getter=isCanonical) _Bool canonical;
- (id)initWithCanonicalID:(id)arg1 localID:(id)arg2 conversationType:(long long)arg3 inferredIsEncrypted:(id)arg4 inferredParticipantIDs:(id)arg5;
- (id)initWithCanonicalID:(id)arg1 localID:(id)arg2;
- (id)initWithLocalID:(id)arg1;

@end

