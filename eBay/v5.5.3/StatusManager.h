/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableArray;

@interface StatusManager : NSObject {

	int scannerStatus;
	int scannerErrorType;
	BOOL logScansToServer;
	BOOL sendLaunchPing;
	BOOL allowSendingLocation;
	NSString* SDKCode;
	NSString* sessionIdString;
	NSDate* expirationDate;
	NSMutableArray* trackingEvents;
	NSMutableArray* trackingEventsBeingSent;
	int numTrackingSendRetries;

}
+(id)sharedInstance;
+(void)load;
-(int)scannerStatus;
-(int)scannerErrorType;
-(void)logScan:(id)arg1 enabledForApp:(BOOL)arg2 ;
-(void)startCollectingLocationData;
-(void)recordUserEvent:(id)arg1 withParams:(id)arg2 ;
-(void)sendUserEvents:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end
