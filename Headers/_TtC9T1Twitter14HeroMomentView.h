//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;
@protocol TFNTwitterAVPlayerSessionSource;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter14HeroMomentView : UIView
{
    // Error parsing type: , name: contentStackView
    // Error parsing type: , name: bodyContentStackView
    // Error parsing type: , name: backgroundMediaView
    // Error parsing type: , name: gradientView
    // Error parsing type: , name: headerView
    // Error parsing type: , name: descriptionView
    // Error parsing type: , name: socialProofView
    // Error parsing type: , name: promotedView
    // Error parsing type: , name: scoreView
    // Error parsing type: , name: subscribeButton
    // Error parsing type: , name: subscribeLabel
    // Error parsing type: , name: scorePlusSubscribeDivider
    // Error parsing type: , name: subscribeStack
    // Error parsing type: , name: subscribeOnlyPaddingView
    // Error parsing type: , name: imageOverlayView
    // Error parsing type: , name: mediaHighlightView
    // Error parsing type: , name: viewModel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithPlayer:(id)arg1;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)detachPlayerViewAnimated:(_Bool)arg1;
- (void)attachPlayerView:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (void)subscribeButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) UIView *presentationSourceView;

@end
