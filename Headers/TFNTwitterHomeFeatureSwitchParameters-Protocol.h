//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSArray;

@protocol TFNTwitterHomeFeatureSwitchParameters <NSObject>
@property(readonly, nonatomic, getter=isConversationHoistingAndDeduplicationEnabled) _Bool conversationHoistingAndDeduplicationEnabled;
@property(readonly, nonatomic) NSArray *clientDedupingSuggestTypesToRemove;
@property(readonly, nonatomic) unsigned long long clientDedupingMinAdsSpacing;
@property(readonly, nonatomic) unsigned long long clientDedupingMaxRecentCacheEntries;
@property(readonly, nonatomic) _Bool isClientDedupingUsingImpressionCacheEnabled;
@property(readonly, nonatomic, getter=isDedupingEntryIDsEnabled) _Bool dedupingEntryIDsEnabled;
@property(readonly, nonatomic) _Bool supportsProgressiveAPIResponses;
@property(readonly, nonatomic) unsigned long long homeRequestMaxSeenIDs;
@property(readonly, nonatomic) long long followPromptCountThreshold;
@property(readonly, nonatomic) double followPromptTimeThreshold;
@property(readonly, nonatomic) double followPromptAuthorTimeThreshold;
@end

