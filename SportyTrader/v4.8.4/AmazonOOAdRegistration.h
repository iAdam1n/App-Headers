/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AMSISClientDelegate.h>

@protocol AmazonOOAdRegistrationDelegate;
@class NSMutableDictionary, NSString;

@interface AmazonOOAdRegistration : NSObject <AMSISClientDelegate> {

	NSMutableDictionary* deviceDataDictionary;
	id<AmazonOOAdRegistrationDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<AmazonOOAdRegistrationDelegate> delegate; 
@property (nonatomic,retain) NSMutableDictionary * deviceDataDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistration;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setApplicationId:(id)arg1 applicationName:(id)arg2 userSpecifiedMarketplace:(id)arg3 ;
-(void)didGenerateDid;
-(void)didFailToGenerateDidWithError:(id)arg1 ;
-(void)didUpdateDeviceInfo;
-(void)didFailToUpdateDeviceInfoWithError:(id)arg1 ;
-(void)reportError:(id)arg1 withSelector:(SEL)arg2 ;
-(id)interpretError:(id)arg1 ;
-(void)reportSuccessWithSelector:(SEL)arg1 ;
-(void)registerEvent:(id)arg1 dispatchImmediately:(BOOL)arg2 ;
-(id)generateErrorWithCode:(int)arg1 description:(id)arg2 ;
-(void)registerDevice;
-(void)setRegistrationFrequencyTimeInterval:(double)arg1 ;
-(id)adPreferencesURL;
-(id)deviceNativeData;
-(id)deviceData;
-(void)registerEvent:(id)arg1 ;
-(NSMutableDictionary *)deviceDataDictionary;
-(void)setDeviceDataDictionary:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<AmazonOOAdRegistrationDelegate>)arg1 ;
-(void)dealloc;
-(void)initialize;
-(id<AmazonOOAdRegistrationDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnableTLS:(BOOL)arg1 ;
-(id)sdkVersion;
-(void)setLogging:(BOOL)arg1 ;
@end
