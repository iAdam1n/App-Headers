/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableURLRequest, NSMutableData, CSCore, CSMeasurement;

@interface CSRequest : NSObject {

	NSMutableURLRequest* _request;
	NSMutableData* _receivedData;
	CSCore* _core;
	CSMeasurement* measurement;

}

@property (nonatomic,retain) CSMeasurement * measurement; 
-(void)updateLastMeasurementProcessedTimestamp;
-(BOOL)availableConnection;
-(BOOL)isLiveTransmissionEnabled;
-(id)initWithCore:(id)arg1 andMeasurement:(id)arg2 ;
-(id)systemProperty:(id)arg1 ;
-(CSMeasurement *)measurement;
-(void)setMeasurement:(CSMeasurement *)arg1 ;
-(void)dealloc;
-(BOOL)send;
-(id)process:(id)arg1 ;
-(id)process;
-(BOOL)isEmpty:(id)arg1 ;
@end

