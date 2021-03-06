//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TFNTwitterHighlightsStories : NSObject
{
    NSArray *_highlightsStories;
    NSDictionary *_tweetsDictionary;
    NSDictionary *_usersDictionary;
}

+ (id)highlightsStoriesWithJSONData:(id)arg1 error:(out id *)arg2;
@property(readonly, nonatomic) NSDictionary *usersDictionary; // @synthesize usersDictionary=_usersDictionary;
@property(readonly, nonatomic) NSDictionary *tweetsDictionary; // @synthesize tweetsDictionary=_tweetsDictionary;
@property(readonly, copy, nonatomic) NSArray *highlightsStories; // @synthesize highlightsStories=_highlightsStories;
- (void).cxx_destruct;
- (id)highlightsStoriesByReplacingTweets:(id)arg1 usersDictionary:(id)arg2;
- (id)initWithHighlightsStories:(id)arg1 tweetsDictionary:(id)arg2 usersDictionary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

