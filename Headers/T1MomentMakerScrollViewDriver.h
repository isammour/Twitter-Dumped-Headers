//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNDisplayLink, UIScrollView;
@protocol T1MomentMakerScrollViewDriverDelegate;

@interface T1MomentMakerScrollViewDriver : NSObject
{
    id <T1MomentMakerScrollViewDriverDelegate> _delegate;
    UIScrollView *_scrollView;
    unsigned long long _direction;
    TFNDisplayLink *_displayLink;
}

@property(retain, nonatomic) TFNDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <T1MomentMakerScrollViewDriverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)_pointForPosition:(unsigned long long)arg1;
- (void)_frameWillDisplay;
@property(readonly, nonatomic) _Bool running;
- (void)stop;
- (void)startWithDirection:(unsigned long long)arg1;
- (id)initWithScrollView:(id)arg1;

@end
