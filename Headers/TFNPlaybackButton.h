//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNToggleButton.h>

@class UIImage;

@interface TFNPlaybackButton : TFNToggleButton
{
    _Bool _indicatesPlaybackFinished;
    UIImage *_replayImage;
    UIImage *_highlightedReplayImage;
}

@property(nonatomic) _Bool indicatesPlaybackFinished; // @synthesize indicatesPlaybackFinished=_indicatesPlaybackFinished;
@property(retain, nonatomic) UIImage *highlightedReplayImage; // @synthesize highlightedReplayImage=_highlightedReplayImage;
@property(retain, nonatomic) UIImage *replayImage; // @synthesize replayImage=_replayImage;
- (void).cxx_destruct;

@end

