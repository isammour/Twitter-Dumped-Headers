//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVWindow.h>

@class NSMutableArray;

@interface PTVStatusWindow : PTVWindow
{
    NSMutableArray *_shades;
}

+ (struct CGRect)DefaultFullScreenFrame;
- (void).cxx_destruct;
- (id)makeNewShade;
- (void)removeTopShade;
- (void)addShadeOnTopOfView:(id)arg1;
- (void)setTopShadeAlpha:(double)arg1;
- (id)initWithDefaultFullScreenFrame;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

