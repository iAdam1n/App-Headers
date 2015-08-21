/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBCropBottomBar, FBCropContainerView, FBMediaTopNavigationBar, FBCropOptionsBarView;

@interface FBCropView : UIView {

	FBCropBottomBar* _cropBottomBar;
	FBCropContainerView* _cropContainerView;
	BOOL _cropOptionsBarViewHidden;
	FBMediaTopNavigationBar* _cropTopBar;
	FBCropOptionsBarView* _cropOptionsBarView;
	double _topLayoutGuideLength;
	long long _interfaceOrientation;

}

@property (nonatomic,retain) FBCropContainerView * cropContainerView;                //@synthesize cropContainerView=_cropContainerView - In the implementation block
@property (nonatomic,retain) FBCropBottomBar * cropBottomBar;                        //@synthesize cropBottomBar=_cropBottomBar - In the implementation block
@property (nonatomic,retain) FBMediaTopNavigationBar * cropTopBar;                   //@synthesize cropTopBar=_cropTopBar - In the implementation block
@property (nonatomic,retain) FBCropOptionsBarView * cropOptionsBarView;              //@synthesize cropOptionsBarView=_cropOptionsBarView - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                            //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                         //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL cropOptionsBarViewHidden;                          //@synthesize cropOptionsBarViewHidden=_cropOptionsBarViewHidden - In the implementation block
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(FBMediaTopNavigationBar *)cropTopBar;
-(CGRect)_cropContainerFrameForBounds:(CGRect)arg1 topBarHeight:(double)arg2 bottomBarHeight:(double)arg3 ;
-(CGRect)_cropOptionsBarViewFrame;
-(CGRect)_cropTopBarFrameForBounds:(CGRect)arg1 ;
-(CGRect)_cropBottomBarFrameForBounds:(CGRect)arg1 ;
-(void)setCropContainerView:(FBCropContainerView *)arg1 ;
-(void)setCropBottomBar:(FBCropBottomBar *)arg1 ;
-(void)setCropTopBar:(FBMediaTopNavigationBar *)arg1 ;
-(void)setCropOptionsBarView:(FBCropOptionsBarView *)arg1 ;
-(BOOL)cropOptionsBarViewHidden;
-(void)setCropOptionsBarViewHidden:(BOOL)arg1 ;
-(FBCropBottomBar *)cropBottomBar;
-(FBCropOptionsBarView *)cropOptionsBarView;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 photoCropInfo:(id)arg3 interfaceOrientation:(long long)arg4 userManipulableCropbox:(BOOL)arg5 shouldDrawInnerGrid:(BOOL)arg6 showTopBar:(BOOL)arg7 mediaPickerStyle:(unsigned long long)arg8 ;
-(FBCropContainerView *)cropContainerView;
-(void)setCropOptionsBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
@end

