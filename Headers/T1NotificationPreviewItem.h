//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterUser;

@interface T1NotificationPreviewItem : NSObject
{
    unsigned long long _type;
    TFNTwitterUser *_user;
}

@property(readonly, nonatomic) TFNTwitterUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithUser:(id)arg1;

@end
