//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNCanvasEventHandlerDelegate-Protocol.h>

@class TFNCanvasViewController, UIView;
@protocol TFNCanvasControllableElementView, TFNCanvasInnerViewControllerDelegate;

@protocol TFNCanvasInnerViewControllerProtocol <TFNCanvasEventHandlerDelegate>
@property(nonatomic) __weak TFNCanvasViewController<TFNCanvasInnerViewControllerDelegate> *eventHandler;
@property(readonly, nonatomic) UIView<TFNCanvasControllableElementView> *elementView;

@optional
- (void)canvasViewControllerDidDismiss;
- (void)canvasViewControllerWillDismiss;
- (void)canvasViewControllerDidPresent;
@end

