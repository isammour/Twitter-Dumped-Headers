//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterUsersStream.h>

@interface TFNTwitterFavoritersStream : TFNTwitterUsersStream
{
    long long _statusID;
}

@property(readonly, nonatomic) long long statusID; // @synthesize statusID=_statusID;
- (unsigned long long)_userCount;
- (void)_didReceiveResponseObject:(id)arg1 top:(_Bool)arg2;
- (void)_loadBottomWithResponseBlock:(CDUnknownBlockType)arg1;
- (void)_loadTopWithResponseBlock:(CDUnknownBlockType)arg1;
- (id)initWithAccount:(id)arg1 statusID:(long long)arg2;

@end

