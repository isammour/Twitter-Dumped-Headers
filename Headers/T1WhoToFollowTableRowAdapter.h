//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1UserOrRecommendationTableRowAdapter.h>

@class TFNTwitterUserDataSource;

@interface T1WhoToFollowTableRowAdapter : T1UserOrRecommendationTableRowAdapter
{
    TFNTwitterUserDataSource *_profileUserDataSource;
}

@property(retain, nonatomic) TFNTwitterUserDataSource *profileUserDataSource; // @synthesize profileUserDataSource=_profileUserDataSource;
- (void).cxx_destruct;
- (id)dataViewController:(id)arg1 scribeContextForItem:(id)arg2 atIndexPath:(id)arg3;

@end
