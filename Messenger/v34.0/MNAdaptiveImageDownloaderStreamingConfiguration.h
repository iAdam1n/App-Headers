/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSURL;

@interface MNAdaptiveImageDownloaderStreamingConfiguration : FBValueObject <NSCopying> {

	NSURL* _url;
	unsigned long long _imageFlags;

}

@property (nonatomic,copy,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlags;              //@synthesize imageFlags=_imageFlags - In the implementation block
-(unsigned long long)imageFlags;
-(id)initWithUrl:(id)arg1 imageFlags:(unsigned long long)arg2 ;
-(NSURL *)url;
@end
