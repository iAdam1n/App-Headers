/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, UIImage, NSString;

@interface FBNA360PhotoModel : NSObject {

	NSURL* _url;
	double _initialHeading;
	double _initialPitch;
	double _initialFovy;
	UIImage* _previewImage;
	NSString* _photoId;

}

@property (nonatomic,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) double initialHeading;                //@synthesize initialHeading=_initialHeading - In the implementation block
@property (nonatomic,readonly) double initialPitch;                  //@synthesize initialPitch=_initialPitch - In the implementation block
@property (nonatomic,readonly) double initialFovy;                   //@synthesize initialFovy=_initialFovy - In the implementation block
@property (nonatomic,readonly) UIImage * previewImage;               //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoId;              //@synthesize photoId=_photoId - In the implementation block
+(id)photoModelWithMemPhoto:(id)arg1 ;
-(double)initialPitch;
-(double)initialHeading;
-(id)initWithURL:(id)arg1 initialHeading:(double)arg2 initialPitch:(double)arg3 initialFovy:(double)arg4 previewImage:(id)arg5 photoId:(id)arg6 ;
-(double)initialFovy;
-(NSURL *)url;
-(NSString *)photoId;
-(UIImage *)previewImage;
@end
