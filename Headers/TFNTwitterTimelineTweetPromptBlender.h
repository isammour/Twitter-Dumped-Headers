//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterAccount;
@protocol TFNTwitterHomeTimelineStream;

@interface TFNTwitterTimelineTweetPromptBlender : NSObject
{
    id <TFNTwitterHomeTimelineStream> _stream;
    TFNTwitterAccount *_account;
}

@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) __weak id <TFNTwitterHomeTimelineStream> stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)_didTriggerTweetPrompt:(id)arg1;
- (id)initWithStream:(id)arg1 account:(id)arg2;

@end

