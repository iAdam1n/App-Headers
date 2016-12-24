/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionDataTask, NSMutableData, WAWebPageMetadata;

@interface WAWebPageTask : NSObject {

	double _startTime;
	double _timeout;
	NSURLSessionDataTask* _dataTask;
	NSMutableData* _receivedData;
	WAWebPageMetadata* _metadata;
	unsigned long long _state;
	unsigned long long _contentSize;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * dataTask;              //@synthesize dataTask=_dataTask - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                 //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) WAWebPageMetadata * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned long long state;                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long contentSize;               //@synthesize contentSize=_contentSize - In the implementation block
-(void)stopDataTask;
-(unsigned long long)contentSize;
-(void)setContentSize:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)appendData:(id)arg1 ;
-(double)startTime;
-(void)setTimeout:(double)arg1 ;
-(WAWebPageMetadata *)metadata;
-(void)setMetadata:(WAWebPageMetadata *)arg1 ;
-(NSMutableData *)receivedData;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(double)timeout;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end
