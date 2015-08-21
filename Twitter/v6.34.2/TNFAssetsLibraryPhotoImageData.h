/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNPhotoImageData.h>

@class NSData, ALAssetRepresentation, NSString;

@interface TNFAssetsLibraryPhotoImageData : NSObject <TFNPhotoImageData> {

	ALAssetRepresentation* _representation;
	NSData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long length; 
@property (nonatomic,readonly) NSData * data; 
-(unsigned long long)readBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithAssetRepresentation:(id)arg1 ;
-(id)init;
-(unsigned long long)length;
-(NSData *)data;
@end

