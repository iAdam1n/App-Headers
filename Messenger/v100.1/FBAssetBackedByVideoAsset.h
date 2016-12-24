/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAssetProtocol.h>

@class NSString, NSDate, UIImage, AVURLAsset;

@interface FBAssetBackedByVideoAsset : NSObject <FBAssetProtocol> {

	NSString* _assetID;
	NSDate* _date;
	UIImage* _thumbnail;
	AVURLAsset* _videoAsset;
	CGSize _dimensions;
	long long _orientation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLikely360Photo;
-(unsigned long long)backedStorage;
-(double)duration;
-(long long)orientation;
-(id)date;
-(id)location;
-(id)thumbnail;
-(CGSize)dimensions;
-(id)aspectRatioThumbnail;
-(BOOL)isLivePhoto;
-(id)assetURL;
-(id)initWithVideoAsset:(id)arg1 ;
-(unsigned long long)assetType;
-(id)phAsset;
@end
