//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVChatFollowBroadcasterTableViewCell.h>

@class PTVMessage;
@protocol PTVChatFollowBroadcasterTableViewCellKVODelegate;

@interface PTVChatFollowBroadcasterTableViewCellKVO : PTVChatFollowBroadcasterTableViewCell
{
    PTVMessage *_message;
    id <PTVChatFollowBroadcasterTableViewCellKVODelegate> _followDelegate;
}

@property(nonatomic) __weak id <PTVChatFollowBroadcasterTableViewCellKVODelegate> followDelegate; // @synthesize followDelegate=_followDelegate;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1 isFollowing:(_Bool)arg2;
- (void)handleTap;
- (void)executeState;
- (void)beginFadeOutAnimation;

@end

