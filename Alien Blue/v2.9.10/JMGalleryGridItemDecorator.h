/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/JMImageDecorator.h>

@class NSString;

@interface JMGalleryGridItemDecorator : JMImageDecorator {

	int _mediaType;
	NSString* _title;
	CGSize _containerSize;

}

@property (copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (assign) int mediaType;                     //@synthesize mediaType=_mediaType - In the implementation block
@property (assign) CGSize containerSize;              //@synthesize containerSize=_containerSize - In the implementation block
-(id)decoratorKey;
-(id)decoratedImageWithImage:(id)arg1 ;
-(id)initWithGalleryItem:(id)arg1 containerSize:(CGSize)arg2 ;
-(CGSize)containerSize;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setContainerSize:(CGSize)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
@end
