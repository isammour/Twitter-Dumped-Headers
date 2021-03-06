//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TAVScribe-Protocol.h>

@class TFNTwitterScribe;
@protocol TFNTwitterAVPlayerSessionSource;

@interface TAVTwitterScribe : NSObject <TAVScribe>
{
    TFNTwitterScribe *_twitterScribe;
    id <TFNTwitterAVPlayerSessionSource> _sessionSource;
}

+ (long long)promotedEventFromName:(id)arg1;
@property(retain, nonatomic) id <TFNTwitterAVPlayerSessionSource> sessionSource; // @synthesize sessionSource=_sessionSource;
@property(retain, nonatomic) TFNTwitterScribe *twitterScribe; // @synthesize twitterScribe=_twitterScribe;
- (void).cxx_destruct;
- (void)logPromotedEventWithName:(id)arg1 parameters:(id)arg2;
- (void)logClientEventWithName:(id)arg1 parameters:(id)arg2;
- (id)initWithScribe:(id)arg1 sessionSource:(id)arg2;

@end

