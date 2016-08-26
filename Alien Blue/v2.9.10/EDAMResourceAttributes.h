/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, EDAMLazyMap;

@interface EDAMResourceAttributes : NSObject <NSCoding> {

	NSString* __sourceURL;
	long long __timestamp;
	double __latitude;
	double __longitude;
	double __altitude;
	NSString* __cameraMake;
	NSString* __cameraModel;
	BOOL __clientWillIndex;
	NSString* __recoType;
	NSString* __fileName;
	BOOL __attachment;
	EDAMLazyMap* __applicationData;
	BOOL __sourceURL_isset;
	BOOL __timestamp_isset;
	BOOL __latitude_isset;
	BOOL __longitude_isset;
	BOOL __altitude_isset;
	BOOL __cameraMake_isset;
	BOOL __cameraModel_isset;
	BOOL __clientWillIndex_isset;
	BOOL __recoType_isset;
	BOOL __fileName_isset;
	BOOL __attachment_isset;
	BOOL __applicationData_isset;

}

@property (setter=setSourceURL:,getter=sourceURL,nonatomic,retain) NSString * sourceURL; 
@property (assign,setter=setTimestamp:,getter=timestamp,nonatomic) long long timestamp; 
@property (assign,setter=setLatitude:,getter=latitude,nonatomic) double latitude; 
@property (assign,setter=setLongitude:,getter=longitude,nonatomic) double longitude; 
@property (assign,setter=setAltitude:,getter=altitude,nonatomic) double altitude; 
@property (setter=setCameraMake:,getter=cameraMake,nonatomic,retain) NSString * cameraMake; 
@property (setter=setCameraModel:,getter=cameraModel,nonatomic,retain) NSString * cameraModel; 
@property (assign,setter=setClientWillIndex:,getter=clientWillIndex,nonatomic) BOOL clientWillIndex; 
@property (setter=setRecoType:,getter=recoType,nonatomic,retain) NSString * recoType; 
@property (setter=setFileName:,getter=fileName,nonatomic,retain) NSString * fileName; 
@property (assign,setter=setAttachment:,getter=attachment,nonatomic) BOOL attachment; 
@property (setter=setApplicationData:,getter=applicationData,nonatomic,retain) EDAMLazyMap * applicationData; 
-(void)read:(id)arg1 ;
-(void)setCameraMake:(NSString *)arg1 ;
-(void)setCameraModel:(NSString *)arg1 ;
-(void)setClientWillIndex:(BOOL)arg1 ;
-(void)setRecoType:(NSString *)arg1 ;
-(id)initWithSourceURL:(id)arg1 timestamp:(long long)arg2 latitude:(double)arg3 longitude:(double)arg4 altitude:(double)arg5 cameraMake:(id)arg6 cameraModel:(id)arg7 clientWillIndex:(BOOL)arg8 recoType:(id)arg9 fileName:(id)arg10 attachment:(BOOL)arg11 applicationData:(id)arg12 ;
-(BOOL)sourceURLIsSet;
-(void)unsetSourceURL;
-(BOOL)timestampIsSet;
-(void)unsetTimestamp;
-(BOOL)latitudeIsSet;
-(void)unsetLatitude;
-(BOOL)longitudeIsSet;
-(void)unsetLongitude;
-(BOOL)altitudeIsSet;
-(void)unsetAltitude;
-(BOOL)cameraMakeIsSet;
-(void)unsetCameraMake;
-(NSString *)cameraModel;
-(BOOL)cameraModelIsSet;
-(void)unsetCameraModel;
-(BOOL)clientWillIndex;
-(BOOL)clientWillIndexIsSet;
-(void)unsetClientWillIndex;
-(NSString *)recoType;
-(BOOL)recoTypeIsSet;
-(void)unsetRecoType;
-(BOOL)fileNameIsSet;
-(void)unsetFileName;
-(BOOL)attachmentIsSet;
-(void)unsetAttachment;
-(BOOL)applicationDataIsSet;
-(void)unsetApplicationData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)timestamp;
-(void)setTimestamp:(long long)arg1 ;
-(void)setAttachment:(BOOL)arg1 ;
-(BOOL)attachment;
-(double)altitude;
-(void)setAltitude:(double)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(NSString *)cameraMake;
-(double)latitude;
-(double)longitude;
-(void)setApplicationData:(EDAMLazyMap *)arg1 ;
-(EDAMLazyMap *)applicationData;
-(void)write:(id)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end
