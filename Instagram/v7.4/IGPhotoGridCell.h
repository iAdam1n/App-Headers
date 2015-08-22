/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:14 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSimpleTableViewCell.h>
#import <Instagram/IGImageViewDelegate.h>

@class NSMutableArray, NSString;

@interface IGPhotoGridCell : IGSimpleTableViewCell <IGImageViewDelegate> {

	BOOL _showsCheckmarks;
	long long _layout;
	long long _topPadding;
	long long _photosCount;
	NSMutableArray* _imageViews;
	NSMutableArray* _imageButtons;
	NSMutableArray* _checkmarks;

}

@property (nonatomic,readonly) NSMutableArray * imageViews;                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,readonly) NSMutableArray * imageButtons;              //@synthesize imageButtons=_imageButtons - In the implementation block
@property (nonatomic,readonly) NSMutableArray * checkmarks;                //@synthesize checkmarks=_checkmarks - In the implementation block
@property (assign,nonatomic) long long photosCount;                        //@synthesize photosCount=_photosCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)photosPerRowForLayout:(long long)arg1 ;
+(double)photoMarginForLayout:(long long)arg1 ;
+(double)photoSizeForLayout:(long long)arg1 ;
+(double)photoPaddingForLayout:(long long)arg1 ;
+(double)photoInsetForLayout:(long long)arg1 ;
+(CGSize)sizeForLayout:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 layout:(long long)arg2 checkmarks:(BOOL)arg3 topPadding:(long long)arg4 photosCount:(long long)arg5 ;
-(void)arrangeViewFor3UpExplore;
-(void)arrangeViews;
-(NSMutableArray *)imageButtons;
-(NSMutableArray *)checkmarks;
-(id)initWithReuseIdentifier:(id)arg1 layout:(long long)arg2 checkmarks:(BOOL)arg3 ;
-(void)setImageTarget:(id)arg1 action:(SEL)arg2 ;
-(void)hideImage:(BOOL)arg1 atIndex:(long long)arg2 ;
-(void)prepareForReuse;
-(void)setPhotosCount:(long long)arg1 ;
-(long long)photosCount;
-(NSMutableArray *)imageViews;
@end
