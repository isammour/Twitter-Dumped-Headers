//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/PTVLoadingImageViewDelegate-Protocol.h>

@class NSString, NSURL, PTVLoadingImageView, UILabel;
@protocol PTVScrubbingThumbnailViewDelegate;

@interface PTVScrubbingThumbnailView : UIView <PTVLoadingImageViewDelegate>
{
    UIView *_timecodeContainerView;
    UILabel *_timecodeLabel;
    id <PTVScrubbingThumbnailViewDelegate> _delegate;
    PTVLoadingImageView *_thumbnailImageView;
    struct CGSize _placeholderThumbnailSize;
}

+ (struct CGSize)MaxContainerSizeForTraitCollection:(id)arg1;
@property(nonatomic) struct CGSize placeholderThumbnailSize; // @synthesize placeholderThumbnailSize=_placeholderThumbnailSize;
@property(readonly, nonatomic) PTVLoadingImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak id <PTVScrubbingThumbnailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *timeString;
- (struct CGSize)thumbnailSizeFromImageSize:(struct CGSize)arg1;
- (struct CGSize)containerSize;
- (struct CGSize)maxContainerSize;
@property(nonatomic) _Bool shouldShowBlackPlaceholderThumbnail;
@property(retain, nonatomic) NSURL *thumbnailURL;
- (struct CGRect)thumbnailRectForBounds:(struct CGRect)arg1;
- (void)layoutThumbnailView;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didFetchImage:(id)arg1 forURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
