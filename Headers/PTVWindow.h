//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIView;

@interface PTVWindow : UIWindow
{
    PTVWindow *_weakSelf;
    UIView *_safeAreaDisplay;
}

- (void).cxx_destruct;
- (void)determineBorderColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)unobserveTweak;
- (void)observeTweak;
- (_Bool)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

@end
