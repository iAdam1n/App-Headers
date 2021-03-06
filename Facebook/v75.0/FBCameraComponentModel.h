/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMediaCreativeToolsModel, NSString;

@interface FBCameraComponentModel : FBValueObject <FBObjectShallowCopyProtocol, NSCopying> {

	BOOL _captureButtonDisabled;
	BOOL _isFlipFrontCameraOutputEnabled;
	BOOL _creativeToolsEnabled;
	long long _permissionsState;
	long long _cameraMode;
	long long _captureDevicePosition;
	unsigned long long _captureState;
	long long _deviceOrientation;
	long long _flashMode;
	FBMediaCreativeToolsModel* _creativeToolsModel;

}

@property (nonatomic,readonly) long long permissionsState;                                       //@synthesize permissionsState=_permissionsState - In the implementation block
@property (nonatomic,readonly) long long cameraMode;                                             //@synthesize cameraMode=_cameraMode - In the implementation block
@property (nonatomic,readonly) long long captureDevicePosition;                                  //@synthesize captureDevicePosition=_captureDevicePosition - In the implementation block
@property (nonatomic,readonly) unsigned long long captureState;                                  //@synthesize captureState=_captureState - In the implementation block
@property (nonatomic,readonly) long long deviceOrientation;                                      //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long flashMode;                                              //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) BOOL captureButtonDisabled;                                       //@synthesize captureButtonDisabled=_captureButtonDisabled - In the implementation block
@property (nonatomic,readonly) BOOL isFlipFrontCameraOutputEnabled;                              //@synthesize isFlipFrontCameraOutputEnabled=_isFlipFrontCameraOutputEnabled - In the implementation block
@property (nonatomic,readonly) BOOL creativeToolsEnabled;                                        //@synthesize creativeToolsEnabled=_creativeToolsEnabled - In the implementation block
@property (nonatomic,copy,readonly) FBMediaCreativeToolsModel * creativeToolsModel;              //@synthesize creativeToolsModel=_creativeToolsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)captureState;
-(long long)permissionsState;
-(long long)captureDevicePosition;
-(BOOL)captureButtonDisabled;
-(id)initWithPermissionsState:(long long)arg1 cameraMode:(long long)arg2 captureDevicePosition:(long long)arg3 captureState:(unsigned long long)arg4 deviceOrientation:(long long)arg5 flashMode:(long long)arg6 captureButtonDisabled:(BOOL)arg7 isFlipFrontCameraOutputEnabled:(BOOL)arg8 creativeToolsEnabled:(BOOL)arg9 creativeToolsModel:(id)arg10 ;
-(BOOL)isFlipFrontCameraOutputEnabled;
-(BOOL)creativeToolsEnabled;
-(FBMediaCreativeToolsModel *)creativeToolsModel;
-(long long)deviceOrientation;
-(long long)cameraMode;
-(long long)flashMode;
-(id)shallowCopy;
@end

