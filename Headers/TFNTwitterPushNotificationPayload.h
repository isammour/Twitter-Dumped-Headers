//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL, TFSTwitterUserReference, UIImage;

@interface TFNTwitterPushNotificationPayload : NSObject
{
    NSDictionary *_receivedScribeParameters;
    _Bool _shouldDisplayNegativeFeedback;
    long long _receivingUserID;
    NSString *_receivingAccountName;
    long long _senderUserID;
    NSString *_senderAccountName;
    long long _category;
    NSString *_apnsCategory;
    NSString *_text;
    long long _targetStatusID;
    long long _statusID;
    NSString *_conversationID;
    NSURL *_URL;
    NSURL *_V2Url;
    NSString *_impressionID;
    NSString *_scribeElement;
    NSNumber *_badgeCount;
    NSString *_headerText;
    NSString *_iconName;
    NSDictionary *_badgeInfo;
    NSDictionary *_payloadDictionary;
}

+ (id)badgeInfoForPayload:(id)arg1;
+ (id)headerTextForPayload:(id)arg1;
+ (id)badgeCountForPayload:(id)arg1;
+ (_Bool)shouldDisplayNegativeFeedbackForPayload:(id)arg1;
+ (id)impressionIDForPayload:(id)arg1;
+ (id)apnsCategoryForPayload:(id)arg1;
+ (long long)categoryForPayload:(id)arg1;
+ (long long)statusIDForPayload:(id)arg1;
+ (long long)targetStatusIDForPayload:(id)arg1;
+ (id)_normalizeURI:(id)arg1;
+ (id)v2UriForPayload:(id)arg1;
+ (id)uriForPayload:(id)arg1;
+ (id)conversationIDForPayload:(id)arg1;
+ (id)textForPayload:(id)arg1;
+ (id)iconNameForPayload:(id)arg1;
+ (id)scribeParametersForPayload:(id)arg1;
+ (id)scribeElementForPayload:(id)arg1;
+ (id)senderUserReferenceForPayload:(id)arg1;
+ (id)senderUsernameForPayload:(id)arg1;
+ (long long)senderUserIDForPayload:(id)arg1;
+ (id)receivingUserReferenceForPayload:(id)arg1;
+ (id)receivingUsernameForPayload:(id)arg1;
+ (long long)receivingUserIDForPayload:(id)arg1;
+ (id)_mapIconCode:(id)arg1;
@property(readonly, nonatomic) NSDictionary *payloadDictionary; // @synthesize payloadDictionary=_payloadDictionary;
@property(readonly, copy, nonatomic) NSDictionary *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(readonly, copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(readonly, nonatomic) NSNumber *badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) _Bool shouldDisplayNegativeFeedback; // @synthesize shouldDisplayNegativeFeedback=_shouldDisplayNegativeFeedback;
@property(readonly, copy, nonatomic) NSString *scribeElement; // @synthesize scribeElement=_scribeElement;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(readonly, nonatomic) NSURL *V2Url; // @synthesize V2Url=_V2Url;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) long long statusID; // @synthesize statusID=_statusID;
@property(readonly, nonatomic) long long targetStatusID; // @synthesize targetStatusID=_targetStatusID;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *apnsCategory; // @synthesize apnsCategory=_apnsCategory;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) NSString *senderAccountName; // @synthesize senderAccountName=_senderAccountName;
@property(readonly, nonatomic) long long senderUserID; // @synthesize senderUserID=_senderUserID;
@property(readonly, copy, nonatomic) NSString *receivingAccountName; // @synthesize receivingAccountName=_receivingAccountName;
@property(readonly, nonatomic) long long receivingUserID; // @synthesize receivingUserID=_receivingUserID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *tweetText;
@property(readonly, nonatomic) UIImage *icon;
@property(readonly, nonatomic) TFSTwitterUserReference *receivingUserReference;
@property(readonly, nonatomic) TFSTwitterUserReference *senderUserReference;
- (id)initWithPayloadDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *scribeParameters;
- (id)ambientBackgroundColor;
- (_Bool)isLoggedOutPush;
- (_Bool)shouldHydrateTargetStatus;
- (void)hydrateTargetStatusIfNeededWithAccount:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hydrateSenderUserIfNeededWithAccount:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hydrateFromModelSource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

