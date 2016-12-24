/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@class NSThread, NSOperation;

@interface SKPImageBridgeURLProtocol : NSURLProtocol {

	NSThread* _clientThread;
	NSOperation* _operation;

}

@property (retain) NSThread * clientThread;              //@synthesize clientThread=_clientThread - In the implementation block
@property (retain) NSOperation * operation;              //@synthesize operation=_operation - In the implementation block
+(id)operationForURL:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)notifyOfError:(id)arg1 ;
-(void)notifyClientOfOperationCompletion:(id)arg1 ;
-(void)dealloc;
-(NSOperation *)operation;
-(void)setOperation:(NSOperation *)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(void)setClientThread:(NSThread *)arg1 ;
-(NSThread *)clientThread;
@end
