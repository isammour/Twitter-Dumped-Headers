//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterAPIMomentsCommand.h>

@class NSString;

@interface TFSTwitterAPIMomentsSubscribeCommand : TFSTwitterAPIMomentsCommand
{
    NSString *_momentID;
}

@property(readonly, nonatomic) NSString *momentID; // @synthesize momentID=_momentID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 momentID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

