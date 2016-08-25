/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSMutableData, NSString;

@interface MPAdConversionTracker : NSObject <NSURLConnectionDataDelegate> {

	NSMutableData* _responseData;
	long long _statusCode;

}

@property (nonatomic,retain) NSMutableData * responseData;              //@synthesize responseData=_responseData - In the implementation block
@property (assign,nonatomic) long long statusCode;                      //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConversionTracker;
-(id)URLForAppID:(id)arg1 ;
-(void)reportApplicationOpenForApplicationID:(id)arg1 ;
-(long long)statusCode;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setStatusCode:(long long)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
@end

