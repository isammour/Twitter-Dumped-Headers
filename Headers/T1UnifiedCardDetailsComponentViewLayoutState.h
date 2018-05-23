//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNTwitterUnifiedCardComponentViewLayoutState-Protocol.h>

@class TFNLayoutMetrics;
@protocol TFNTwitterUnifiedCardComponentModel;

@interface T1UnifiedCardDetailsComponentViewLayoutState : NSObject <TFNTwitterUnifiedCardComponentViewLayoutState>
{
    id <TFNTwitterUnifiedCardComponentModel> _component;
    TFNLayoutMetrics *_layoutMetrics;
    struct CGSize _size;
    struct CGRect _titleFrame;
    struct CGRect _subtitleFrame;
}

@property(readonly, nonatomic) TFNLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(readonly, nonatomic) struct CGRect subtitleFrame; // @synthesize subtitleFrame=_subtitleFrame;
@property(readonly, nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) id <TFNTwitterUnifiedCardComponentModel> component; // @synthesize component=_component;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithDetailsComponent:(id)arg1 size:(struct CGSize)arg2 titleFrame:(struct CGRect)arg3 subtitleFrame:(struct CGRect)arg4 layoutMetrics:(id)arg5;

@end
