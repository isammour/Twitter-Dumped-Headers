//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <YOLayout/YOView.h>

@protocol PTVBannerPresentableContentViewDelegate;

@interface PTVBannerPresentableContentView : YOView
{
    id <PTVBannerPresentableContentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PTVBannerPresentableContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deselectView;
- (void)selectView;
- (double)presentationDuration;
- (void)startAnimations;

@end

