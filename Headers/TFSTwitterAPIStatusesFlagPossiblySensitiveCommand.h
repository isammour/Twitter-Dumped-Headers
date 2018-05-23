//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPICommand/TFSTwitterAPICommand.h>

@class NSNumber;

@interface TFSTwitterAPIStatusesFlagPossiblySensitiveCommand : TFSTwitterAPICommand
{
    _Bool _possiblySensitive;
    NSNumber *_statusID;
}

@property(nonatomic) _Bool possiblySensitive; // @synthesize possiblySensitive=_possiblySensitive;
@property(retain, nonatomic) NSNumber *statusID; // @synthesize statusID=_statusID;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 statusID:(id)arg3 possiblySensitive:(_Bool)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end
