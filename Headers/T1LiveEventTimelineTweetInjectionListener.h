//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterRichTimelineStream;

@interface T1LiveEventTimelineTweetInjectionListener : NSObject
{
    TFNTwitterRichTimelineStream *_stream;
}

@property(readonly, nonatomic) TFNTwitterRichTimelineStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)_t1_compositionDidSend:(id)arg1;
- (void)observeComposition:(id)arg1;
- (id)initWithStream:(id)arg1;
- (id)init;

@end

