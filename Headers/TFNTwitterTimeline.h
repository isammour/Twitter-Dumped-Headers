//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, TFNTwitterAccount, TFNTwitterStream, TFNTwitterTimelineStreamNotificationObserver, TFSStopwatch;
@protocol TFNTwitterGenericTimelineStream, TFNTwitterTimelineScriber;

@interface TFNTwitterTimeline : NSObject
{
    _Bool _serializing;
    _Bool _pendingRefresh;
    NSString *_archiveFileFullPath;
    CDUnknownBlockType _configurationBlock;
    TFNTwitterAccount *_account;
    TFNTwitterStream<TFNTwitterGenericTimelineStream> *_stream;
    unsigned long long _deserializationState;
    id <TFNTwitterTimelineScriber> _scriber;
    TFSStopwatch *_serializationStopwatch;
    long long _pendingRefreshSource;
    NSMutableArray *_pendingCompletionBlocks;
    TFNTwitterTimelineStreamNotificationObserver *_timelineStreamNotificationObserver;
}

+ (_Bool)_deleteFileAtPath:(id)arg1 error:(id *)arg2;
+ (id)deserializationQueue;
+ (id)timelineUpdateNotificationName;
+ (id)streamUpdateFromAPINotificationName;
+ (id)streamUpdateNotificationName;
+ (unsigned long long)refreshPolicy;
+ (id)identifier;
+ (id)identifierForPlistDictionary:(id)arg1;
+ (void)startDeserializationQueue;
+ (id)_sharedQueue;
@property(retain, nonatomic) TFNTwitterTimelineStreamNotificationObserver *timelineStreamNotificationObserver; // @synthesize timelineStreamNotificationObserver=_timelineStreamNotificationObserver;
@property(readonly, nonatomic) NSMutableArray *pendingCompletionBlocks; // @synthesize pendingCompletionBlocks=_pendingCompletionBlocks;
@property(nonatomic) long long pendingRefreshSource; // @synthesize pendingRefreshSource=_pendingRefreshSource;
@property(nonatomic) _Bool pendingRefresh; // @synthesize pendingRefresh=_pendingRefresh;
@property(retain, nonatomic) TFSStopwatch *serializationStopwatch; // @synthesize serializationStopwatch=_serializationStopwatch;
@property(nonatomic) _Bool serializing; // @synthesize serializing=_serializing;
@property(readonly, nonatomic) id <TFNTwitterTimelineScriber> scriber; // @synthesize scriber=_scriber;
@property(nonatomic) unsigned long long deserializationState; // @synthesize deserializationState=_deserializationState;
@property(retain, nonatomic) TFNTwitterStream<TFNTwitterGenericTimelineStream> *stream; // @synthesize stream=_stream;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
- (void).cxx_destruct;
- (void)_streamDidUpdate:(id)arg1;
- (void)applyDefinitiveTwitterObjectForKey:(id)arg1 inDictionary:(id)arg2;
- (void)deserializeItemsForKey:(id)arg1 inStreamDictionary:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_hydrateItemsWithStatusesAndUsersWithItems:(id)arg1 statusesDictionary:(id)arg2 usersDictionary:(id)arg3 statusIDCount:(unsigned long long)arg4 userIDCount:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_deserializeItemsWithPlistDictionaries:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)serializeItems:(id)arg1 forKey:(id)arg2 intoDictionary:(id)arg3;
- (void)serializeItemsForKey:(id)arg1 inDictionary:(id)arg2;
- (_Bool)willRefreshOnLaunch;
- (id)streamWithPlistDictionary:(id)arg1;
- (void)deserializeItemsInContainerDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)deserializedDictionary;
- (void)serializeStreamPlistDictionary:(id)arg1;
- (id)streamPlistDictionaryValue;
- (void)performRefreshWithSource:(long long)arg1;
- (void)_postUpdateNotification:(_Bool)arg1;
- (void)postUpdateNotification;
- (void)_processPendingRefresh;
- (void)_clearPendingCompletionBlocks;
- (void)refreshWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleToDeserializeStreamWithCompletion:(CDUnknownBlockType)arg1;
- (void)scheduleToDeserializeStream;
- (void)deserializeStreamWithCompletion:(CDUnknownBlockType)arg1;
- (void)configure;
- (void)serializeStream:(_Bool)arg1;
- (void)serializeStreamFromForeground;
- (void)_tfn_deleteLegacyArchiveFile;
- (void)deleteArchiveFile;
@property(readonly, copy, nonatomic) NSString *archiveFileFullPath; // @synthesize archiveFileFullPath=_archiveFileFullPath;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long unreadCount;
@property(readonly, nonatomic) _Bool hasUnreadItems;
- (id)streamForUpdateNotification;
- (void)dealloc;
- (id)plistDictionaryValue;
- (id)initWithAccount:(id)arg1 plistDictionary:(id)arg2 archiveFileFullPath:(id)arg3;
- (id)initWithAccount:(id)arg1 plistDictionary:(id)arg2;
- (id)initWithAccount:(id)arg1;

@end

