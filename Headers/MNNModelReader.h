//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MNNModelReader : NSObject
{
    NSMutableDictionary *_contents;
}

@property(retain, nonatomic) NSMutableDictionary *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;
- (int)int32ForKey:(id)arg1 defaultValue:(int)arg2;
- (unsigned long long)int32ArrayCountForKey:(id)arg1;
- (int *)int32ArrayForKey:(id)arg1;
- (unsigned long long)int16ArrayCountForKey:(id)arg1;
- (short *)int16ArrayForKey:(id)arg1;
- (id)initWithModelURL:(id)arg1;

@end

