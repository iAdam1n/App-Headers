/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WAWebClientRequestInfo : NSObject {

	NSString* _requestID;
	NSString* _epoch;

}

@property (nonatomic,copy) NSString * requestID;              //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSString * epoch;                  //@synthesize epoch=_epoch - In the implementation block
-(NSString *)epoch;
-(void)setEpoch:(NSString *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
@end
