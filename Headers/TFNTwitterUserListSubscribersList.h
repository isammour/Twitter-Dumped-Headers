//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterList, TFNTwitterUserList;

@interface TFNTwitterUserListSubscribersList : NSObject
{
    TFNTwitterList *_list;
    TFNTwitterUserList *_userList;
}

@property(readonly, nonatomic) TFNTwitterUserList *userList; // @synthesize userList=_userList;
@property(readonly, nonatomic) TFNTwitterList *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)_listRemovedSubscriber:(id)arg1;
- (void)_listAddedSubscriber:(id)arg1;
- (id)initWithAccount:(id)arg1 list:(id)arg2;

@end
