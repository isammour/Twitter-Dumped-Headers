//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNPeopleDiscoveryModuleLayout.h>

@class NSArray, TFNPeopleDiscoveryShowMore;

@interface TFNPeopleDiscoveryUserBioListModuleLayout : TFNPeopleDiscoveryModuleLayout
{
    NSArray *_userRecommendations;
    TFNPeopleDiscoveryShowMore *_showMore;
}

@property(readonly, nonatomic) TFNPeopleDiscoveryShowMore *showMore; // @synthesize showMore=_showMore;
@property(readonly, copy, nonatomic) NSArray *userRecommendations; // @synthesize userRecommendations=_userRecommendations;
- (void).cxx_destruct;
- (id)initWithModuleLayoutHeader:(id)arg1;
- (id)init;
- (id)initWithModuleLayoutHeader:(id)arg1 userRecommendations:(id)arg2 showMore:(id)arg3;

@end

