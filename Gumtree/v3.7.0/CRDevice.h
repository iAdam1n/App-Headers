/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CRDevice : NSObject {

	NSMutableDictionary* _deviceInfo;

}

@property (nonatomic,copy) NSMutableDictionary * deviceInfo;              //@synthesize deviceInfo=_deviceInfo - In the implementation block
+(id)deviceFromCurrentDevice;
+(id)deviceFromPersistentState:(id)arg1 ;
+(id)deviceWithDummyInfo;
-(id)freeDiskSpace;
-(id)carrier;
-(id)initFromDeviceInfoDictionary:(id)arg1 ;
-(id)initFromCurrentDevice;
-(id)initFromPersistentState:(id)arg1 ;
-(void)flushToPersistentState:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)systemVersion;
-(id)model;
-(id)systemName;
-(id)batteryLevel;
-(id)locale;
-(id)asDictionary;
-(void)setDeviceInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)deviceInfo;
-(id)memoryUsage;
-(id)platform;
-(void)updateOrientation;
-(id)mobileCountryCode;
-(id)mobileNetworkCode;
@end

