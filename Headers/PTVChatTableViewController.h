//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVTableViewController.h>

#import <PeriscopeViewer/PTVBroadcastControllerObserver-Protocol.h>
#import <PeriscopeViewer/PTVChatControllerObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, PTVBroadcastController;
@protocol PTVChatTableViewControllerDelegate, PTVLoggedInUserProtocol;

@interface PTVChatTableViewController : PTVTableViewController <PTVChatControllerObserver, PTVBroadcastControllerObserver>
{
    NSMutableDictionary *_cachedCellHeightsByWidth;
    NSMutableArray *_messages;
    double _maxOffset;
    _Bool _useLargeChatFont;
    id <PTVChatTableViewControllerDelegate> _delegate;
    PTVBroadcastController *_broadcastController;
}

@property(readonly, nonatomic) _Bool useLargeChatFont; // @synthesize useLargeChatFont=_useLargeChatFont;
@property(readonly, nonatomic) PTVBroadcastController *broadcastController; // @synthesize broadcastController=_broadcastController;
@property(nonatomic) __weak id <PTVChatTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)tweakedValueForChatAnimationCurve;
- (double)forcedFadeDurationAtIndexPath:(id)arg1 forcedRemove:(_Bool)arg2;
- (_Bool)shouldBeginEarlyFadeAtIndexPath:(id)arg1;
- (double)visibleDurationOfChatMessageBeforeFadeOut;
- (unsigned long long)nChatsThresholdBeforeWeForceOlderOnesToFadeOutEarly;
- (_Bool)renderAsNewUserWelcomeMessage:(id)arg1;
- (double)cachedHeightForCommentBody:(id)arg1;
- (id)cachedCellHeightsForCurrentTableWidth;
- (id)messageData;
- (void)clearAllChat;
- (void)messageReceived:(id)arg1;
- (void)gotMessage:(id)arg1 shouldAddToData:(_Bool)arg2;
- (void)fontSizeDidChange;
@property(readonly, nonatomic) NSArray *messages;
@property(readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
- (id)initWithDelegate:(id)arg1 broadcastController:(id)arg2 useLargeChatFont:(_Bool)arg3;
- (id)dataCellForRowAtIndexPath:(id)arg1;
- (long long)numberOfLoadingRowsInSection:(long long)arg1;
- (long long)numberOfEmptyRowsInSection:(long long)arg1;
- (long long)numberOfDataRowsInSection:(long long)arg1;
- (double)heightForDataRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)load:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)broadcastController:(id)arg1 didUpdatePlaybackPointFrom:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

