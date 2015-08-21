/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTapButton.h>

@protocol IGQuickCamInputLibraryAsset;
@class PHImageRequestOptions, UIImageView;

@interface IGQuickCamLibraryButton : IGTapButton {

	int _requestID;
	id<IGQuickCamInputLibraryAsset> _asset;
	PHImageRequestOptions* _imageRequestOptions;
	UIImageView* _thumbnailView;

}

@property (nonatomic,retain) id<IGQuickCamInputLibraryAsset> asset;                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;              //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                              //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) int requestID;                                            //@synthesize requestID=_requestID - In the implementation block
-(void)cancelImageRequest;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(int)requestID;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(id<IGQuickCamInputLibraryAsset>)asset;
-(void)setAsset:(id<IGQuickCamInputLibraryAsset>)arg1 ;
-(void)setRequestID:(int)arg1 ;
@end

