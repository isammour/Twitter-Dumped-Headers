//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVDIAnalyticsScribe/NSObject-Protocol.h>

@protocol TProcessor, TTransport;

@protocol TProcessorFactory <NSObject>
- (id <TProcessor>)processorForTransport:(id <TTransport>)arg1;
@end

