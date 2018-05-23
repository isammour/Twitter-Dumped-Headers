//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterMomentMakerRecommendationsFetcher-Protocol.h>

@class NSString, TFNTwitterAccount;

@interface TFNTwitterAPIMomentMakerRecommendationsFetcher : NSObject <TFNTwitterMomentMakerRecommendationsFetcher>
{
    TFNTwitterAccount *_account;
}

@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)fetchRecommendationsWithMomentID:(id)arg1 type:(long long)arg2 count:(long long)arg3 userID:(long long)arg4 query:(id)arg5 responseBlock:(CDUnknownBlockType)arg6;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

