//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber, NSString, TFNTwitterAccountModel;

@interface TFSTwitterAPILiveVideoTimelineCommand : TFSTwitterAPICommand
{
    TFNTwitterAccountModel *_accountModel;
    long long _eventID;
    NSString *_timelineID;
    NSNumber *_videoTimestampMS;
    NSNumber *_maxResultCount;
    NSString *_upCursor;
    NSString *_downCursor;
}

@property(copy, nonatomic) NSString *downCursor; // @synthesize downCursor=_downCursor;
@property(copy, nonatomic) NSString *upCursor; // @synthesize upCursor=_upCursor;
@property(retain, nonatomic) NSNumber *maxResultCount; // @synthesize maxResultCount=_maxResultCount;
@property(retain, nonatomic) NSNumber *videoTimestampMS; // @synthesize videoTimestampMS=_videoTimestampMS;
@property(copy, nonatomic) NSString *timelineID; // @synthesize timelineID=_timelineID;
@property(nonatomic) long long eventID; // @synthesize eventID=_eventID;
@property(retain, nonatomic) TFNTwitterAccountModel *accountModel; // @synthesize accountModel=_accountModel;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 accountModel:(id)arg3 eventID:(long long)arg4 timelineID:(id)arg5 videoTimestampMS:(id)arg6 maxResultCount:(id)arg7 upCursor:(id)arg8 downCursor:(id)arg9 source:(unsigned long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

