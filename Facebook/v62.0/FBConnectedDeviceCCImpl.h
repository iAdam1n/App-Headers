/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBConnectedDevice.h>

@class NSString, GCKDevice;

@interface FBConnectedDeviceCCImpl : NSObject <FBConnectedDevice> {

	BOOL _isFBExperienceAlreadyRunning;
	NSString* _shortName;
	NSString* _uniqueID;
	GCKDevice* _ccDevice;

}

@property (nonatomic,copy) NSString * shortName;                             //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,nonatomic) BOOL isFBExperienceAlreadyRunning;              //@synthesize isFBExperienceAlreadyRunning=_isFBExperienceAlreadyRunning - In the implementation block
@property (nonatomic,retain) GCKDevice * ccDevice;                           //@synthesize ccDevice=_ccDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFBExperienceAlreadyRunning;
-(void)setIsFBExperienceAlreadyRunning:(BOOL)arg1 ;
-(GCKDevice *)ccDevice;
-(void)setCcDevice:(GCKDevice *)arg1 ;
-(NSString *)shortName;
-(void)setShortName:(NSString *)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
@end
