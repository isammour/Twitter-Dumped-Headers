//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterAccount, TFNTwitterUserList;

@interface TFNTwitterUserDeviceFollowingList : NSObject
{
    TFNTwitterAccount *_account;
    TFNTwitterUserList *_userList;
}

+ (void)loadDeviceFollowCountFor:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) TFNTwitterUserList *userList; // @synthesize userList=_userList;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;

@end

