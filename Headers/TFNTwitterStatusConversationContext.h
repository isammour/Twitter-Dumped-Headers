//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterStatusSocialContext-Protocol.h>

@class NSArray, NSString, TFNTwitterStatus, TFNTwitterUser;

@interface TFNTwitterStatusConversationContext : NSObject <TFNTwitterStatusSocialContext>
{
    TFNTwitterStatus *_status;
    long long _inReplyToUserID;
    TFNTwitterUser *_fromUser;
    NSArray *_mentionedUserReferences;
    NSString *_conversationSocialText;
    NSString *_htmlConversationSocialText;
}

@property(retain, nonatomic) NSString *htmlConversationSocialText; // @synthesize htmlConversationSocialText=_htmlConversationSocialText;
@property(retain, nonatomic) NSString *conversationSocialText; // @synthesize conversationSocialText=_conversationSocialText;
@property(copy, nonatomic) NSArray *mentionedUserReferences; // @synthesize mentionedUserReferences=_mentionedUserReferences;
@property(retain, nonatomic) TFNTwitterUser *fromUser; // @synthesize fromUser=_fromUser;
@property(nonatomic) long long inReplyToUserID; // @synthesize inReplyToUserID=_inReplyToUserID;
@property(nonatomic) __weak TFNTwitterStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isTappable;
- (id)activityPage;
- (id)activityTitle;
- (id)allUserReferences;
- (_Bool)socialTextIsActivityCount;
- (id)activityName;
- (id)socialText;
- (id)private_displayInReplyToUsername;
- (id)private_displayUsernameForUserReference:(id)arg1;
- (id)socialTextWithLoadingAccount:(id)arg1 asHTMLString:(_Bool)arg2;
- (id)socialTextWithLoadingAccount:(id)arg1;
- (id)conversationUserReferencesWithLoadingAccount:(id)arg1;
@property(readonly, nonatomic) NSArray *conversationUserReferences;
- (id)conversationUserReferencesSet;
- (id)initWithStatus:(id)arg1;
- (id)socialTextAttributedActiveTextViewModelWithLoadingAccount:(id)arg1 tappable:(_Bool)arg2;
- (void)dropCachedAttributedTextModel;
- (void)setCachedTappableSocialTextAttributedActiveTextViewModel:(id)arg1;
- (id)cachedTappableSocialTextAttributedActiveTextViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

