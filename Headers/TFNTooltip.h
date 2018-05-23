//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNManagedTooltipDisplayState, TFNTooltipView;
@protocol TFNTooltipDelegate;

@interface TFNTooltip : NSObject
{
    _Bool _tapAnywhereToDismiss;
    TFNTooltipView *_tooltipView;
    id <TFNTooltipDelegate> _delegate;
    unsigned long long _permittedArrowDirections;
    unsigned long long _presentAnimationType;
    unsigned long long _dismissAnimationType;
    double _presentationDelay;
    double _presentationArrowOffset;
    TFNManagedTooltipDisplayState *_displayState;
}

@property(retain, nonatomic) TFNManagedTooltipDisplayState *displayState; // @synthesize displayState=_displayState;
@property(nonatomic) _Bool tapAnywhereToDismiss; // @synthesize tapAnywhereToDismiss=_tapAnywhereToDismiss;
@property(nonatomic) double presentationArrowOffset; // @synthesize presentationArrowOffset=_presentationArrowOffset;
@property(nonatomic) double presentationDelay; // @synthesize presentationDelay=_presentationDelay;
@property(nonatomic) unsigned long long dismissAnimationType; // @synthesize dismissAnimationType=_dismissAnimationType;
@property(nonatomic) unsigned long long presentAnimationType; // @synthesize presentAnimationType=_presentAnimationType;
@property(nonatomic) unsigned long long permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(nonatomic) __weak id <TFNTooltipDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TFNTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
- (void).cxx_destruct;
- (id)initWithTooltipView:(id)arg1 delegate:(id)arg2;

@end
