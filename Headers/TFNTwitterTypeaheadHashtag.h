//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFSTwitterTypeaheadBaseHashtag;

@interface TFNTwitterTypeaheadHashtag : NSObject
{
    TFSTwitterTypeaheadBaseHashtag *_cs2Hashtag;
}

@property(retain, nonatomic) TFSTwitterTypeaheadBaseHashtag *cs2Hashtag; // @synthesize cs2Hashtag=_cs2Hashtag;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hashtag;
@property(readonly, nonatomic) long long score;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCS2TypeaheadHashtag:(id)arg1;

@end

