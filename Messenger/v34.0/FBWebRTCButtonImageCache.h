/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBWebRTCButtonImageCache : NSObject {

	double _imageDiameter;
	NSMutableDictionary* _tintedImageCaches;
	NSMutableDictionary* _filledCircleImageCache;
	NSMutableDictionary* _outlineCircleImageCache;

}
-(id)initWithImageDiameter:(double)arg1 ;
-(id)tintedImageNamed:(id)arg1 tintColor:(id)arg2 ;
-(id)filledCircleImageWithColor:(id)arg1 ;
-(id)outlineCircleImageWithColor:(id)arg1 ;
-(id)init;
@end

