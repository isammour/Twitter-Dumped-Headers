//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ResizableHeaderViewController.h>

#import <T1Twitter/T1StickerTimelineHeaderViewDelegate-Protocol.h>

@class NSString, TFNTwitterSticker, TFNTwitterUser;
@protocol T1StickerTimelineHeaderViewControllerDelegate;

@interface T1StickerTimelineHeaderViewController : T1ResizableHeaderViewController <T1StickerTimelineHeaderViewDelegate>
{
    TFNTwitterSticker *_sticker;
    TFNTwitterUser *_stickerAuthor;
    id <T1StickerTimelineHeaderViewControllerDelegate> _stickerTimelineHeaderDelegate;
}

@property(nonatomic) __weak id <T1StickerTimelineHeaderViewControllerDelegate> stickerTimelineHeaderDelegate; // @synthesize stickerTimelineHeaderDelegate=_stickerTimelineHeaderDelegate;
@property(retain, nonatomic) TFNTwitterUser *stickerAuthor; // @synthesize stickerAuthor=_stickerAuthor;
@property(retain, nonatomic) TFNTwitterSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)resizableHeaderView:(id)arg1 didTapShareHeaderButton:(id)arg2;
- (void)resizableHeaderViewDidTapComposeButton:(id)arg1;
- (void)resizableHeaderViewDidTapBackButton:(id)arg1;
- (void)resizableHeaderViewDidTapBannerImage:(id)arg1;
- (void)stickerTimelineHeaderViewDidTapCreatorButton:(id)arg1;
- (void)_updateHeaderViewWithImage:(id)arg1;
- (void)_bringPullToRefreshControlToFront;
- (void)viewDidLoad;
- (id)initWithHeaderViewClass:(Class)arg1 account:(id)arg2;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

