//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSConcurrentOperation.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface T1UploadContactsOperation : TFSConcurrentOperation
{
    // Error parsing type: , name: contacts
    // Error parsing type: , name: commandRunner
    // Error parsing type: , name: commandFactory
    // Error parsing type: , name: validityCheck
    // Error parsing type: , name: delegate
    // Error parsing type: , name: chunkProgress
    // Error parsing type: , name: excludeFromProgressCenter
    // Error parsing type: , name: uniqueID
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) unsigned long long progressWeight;
@property(nonatomic, readonly) double progress;
@property(nonatomic, readonly) id <NSCopying> uniqueID; // @synthesize uniqueID;
@property(nonatomic, readonly) _Bool excludeFromProgressCenter; // @synthesize excludeFromProgressCenter;
- (void)run;

@end
