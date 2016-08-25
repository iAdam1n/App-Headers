/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HTTPHelperDelegate;
@class NSMutableData, NSURLConnection, NSURLResponse;

@interface HTTPHelper : NSObject {

	NSMutableData* dataSoFar;
	NSURLConnection* connection;
	id<HTTPHelperDelegate> delegate;
	id userInfo;
	NSURLResponse* response;

}
-(id)initWithUrlString:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3 startAt:(int)arg4 ;
-(id)initWithRequest:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3 ;
-(id)initWithUrlString:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
@end

