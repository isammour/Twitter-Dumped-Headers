//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNDateComparable-Protocol.h>
#import <T1Twitter/TFNTwitterFeedbackInfoSource-Protocol.h>
#import <T1Twitter/TFNTwitterMutableDismissibleItem-Protocol.h>
#import <T1Twitter/TFNTwitterTimelineObject-Protocol.h>
#import <T1Twitter/TFSTwitterTimelinePlistSerialization-Protocol.h>

@class NSArray, NSDate, NSString, TFNTwitterFeedbackInfo, TFNTwitterFeedbackModule, TFNTwitterInlineExpandBehavior, TFNTwitterSuggestsInfo, TFNTwitterSuggestsModuleTimelineEntryContext;
@protocol TFNTwitterFooterViewModel><TFSTwitterTimelinePlistSerialization;

@interface TFNTwitterSuggestsModule : NSObject <TFNDateComparable, TFSTwitterTimelinePlistSerialization, TFNTwitterMutableDismissibleItem, TFNTwitterFeedbackInfoSource, TFNTwitterTimelineObject>
{
    _Bool _dismissing;
    _Bool _shouldLogImpression;
    _Bool _shouldLogHeroImpression;
    _Bool _shouldSkipTimelinePlistSerialization;
    _Bool _legacyTimelineEntry;
    _Bool _stickyHeader;
    NSArray *_statuses;
    TFNTwitterSuggestsInfo *_suggestsInfo;
    TFNTwitterFeedbackModule *_feedbackModule;
    TFNTwitterFeedbackInfo *_feedbackInfo;
    id <TFNTwitterFooterViewModel><TFSTwitterTimelinePlistSerialization> _footer;
    TFNTwitterInlineExpandBehavior *_inlineExpandBehavior;
    TFNTwitterSuggestsModuleTimelineEntryContext *_timelineEntryContext;
    long long _timelineSortIndex;
    NSDate *_comparableDate;
    NSString *_accessibilityIdentifier;
    NSString *_headerString;
    NSString *_detailString;
    unsigned long long _heroType;
}

+ (id)_tfn_stringFromHeroType:(unsigned long long)arg1;
+ (unsigned long long)_tfn_heroTypeFromString:(id)arg1;
@property(readonly, nonatomic) unsigned long long heroType; // @synthesize heroType=_heroType;
@property(nonatomic, getter=hasStickyHeader) _Bool stickyHeader; // @synthesize stickyHeader=_stickyHeader;
@property(nonatomic, getter=isLegacyTimelineEntry) _Bool legacyTimelineEntry; // @synthesize legacyTimelineEntry=_legacyTimelineEntry;
@property(readonly, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(readonly, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(retain, nonatomic) NSDate *comparableDate; // @synthesize comparableDate=_comparableDate;
@property(nonatomic) _Bool shouldSkipTimelinePlistSerialization; // @synthesize shouldSkipTimelinePlistSerialization=_shouldSkipTimelinePlistSerialization;
@property(readonly, nonatomic) long long timelineSortIndex; // @synthesize timelineSortIndex=_timelineSortIndex;
@property(nonatomic) _Bool shouldLogHeroImpression; // @synthesize shouldLogHeroImpression=_shouldLogHeroImpression;
@property(nonatomic) _Bool shouldLogImpression; // @synthesize shouldLogImpression=_shouldLogImpression;
@property(retain, nonatomic) TFNTwitterSuggestsModuleTimelineEntryContext *timelineEntryContext; // @synthesize timelineEntryContext=_timelineEntryContext;
@property(readonly, nonatomic) TFNTwitterInlineExpandBehavior *inlineExpandBehavior; // @synthesize inlineExpandBehavior=_inlineExpandBehavior;
@property(readonly, nonatomic) id <TFNTwitterFooterViewModel><TFSTwitterTimelinePlistSerialization> footer; // @synthesize footer=_footer;
@property(readonly, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo; // @synthesize feedbackInfo=_feedbackInfo;
- (void)setFeedbackModule:(id)arg1;
@property(readonly, nonatomic) TFNTwitterFeedbackModule *feedbackModule;
@property(readonly, nonatomic) TFNTwitterSuggestsInfo *suggestsInfo; // @synthesize suggestsInfo=_suggestsInfo;
@property(readonly, nonatomic, getter=isDismissing) _Bool dismissing;
- (void).cxx_destruct;
- (void)_tfn_parseLegacyIntegrationFromDictionary:(id)arg1;
- (id)dismissibleItemForFeedback:(id)arg1;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
- (_Bool)populateModelObjectsInTimelinePlistDictionaryWithStatuses:(id)arg1 users:(id)arg2;
- (id)allUserIDsInTimelinePlistDictionary;
- (id)allStatusIDsInTimelinePlistDictionary;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long dismissibleContentType;
- (void)setDismissing:(_Bool)arg1;
@property(readonly, nonatomic, getter=isDismissible) _Bool dismissible;
- (long long)compare:(id)arg1;
- (_Bool)removeFooter;
- (void)appendObject:(id)arg1;
- (void)removeInlineExpandBehavior;
- (_Bool)isEmpty;
- (void)removeContentRelatedToUser:(id)arg1;
- (void)removeObjectsWithFilter:(CDUnknownBlockType)arg1;
- (_Bool)removeObject:(id)arg1;
- (id)scribeParametersWithPosition:(long long)arg1;
- (id)scribeParameters;
@property(readonly, nonatomic) NSArray *objects;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *type;
- (id)initWithJSONDictionary:(id)arg1 statusesDictionary:(id)arg2 comparableDate:(id)arg3 inlineExpandEnabled:(_Bool)arg4 legacyIntegrationEnabled:(_Bool)arg5;
- (id)initWithJSONDictionary:(id)arg1 statusesDictionary:(id)arg2 comparableDate:(id)arg3;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 statuses:(id)arg3 headerString:(id)arg4 detailString:(id)arg5 footer:(id)arg6 feedbackModule:(id)arg7 feedbackInfo:(id)arg8 isDismissing:(_Bool)arg9 suggestsInfo:(id)arg10 shouldLogImpression:(_Bool)arg11 comparableDate:(id)arg12 accessibilityIdentifier:(id)arg13 timelineSortIndex:(long long)arg14 inlineExpandBehavior:(id)arg15 heroType:(unsigned long long)arg16;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 statuses:(id)arg3 headerString:(id)arg4 detailString:(id)arg5 footer:(id)arg6 feedbackModule:(id)arg7 feedbackInfo:(id)arg8 isDismissing:(_Bool)arg9 suggestsInfo:(id)arg10 shouldLogImpression:(_Bool)arg11 comparableDate:(id)arg12 accessibilityIdentifier:(id)arg13 timelineSortIndex:(long long)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

