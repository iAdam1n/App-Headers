/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableDictionary, NSDictionary;

@interface MtsRequestGen : NSObject {

	BOOL bGetRoverLogIds;
	NSString* appVersion;
	NSString* clientAppId;
	NSString* userName;
	NSString* idfa;
	NSDate* lastTime;
	NSString* trackingAppId;
	NSString* appId;
	NSString* deviceId;
	NSString* ebaySiteName;
	NSString* TheIafToken;
	NSMutableDictionary* sessionData;
	NSDictionary* extraSessionData;
	NSString* m_libraryVersion;

}

@property (nonatomic,retain) NSMutableDictionary * sessionData; 
@property (nonatomic,retain) NSString * appVersion; 
@property (nonatomic,retain) NSString * clientAppId; 
@property (nonatomic,retain) NSString * userName; 
@property (nonatomic,retain) NSString * idfa; 
@property (nonatomic,retain) NSDate * lastTime; 
@property (nonatomic,retain) NSString * trackingAppId; 
@property (nonatomic,retain) NSString * appId; 
@property (nonatomic,retain) NSString * deviceId; 
@property (nonatomic,retain) NSString * ebaySiteName; 
@property (nonatomic,retain) NSString * TheIafToken; 
@property (assign,nonatomic) BOOL bGetRoverLogIds; 
@property (nonatomic,retain) NSDictionary * extraSessionData; 
@property (nonatomic,retain) NSString * m_libraryVersion; 
-(void)setLastTime:(NSDate *)arg1 ;
-(NSDate *)lastTime;
-(NSString *)idfa;
-(void)setupHeaders:(id)arg1 operationName:(id)arg2 ;
-(void)setClientAppId:(NSString *)arg1 ;
-(void)setTrackingAppId:(NSString *)arg1 ;
-(void)setEbaySiteName:(NSString *)arg1 ;
-(void)setBGetRoverLogIds:(BOOL)arg1 ;
-(void)setIdfa:(NSString *)arg1 ;
-(void)updateExtraSessionData:(id)arg1 ;
-(void)mergeExtraSessionData:(id)arg1 ;
-(NSString *)ebaySiteName;
-(id)getPayloadData:(id)arg1 params:(id)arg2 ;
-(BOOL)bGetRoverLogIds;
-(NSString *)clientAppId;
-(NSString *)trackingAppId;
-(NSString *)TheIafToken;
-(id)createTrackingParameterKeyValue:(id)arg1 value:(id)arg2 ;
-(id)createUserSessionData;
-(id)createTrackEventParameter:(id)arg1 value:(id)arg2 ;
-(id)createBitPositionsString:(id)arg1 ;
-(id)createFlagNamesString:(id)arg1 ;
-(id)createTrackingEventParameters:(id)arg1 ;
-(id)createFlagsSection:(id)arg1 flags:(id)arg2 numericFlags:(id)arg3 ;
-(void)getSessionDataDynamic;
-(id)createSessionSection;
-(id)createTrackingEventSection:(id)arg1 parameters:(id)arg2 flagSetName:(id)arg3 flags:(id)arg4 numericFlags:(id)arg5 ;
-(id)getPayloadDataFromArray:(id)arg1 ;
-(id)createSessionData;
-(void)getSessionDataStatic;
-(id)createRoiTrackingRequestPayload:(id)arg1 sellerName:(id)arg2 itemId:(id)arg3 uniqueTransactionId:(id)arg4 quantity:(id)arg5 currencyId:(id)arg6 amount:(id)arg7 primaryCategoryId:(id)arg8 secondaryCategoryId:(id)arg9 client:(id)arg10 vendorName:(id)arg11 cookie:(id)arg12 ;
-(void)ulv:(id)arg1 ;
-(void)updateLibraryVersion:(id)arg1 ;
-(id)createTrackingRequest:(id)arg1 operationName:(id)arg2 trackingEvents:(id)arg3 ;
-(id)createRoiTrackingRequest:(id)arg1 transactionType:(id)arg2 sellerName:(id)arg3 itemId:(id)arg4 uniqueTransactionId:(id)arg5 quantity:(id)arg6 currencyId:(id)arg7 amount:(id)arg8 primaryCategoryId:(id)arg9 secondaryCategoryId:(id)arg10 client:(id)arg11 vendorName:(id)arg12 cookie:(id)arg13 ;
-(void)setTheIafToken:(NSString *)arg1 ;
-(NSDictionary *)extraSessionData;
-(void)setExtraSessionData:(NSDictionary *)arg1 ;
-(NSString *)m_libraryVersion;
-(void)setM_libraryVersion:(NSString *)arg1 ;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(id)init;
-(NSMutableDictionary *)sessionData;
-(void)setSessionData:(NSMutableDictionary *)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)deviceId;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
@end

