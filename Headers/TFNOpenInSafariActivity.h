//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSURL;

@interface TFNOpenInSafariActivity : UIActivity
{
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityType;
- (id)activityImage;
- (id)activityTitle;
- (id)initWithURL:(id)arg1;

@end

