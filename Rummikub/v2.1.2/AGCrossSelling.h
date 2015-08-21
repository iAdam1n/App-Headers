/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSURLConnection, NSMutableData, NSArray;

@interface AGCrossSelling : NSObject {

	int _debug;
	NSString* _appId;
	NSString* _developerId;
	NSString* _serviceURL;
	NSString* _notificationToken;
	NSURLConnection* _notificationConnection;
	NSMutableData* _notificationData;
	NSURLConnection* _misConnection;
	NSMutableData* _misData;
	NSString* _messageId;
	NSArray* _messageOtherButtonsActions;
	NSString* _messageSelectedAction;
	NSURLConnection* _trackerConnection;
	NSMutableData* _trackerData;
	char _useOpenUDID;
	int _notificationType;
	char _withNotificationRegister;

}

@property (nonatomic,copy) NSString * appId;                             //@synthesize appId=_appId - In the implementation block
@property (nonatomic,copy) NSString * developerId;                       //@synthesize developerId=_developerId - In the implementation block
@property (assign,nonatomic) char useOpenUDID;                           //@synthesize useOpenUDID=_useOpenUDID - In the implementation block
@property (assign,nonatomic) int notificationType;                       //@synthesize notificationType=_notificationType - In the implementation block
@property (assign,nonatomic) char withNotificationRegister;              //@synthesize withNotificationRegister=_withNotificationRegister - In the implementation block
+(void)registerNotificationToken:(id)arg1 ;
+(id)requestWithAppId:(id)arg1 developerId:(id)arg2 withNotificationRegister:(char)arg3 withNewstand:(char)arg4 useOpenUDID:(char)arg5 debug:(int)arg6 ;
+(id)requestWithAppId:(id)arg1 developerId:(id)arg2 withNotificationRegister:(char)arg3 remoteNotificationTypes:(int)arg4 useOpenUDID:(char)arg5 debug:(int)arg6 ;
+(id)persistent;
+(id)requestWithAppId:(id)arg1 developerId:(id)arg2 withNotificationRegister:(char)arg3 withNewstand:(char)arg4 ;
-(void)registerNotificationToken:(id)arg1 ;
-(id)md5StringWithString:(id)arg1 ;
-(id)macaddress;
-(id)base64EncodedStringWithString:(id)arg1 ;
-(void)setUseOpenUDID:(char)arg1 ;
-(void)setDeveloperId:(NSString *)arg1 ;
-(void)setWithNotificationRegister:(char)arg1 ;
-(void)requestMIS;
-(id)base64EncodeWithBuffer:(const void*)arg1 length:(unsigned long)arg2 separateLines:(char)arg3 ;
-(id)uniqueInstallationIdentifier;
-(id)uniqueAppPerDeviceIdentifier;
-(id)uniqueGlobalDeviceIdentifier;
-(id)URLMandatoryParameters;
-(id)URLPostDataWithParameters:(id)arg1 ;
-(id)cleanTokenString:(id)arg1 ;
-(id)agcsPlatform;
-(void)sendActionTrackerInformationWithButton:(id)arg1 action:(id)arg2 ;
-(id)jsonDecode:(id)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg1 ;
-(NSString *)developerId;
-(char)useOpenUDID;
-(char)withNotificationRegister;
-(void)applicationWillEnterForegroundNotification;
-(void)setDebug:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setNotificationType:(int)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(id)uniqueDeviceIdentifier;
-(int)notificationType;
@end

