//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1ActivityItemAdaptable-Protocol.h>
#import <T1Twitter/TFNTwitterActivityStreamItem-Protocol.h>
#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, TFNTwitterActivityDisplayText;

@interface TFNTwitterGenericNotificationItem : NSObject <T1ActivityItemAdaptable, TFNTwitterActivityStreamItem, TFSTwitterTimelinePlistSerialization, TFSTwitterScribableItem>
{
    _Bool _referencesInitialized;
    NSDate *_createdAt;
    NSString *_notificationType;
    NSString *_scribeComponent;
    long long _timestamp;
    TFNTwitterActivityDisplayText *_socialProofText;
    TFNTwitterActivityDisplayText *_displayText;
    NSNumber *_senderID;
    NSArray *_facepileUsers;
    NSArray *_dismissOptions;
    NSString *_dismissTouchScribeAction;
    NSString *_iconIdentifier;
    NSString *_iconURLString;
    NSString *_tapThroughURLString;
    NSString *_hashkey;
    NSString *_impressionID;
    NSArray *_contextUsers;
    NSArray *_contextTweets;
    NSString *_contextFallbackText;
    NSString *_dismissTypeString;
    NSArray *_uninitializedContextUserIDs;
    NSArray *_uninitializedFacepileUserIDs;
    NSArray *_uninitializedContextStatusIDs;
}

+ (id)genericNotificationsWithJSONObjects:(id)arg1;
@property(retain, nonatomic) NSArray *uninitializedContextStatusIDs; // @synthesize uninitializedContextStatusIDs=_uninitializedContextStatusIDs;
@property(retain, nonatomic) NSArray *uninitializedFacepileUserIDs; // @synthesize uninitializedFacepileUserIDs=_uninitializedFacepileUserIDs;
@property(retain, nonatomic) NSArray *uninitializedContextUserIDs; // @synthesize uninitializedContextUserIDs=_uninitializedContextUserIDs;
@property(nonatomic) _Bool referencesInitialized; // @synthesize referencesInitialized=_referencesInitialized;
@property(retain, nonatomic) NSString *dismissTypeString; // @synthesize dismissTypeString=_dismissTypeString;
@property(readonly, nonatomic) NSString *contextFallbackText; // @synthesize contextFallbackText=_contextFallbackText;
@property(retain, nonatomic) NSArray *contextTweets; // @synthesize contextTweets=_contextTweets;
@property(retain, nonatomic) NSArray *contextUsers; // @synthesize contextUsers=_contextUsers;
@property(readonly, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(readonly, nonatomic) NSString *hashkey; // @synthesize hashkey=_hashkey;
@property(readonly, nonatomic) NSString *tapThroughURLString; // @synthesize tapThroughURLString=_tapThroughURLString;
@property(readonly, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(readonly, nonatomic) NSString *iconIdentifier; // @synthesize iconIdentifier=_iconIdentifier;
@property(readonly, nonatomic) NSString *dismissTouchScribeAction; // @synthesize dismissTouchScribeAction=_dismissTouchScribeAction;
@property(readonly, nonatomic) NSArray *dismissOptions; // @synthesize dismissOptions=_dismissOptions;
@property(retain, nonatomic) NSArray *facepileUsers; // @synthesize facepileUsers=_facepileUsers;
@property(readonly, nonatomic) NSNumber *senderID; // @synthesize senderID=_senderID;
@property(readonly, nonatomic) TFNTwitterActivityDisplayText *displayText; // @synthesize displayText=_displayText;
@property(readonly, nonatomic) TFNTwitterActivityDisplayText *socialProofText; // @synthesize socialProofText=_socialProofText;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *scribeComponent; // @synthesize scribeComponent=_scribeComponent;
@property(readonly, nonatomic) NSString *notificationType; // @synthesize notificationType=_notificationType;
- (void).cxx_destruct;
- (void)prepareWithUserID:(long long)arg1;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSArray *allStatuses;
@property(readonly, nonatomic) NSArray *allUsers;
@property(readonly, nonatomic) unsigned long long contextType;
@property(readonly, nonatomic) unsigned long long dismissType;
- (_Bool)shouldTolerateMissingModelObjectsInTimelinePlistDictionaries;
- (_Bool)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2;
- (id)allUserIDsInTimelinePlistDictionary;
- (id)allStatusIDsInTimelinePlistDictionary;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
@property(nonatomic, readonly) long long activityCellAdaptableType;
- (long long)type;
- (id)contextUserIDs;
- (id)representedTweetAuthorUserID;
- (id)filterByStatusID:(id)arg1;
- (id)filterByUserIDs:(id)arg1;
- (id)definitiveObjectWithAccount:(id)arg1;
- (long long)minPosition;
- (long long)maxPosition;
- (_Bool)supportsAggregation;
- (_Bool)isDummyItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly) Class superclass;

@end

