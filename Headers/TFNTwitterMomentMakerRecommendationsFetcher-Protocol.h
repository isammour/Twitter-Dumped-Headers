//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString;

@protocol TFNTwitterMomentMakerRecommendationsFetcher <NSObject>
- (void)fetchRecommendationsWithMomentID:(NSString *)arg1 type:(long long)arg2 count:(long long)arg3 userID:(long long)arg4 query:(NSString *)arg5 responseBlock:(void (^)(_Bool, TFNTwitterMomentMakerRecommendations *, NSError *))arg6;
@end
