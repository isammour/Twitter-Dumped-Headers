//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterEvent.h>

@class NSArray, NSString;

@interface TFNTwitterEventTVShow : TFNTwitterEvent
{
    _Bool _isLive;
    _Bool _isNewEpisode;
    NSString *_seriesTitle;
    NSString *_seriesDescription;
    unsigned long long _seriesSeasonNumber;
    NSString *_episodeTitle;
    NSString *_episodeDescription;
    unsigned long long _episodeNumber;
    NSString *_channel;
    NSString *_genre;
    NSArray *_castUsernames;
    NSArray *_hashtagOther;
    NSString *_genreKey;
}

+ (id)_localizedGenreForKey:(id)arg1;
+ (id)tvShowWithJSONData:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *genreKey; // @synthesize genreKey=_genreKey;
@property(retain, nonatomic) NSArray *hashtagOther; // @synthesize hashtagOther=_hashtagOther;
@property(retain, nonatomic) NSArray *castUsernames; // @synthesize castUsernames=_castUsernames;
@property(nonatomic) _Bool isNewEpisode; // @synthesize isNewEpisode=_isNewEpisode;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) unsigned long long episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(copy, nonatomic) NSString *episodeDescription; // @synthesize episodeDescription=_episodeDescription;
@property(copy, nonatomic) NSString *episodeTitle; // @synthesize episodeTitle=_episodeTitle;
@property(nonatomic) unsigned long long seriesSeasonNumber; // @synthesize seriesSeasonNumber=_seriesSeasonNumber;
@property(copy, nonatomic) NSString *seriesDescription; // @synthesize seriesDescription=_seriesDescription;
@property(copy, nonatomic) NSString *seriesTitle; // @synthesize seriesTitle=_seriesTitle;
- (void).cxx_destruct;
- (id)timelinePlistDictionaryValue;
- (id)initWithTimelinePlistDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_parseHandlesFromArray:(id)arg1;
- (void)_parseHashtagsFromArray:(id)arg1;
- (id)scribeComponentForScribePage:(id)arg1;
- (id)searchSource;
- (id)initWithJSONDictionary:(id)arg1 statusDictionary:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

