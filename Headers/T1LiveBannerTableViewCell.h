//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1MultiEventLiveBannerView;

@interface T1LiveBannerTableViewCell : TFNTableViewCell
{
    T1MultiEventLiveBannerView *_multiEventBannerView;
}

+ (id)cellForTableView:(id)arg1 reuseIdentifier:(id)arg2 indexPath:(id)arg3 imagePipeline:(id)arg4 paginationEnabled:(_Bool)arg5;
@property(readonly, nonatomic) T1MultiEventLiveBannerView *multiEventBannerView; // @synthesize multiEventBannerView=_multiEventBannerView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

