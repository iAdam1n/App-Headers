/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/GADDeviceSpecifications.h>

@protocol OS_dispatch_queue, NSObject;
@class NSString, NSObject, GADNetwork;

@interface GADDevice : NSObject <GADDeviceSpecifications> {

	NSObject*<OS_dispatch_queue> _lockQueue;
	id<NSObject> _radioAccessTechnologyChangeObserver;
	NSString* _lastKnownRadioAccessTechnology;
	NSString* _radioAccessTechnology;
	NSString* _userAgentString;
	NSString* _cachedAdvertisingID;
	NSString* _cachedMD5AdvertisingID;
	GADNetwork* _network;

}

@property (nonatomic,retain) GADNetwork * network;                                                   //@synthesize network=_network - In the implementation block
@property (copy) NSString * userAgentString; 
@property (copy) NSString * radioAccessTechnology; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isJailbroken,nonatomic,readonly) BOOL jailbroken; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * deviceSubmodel; 
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) unsigned long long audioRoute; 
@property (getter=isOrientationLandscape,nonatomic,readonly) BOOL orientationLandscape; 
@property (nonatomic,readonly) double screenDensity; 
@property (nonatomic,readonly) CGRect portraitScreenBounds; 
@property (nonatomic,readonly) CGRect orientedScreenBounds; 
@property (nonatomic,readonly) CGRect orientedApplicationFrame; 
+(id)currentDevice;
-(BOOL)isOSAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3 ;
-(void)enableRadioAccessTechnologyChecking;
-(id)temporaryPathWithCreation:(BOOL)arg1 ;
-(void)setRadioAccessTechnology:(NSString *)arg1 ;
-(BOOL)userInterfaceIdiomIsPhone;
-(id)baseSDKVersion;
-(unsigned long long)audioRoute;
-(BOOL)isOrientationLandscape;
-(BOOL)isJailbroken;
-(NSString *)deviceSubmodel;
-(id)lastKnownRadioAccessTechnology;
-(double)screenDensity;
-(CGRect)portraitScreenBounds;
-(id)canOpenURLs:(id)arg1 ;
-(id)OSVersionInfoComponents;
-(BOOL)isSimulator;
-(CGRect)orientedScreenBounds;
-(CGRect)orientedApplicationFrame;
-(void)disableRadioAccessTechnologyChecking;
-(BOOL)OSIsSupported;
-(NSString *)radioAccessTechnology;
-(void)dealloc;
-(id)init;
-(NSString *)systemVersion;
-(NSString *)locale;
-(void)setNetwork:(GADNetwork *)arg1 ;
-(GADNetwork *)network;
-(NSString *)deviceIdentifier;
-(NSString *)userAgentString;
-(id)parameters;
-(void)setUserAgentString:(NSString *)arg1 ;
-(NSString *)deviceModel;
@end
