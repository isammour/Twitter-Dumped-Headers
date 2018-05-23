//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterStream.h>

#import <T1Twitter/TFNTwitterPollableStream-Protocol.h>

@class NSArray, NSString, TFNTwitterAccount, TFSTwitterPlace;

@interface TFNTwitterPlacePageStream : TFNTwitterStream <TFNTwitterPollableStream>
{
    _Bool _loadingTop;
    _Bool _loadingBottom;
    TFNTwitterAccount *_account;
    double _pollingInterval;
    TFSTwitterPlace *_place;
    NSArray *_streamObjects;
    NSString *_placeId;
    long long _type;
    NSString *_cursor;
}

+ (id)_dummyLoadingMarkerWithStream:(id)arg1 autoLoadWhenDisplayed:(_Bool)arg2;
+ (id)_dummyEndOfStreamMarker;
@property(nonatomic, getter=isLoadingBottom) _Bool loadingBottom; // @synthesize loadingBottom=_loadingBottom;
@property(nonatomic, getter=isLoadingTop) _Bool loadingTop; // @synthesize loadingTop=_loadingTop;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(retain, nonatomic) NSArray *streamObjects; // @synthesize streamObjects=_streamObjects;
@property(retain, nonatomic) TFSTwitterPlace *place; // @synthesize place=_place;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
- (void)setAccount:(id)arg1;
- (id)account;
- (void).cxx_destruct;
- (void)_attachDummyStreamObjectsIfNeeded;
- (unsigned long long)_TFSCursorTypeForCursorType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long TFSRequestType;
@property(readonly, nonatomic) unsigned long long requestType;
- (void)_appendChunk:(id)arg1;
- (void)_prependChunk:(id)arg1;
- (void)_didReceiveError:(id)arg1 loadingTop:(_Bool)arg2;
- (void)_didReceiveResponse:(id)arg1 success:(_Bool)arg2 error:(id)arg3 loadingTop:(_Bool)arg4;
- (_Bool)_loadWithCursorType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeStreamObject:(id)arg1;
- (void)stopPolling;
- (void)startPolling;
- (_Bool)loadPolling;
- (_Bool)loadBottomWithSource:(long long)arg1;
- (_Bool)loadTopWithSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPlaceId:(id)arg1 account:(id)arg2 type:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
