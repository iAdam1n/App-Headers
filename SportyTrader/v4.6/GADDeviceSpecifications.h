/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSString;


@protocol GADDeviceSpecifications <NSObject>
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
@required
-(unsigned long long)audioRoute;
-(BOOL)isJailbroken;
-(CGRect)orientedScreenBounds;
-(BOOL)isOrientationLandscape;
-(double)screenDensity;
-(CGRect)portraitScreenBounds;
-(CGRect)orientedApplicationFrame;
-(NSString *)deviceSubmodel;
-(NSString *)systemVersion;
-(NSString *)locale;
-(NSString *)deviceIdentifier;
-(NSString *)deviceModel;

@end

