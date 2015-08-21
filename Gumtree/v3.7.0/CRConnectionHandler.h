/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class CritterImpl, NSMutableData, NSURLResponse;

@interface CRConnectionHandler : NSObject {

	CritterImpl* _delegate;
	NSMutableData* _dataReceived;
	NSURLResponse* _response;

}

@property (assign) CritterImpl * delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableData * dataReceived;              //@synthesize dataReceived=_dataReceived - In the implementation block
@property (retain) NSURLResponse * response;                  //@synthesize response=_response - In the implementation block
+(id)handlerWithDelegate:(id)arg1 ;
-(id)initWithCritterDelegate:(id)arg1 ;
-(void)handleResponse:(long long)arg1 andData:(id)arg2 ;
-(void)doSendRequest:(id)arg1 ;
-(BOOL)receivedErrorResponse;
-(id)dataReceivedAsString;
-(NSMutableData *)dataReceived;
-(void)setDataReceived:(NSMutableData *)arg1 ;
-(void)sendRequest:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(CritterImpl *)arg1 ;
-(id)init;
-(CritterImpl *)delegate;
-(NSURLResponse *)response;
-(long long)statusCode;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)handleError:(id)arg1 ;
@end

