//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSModel/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol TFSModelCacheable <NSObject>
@property(nonatomic, readonly) NSArray *cacheKeysToWarmAfterFetch;
@property(nonatomic, readonly) NSDictionary *cacheSearchKeyToScore;
@property(nonatomic, readonly) NSDictionary *cacheSearchKeyToValues;
@property(nonatomic, readonly) NSArray *ownedCacheKeys;
@property(nonatomic, readonly) _Bool isAutomaticUncachingEnabled;
@property(nonatomic, readonly) NSString *cacheKey;
@end

