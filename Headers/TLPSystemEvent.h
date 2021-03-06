//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLivePipeline/TLPInternalEvent.h>

@class NSDictionary, NSError, TLPAPIResponseModel;

@interface TLPSystemEvent : TLPInternalEvent
{
    NSError *_error;
    NSDictionary *_config;
    TLPAPIResponseModel *_subscribeResponse;
}

@property(readonly, nonatomic) TLPAPIResponseModel *subscribeResponse; // @synthesize subscribeResponse=_subscribeResponse;
@property(readonly, copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithEventType:(long long)arg1 topic:(id)arg2 payload:(id)arg3;

@end

