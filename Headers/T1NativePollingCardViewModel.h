//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1InlineMediaViewModel-Protocol.h>
#import <T1Twitter/T1NativeCardMediaViewModel-Protocol.h>
#import <T1Twitter/T1PlayerCardViewModel-Protocol.h>
#import <T1Twitter/TFNTwitterCardContextModel-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSNumber, NSSet, NSString, TFNTwitterCardContext, TFNTwitterCardImageSpec, TFNTwitterCardPersistedStateManager;
@protocol T1NativeCardMediaViewModel><T1PlayerCardViewModel;

@interface T1NativePollingCardViewModel : NSObject <T1NativeCardMediaViewModel, TFNTwitterCardContextModel, T1PlayerCardViewModel, T1InlineMediaViewModel>
{
    _Bool _countsAreFinal;
    _Bool _refreshing;
    TFNTwitterCardContext *_cardContext;
    unsigned long long _numberOfChoices;
    NSString *_capiURI;
    TFNTwitterCardPersistedStateManager *_cardStateManager;
    TFNTwitterCardImageSpec *_imageSpec;
    NSArray *_pollChoiceLabels;
    NSMutableArray *_pollChoiceCounts;
    NSMutableArray *_cachedPercentages;
    NSString *_cardURL;
    NSNumber *_selectedChoice;
    NSDate *_pollEnd;
}

+ (id)_sharedCountFormatter;
+ (id)_sharedPercentFormatter;
+ (id)_sharedDateFormatter;
+ (unsigned long long)_numberOfChoicesFromCardName:(id)arg1;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(retain, nonatomic) NSDate *pollEnd; // @synthesize pollEnd=_pollEnd;
@property(nonatomic) _Bool countsAreFinal; // @synthesize countsAreFinal=_countsAreFinal;
@property(retain, nonatomic) NSNumber *selectedChoice; // @synthesize selectedChoice=_selectedChoice;
@property(copy, nonatomic) NSString *cardURL; // @synthesize cardURL=_cardURL;
@property(retain, nonatomic) NSMutableArray *cachedPercentages; // @synthesize cachedPercentages=_cachedPercentages;
@property(retain, nonatomic) NSMutableArray *pollChoiceCounts; // @synthesize pollChoiceCounts=_pollChoiceCounts;
@property(retain, nonatomic) NSArray *pollChoiceLabels; // @synthesize pollChoiceLabels=_pollChoiceLabels;
@property(retain, nonatomic) TFNTwitterCardImageSpec *imageSpec; // @synthesize imageSpec=_imageSpec;
@property(retain, nonatomic) TFNTwitterCardPersistedStateManager *cardStateManager; // @synthesize cardStateManager=_cardStateManager;
@property(copy, nonatomic) NSString *capiURI; // @synthesize capiURI=_capiURI;
@property(nonatomic) unsigned long long numberOfChoices; // @synthesize numberOfChoices=_numberOfChoices;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext; // @synthesize cardContext=_cardContext;
- (void).cxx_destruct;
- (id)playerSessionSource;
- (unsigned long long)viewCount;
- (unsigned long long)playerIconViewTypeWithStickerBadgeEnabled:(_Bool)arg1 threeSixtyVideoEnabled:(_Bool)arg2 bumperPrerollEnabled:(_Bool)arg3 isVideoAd:(_Bool)arg4;
- (double)pillViewTimeInterval;
@property(readonly, nonatomic) long long playerControllerMode;
@property(readonly, nonatomic) _Bool canPlayStreamInline;
@property(readonly, nonatomic) _Bool isMediaStream;
@property(readonly, nonatomic) _Bool isAmplify;
@property(readonly, nonatomic) _Bool isVine;
@property(readonly, copy, nonatomic) NSString *streamURL;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) id <T1NativeCardMediaViewModel><T1PlayerCardViewModel> mediaViewModel;
- (id)themeForDisplayMode:(long long)arg1;
- (_Bool)_updateFromNotificationCardData:(id)arg1;
- (void)_voteResponseNotification:(id)arg1;
- (void)_refreshResponse:(id)arg1;
- (void)stopRefresh;
- (void)startRefresh;
- (void)setLastUpdate:(id)arg1;
- (id)lastUpdate;
@property(readonly, nonatomic) NSSet *winningIndices;
- (id)capiRequestForVote;
@property(readonly, nonatomic) NSString *textForPollStatus;
- (_Bool)_isPollAuthor;
@property(readonly, nonatomic) _Bool shouldDisplayResults;
@property(readonly, nonatomic) _Bool hasVoted;
@property(nonatomic) unsigned long long voteIndex;
- (void)_clearVoteIndex;
@property(readonly, nonatomic) NSString *axUserRunningPoll;
- (id)_timeIntervalString:(double)arg1;
@property(readonly, nonatomic) NSString *remainingTimeText;
- (id)_voteText;
@property(readonly, nonatomic) long long totalCount;
- (id)_choiceCountForIndex:(unsigned long long)arg1;
- (id)_fractionForIndex:(unsigned long long)arg1;
- (double)percentageForIndex:(unsigned long long)arg1;
- (id)percentageStringForIndex:(unsigned long long)arg1;
- (id)choiceStringForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *imageAltText;
@property(readonly, nonatomic) _Bool isVideoPoll;
@property(readonly, nonatomic) _Bool isImagePoll;
- (id)initWithCardContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

