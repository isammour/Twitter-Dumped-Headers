//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeViewer/PTVWorkClientDelegate-Protocol.h>

@class NSString, PTVWorkClient, UIImageView;

@interface PTVTopContributorFlairView : UIView <PTVWorkClientDelegate>
{
    UIImageView *_centerTintStar;
    PTVWorkClient *_workClient;
    int _participantIndex;
}

- (void).cxx_destruct;
- (id)context;
- (void)error:(id)arg1 context:(id)arg2;
- (void)eventual:(id)arg1 context:(id)arg2;
- (void)immediate:(id)arg1 context:(id)arg2 loadingFromNetwork:(_Bool)arg3;
- (void)load:(long long)arg1;
- (void)setParticipantIndex:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

