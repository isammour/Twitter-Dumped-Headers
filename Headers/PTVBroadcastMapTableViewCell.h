//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVBroadcastDetailsTableViewCell.h>

@class NSString, PTVBroadcastMapTableViewCellMapView, UILabel, UIView;
@protocol PTVBroadcastMapTableViewCellDelegate;

@interface PTVBroadcastMapTableViewCell : PTVBroadcastDetailsTableViewCell
{
    UIView *_containerView;
    PTVBroadcastMapTableViewCellMapView *_mapView;
    UIView *_localTimeView;
    UILabel *_localTimeLabel;
    NSString *_localTime;
    id <PTVBroadcastMapTableViewCellDelegate> _delegate;
    UILabel *_locationLabel;
}

+ (id)LocationLabelColor;
+ (id)LocationLabelFont;
+ (double)LocationLabelSpacing;
+ (struct UIEdgeInsets)ContentInsets;
+ (double)CellHeightForContainerSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(nonatomic) __weak id <PTVBroadcastMapTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *localTime; // @synthesize localTime=_localTime;
- (void).cxx_destruct;
- (void)updateLocalTimeBadge;
- (void)setLocationTitle:(id)arg1;
- (void)setShowAsBroadcaster:(_Bool)arg1;
- (void)setIncludeHeading:(_Bool)arg1;
- (void)setHeading:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)setMapAnnotation:(id)arg1;
@property(readonly, nonatomic) PTVBroadcastMapTableViewCellMapView *mapView;
- (id)flexibleHeightContainerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
