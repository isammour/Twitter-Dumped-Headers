//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString, TFNTwitterEntityImageInfo;

@interface TFNDirectMessageConversationMetadata : NSObject
{
    _Bool _notificationsDisabled;
    _Bool _readOnly;
    _Bool _trusted;
    _Bool _mentionNotificationsDisabled;
    NSString *_conversationID;
    long long _type;
    long long _lastReadEventID;
    NSDate *_muteExpirationTime;
    NSArray *_participants;
    NSNumber *_sortEventID;
    NSDate *_sortTimestamp;
    NSDate *_createTime;
    long long _createdByUserID;
    NSString *_name;
    TFNTwitterEntityImageInfo *_avatarInfo;
}

@property(readonly, nonatomic) _Bool mentionNotificationsDisabled; // @synthesize mentionNotificationsDisabled=_mentionNotificationsDisabled;
@property(readonly, nonatomic) TFNTwitterEntityImageInfo *avatarInfo; // @synthesize avatarInfo=_avatarInfo;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long createdByUserID; // @synthesize createdByUserID=_createdByUserID;
@property(readonly, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(readonly, nonatomic) NSDate *sortTimestamp; // @synthesize sortTimestamp=_sortTimestamp;
@property(readonly, nonatomic) NSNumber *sortEventID; // @synthesize sortEventID=_sortEventID;
@property(readonly, nonatomic) _Bool trusted; // @synthesize trusted=_trusted;
@property(readonly, nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) NSDate *muteExpirationTime; // @synthesize muteExpirationTime=_muteExpirationTime;
@property(readonly, nonatomic) _Bool notificationsDisabled; // @synthesize notificationsDisabled=_notificationsDisabled;
@property(readonly, nonatomic) long long lastReadEventID; // @synthesize lastReadEventID=_lastReadEventID;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 userCache:(id)arg2;
- (id)init;

@end

