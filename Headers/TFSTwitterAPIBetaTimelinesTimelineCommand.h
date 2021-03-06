//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPIBetaTimelinesTimelineCommand : TFSTwitterAPICommand
{
    _Bool _includeRetweets;
    _Bool _earned;
    TFNTwitterAccountModel *_accountModel;
    long long _accountUserID;
    NSString *_timelineID;
    NSNumber *_minPosition;
    NSNumber *_maxPosition;
    NSNumber *_count;
}

@property(nonatomic) _Bool earned; // @synthesize earned=_earned;
@property(nonatomic) _Bool includeRetweets; // @synthesize includeRetweets=_includeRetweets;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *maxPosition; // @synthesize maxPosition=_maxPosition;
@property(retain, nonatomic) NSNumber *minPosition; // @synthesize minPosition=_minPosition;
@property(retain, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(nonatomic) long long accountUserID; // @synthesize accountUserID=_accountUserID;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 accountUserID:(long long)arg4 timelineID:(id)arg5 minPosition:(id)arg6 maxPosition:(id)arg7 count:(id)arg8 includeRetweets:(_Bool)arg9 source:(unsigned long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

