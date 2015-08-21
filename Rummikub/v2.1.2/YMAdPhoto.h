/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSURL, NSData;

@interface YMAdPhoto : NSObject {

	NSString* _photoPath;
	NSURL* _photoURL;
	NSData* _photoImageData;
	char _workingInBackground;
	/*^block*/id _obtain_image_data_completion_block;

}
+(id)photoWithImageData:(id)arg1 ;
+(id)photoWithURL:(id)arg1 ;
+(id)photoWithFilePath:(id)arg1 ;
-(id)initWithImageData:(id)arg1 ;
-(id)obtainImageData;
-(void)doFinishObtainImageDataNotifyWork:(id)arg1 ;
-(void)doObtainImageDataInBackgroundWork:(id)arg1 ;
-(char)isImageDataAvailable;
-(void)releasePhoto;
-(void)obtainImageDataInBackground:(/*^block*/id)arg1 ;
-(void)obtainImageDataInBackgroundAndNotify:(id)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)imageData;
-(id)initWithFilePath:(id)arg1 ;
@end

