//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNTwitterCardViewEventContext;

@interface T1CardPromotionRedeemContext : NSObject
{
    TFNTwitterCardViewEventContext *_eventContext;
    NSString *_mt;
    unsigned long long _redeemType;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) unsigned long long redeemType; // @synthesize redeemType=_redeemType;
@property(copy, nonatomic) NSString *mt; // @synthesize mt=_mt;
@property(retain, nonatomic) TFNTwitterCardViewEventContext *eventContext; // @synthesize eventContext=_eventContext;
- (void).cxx_destruct;

@end
