//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PTVShareSheetView;
@protocol PTVShareSheetViewDelegate;

@interface PTVShareSheetContainerView : UIView
{
    PTVShareSheetView *_shareSheetView;
    NSArray *_items;
    id <PTVShareSheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dismissSelf;
- (struct CGRect)frameForItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 items:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

