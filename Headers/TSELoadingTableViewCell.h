//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterShareExtensionUI/TSEBaseTableViewCell.h>

@class UIActivityIndicatorView;

@interface TSELoadingTableViewCell : TSEBaseTableViewCell
{
    UIActivityIndicatorView *_loadingIndicatorView;
}

@property(readonly, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (void)prepareForReuse;
- (id)init;

@end

