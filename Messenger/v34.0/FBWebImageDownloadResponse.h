/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIImage, NSURL, NSError;

@interface FBWebImageDownloadResponse : NSObject {

	BOOL _isCached;
	UIImage* _image;
	NSURL* _url;
	unsigned long long _imageFlag;
	id _logicalIdentifier;
	double _progress;
	NSError* _error;

}

@property (nonatomic,copy,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;              //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) id logicalIdentifier;                      //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isLast; 
@property (nonatomic,readonly) double progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCached;                             //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
-(BOOL)isCached;
-(unsigned long long)imageFlag;
-(id)initWithImage:(id)arg1 url:(id)arg2 imageFlag:(unsigned long long)arg3 logicalIdentifier:(id)arg4 progress:(double)arg5 isCached:(BOOL)arg6 error:(id)arg7 ;
-(id)initWithImage:(id)arg1 url:(id)arg2 imageFlag:(unsigned long long)arg3 logicalIdentifier:(id)arg4 isLast:(BOOL)arg5 isCached:(BOOL)arg6 error:(id)arg7 ;
-(BOOL)isLast;
-(id)logicalIdentifier;
-(id)description;
-(NSURL *)url;
-(UIImage *)image;
-(double)progress;
-(NSError *)error;
@end
