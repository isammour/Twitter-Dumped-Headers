//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNCanvasBackgroundView, TFNCanvasNavigationBar, TFNTwitterTweetDetailsActionView, UIImageView;
@protocol TFNCanvasEventHandler;

@interface TFNCanvasView : UIView
{
    id <TFNCanvasEventHandler> _eventHandler;
    _Bool _controlsEnabled;
    TFNCanvasBackgroundView *_backgroundView;
    TFNCanvasNavigationBar *_navigationBar;
    TFNTwitterTweetDetailsActionView *_actionView;
    UIImageView *_overlayView;
}

@property(readonly, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) TFNTwitterTweetDetailsActionView *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) TFNCanvasNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool controlsEnabled; // @synthesize controlsEnabled=_controlsEnabled;
@property(readonly, nonatomic) TFNCanvasBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dispose;
- (id)initWithEventHandler:(id)arg1;

@end

