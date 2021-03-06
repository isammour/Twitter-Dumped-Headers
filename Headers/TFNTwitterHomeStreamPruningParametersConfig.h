//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterHomeStreamPruningParameters-Protocol.h>

@class NSString;

@interface TFNTwitterHomeStreamPruningParametersConfig : NSObject <TFNTwitterHomeStreamPruningParameters>
{
    _Bool _removeOnlyNonStatusItems;
    double _numberOfTimelineViewHeightsFromTopRequiredForPruning;
    unsigned long long _minAdsSpacing;
    unsigned long long _minImpressionDuration;
    double _maxTweetScore;
}

@property(nonatomic) double maxTweetScore; // @synthesize maxTweetScore=_maxTweetScore;
@property(nonatomic) unsigned long long minImpressionDuration; // @synthesize minImpressionDuration=_minImpressionDuration;
@property(nonatomic) unsigned long long minAdsSpacing; // @synthesize minAdsSpacing=_minAdsSpacing;
@property(nonatomic) double numberOfTimelineViewHeightsFromTopRequiredForPruning; // @synthesize numberOfTimelineViewHeightsFromTopRequiredForPruning=_numberOfTimelineViewHeightsFromTopRequiredForPruning;
@property(nonatomic) _Bool removeOnlyNonStatusItems; // @synthesize removeOnlyNonStatusItems=_removeOnlyNonStatusItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

