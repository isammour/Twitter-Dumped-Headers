//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeriscopeViewer/PTVWorkClientDelegate-Protocol.h>

@class NSDate, NSString, PTVChatRoom, PTVWorkClient;
@protocol PTVLoggedInUserProtocol, PTVReplayWorkerDelegate;

@interface PTVChatManReplayWorker : NSObject <PTVWorkClientDelegate>
{
    PTVWorkClient *_workClient;
    NSString *_historyCursor;
    int _replayCount;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    _Bool _moreHistoryLeft;
    _Bool _hasReceived503Error;
    id <PTVReplayWorkerDelegate> _delegate;
    NSDate *_historyStartDate;
    PTVChatRoom *_chatRoom;
}

@property(readonly, nonatomic) _Bool hasReceived503Error; // @synthesize hasReceived503Error=_hasReceived503Error;
@property(readonly, nonatomic) _Bool moreHistoryLeft; // @synthesize moreHistoryLeft=_moreHistoryLeft;
@property(retain, nonatomic) PTVChatRoom *chatRoom; // @synthesize chatRoom=_chatRoom;
@property(retain, nonatomic) NSDate *historyStartDate; // @synthesize historyStartDate=_historyStartDate;
@property(nonatomic) __weak id <PTVReplayWorkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (_Bool)hasMinimumRequirementsToLoad;
- (CDUnknownBlockType)replayMessageConstructor;
- (void)load;
- (id)initWithChatRoom:(id)arg1 loggedInUser:(id)arg2;
- (id)context;
- (void)error:(id)arg1 context:(id)arg2;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

