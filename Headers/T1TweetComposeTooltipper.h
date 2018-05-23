//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, UIView;

@interface T1TweetComposeTooltipper : NSObject
{
    UIView *_tooltipPresentationView;
    NSMutableDictionary *_registeredTooltipEventsByComposerEvent;
    NSMutableDictionary *_registeredViewsByTooltipEventKey;
}

@property(retain, nonatomic) NSMutableDictionary *registeredViewsByTooltipEventKey; // @synthesize registeredViewsByTooltipEventKey=_registeredViewsByTooltipEventKey;
@property(retain, nonatomic) NSMutableDictionary *registeredTooltipEventsByComposerEvent; // @synthesize registeredTooltipEventsByComposerEvent=_registeredTooltipEventsByComposerEvent;
@property(nonatomic) __weak UIView *tooltipPresentationView; // @synthesize tooltipPresentationView=_tooltipPresentationView;
- (void).cxx_destruct;
- (id)_t1_tooltipEventsForComposerEvent:(unsigned long long)arg1;
- (id)_t1_composerEventNameForComposerEvent:(unsigned long long)arg1;
- (void)showTooltipForComposerEvent:(unsigned long long)arg1;
- (void)registerView:(id)arg1 forTooltipEventKey:(id)arg2;
- (void)registerTooltip:(id)arg1 fromView:(id)arg2 forComposerEvent:(unsigned long long)arg3 tooltipEventKey:(id)arg4;
- (id)initInTooltipPresentationView:(id)arg1;

@end

