//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterHighlightsConversationCapableTweetStory.h>

@class NSArray;

@interface TFNTwitterHighlightsLikedTweetStory : TFNTwitterHighlightsConversationCapableTweetStory
{
    NSArray *_likedByUsers;
}

@property(readonly, copy, nonatomic) NSArray *likedByUsers; // @synthesize likedByUsers=_likedByUsers;
- (void).cxx_destruct;
- (id)storyType;
- (id)highlightsStoryByReplacingTweets:(id)arg1 usersDictionary:(id)arg2;
- (id)initWithStoryID:(id)arg1 status:(id)arg2 likedByUsers:(id)arg3 tweetsDictionary:(id)arg4 usersDictionary:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 usersDictionary:(id)arg2 tweetsDictionary:(id)arg3;

@end
