//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLResponse.h>

@class NSDictionary, NSError;

@interface TFNVineLoopDataSendResponse : TNLResponse
{
    _Bool _success;
    NSError *_parseError;
    NSDictionary *_responseJSON;
    double _nextAfter;
}

@property(readonly, nonatomic) double nextAfter; // @synthesize nextAfter=_nextAfter;
@property(readonly, nonatomic) NSDictionary *responseJSON; // @synthesize responseJSON=_responseJSON;
@property(readonly, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *anyError;
- (void)prepare;

@end

