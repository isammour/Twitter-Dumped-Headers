//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIUserNotificationCategory;

@interface T1PushCategory : NSObject
{
    UIUserNotificationCategory *_category;
    NSArray *_actions;
}

@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) UIUserNotificationCategory *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 actions:(id)arg2;

@end

