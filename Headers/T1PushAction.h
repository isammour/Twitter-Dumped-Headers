//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIUserNotificationAction;

@interface T1PushAction : NSObject
{
    UIUserNotificationAction *_action;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) UIUserNotificationAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithAction:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

