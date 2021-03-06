//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFSTwitterAPICommand, TFSTwitterAPICommandService;
@protocol TFSTwitterAPICommandQueueable;

@interface TFSTwitterAPICommandQueueItem : NSObject
{
    _Bool _shouldFire;
    TFSTwitterAPICommand<TFSTwitterAPICommandQueueable> *_queueableCommand;
    TFSTwitterAPICommandService *_commandService;
    double _delay;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) _Bool shouldFire; // @synthesize shouldFire=_shouldFire;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) TFSTwitterAPICommandService *commandService; // @synthesize commandService=_commandService;
@property(readonly, nonatomic) TFSTwitterAPICommand<TFSTwitterAPICommandQueueable> *queueableCommand; // @synthesize queueableCommand=_queueableCommand;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithQueueableCommand:(id)arg1 commandService:(id)arg2 delay:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

