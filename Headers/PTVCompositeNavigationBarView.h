//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PTVNavigationBar, UIImageView;

@interface PTVCompositeNavigationBarView : UIView
{
    UIImageView *_bottomShadow;
    _Bool _hideShadow;
    PTVNavigationBar *_navigationBar;
    UIView *_mainView;
}

@property(nonatomic) _Bool hideShadow; // @synthesize hideShadow=_hideShadow;
@property(readonly, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(readonly, nonatomic) PTVNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 navigationBar:(id)arg2 mainView:(id)arg3;
- (void)layoutSubviews;

@end

