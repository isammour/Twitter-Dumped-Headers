//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVAPIUtil : NSObject
{
}

+ (void)RefreshBroadcasts:(id)arg1 fullAPIPath:(id)arg2 Parameters:(id)arg3 CompletionBlock:(CDUnknownBlockType)arg4 LoggedInUserDelegate:(id)arg5;
+ (id)addLanguagesToQuery:(id)arg1;
+ (id)URLForAPIEndPoint:(id)arg1 UseTwitterPath:(_Bool)arg2;
+ (id)URLForAPIEndPoint:(id)arg1;
+ (id)HostURLString;
+ (id)AppVersion;
+ (id)Hostname;

@end

