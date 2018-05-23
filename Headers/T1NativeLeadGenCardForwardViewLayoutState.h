//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardViewLayoutState.h>

#import <T1Twitter/T1NativeLeadGenCardImageInfoViewLayoutState-Protocol.h>

@class TFNLayoutMetrics, TFNTwitterCardContext;

@interface T1NativeLeadGenCardForwardViewLayoutState : TFNTwitterCardViewLayoutState <T1NativeLeadGenCardImageInfoViewLayoutState>
{
    TFNTwitterCardContext *cardContext;
    TFNLayoutMetrics *layoutMetrics;
    struct CGSize size;
    struct CGRect titleFrame;
    struct CGRect imageViewFrame;
    struct CGRect imageHighlightViewFrame;
    struct CGRect imagePartitionFrame;
    struct CGRect callToActionButtonFrame;
    struct CGRect callToActionHighlightViewFrame;
}

- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
@property(nonatomic) struct CGRect callToActionHighlightViewFrame; // @synthesize callToActionHighlightViewFrame;
@property(nonatomic) struct CGRect callToActionButtonFrame; // @synthesize callToActionButtonFrame;
@property(nonatomic) struct CGRect imagePartitionFrame; // @synthesize imagePartitionFrame;
@property(nonatomic) struct CGRect imageHighlightViewFrame; // @synthesize imageHighlightViewFrame;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame;
- (void)setLayoutMetrics:(id)arg1;
- (id)layoutMetrics;
- (void)setCardContext:(id)arg1;
- (id)cardContext;
- (void).cxx_destruct;

@end

