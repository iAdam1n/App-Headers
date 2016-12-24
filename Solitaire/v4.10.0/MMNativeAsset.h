/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MMNativeTitle, MMNativeImage, MMNativeVideo, MMNativeData, MMNativeLink, NSString;

@interface MMNativeAsset : NSObject {

	BOOL _required;
	long long _identifier;
	long long _assetType;
	MMNativeTitle* _title;
	MMNativeImage* _img;
	MMNativeVideo* _video;
	MMNativeData* _data;
	MMNativeLink* _link;
	NSString* _ext;

}

@property (assign,nonatomic) long long identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long assetType;                //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) BOOL required;                      //@synthesize required=_required - In the implementation block
@property (nonatomic,retain) MMNativeTitle * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) MMNativeImage * img;                //@synthesize img=_img - In the implementation block
@property (nonatomic,retain) MMNativeVideo * video;              //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) MMNativeData * data;                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) MMNativeLink * link;                //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSString * ext;                     //@synthesize ext=_ext - In the implementation block
-(NSString *)ext;
-(MMNativeImage *)img;
-(void)setImg:(MMNativeImage *)arg1 ;
-(void)setExt:(NSString *)arg1 ;
-(BOOL)required;
-(void)setTitle:(MMNativeTitle *)arg1 ;
-(long long)identifier;
-(MMNativeTitle *)title;
-(MMNativeData *)data;
-(void)setData:(MMNativeData *)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(MMNativeLink *)link;
-(void)setLink:(MMNativeLink *)arg1 ;
-(void)setAssetType:(long long)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(void)setRequired:(BOOL)arg1 ;
-(void)setVideo:(MMNativeVideo *)arg1 ;
-(MMNativeVideo *)video;
-(long long)assetType;
@end
