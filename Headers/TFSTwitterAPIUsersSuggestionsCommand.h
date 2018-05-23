//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIUsersSuggestionsCommand : TFSTwitterAPICommand
{
    NSString *_lang;
    NSString *_country;
    TFNTwitterAccountModel *_accountModel;
}

@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang=_lang;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 lang:(id)arg4 country:(id)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

