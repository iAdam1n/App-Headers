/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSError, NSURL;

@interface VungleNetworkResponse : NSObject {

	NSData* _data;
	unsigned long long _statusCode;
	NSError* _error;
	NSURL* _requestURL;
	unsigned long long _attempts;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long statusCode;              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSURL * requestURL;                         //@synthesize requestURL=_requestURL - In the implementation block
@property (assign,nonatomic) unsigned long long attempts;                //@synthesize attempts=_attempts - In the implementation block
-(unsigned long long)attempts;
-(void)setAttempts:(unsigned long long)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)statusCode;
-(void)setStatusCode:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
@end
