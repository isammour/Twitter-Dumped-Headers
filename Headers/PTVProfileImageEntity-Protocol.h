//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, PTVWorkClient;

@protocol PTVProfileImageEntity <NSObject>
- (NSString *)profileImageURLForType:(unsigned long long)arg1;
- (void)loadImageEntityForWorkClient:(PTVWorkClient *)arg1 withProfileImageType:(unsigned long long)arg2;
- (id)profileImageLoadingContext;
@end
