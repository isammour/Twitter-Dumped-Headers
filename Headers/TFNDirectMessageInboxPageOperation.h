//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSNumber, NSString, TFNDirectMessageInboxTimeline, TFNDirectMessageModel;
@protocol TFNDirectMessageContextNotificationCenter;

@interface TFNDirectMessageInboxPageOperation : TFNDirectMessageAPICommandOperation
{
    NSString *_accountID;
    TFNDirectMessageInboxTimeline *_timeline;
    TFNDirectMessageModel *_model;
    long long _maxEntryID;
    NSNumber *_filterLowQuality;
    id <TFNDirectMessageContextNotificationCenter> _notificationCenter;
}

@property(readonly, nonatomic) id <TFNDirectMessageContextNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) NSNumber *filterLowQuality; // @synthesize filterLowQuality=_filterLowQuality;
@property(readonly, nonatomic) long long maxEntryID; // @synthesize maxEntryID=_maxEntryID;
@property(readonly, nonatomic) TFNDirectMessageModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) TFNDirectMessageInboxTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (void)succeededWithObject:(id)arg1;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 timeline:(id)arg2 maxEntryID:(long long)arg3 model:(id)arg4 filterLowQuality:(id)arg5 notificationCenter:(id)arg6;
- (id)init;

@end

