//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterLiveVideoPrompt.h>

@class NSString, TFNTwitterStatus;

@interface TFNTwitterLiveVideoPromptPoll : TFNTwitterLiveVideoPrompt
{
    NSString *_promptTitle;
    NSString *_promptText;
    NSString *_buttonText;
    TFNTwitterStatus *_status;
}

@property(readonly, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
@property(readonly, copy, nonatomic) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
- (void).cxx_destruct;
- (_Bool)isEqualToLivePromptPoll:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 statuses:(id)arg2;

@end
