//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSURL;

@interface TFSTwitterAPIReactiveBlendingFetchRelatedArticlesCommand : TFSTwitterAPICommand
{
    NSURL *_openedURL;
    long long _sourceStatusID;
    long long _sourceStatusSortIndex;
}

@property(readonly, nonatomic) long long sourceStatusSortIndex; // @synthesize sourceStatusSortIndex=_sourceStatusSortIndex;
@property(readonly, nonatomic) long long sourceStatusID; // @synthesize sourceStatusID=_sourceStatusID;
@property(readonly, nonatomic) NSURL *openedURL; // @synthesize openedURL=_openedURL;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 openedURL:(id)arg3 statusID:(long long)arg4 statusSortIndex:(long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
