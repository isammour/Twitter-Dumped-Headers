//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/PTVTableViewFullScreen-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface PTVEmptyTableView : UIView <PTVTableViewFullScreen>
{
    UIImageView *_emptyImage;
    UILabel *_emptyLabel;
    _Bool _shouldCoverTableHeaderView;
}

@property(nonatomic) _Bool shouldCoverTableHeaderView; // @synthesize shouldCoverTableHeaderView=_shouldCoverTableHeaderView;
- (void).cxx_destruct;
- (void)setLabelText:(id)arg1;
- (void)setImageHidden:(_Bool)arg1;
- (id)initWithText:(id)arg1 imageHidden:(_Bool)arg2;
- (struct CGRect)frameForFullViewScreenInTableView:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

