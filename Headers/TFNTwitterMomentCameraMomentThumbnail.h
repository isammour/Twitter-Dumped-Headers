//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFSPlistSerialization-Protocol.h>

@class NSString, TFNTwitterMomentMedia, TFNTwitterMomentRender;

@interface TFNTwitterMomentCameraMomentThumbnail : NSObject <TFSPlistSerialization>
{
    NSString *_tweetID;
    TFNTwitterMomentRender *_render;
    TFNTwitterMomentMedia *_media;
}

@property(readonly, nonatomic) TFNTwitterMomentMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) TFNTwitterMomentRender *render; // @synthesize render=_render;
@property(readonly, copy, nonatomic) NSString *tweetID; // @synthesize tweetID=_tweetID;
- (void).cxx_destruct;
- (id)plistDictionaryValue;
- (id)initWithPlistDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTweetID:(id)arg1 render:(id)arg2 media:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
