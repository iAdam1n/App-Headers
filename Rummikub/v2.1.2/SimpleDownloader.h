/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURLConnection, NSMutableData, NSString;

@interface SimpleDownloader : NSObject {

	NSURLConnection* urlConn;
	NSMutableData* streamData;
	NSString* reqType;
	id delegate;
	NSString* connURl;

}

@property (nonatomic,retain) NSURLConnection * urlConn; 
@property (nonatomic,retain) NSMutableData * streamData; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,retain) NSString * reqType; 
@property (nonatomic,retain) NSString * connURl; 
-(NSURLConnection *)urlConn;
-(id)initWithUrl:(id)arg1 ;
-(void)setReqType:(NSString *)arg1 ;
-(void)startAsynchronus;
-(NSString *)reqType;
-(void)setConnURl:(NSString *)arg1 ;
-(NSString *)connURl;
-(void)setStreamData:(NSMutableData *)arg1 ;
-(void)setUrlConn:(NSURLConnection *)arg1 ;
-(NSMutableData *)streamData;
-(void)startSynchronus;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

