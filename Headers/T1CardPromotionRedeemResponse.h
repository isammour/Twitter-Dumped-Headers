//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkLayer/TNLResponse.h>

@class NSError, NSString;

@interface T1CardPromotionRedeemResponse : TNLResponse
{
    unsigned long long _result;
    NSString *_code;
    NSError *_parseError;
}

@property(readonly, nonatomic) NSError *parseError; // @synthesize parseError=_parseError;
@property(readonly, nonatomic) NSString *code; // @synthesize code=_code;
@property(readonly, nonatomic) unsigned long long result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)prepare;

@end

