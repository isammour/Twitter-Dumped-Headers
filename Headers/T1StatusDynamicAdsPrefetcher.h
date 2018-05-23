//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1StatusMediaTimelineObserverPrefetcher-Protocol.h>

@class T1StatusMediaTimelineObserver;

@interface T1StatusDynamicAdsPrefetcher : NSObject <T1StatusMediaTimelineObserverPrefetcher>
{
    T1StatusMediaTimelineObserver *_timelineObserver;
}

+ (id)mediaPrefetcherForDynamicAdsWithViewController:(id)arg1;
+ (id)mediaPrefetcherForDynamicAdsWithViewController:(id)arg1 statusForItemBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak T1StatusMediaTimelineObserver *timelineObserver; // @synthesize timelineObserver=_timelineObserver;
- (void).cxx_destruct;
- (void)fetchMediasForStatuses:(id)arg1;
- (void)flush;
- (id)init;

@end
