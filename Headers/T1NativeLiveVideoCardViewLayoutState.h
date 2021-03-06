//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardViewLayoutState.h>

@class T1LiveVideoContentViewLayoutState, T1NativeLiveVideoCardViewModel;

@interface T1NativeLiveVideoCardViewLayoutState : TFNTwitterCardViewLayoutState
{
    T1LiveVideoContentViewLayoutState *_liveVideoContentViewLayoutState;
    T1NativeLiveVideoCardViewModel *_viewModel;
    struct CGRect _liveVideoContentViewFrame;
}

@property(retain, nonatomic) T1NativeLiveVideoCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) T1LiveVideoContentViewLayoutState *liveVideoContentViewLayoutState; // @synthesize liveVideoContentViewLayoutState=_liveVideoContentViewLayoutState;
@property(nonatomic) struct CGRect liveVideoContentViewFrame; // @synthesize liveVideoContentViewFrame=_liveVideoContentViewFrame;
- (void).cxx_destruct;
- (_Bool)isLayoutStateValidForCardContext:(id)arg1;

@end

