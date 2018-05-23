//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TAVCaptionSink-Protocol.h>

@class NSArray, NSLayoutConstraint, TAVCaptionView, TAVPlaybackState;
@protocol T1VideoCaptionsViewDelegate;

@interface T1VideoCaptionsView : UIView <TAVCaptionSink>
{
    _Bool _areCaptionsEnabled;
    double _minimumCaptionSize;
    double _maximumCaptionSize;
    long long _alignment;
    id <T1VideoCaptionsViewDelegate> _delegate;
    TAVCaptionView *_captionView;
    TAVPlaybackState *_lastObservedPlaybackState;
    NSArray *_currentCaptionModels;
    NSLayoutConstraint *_verticalAlignmentConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *verticalAlignmentConstraint; // @synthesize verticalAlignmentConstraint=_verticalAlignmentConstraint;
@property(copy, nonatomic) NSArray *currentCaptionModels; // @synthesize currentCaptionModels=_currentCaptionModels;
@property(copy, nonatomic) TAVPlaybackState *lastObservedPlaybackState; // @synthesize lastObservedPlaybackState=_lastObservedPlaybackState;
@property(retain, nonatomic) TAVCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak id <T1VideoCaptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) _Bool areCaptionsEnabled; // @synthesize areCaptionsEnabled=_areCaptionsEnabled;
@property(nonatomic) double maximumCaptionSize; // @synthesize maximumCaptionSize=_maximumCaptionSize;
@property(nonatomic) double minimumCaptionSize; // @synthesize minimumCaptionSize=_minimumCaptionSize;
- (void).cxx_destruct;
- (void)_t1_resetCaptionsIfNeeded;
- (_Bool)_t1_shouldDisplayCaptionsForState:(id)arg1;
- (void)playbackStateDidChange:(id)arg1;
- (void)captionSourceDidUpdateWithCaptionModels:(id)arg1;
- (void)_t1_updateAlignmentConstraint;
- (void)_t1_selectCaptionOption:(id)arg1;
- (void)_t1_setUpCaptionsViewIfNeeded;
- (void)_t1_updateDisplayWithCaptionModels:(id)arg1;
- (void)resetIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end

