//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface T1CameraPreviewGridView : UIView
{
    NSMutableArray *_verticalLineLayers;
    NSMutableArray *_horizontalLineLayers;
    unsigned long long _numberOfGridLines;
}

@property(nonatomic) unsigned long long numberOfGridLines; // @synthesize numberOfGridLines=_numberOfGridLines;
- (void).cxx_destruct;
- (id)_layerForGridLine;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

