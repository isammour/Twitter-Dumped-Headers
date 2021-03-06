//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNTwitterLiveEventTimelineCustomizationInfo;

@interface TFNTwitterLiveEventTimelineVariant : NSObject
{
    NSString *_timelineID;
    NSString *_title;
    NSString *_hashtag;
    NSString *_composeSemanticCoreID;
    NSString *_composeInjectionTimelineID;
    TFNTwitterLiveEventTimelineCustomizationInfo *_customizationInfo;
}

@property(readonly, nonatomic) TFNTwitterLiveEventTimelineCustomizationInfo *customizationInfo; // @synthesize customizationInfo=_customizationInfo;
@property(readonly, nonatomic) NSString *composeInjectionTimelineID; // @synthesize composeInjectionTimelineID=_composeInjectionTimelineID;
@property(retain, nonatomic) NSString *composeSemanticCoreID; // @synthesize composeSemanticCoreID=_composeSemanticCoreID;
@property(readonly, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
- (void).cxx_destruct;
- (_Bool)isEqualToTimelineVariant:(id)arg1;
- (id)toJSONDictionary;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)init;

@end

