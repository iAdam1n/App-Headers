/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class OAMutableURLRequest, NSURLResponse, NSURLConnection, NSMutableData;

@interface OADataFetcher : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSURLConnection* connection;
	NSMutableData* responseData;
	id delegate;
	SEL didFinishSelector;
	SEL didFailSelector;

}
-(void)fetchDataWithRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 didFailSelector:(SEL)arg4 ;
-(void)fetchDataWithRequest:(id)arg1 didFinishBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
@end

