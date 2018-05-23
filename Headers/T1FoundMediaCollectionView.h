//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNCollectionView.h>

@class UITouch;
@protocol T1FoundMediaCollectionViewDelegate;

@interface T1FoundMediaCollectionView : TFNCollectionView
{
    UITouch *_currentTouch;
}

@property(retain, nonatomic) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
- (void).cxx_destruct;
- (void)_t1_private_didEndTrackingTouches;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <T1FoundMediaCollectionViewDelegate> delegate; // @dynamic delegate;

@end

