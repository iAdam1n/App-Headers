/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:14 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBEventCreateInputDataCoverPhotoInfoOffset, FBEventCreateInputDataCoverPhotoInfoFocus, FBEventCreateInputDataCoverPhotoInfoZoomScale;

@interface FBEventCreateInputDataCoverPhotoInfo : FBGraphQLInput {

	NSString* _photoId;
	NSString* _photoURLString;
	NSString* _themePhotoId;
	FBEventCreateInputDataCoverPhotoInfoOffset* _offset;
	FBEventCreateInputDataCoverPhotoInfoFocus* _focus;
	FBEventCreateInputDataCoverPhotoInfoZoomScale* _zoomScale;

}

@property (nonatomic,copy) NSString * photoId;                                                     //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,copy) NSString * photoURLString;                                              //@synthesize photoURLString=_photoURLString - In the implementation block
@property (nonatomic,copy) NSString * themePhotoId;                                                //@synthesize themePhotoId=_themePhotoId - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfoOffset * offset;                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfoFocus * focus;                      //@synthesize focus=_focus - In the implementation block
@property (nonatomic,copy) FBEventCreateInputDataCoverPhotoInfoZoomScale * zoomScale;              //@synthesize zoomScale=_zoomScale - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)photoURLString;
-(void)setPhotoURLString:(NSString *)arg1 ;
-(NSString *)themePhotoId;
-(void)setThemePhotoId:(NSString *)arg1 ;
-(FBEventCreateInputDataCoverPhotoInfoZoomScale *)zoomScale;
-(void)setZoomScale:(FBEventCreateInputDataCoverPhotoInfoZoomScale *)arg1 ;
-(void)setOffset:(FBEventCreateInputDataCoverPhotoInfoOffset *)arg1 ;
-(FBEventCreateInputDataCoverPhotoInfoOffset *)offset;
-(FBEventCreateInputDataCoverPhotoInfoFocus *)focus;
-(void)setFocus:(FBEventCreateInputDataCoverPhotoInfoFocus *)arg1 ;
-(void)setPhotoId:(NSString *)arg1 ;
-(NSString *)photoId;
@end
