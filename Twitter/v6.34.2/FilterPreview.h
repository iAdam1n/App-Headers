/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class FilterRenderer, UIImage, FilterContext;

@interface FilterPreview : NSObject {

	FilterRenderer* _filterRenderer;
	unsigned _texture;
	CGSize _textureSize;
	BOOL _activeAutoLevel;
	BOOL _textureUpdatePending;
	BOOL _autoLevel;
	int _orientation;
	UIImage* _image;
	UIImage* _modifiedImage;
	CGSize _size;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (readonly) UIImage * modifiedImage;              //@synthesize modifiedImage=_modifiedImage - In the implementation block
@property (assign,nonatomic) CGSize size;                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) BOOL autoLevel;               //@synthesize autoLevel=_autoLevel - In the implementation block
@property (assign,nonatomic) int orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (readonly) FilterContext * context; 
+(id)rescaleImage:(id)arg1 imageSize:(CGSize)arg2 ;
+(CGSize)computePreviewSize:(CGSize)arg1 naturalSize:(CGSize)arg2 cropToFill:(BOOL)arg3 ;
-(id)createPreviewViewWithFrame:(CGRect)arg1 ;
-(id)initWithFilterRenderer:(id)arg1 ;
-(BOOL)autoLevel;
-(void)setAutoLevel:(BOOL)arg1 ;
-(CGSize)computePreviewTextureSize:(int)arg1 ;
-(void)_updateTexture:(id)arg1 ;
-(void)renderFilter:(id)arg1 view:(id)arg2 size:(CGSize)arg3 rotation:(float)arg4 shaderParam:(float)arg5 vignetteParam:(float)arg6 ;
-(UIImage *)modifiedImage;
-(void)dealloc;
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(int)orientation;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(FilterContext *)context;
-(void)setOrientation:(int)arg1 ;
-(void)update;
@end
