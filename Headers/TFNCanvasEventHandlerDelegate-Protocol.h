//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class TFNCanvasViewEvent;
@protocol TFNCanvasEventHandler;

@protocol TFNCanvasEventHandlerDelegate <NSObject>

@optional
- (void)eventHandler:(id <TFNCanvasEventHandler>)arg1 didHandleViewEvent:(TFNCanvasViewEvent *)arg2;
- (void)eventHandler:(id <TFNCanvasEventHandler>)arg1 willHandleViewEvent:(TFNCanvasViewEvent *)arg2;
@end

