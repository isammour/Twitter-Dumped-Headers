//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAPICommandOperation.h>

@class NSString;

@interface TFNDirectMessageMarkAsSeenOperation : TFNDirectMessageAPICommandOperation
{
    NSString *_accountID;
    long long _lastSeenEventID;
    long long _trustedLastSeenEventID;
    long long _untrustedLastSeenEventID;
}

@property(readonly, nonatomic) long long untrustedLastSeenEventID; // @synthesize untrustedLastSeenEventID=_untrustedLastSeenEventID;
@property(readonly, nonatomic) long long trustedLastSeenEventID; // @synthesize trustedLastSeenEventID=_trustedLastSeenEventID;
@property(readonly, nonatomic) long long lastSeenEventID; // @synthesize lastSeenEventID=_lastSeenEventID;
@property(readonly, copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)failedWithError:(id)arg1;
- (id)makeCommandWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 trustedLastSeenEventID:(long long)arg3 untrustedLastSeenEventID:(long long)arg4;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 untrustedLastSeenEventID:(long long)arg3;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2 trustedLastSeenEventID:(long long)arg3;
- (id)initWithAccountID:(id)arg1 lastSeenEventID:(long long)arg2;

@end
