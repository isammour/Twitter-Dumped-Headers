//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1NativeAppCardViewEventRegistry-Protocol.h>

@class T1NativeMediaAppCardView, T1NativeMediaAppCardViewModel;
@protocol TFNTwitterCardViewDelegate;

@interface T1NativeMediaAppCardViewEventRegistry : NSObject <T1NativeAppCardViewEventRegistry>
{
    T1NativeMediaAppCardView *_view;
    id <TFNTwitterCardViewDelegate> _delegate;
    T1NativeMediaAppCardViewModel *_viewModel;
    SEL _didTapAvatarImageSEL;
    SEL _didTapAvatarTextSEL;
    SEL _didTapImageSEL;
    SEL _didTapDescriptionSEL;
    SEL _didTapCallToActionSEL;
    SEL _didTapVideoSEL;
    SEL _didTapBackgroundSEL;
    SEL _didTakeVoidActionSEL;
}

@property(nonatomic) SEL didTakeVoidActionSEL; // @synthesize didTakeVoidActionSEL=_didTakeVoidActionSEL;
@property(nonatomic) SEL didTapBackgroundSEL; // @synthesize didTapBackgroundSEL=_didTapBackgroundSEL;
@property(nonatomic) SEL didTapVideoSEL; // @synthesize didTapVideoSEL=_didTapVideoSEL;
@property(nonatomic) SEL didTapCallToActionSEL; // @synthesize didTapCallToActionSEL=_didTapCallToActionSEL;
@property(nonatomic) SEL didTapDescriptionSEL; // @synthesize didTapDescriptionSEL=_didTapDescriptionSEL;
@property(nonatomic) SEL didTapImageSEL; // @synthesize didTapImageSEL=_didTapImageSEL;
@property(nonatomic) SEL didTapAvatarTextSEL; // @synthesize didTapAvatarTextSEL=_didTapAvatarTextSEL;
@property(nonatomic) SEL didTapAvatarImageSEL; // @synthesize didTapAvatarImageSEL=_didTapAvatarImageSEL;
@property(retain, nonatomic) T1NativeMediaAppCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <TFNTwitterCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak T1NativeMediaAppCardView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)didTakeVoidAction;
- (void)didTapBackground:(id)arg1;
- (void)didTapVideo:(id)arg1 event:(id)arg2;
- (void)didTapCallToAction:(id)arg1 event:(id)arg2;
- (void)didTapDescription:(id)arg1;
- (void)_t1_didTapImage:(id)arg1 eventPoint:(struct CGPoint)arg2;
- (void)didTapImage:(id)arg1;
- (void)didTapAvatarText:(id)arg1;
- (void)didTapAvatarImage:(id)arg1;
- (void)registerCardBackgroundHighlightView:(id)arg1;
- (void)registerVideoView:(id)arg1;
- (void)registerCallToActionButton:(id)arg1;
- (void)registerDescriptionHighlightView:(id)arg1;
- (void)performTapActionForVideoView:(id)arg1 withEvent:(id)arg2;
- (void)performTapActionForImageHighlightView:(id)arg1 withEvent:(id)arg2;
- (void)registerImageHighlightView:(id)arg1;
- (void)registerAvatarTextHighlightView:(id)arg1;
- (void)registerAvatarView:(id)arg1;
- (id)initWithView:(id)arg1;
- (id)init;

@end

