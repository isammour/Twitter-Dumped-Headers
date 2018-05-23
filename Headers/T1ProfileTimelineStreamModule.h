//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1ItemsDataModule-Protocol.h>

@class NSArray, NSSet, NSString, TFNItemsDataViewAdapter, TFNTwitterAccount, TFNTwitterRichTimelineStream, TFSTwitterAPITimelineUserCommand;

@interface T1ProfileTimelineStreamModule : NSObject <T1ItemsDataModule>
{
    _Bool _loading;
    _Bool _requiresLoad;
    NSSet *_filter;
    unsigned long long _count;
    TFNTwitterAccount *_account;
    TFNTwitterRichTimelineStream *_stream;
    TFSTwitterAPITimelineUserCommand *_command;
    NSArray *_statuses;
}

@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(readonly, nonatomic) TFSTwitterAPITimelineUserCommand *command; // @synthesize command=_command;
@property(readonly, nonatomic) TFNTwitterRichTimelineStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) _Bool requiresLoad; // @synthesize requiresLoad=_requiresLoad;
@property(readonly, nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSSet *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (_Bool)validTweet:(id)arg1;
- (id)_nonDummyStatusObjects;
- (void)_streamUpdated:(id)arg1;
- (_Bool)_hasTweets;
- (_Bool)isHidden;
@property(readonly, nonatomic) NSArray *moduleDataItems;
- (_Bool)postsUpdateNotifications;
- (void)loadTweets;
@property(readonly, nonatomic) _Bool hasLoadedMaxTweets;
@property(readonly, nonatomic) NSArray *statusObjects;
@property(readonly, nonatomic) unsigned long long maximumDisplayStatuses;
@property(readonly, nonatomic) _Bool isLoading;
- (id)initWithAccount:(id)arg1 userDataSource:(id)arg2 count:(unsigned long long)arg3 includeReplies:(_Bool)arg4;
- (id)initWithAccount:(id)arg1 userDataSource:(id)arg2 count:(unsigned long long)arg3;

// Remaining properties
@property(readonly, nonatomic) TFNItemsDataViewAdapter *dataViewAdapter;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) int supportedOrientation;

@end
