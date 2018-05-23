//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface T1CropGridView : UIView
{
    UIImage *_cornerRawImage;
    UIImageView *_cornerViewTopLeft;
    UIImageView *_cornerViewTopRight;
    UIImageView *_cornerViewBottomLeft;
    UIImageView *_cornerViewBottomRight;
}

+ (double)tapTargetSize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGPoint)_centerOfTapTargetForCorner:(unsigned long long)arg1;
- (struct CGPoint)_locationToDrawCorner:(unsigned long long)arg1;
- (unsigned long long)nearestCorner:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

