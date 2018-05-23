//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1GapDataViewAdapterDelegate-Protocol.h>
#import <T1Twitter/TFNMarkAsViewedDelegate-Protocol.h>

@class NSString, T1ActivityTableRowAdapter, T1EmptyContentMessage, T1EmptyContentMessageAdapter, T1StatusTableRowAdapter, TFNMarkAsViewedHelper, TFNTwitterActivityStream, TFSTimer;

@interface T1ActivityStreamViewController : TFNItemsDataViewController <TFNMarkAsViewedDelegate, T1GapDataViewAdapterDelegate>
{
    _Bool _isLayoutSubviewsDone;
    _Bool _restoredPersistedScrollPosition;
    _Bool _initialLoadInProgress;
    TFNTwitterActivityStream *_activityStream;
    T1ActivityTableRowAdapter *_activityAdapter;
    T1StatusTableRowAdapter *_statusAdapter;
    T1EmptyContentMessageAdapter *_emptyContentAdapter;
    TFNMarkAsViewedHelper *_markAsViewedHelper;
    TFSTimer *_activityReadCursorUpdateTimer;
    T1EmptyContentMessage *_emptyMessage;
    NSString *_scribeSection;
}

@property(retain, nonatomic) NSString *scribeSection; // @synthesize scribeSection=_scribeSection;
@property(readonly, nonatomic) T1EmptyContentMessage *emptyMessage; // @synthesize emptyMessage=_emptyMessage;
@property(nonatomic) _Bool initialLoadInProgress; // @synthesize initialLoadInProgress=_initialLoadInProgress;
@property(nonatomic) _Bool restoredPersistedScrollPosition; // @synthesize restoredPersistedScrollPosition=_restoredPersistedScrollPosition;
@property(nonatomic) _Bool isLayoutSubviewsDone; // @synthesize isLayoutSubviewsDone=_isLayoutSubviewsDone;
@property(retain, nonatomic) TFSTimer *activityReadCursorUpdateTimer; // @synthesize activityReadCursorUpdateTimer=_activityReadCursorUpdateTimer;
@property(retain, nonatomic) TFNMarkAsViewedHelper *markAsViewedHelper; // @synthesize markAsViewedHelper=_markAsViewedHelper;
@property(retain, nonatomic) T1EmptyContentMessageAdapter *emptyContentAdapter; // @synthesize emptyContentAdapter=_emptyContentAdapter;
@property(retain, nonatomic) T1StatusTableRowAdapter *statusAdapter; // @synthesize statusAdapter=_statusAdapter;
@property(retain, nonatomic) T1ActivityTableRowAdapter *activityAdapter; // @synthesize activityAdapter=_activityAdapter;
@property(readonly, nonatomic) TFNTwitterActivityStream *activityStream; // @synthesize activityStream=_activityStream;
- (void).cxx_destruct;
- (id)_indexPathForItemWithMaxPosition:(long long)arg1;
- (void)restorePersistedScrollPosition;
- (void)persistScrollPosition;
- (_Bool)shouldPersistScrollPosition;
- (id)autosaveName;
- (id)_scrollPositionUserDefaultsKey;
- (id)_activityItemForStatus:(id)arg1;
- (void)_applyUnreadColorToCell:(id)arg1 forItem:(id)arg2;
- (void)_scheduleDeferredActivityReadCursorSave;
- (void)markAsViewedHelper:(id)arg1 didViewCells:(id)arg2;
- (id)scribePage;
- (id)scribe;
- (long long)panelID;
- (_Bool)gapItemIsLoading:(id)arg1;
- (id)gapItemLabel:(id)arg1;
- (void)gapItemWasSelected:(id)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2;
- (void)loadTopDidEnd;
- (void)loadTop:(id)arg1;
- (_Bool)isLoadingTop;
- (void)update:(_Bool)arg1;
- (void)_activityReadCursorDidUpdate:(id)arg1;
- (void)_activityStreamDidUpdate:(id)arg1;
- (void)private_conversationUserDidUndoMuteConversation:(id)arg1;
- (void)private_conversationMuteDidUpdate:(id)arg1;
- (id)calculatedLayoutMetrics;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)account;
- (id)initWithActivityStream:(id)arg1 emptyMessage:(id)arg2 scribeSection:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

