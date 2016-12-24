/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Skype/Skype-Structs.h>
@class CTTelephonyNetworkInfo, NSObject;

@interface IosMobileIfaceReceiver : NSObject {

	BOOL radioInfoSupported;
	BOOL listening;
	BOOL inRadioInfoCallback;
	BOOL inReachabilityCallback;
	int writeFd;
	int lastConnectivityType;
	CTTelephonyNetworkInfo* telephonyInfo;
	SCNetworkReachabilityRef reachabilityRef;
	NSObject*<OS_dispatch_queue> reachabilitySerialQueue;

}

@property (assign,nonatomic) CTTelephonyNetworkInfo * telephonyInfo; 
@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef; 
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> reachabilitySerialQueue; 
@property (assign,nonatomic) int writeFd; 
@property (assign,nonatomic) BOOL radioInfoSupported; 
@property (assign) BOOL listening; 
@property (assign) BOOL inRadioInfoCallback; 
@property (assign) BOOL inReachabilityCallback; 
@property (assign,nonatomic) int lastConnectivityType; 
-(void)setInRadioInfoCallback:(BOOL)arg1 ;
-(void)setInReachabilityCallback:(BOOL)arg1 ;
-(void)setWriteFd:(int)arg1 ;
-(void)setRadioInfoSupported:(BOOL)arg1 ;
-(void)setLastConnectivityType:(int)arg1 ;
-(void)setReachabilitySerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)reachabilitySerialQueue;
-(void)setTelephonyInfo:(CTTelephonyNetworkInfo *)arg1 ;
-(CTTelephonyNetworkInfo *)telephonyInfo;
-(void)radioInfoCallback:(id)arg1 ;
-(BOOL)inRadioInfoCallback;
-(BOOL)inReachabilityCallback;
-(BOOL)radioInfoSupported;
-(int)writeFd;
-(int)lastConnectivityType;
-(id)initWithFd:(int)arg1 ;
-(void)reachabilityCallback:(unsigned)arg1 ;
-(void)dealloc;
-(void)cleanup;
-(BOOL)listening;
-(void)setListening:(BOOL)arg1 ;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(SCNetworkReachabilityRef)reachabilityRef;
@end
