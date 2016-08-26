/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLConnection.h>

@protocol SKPWSConnectionDelegate;
@class NSURLConnection;

@interface SKPWSConnection : NSURLConnection {

	NSURLConnection* connection;
	id<SKPWSConnectionDelegate> delegate;
	long long tag;

}

@property (nonatomic,retain) NSURLConnection * connection; 
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic,__weak) id<SKPWSConnectionDelegate> delegate; 
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 requestTag:(unsigned long long)arg3 ;
-(void)setDelegate:(id<SKPWSConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<SKPWSConnectionDelegate>)delegate;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
@end
