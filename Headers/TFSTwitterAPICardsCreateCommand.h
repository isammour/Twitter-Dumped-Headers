//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSDictionary;

@interface TFSTwitterAPICardsCreateCommand : TFSTwitterAPICommand
{
    NSDictionary *_cardData;
}

@property(copy, nonatomic) NSDictionary *cardData; // @synthesize cardData=_cardData;
- (void).cxx_destruct;
- (_Bool)shouldEndNetworkTransactionMetrics;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 cardData:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
