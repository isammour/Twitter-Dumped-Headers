//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/NSObject-Protocol.h>

@class UIButton, UIControl, UITapGestureRecognizer;

@protocol TFNDesignableActionReceiver <NSObject>

@optional
- (void)didTap:(UITapGestureRecognizer *)arg1;
- (void)controlValueStoppedChanging:(UIControl *)arg1;
- (void)controlValueChanged:(UIControl *)arg1;
- (void)buttonTapped:(UIButton *)arg1;
@end
