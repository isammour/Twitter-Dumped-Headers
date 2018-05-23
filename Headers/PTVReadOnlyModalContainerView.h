//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PTVReadOnlyModalView;
@protocol PTVDismissButtonDelegate;

@interface PTVReadOnlyModalContainerView : UIView <UIGestureRecognizerDelegate>
{
    PTVReadOnlyModalView *_modalView;
    id <PTVDismissButtonDelegate> _dismissDelegate;
}

@property(nonatomic) __weak id <PTVDismissButtonDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

