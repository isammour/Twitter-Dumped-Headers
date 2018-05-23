//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol TFNAnimationContainer;

@interface TFNAnimationQueue : NSObject
{
    struct NSObject *_parentAnimation;
    NSMutableArray *_backingQueue;
    TFNAnimationQueue *_previousQueue;
}

+ (struct NSObject *)lastQueuedAnimation;
+ (id)currentQueue;
+ (void)commitAnimations;
+ (void)enqueueAnimation:(struct NSObject *)arg1;
+ (void)beginAnimations;
+ (id)queueStack;
+ (struct NSObject *)enclosingAnimation;
@property(retain, nonatomic) TFNAnimationQueue *previousQueue; // @synthesize previousQueue=_previousQueue;
@property(retain, nonatomic) NSMutableArray *backingQueue; // @synthesize backingQueue=_backingQueue;
@property(retain, nonatomic) NSObject<TFNAnimationContainer> *parentAnimation; // @synthesize parentAnimation=_parentAnimation;
- (void).cxx_destruct;
- (id)init;

@end

