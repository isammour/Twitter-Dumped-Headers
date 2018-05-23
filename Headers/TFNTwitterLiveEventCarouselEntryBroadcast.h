//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterLiveEventCarouselEntry.h>

@class TFNTwitterBroadcast, TFNTwitterLiveEventSlate;

@interface TFNTwitterLiveEventCarouselEntryBroadcast : TFNTwitterLiveEventCarouselEntry
{
    TFNTwitterBroadcast *_broadcast;
    TFNTwitterLiveEventSlate *_fallbackSlate;
}

@property(readonly, nonatomic) TFNTwitterLiveEventSlate *fallbackSlate; // @synthesize fallbackSlate=_fallbackSlate;
@property(readonly, nonatomic) TFNTwitterBroadcast *broadcast; // @synthesize broadcast=_broadcast;
- (void).cxx_destruct;
- (_Bool)isEqualToCarouselEntryBroadcast:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 broadcast:(id)arg2 fallbackSlate:(id)arg3;

@end

