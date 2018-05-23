//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterUser, TFSTwitterUserReference;

@interface T1PushLandingItem : NSObject
{
    long long _channel;
    TFSTwitterUserReference *_relatedUserReference;
    TFNTwitterUser *_relatedUser;
}

+ (id)landingItemForNavigationContext:(id)arg1;
@property(readonly, nonatomic) TFNTwitterUser *relatedUser; // @synthesize relatedUser=_relatedUser;
@property(readonly, nonatomic) TFSTwitterUserReference *relatedUserReference; // @synthesize relatedUserReference=_relatedUserReference;
@property(readonly, nonatomic) long long channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTweetChannelAndRelatedUserReference:(id)arg1 relatedUser:(id)arg2;
- (id)initWithChannel:(long long)arg1;

@end
