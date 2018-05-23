//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface TSESharedConfiguration : NSObject
{
    NSString *_applicationGroupName;
    NSUserDefaults *_groupDefaults;
}

@property(readonly, nonatomic) NSUserDefaults *groupDefaults; // @synthesize groupDefaults=_groupDefaults;
- (void).cxx_destruct;
- (id)fontDictionary;
- (_Bool)isShareSheetUIUpdateEnabled;
- (_Bool)isShareSheetReimplementationEnabled;
- (long long)shortURLLengthSecure;
- (id)initWithApplicationGroupName:(id)arg1;

@end
