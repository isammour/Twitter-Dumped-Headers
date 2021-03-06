//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterUserRecommendation;
@protocol T1UserViewModel;

@interface T1UserRecommendationViewModelData : NSObject
{
    _Bool _showBlocked;
    id <T1UserViewModel> _userViewModel;
    TFNTwitterUserRecommendation *_userRecommendation;
}

@property(readonly, nonatomic) _Bool showBlocked; // @synthesize showBlocked=_showBlocked;
@property(readonly, nonatomic) TFNTwitterUserRecommendation *userRecommendation; // @synthesize userRecommendation=_userRecommendation;
@property(readonly, nonatomic) id <T1UserViewModel> userViewModel; // @synthesize userViewModel=_userViewModel;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUserRecommendation:(id)arg1 userViewModel:(id)arg2 showUserBlocked:(_Bool)arg3;

@end

