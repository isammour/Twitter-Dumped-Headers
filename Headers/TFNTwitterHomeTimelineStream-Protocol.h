//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterDebuggableStream-Protocol.h>
#import <T1Twitter/TFNTwitterGenericTimelineStream-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNTwitterComposition, TFNTwitterFeedbackAction, TFNTwitterStatus, TFNTwitterUser;
@protocol TFNTwitterHomeStreamPruningParameters, TFNTwitterScribeImpressionCache, TFNTwitterSuggestModuleWhoToFollowBlender, TFNTwitterTimelineReactiveArticleBlender;

@protocol TFNTwitterHomeTimelineStream <TFNTwitterDebuggableStream, TFNTwitterGenericTimelineStream>
- (void)showTweetPromptOnStatus:(TFNTwitterStatus *)arg1;
- (_Bool)unseenStatusesSatisfyMinUnseenCount:(unsigned long long)arg1 minImpressionDuration:(unsigned long long)arg2;
- (void)pruneSeenStatuses:(id <TFNTwitterHomeStreamPruningParameters>)arg1;
- (void)removeAllStreamObjects;
- (void)removeContentRelatedToUser:(TFNTwitterUser *)arg1;
- (void)restoreDismissedStreamObject:(id)arg1;
- (void)dismissStreamObject:(id)arg1 viaFeedbackAction:(TFNTwitterFeedbackAction *)arg2;
- (void)removeStreamObject:(id)arg1 viaFeedbackAction:(TFNTwitterFeedbackAction *)arg2;
- (void)addStreamObject:(id)arg1;
- (void)processUpdatedStreamObject:(id)arg1 animated:(_Bool)arg2;
- (_Bool)hasUnreadItems;
- (void)didViewStreamObjects:(NSArray *)arg1;
@property(nonatomic, readonly) _Bool hasCompletedApplicationLaunchLoadTopRequest;
- (void)loadNewerWithSource:(long long)arg1 topCursor:(NSString *)arg2 completion:(void (^)(void))arg3;
- (NSString *)topCursor;
- (NSDictionary *)serializationDictionaryValue;
- (TFNTwitterStatus *)newestStatus;
- (void)appendEntriesFromPlistDictionary:(NSDictionary *)arg1;
- (_Bool)loadTopFromStatusPosting:(TFNTwitterComposition *)arg1;
@property(nonatomic, readonly) unsigned long long streamObjectsCompositionInsertIndex;
@property(nonatomic, readonly) _Bool isTweetCompositionInjectionHandlingEnabled;
@property(nonatomic, copy) NSDictionary *scrollPositionState;
@property(nonatomic, readonly) id <TFNTwitterScribeImpressionCache> impressionCache;
@property(nonatomic, retain) id <TFNTwitterSuggestModuleWhoToFollowBlender> whoToFollowBlender;
@property(nonatomic, retain) id <TFNTwitterTimelineReactiveArticleBlender> articleBlender;

@optional
- (void)addStatus:(TFNTwitterStatus *)arg1 toReplaceTweetPromptInEntryWithID:(NSString *)arg2;
- (void)resumeLoadTopResponseProcessing;
- (void)pauseLoadTopResponseProcessing;
@end

