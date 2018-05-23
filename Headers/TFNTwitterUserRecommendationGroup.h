//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSTwitterScribableItem-Protocol.h>

@class NSArray, NSDictionary, NSString, TFNPeopleDiscoveryShowMore;

@interface TFNTwitterUserRecommendationGroup : NSObject <TFSTwitterScribableItem>
{
    NSString *_scribeItemImpressionID;
    NSDictionary *_scribeItem;
    NSString *_titleText;
    NSArray *_userRecommendations;
    TFNPeopleDiscoveryShowMore *_showMore;
}

+ (id)userRecommendationGroupsWithPeopleDiscoverModules:(id)arg1;
+ (id)userRecommendationGroupsWithUserRecommendations:(id)arg1;
@property(readonly, nonatomic) TFNPeopleDiscoveryShowMore *showMore; // @synthesize showMore=_showMore;
@property(readonly, nonatomic) NSArray *userRecommendations; // @synthesize userRecommendations=_userRecommendations;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) NSDictionary *scribeItem; // @synthesize scribeItem=_scribeItem;
@property(readonly, copy, nonatomic) NSString *scribeItemImpressionID; // @synthesize scribeItemImpressionID=_scribeItemImpressionID;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTitleText:(id)arg1 userRecommendations:(id)arg2 showMore:(id)arg3 scribeItemImpressionID:(id)arg4 scribeItem:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long isCurrentlyFirstImpression;
@property(readonly, nonatomic) unsigned long long isDuplicateContentIDInstance;
@property(readonly) Class superclass;

@end
