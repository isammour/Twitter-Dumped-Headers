//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TFSAdditions)
+ (id)tfs_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (id)tfs_errorDomainAndCodeString:(_Bool)arg1;
- (_Bool)tfs_isTimedOutError;
- (_Bool)tfs_isNotConnectedToInternetError;
- (id)tfs_errorString;
@end

