//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTimer;

@interface TFNCoalescingUpdater : NSObject
{
    id _target;
    SEL _action;
    TFSTimer *_timer;
}

@property(retain, nonatomic) TFSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)_performUpdate;
- (void)cancelUpdate;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
