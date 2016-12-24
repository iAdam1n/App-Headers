/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSError;

@interface FBImageStreamingResponse : NSObject {

	BOOL _lastImageFlag;
	CGImageRef _image;
	unsigned long long _imageFlag;
	unsigned long long _imageSource;
	NSError* _error;

}

@property (nonatomic,readonly) CGImageRef image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;                //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) BOOL lastImageFlag;                          //@synthesize lastImageFlag=_lastImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)newWithError:(id)arg1 ;
+(id)newWithImage:(CGImageRef)arg1 imageFlag:(unsigned long long)arg2 lastImageFlag:(BOOL)arg3 source:(unsigned long long)arg4 ;
+(id)newWithImage:(CGImageRef)arg1 imageFlag:(unsigned long long)arg2 lastImageFlag:(BOOL)arg3 source:(unsigned long long)arg4 error:(id)arg5 ;
-(BOOL)lastImageFlag;
-(unsigned long long)imageFlag;
-(void)dealloc;
-(CGImageRef)image;
-(BOOL)isCached;
-(unsigned long long)imageSource;
-(NSError *)error;
@end
