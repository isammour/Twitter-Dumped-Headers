//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNTwitterUser;

@protocol TFNTwitterUserMomentListFetcher <NSObject>
- (void)fetchMomentsForUser:(TFNTwitterUser *)arg1 withCount:(long long)arg2 scrollCursor:(NSString *)arg3 includesPremadeMoments:(_Bool)arg4 responseBlock:(void (^)(_Bool, TFNTwitterUserMomentList *, NSError *))arg5;
@end

