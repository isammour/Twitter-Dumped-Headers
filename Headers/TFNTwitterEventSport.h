//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterEvent.h>

@class NSArray, NSString, TFNTwitterEventSportGameInfo;

@interface TFNTwitterEventSport : TFNTwitterEvent
{
    NSString *_gameType;
    NSString *_gameState;
    NSString *_gameClock;
    NSString *_gameClockPeriod;
    NSString *_scoreFormat;
    NSString *_channel;
    NSString *_tournamentHashtag;
    NSString *_tournamentTitle;
    NSString *_tournamentRoundName;
    NSString *_tournamentRoundLabel;
    NSString *_tournamentRoundNumber;
    NSArray *_players;
    NSArray *_secondaryPlayers;
    TFNTwitterEventSportGameInfo *_gameInfo;
}

@property(retain, nonatomic) TFNTwitterEventSportGameInfo *gameInfo; // @synthesize gameInfo=_gameInfo;
@property(copy, nonatomic) NSArray *secondaryPlayers; // @synthesize secondaryPlayers=_secondaryPlayers;
@property(copy, nonatomic) NSArray *players; // @synthesize players=_players;
@property(copy, nonatomic) NSString *tournamentRoundNumber; // @synthesize tournamentRoundNumber=_tournamentRoundNumber;
@property(copy, nonatomic) NSString *tournamentRoundLabel; // @synthesize tournamentRoundLabel=_tournamentRoundLabel;
@property(copy, nonatomic) NSString *tournamentRoundName; // @synthesize tournamentRoundName=_tournamentRoundName;
@property(copy, nonatomic) NSString *tournamentTitle; // @synthesize tournamentTitle=_tournamentTitle;
@property(copy, nonatomic) NSString *tournamentHashtag; // @synthesize tournamentHashtag=_tournamentHashtag;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *scoreFormat; // @synthesize scoreFormat=_scoreFormat;
@property(copy, nonatomic) NSString *gameClockPeriod; // @synthesize gameClockPeriod=_gameClockPeriod;
@property(copy, nonatomic) NSString *gameClock; // @synthesize gameClock=_gameClock;
@property(copy, nonatomic) NSString *gameState; // @synthesize gameState=_gameState;
@property(copy, nonatomic) NSString *gameType; // @synthesize gameType=_gameType;
- (void).cxx_destruct;
- (id)secondaryPlayersWithPlayerType:(id)arg1;
- (id)primaryPlayerWithPlayerType:(id)arg1;
- (void)updateWithGameInfo:(id)arg1;
- (void)updateWithPlayers:(id)arg1;
- (void)updateWithTwitterEvent:(id)arg1;
- (void)didUpdateEvent:(id)arg1;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (id)scribeComponentForScribePage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)searchSource;
- (id)initWithJSONDictionary:(id)arg1 statusDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

@end
