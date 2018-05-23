//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterAPIFoundMediaCommand.h>

@class NSString;

@interface TFSTwitterAPIFoundMediaTrendingCommand : TFSTwitterAPIFoundMediaCommand
{
    NSString *_provider;
    NSString *_cursor;
    long long _imageFormat;
}

@property(readonly, nonatomic) long long imageFormat; // @synthesize imageFormat=_imageFormat;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 provider:(id)arg3 cursor:(id)arg4 imageFormat:(long long)arg5 source:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

