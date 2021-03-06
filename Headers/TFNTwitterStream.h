//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNTwitterAccount;

@interface TFNTwitterStream : NSObject
{
    TFNTwitterAccount *_account;
}

@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (_Bool)canRetryForError:(id)arg1;
- (id)autosaveName;
- (id)displayName;
- (id)subtextForError:(id)arg1;
- (id)mainTextForError:(id)arg1;
- (id)loadingFailedMessage;
- (id)emptyStreamMessageSubtextLearnMoreURL;
- (id)emptyStreamMessageSubtext;
- (id)emptyStreamMessage;
- (_Bool)isEmpty;
- (_Bool)hasDismissingItems;
- (_Bool)hasRealData;
- (_Bool)hasData;
- (id)loadGapError;
- (id)loadBottomError;
- (id)loadTopError;
- (_Bool)isPendingRefresh;
- (_Bool)isAtEnd;
- (_Bool)canLoadGap;
- (_Bool)canLoadBottom;
- (_Bool)canLoadTop;
- (_Bool)isLoadingGap;
- (_Bool)isLoadingBottom;
- (_Bool)isLoadingTop;
- (_Bool)retryForError:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadGap:(id)arg1 withSource:(long long)arg2;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)streamObjects;
- (id)lastUpdated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

