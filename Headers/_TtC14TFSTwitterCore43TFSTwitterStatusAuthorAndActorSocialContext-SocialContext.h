//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/_TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext.h>

#import <T1Twitter/TFNTwitterStatusSocialContext-Protocol.h>

@class NSString;

@interface _TtC14TFSTwitterCore43TFSTwitterStatusAuthorAndActorSocialContext (SocialContext) <TFNTwitterStatusSocialContext>
- (id)plistDictionaryValueForTimeline:(_Bool)arg1;
- (id)timelinePlistDictionaryValue;
- (id)plistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (_Bool)isTappable;
- (id)activityPage;
- (id)activityTitle;
- (id)allUserReferences;
- (id)_primaryUserReference;
- (_Bool)socialTextIsActivityCount;
- (id)activityName;
- (id)socialText;
- (id)_primaryRelatedUserDisplayFullName;
- (long long)_primarySocialContextType;
- (_Bool)isInReplyToSocialContextType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
