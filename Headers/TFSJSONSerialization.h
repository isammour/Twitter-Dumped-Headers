//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFSJSONSerialization : NSObject
{
}

+ (void)decodeJSONData:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)encodeJSONObject:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)JSONObjectWithData:(id)arg1 permitMainThread:(_Bool)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;

@end

