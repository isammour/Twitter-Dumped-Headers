//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, T1PlayerFactory;

@interface T1VideoPrecacher : NSObject
{
    T1PlayerFactory *_playerFactory;
    NSMutableSet *_lastCachedEntries;
    NSMutableArray *_recentlyCachedVideos;
    unsigned long long _lastIndex;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(readonly, nonatomic) NSMutableArray *recentlyCachedVideos; // @synthesize recentlyCachedVideos=_recentlyCachedVideos;
@property(readonly, nonatomic) NSMutableSet *lastCachedEntries; // @synthesize lastCachedEntries=_lastCachedEntries;
@property(readonly, nonatomic) T1PlayerFactory *playerFactory; // @synthesize playerFactory=_playerFactory;
- (void).cxx_destruct;
- (id)_buildScribeContextWithController:(id)arg1 withSource:(id)arg2;
- (void)precacheVideosForStatuses:(id)arg1 withAccount:(id)arg2 withDataViewController:(id)arg3;
- (_Bool)_t1_precachingEnabledForMediaForwardStatus:(id)arg1;
- (id)initWithPlayerFactory:(id)arg1;

@end

