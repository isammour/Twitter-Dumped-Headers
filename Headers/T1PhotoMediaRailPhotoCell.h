//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class PHAsset, T1PhotoGalleryAssetView, TFNPhotoCachingImageManagerHelper, UIView;

@interface T1PhotoMediaRailPhotoCell : UICollectionViewCell
{
    _Bool _enabled;
    T1PhotoGalleryAssetView *_assetView;
    UIView *_disablingOverlayView;
}

@property(retain, nonatomic) UIView *disablingOverlayView; // @synthesize disablingOverlayView=_disablingOverlayView;
@property(retain, nonatomic) T1PhotoGalleryAssetView *assetView; // @synthesize assetView=_assetView;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_t1_updateDisablingOverlayView;
@property(retain, nonatomic) PHAsset *asset;
@property(retain, nonatomic) TFNPhotoCachingImageManagerHelper *cachingImageManagerHelper;
- (id)initWithFrame:(struct CGRect)arg1;

@end

