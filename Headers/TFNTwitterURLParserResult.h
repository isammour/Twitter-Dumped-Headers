//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TFNTwitterURLParserResult : NSObject
{
    long long _type;
    long long _searchType;
    NSString *_nativeURL;
    NSString *_screenName;
    long long _tweetId;
    NSString *_query;
    NSString *_src;
    NSString *_universalLinkURL;
    NSString *_eventID;
    NSString *_slug;
    NSString *_timelineID;
    NSString *_title;
    NSString *_directMessageConversationID;
    NSString *_highlightsStoryID;
    NSString *_productId;
    NSString *_stickerID;
    NSString *_stickerTabID;
    NSString *_topicID;
    NSString *_topicTaxonomy;
    NSString *_momentID;
    NSString *_reportingFollowupURL;
    NSString *_listID;
    NSArray *_pinnedTweetIDs;
    NSString *_broadcastID;
}

@property(copy, nonatomic) NSString *broadcastID; // @synthesize broadcastID=_broadcastID;
@property(copy, nonatomic) NSArray *pinnedTweetIDs; // @synthesize pinnedTweetIDs=_pinnedTweetIDs;
@property(copy, nonatomic) NSString *listID; // @synthesize listID=_listID;
@property(copy, nonatomic) NSString *reportingFollowupURL; // @synthesize reportingFollowupURL=_reportingFollowupURL;
@property(copy, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
@property(copy, nonatomic) NSString *topicTaxonomy; // @synthesize topicTaxonomy=_topicTaxonomy;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
@property(copy, nonatomic) NSString *stickerTabID; // @synthesize stickerTabID=_stickerTabID;
@property(copy, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *highlightsStoryID; // @synthesize highlightsStoryID=_highlightsStoryID;
@property(copy, nonatomic) NSString *directMessageConversationID; // @synthesize directMessageConversationID=_directMessageConversationID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(copy, nonatomic) NSString *slug; // @synthesize slug=_slug;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *universalLinkURL; // @synthesize universalLinkURL=_universalLinkURL;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) long long tweetId; // @synthesize tweetId=_tweetId;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *nativeURL; // @synthesize nativeURL=_nativeURL;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

