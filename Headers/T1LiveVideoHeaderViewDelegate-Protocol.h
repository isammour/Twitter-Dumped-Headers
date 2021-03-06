//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderViewDelegate-Protocol.h>

@class T1LiveVideoHeaderView;

@protocol T1LiveVideoHeaderViewDelegate <T1ResizableHeaderViewDelegate>
- (_Bool)liveVideoHeaderViewWillShowDockButtonTooltip:(T1LiveVideoHeaderView *)arg1;
- (void)liveVideoHeaderView:(T1LiveVideoHeaderView *)arg1 didChangePlayerControlsVisibility:(_Bool)arg2;
- (void)liveVideoHeaderViewDidTapPlayerRetryButton:(T1LiveVideoHeaderView *)arg1;
- (void)liveVideoHeaderViewDidTapHeaderView:(T1LiveVideoHeaderView *)arg1;
- (void)liveVideoHeaderViewDidTapDockButton:(T1LiveVideoHeaderView *)arg1;
- (void)liveVideoHeaderViewDidTapPlayerChromeExpandButton:(T1LiveVideoHeaderView *)arg1;
- (_Bool)liveVideoHeaderViewIsVideoPlayerExplicitlyHidden:(T1LiveVideoHeaderView *)arg1;
- (void)liveVideoHeaderView:(T1LiveVideoHeaderView *)arg1 setStatusBarHidden:(_Bool)arg2;
- (_Bool)liveVideoHeaderView:(T1LiveVideoHeaderView *)arg1 shouldSetPlayerControlsToHidden:(_Bool)arg2;
- (_Bool)liveVideoHeaderView:(T1LiveVideoHeaderView *)arg1 shouldSetNavigationBarToHidden:(_Bool)arg2;
@end

