//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURLRequest;

@protocol SKPITCPStreamFactory <NSObject>
- (void)sendAsynchronousRequest:(NSURLRequest *)arg1 queue:(NSOperationQueue *)arg2 completionHandler:(void (^)(NSURLResponse *, NSData *, NSError *))arg3;
- (id <SKPIStreamPair>)createStreamPairWithSocketForRequest:(NSURLRequest *)arg1;
@end
