//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString;

@interface TFSTwitterAPIOAuthAccessTokenCommand : TFSTwitterAPICommand
{
    _Bool _singleSignOn;
    NSString *_authParameters;
    NSString *_consumerKey;
}

@property(readonly, nonatomic, getter=isSingleSignOn) _Bool singleSignOn; // @synthesize singleSignOn=_singleSignOn;
@property(readonly, copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(readonly, copy, nonatomic) NSString *authParameters; // @synthesize authParameters=_authParameters;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authType:(unsigned long long)arg3 consumerKey:(id)arg4 authParameters:(id)arg5 singleSignOn:(_Bool)arg6 source:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

