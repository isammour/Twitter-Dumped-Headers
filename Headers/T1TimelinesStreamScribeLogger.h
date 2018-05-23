//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, TFNTwitterAccount, TFNTwitterScribe, TFNTwitterStream, TFSStopwatch, TFSTwitterScribeContext;

@interface T1TimelinesStreamScribeLogger : NSObject
{
    _Bool _shouldLogFirstTweetAPI;
    _Bool _shouldLogDidBecomeActive;
    _Bool _shouldLogFirstTweetRender;
    _Bool _shouldLogFirstTweetRenderWarm;
    NSDictionary *_metadataDict;
    TFSStopwatch *_pullToRefreshRenderStopwatch;
    TFSStopwatch *_loadBottomRenderStopwatch;
    _Bool _shouldLogBottomRenderOnNextUpdate;
    _Bool _shouldLogPullToRefreshRenderOnNextUpdate;
    TFNTwitterScribe *_scribe;
    TFNTwitterAccount *_account;
    TFNTwitterStream *_stream;
    TFSTwitterScribeContext *_scribeContext;
}

+ (_Bool)_visiblePanelViewControllerMatchesPanel:(long long)arg1;
@property(readonly, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(readonly, nonatomic) TFNTwitterStream *stream; // @synthesize stream=_stream;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_t1_promotedTweetScribeParametersForObject:(id)arg1;
- (void)_t1_scribePromotedTweetsOrderIfNeeded;
- (long long)_representedStreamPanelID;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_scribeStreamDidUpdateFromAPINotificationIfNeeded:(id)arg1;
- (void)_streamDidUpdateFromAPI:(id)arg1;
- (void)_tableDidUpdateFromStreamAPIUpdate:(id)arg1;
- (void)tableDidDisappear;
- (void)_streamWillFetchFromAPI:(id)arg1;
- (id)init;
- (id)initWithStream:(id)arg1 account:(id)arg2 scribeContext:(id)arg3;

@end
