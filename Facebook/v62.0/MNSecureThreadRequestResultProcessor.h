/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNChainRequestResultProcessing.h>

@protocol MNSecureThreadRequestListener, OS_dispatch_queue;
@class MNHandlerSecureThreadRequest, NSObject, MNSecureThreadRequestResultAccumulator, NSString;

@interface MNSecureThreadRequestResultProcessor : NSObject <MNChainRequestResultProcessing> {

	MNHandlerSecureThreadRequest* _request;
	id<MNSecureThreadRequestListener> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureThreadRequestResultAccumulator* _resultAccumulator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isWaitingForSubResponses;
-(BOOL)validatePreliminaryResponse;
-(BOOL)validateFinalResponse;
-(void)updateResponse:(id)arg1 completesSubResponse:(BOOL)arg2 ;
-(void)announceSuccess;
-(void)announceUpdatedResponseWithLongOperationDidBegin:(BOOL)arg1 ;
-(void)announceFailureWithError:(id)arg1 ;
-(id)initWithRequest:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
@end

