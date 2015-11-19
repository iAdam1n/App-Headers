/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSString;

@interface OptimizelyDevice : NSObject {

	BOOL _isPhone;
	BOOL _isPad;
	BOOL _isRetina;
	BOOL _isWidescreen;
	NSString* _devicePlatformModel;
	NSString* _devicePlatformType;
	NSString* _vendorIdentifier;
	long long _currentOrientation;

}

@property (readonly) NSString * devicePlatformModel;                    //@synthesize devicePlatformModel=_devicePlatformModel - In the implementation block
@property (readonly) NSString * devicePlatformType;                     //@synthesize devicePlatformType=_devicePlatformType - In the implementation block
@property (readonly) BOOL isPhone;                                      //@synthesize isPhone=_isPhone - In the implementation block
@property (readonly) BOOL isPad;                                        //@synthesize isPad=_isPad - In the implementation block
@property (readonly) BOOL isRetina;                                     //@synthesize isRetina=_isRetina - In the implementation block
@property (readonly) BOOL isWidescreen;                                 //@synthesize isWidescreen=_isWidescreen - In the implementation block
@property (readonly) NSString * vendorIdentifier;                       //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,nonatomic) long long currentOrientation;              //@synthesize currentOrientation=_currentOrientation - In the implementation block
-(NSString *)devicePlatformModel;
-(NSString *)devicePlatformType;
-(void)sendToEditor;
-(BOOL)isRetina;
-(BOOL)isWidescreen;
-(void)unregisterFromEditor;
-(void)deviceDidRotate:(id)arg1 ;
-(void)interfaceDidRotate:(id)arg1 ;
-(void)setCurrentOrientation:(long long)arg1 ;
-(id)deviceJSON;
-(CGSize)getOriginalScreenSize;
-(long long)currentOrientation;
-(id)init;
-(void)start;
-(BOOL)isPhone;
-(BOOL)isPad;
-(NSString *)vendorIdentifier;
@end

