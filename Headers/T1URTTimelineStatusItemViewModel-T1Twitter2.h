//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1URTTimelineStatusItemViewModel.h>

@class NSNumber, NSString, TAVAnalyticsMediaIdentifier, TFNTwitterStatus;
@protocol TFNTwitterCardDataSource;

@interface T1URTTimelineStatusItemViewModel (T1Twitter2)
@property(nonatomic, readonly) TAVAnalyticsMediaIdentifier *contentMediaIdentifier;
@property(nonatomic, readonly) _Bool isVideoPoll;
@property(nonatomic, readonly) id <TFNTwitterCardDataSource> cardDataSource;
@property(nonatomic, readonly) NSNumber *mediaScribePublisherID;
@property(nonatomic, readonly) NSString *playerID;
@property(nonatomic, readonly) _Bool allowDynamicAd;
@property(nonatomic, readonly) NSString *promotedContentImpressionID;
@property(nonatomic, readonly) TFNTwitterStatus *playerStatus;
@property(nonatomic, readonly) NSNumber *playerStatusID;
@property(nonatomic, readonly) NSString *mediaPlaylistUrl;
@property(nonatomic, readonly) NSString *mediaScribeContentID;
@property(nonatomic, readonly) NSNumber *autoPlayPublisherBlacklistID;
@end
