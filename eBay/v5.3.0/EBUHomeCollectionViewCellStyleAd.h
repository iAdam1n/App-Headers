/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUHomeCollectionViewCellBase.h>

@class EUIImageView, EBUTitleContainerViewBase, RTMContent, UIView;

@interface EBUHomeCollectionViewCellStyleAd : EBUHomeCollectionViewCellBase {

	EUIImageView* _imageViewOne;
	EUIImageView* _imageViewTwo;
	EBUTitleContainerViewBase* _titleContainer;
	RTMContent* _content;
	UIView* _bottomContainerView;

}

@property (assign,nonatomic,__weak) EUIImageView * imageViewOne;                             //@synthesize imageViewOne=_imageViewOne - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * imageViewTwo;                             //@synthesize imageViewTwo=_imageViewTwo - In the implementation block
@property (assign,nonatomic,__weak) EBUTitleContainerViewBase * titleContainer;              //@synthesize titleContainer=_titleContainer - In the implementation block
@property (nonatomic,retain) RTMContent * content;                                           //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomContainerView;                            //@synthesize bottomContainerView=_bottomContainerView - In the implementation block
-(EUIImageView *)imageViewOne;
-(void)setImageViewOne:(EUIImageView *)arg1 ;
-(EUIImageView *)imageViewTwo;
-(void)setImageViewTwo:(EUIImageView *)arg1 ;
-(UIView *)bottomContainerView;
-(void)setBottomContainerView:(UIView *)arg1 ;
-(EBUTitleContainerViewBase *)titleContainer;
-(void)setTitleContainer:(EBUTitleContainerViewBase *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(RTMContent *)content;
-(void)setContent:(RTMContent *)arg1 ;
-(void)handleRotation:(id)arg1 ;
@end

