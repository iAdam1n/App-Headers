/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CFNetwork/NSURLConnection.h>

@class NSMutableData, NSURLResponse;

@interface FRGenericConnection : NSURLConnection {

	/*^block*/id callbackRecvdResponse;
	/*^block*/id callbackFailure;
	NSMutableData* responseData;
	NSURLResponse* response;

}

@property (nonatomic,retain) NSMutableData * responseData; 
@property (nonatomic,retain) NSURLResponse * response; 
-(NSURLResponse *)response;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
@end

