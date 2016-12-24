/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ECBCricketApp/ECBCricketApp-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, UIButton, UIImageView, UILabel, UIImage, NSString;

@interface ECBGalleryViewController : UIViewController <UIScrollViewDelegate> {

	UIScrollView* _galleryScrollView;
	UIButton* _doneButton;
	UIImageView* _galleryImageView;
	UILabel* _captionLabel;

}

@property (nonatomic,readonly) UIScrollView * galleryScrollView;              //@synthesize galleryScrollView=_galleryScrollView - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                         //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIImageView * galleryImageView;                //@synthesize galleryImageView=_galleryImageView - In the implementation block
@property (nonatomic,readonly) UILabel * captionLabel;                        //@synthesize captionLabel=_captionLabel - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSString * caption; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScrollView *)galleryScrollView;
-(UIImageView *)galleryImageView;
-(id)initWitImage:(id)arg1 caption:(id)arg2 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(UIImage *)image;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UIButton *)doneButton;
-(void)handleTap:(id)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(UILabel *)captionLabel;
@end
