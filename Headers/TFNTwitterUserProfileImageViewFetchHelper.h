//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterImageViewFetchHelper.h>

@class TFNTwitterTypeaheadUser, TFNTwitterUser, TFNTwitterUserDataSource;

@interface TFNTwitterUserProfileImageViewFetchHelper : TFNTwitterImageViewFetchHelper
{
    TFNTwitterUser *_user;
    TFNTwitterUserDataSource *_userDataSource;
    TFNTwitterTypeaheadUser *_typeaheadUser;
}

@property(retain, nonatomic) TFNTwitterTypeaheadUser *typeaheadUser; // @synthesize typeaheadUser=_typeaheadUser;
@property(retain, nonatomic) TFNTwitterUserDataSource *userDataSource; // @synthesize userDataSource=_userDataSource;
@property(retain, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)_tfn_typeaheadUserDidUpdate:(id)arg1;
- (void)_tfn_userDataSourceDidUpdate:(id)arg1;
- (void)_tfn_userDidUpdate:(id)arg1;
- (void)_tfn_updateWithMediaEntity:(id)arg1;
- (void)_tfn_clearAllUsers;

@end

